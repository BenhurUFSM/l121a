// Exemplo de implementação do jogo da velha, t2 de l12021a

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// funcao pedida: recebe uma matriz 3x3 com o jogo, retorna 'X', 'O' ou 'E'
// se o jogo terminou com vitória de X ou O ou se terminou com empate, ou
// retorna ' ' se jogo ainda pode continuar

// funcoes auxiliares para implementar a funcao pedida
char ganhador_na_linha(char tab[3][3], int lin)
{
    if (tab[lin][0] == tab[lin][1] && tab[lin][0] == tab[lin][2]) {
        return tab[lin][0];
    }
    return ' ';
}

char ganhador_na_coluna(char tab[3][3], int col)
{
    if (tab[0][col] == tab[1][col] && tab[0][col] == tab[2][col]) {
        return tab[0][col];
    }
    return ' ';
}

char ganhador_na_diagonal(char tab[3][3])
{
    if (tab[0][0] == tab[1][1] && tab[0][0] == tab[2][2]) {
        return tab[0][0];
    }
    return ' ';
}

char ganhador_na_lanogaid(char tab[3][3])
{
    if (tab[0][2] == tab[1][1] && tab[0][2] == tab[2][0]) {
        return tab[0][2];
    }
    return ' ';
}

bool tem_espaco(char tab[3][3])
{
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (tab[i][j] == ' ') {
                return true;
            }
        }
    }
    return false;
}

char estado_do_jogo(char tab[3][3])
{
    char ganhador;
    for (int i=0; i<3; i++) {
        ganhador = ganhador_na_linha(tab, i);
        if (ganhador != ' ') return ganhador;
        ganhador = ganhador_na_coluna(tab, i);
        if (ganhador != ' ') return ganhador;
    }
    ganhador = ganhador_na_diagonal(tab);
    if (ganhador != ' ') return ganhador;
    ganhador = ganhador_na_lanogaid(tab);
    if (ganhador != ' ') return ganhador;
    if (tem_espaco(tab)) {
        return ' ';
    }
    return 'E';
}


// outra função pedida: desenho do tabuleiro

// tem que usar cores, com as funcoes dadas abaixo
// os próximos caracteres serão escritos na cor normal
void cor_normal(void)
{
    printf("%c[0m", 27);
}

// os próximos caracteres serão escritos na cor rl, gl, bl com fundo rf, gf, bf
void muda_cor(int rl, int gl, int bl, int rf, int gf, int bf)
{
    printf("%c[38;2;%d;%d;%d;48;2;%d;%d;%dm", 27, rl, gl, bl, rf, gf, bf);
}

// funcao auxiliar
void sel_cor(char peca)
{
#define COR_X 0,0,0, 250,50,50
#define COR_O 0,0,0, 50,50,250
#define COR_E 250,250,250, 30,30,30
    switch (peca) {
        case 'X':
            muda_cor(COR_X);
            break;
        case 'O':
            muda_cor(COR_O);
            break;
        case ' ':
            muda_cor(COR_E);
            break;
        default:
            printf("\n\nERRO INTERNO\n\n");
            exit(28);
    }
}

void escreve_jogador(char *texto, char jogador)
{
    printf("%s ", texto);
    sel_cor(jogador);
    printf("%c", jogador);
    cor_normal();
    printf("\n");
}

void desenha_jogo(char tab[3][3])
{
    printf("\n   1  2  3\n");
    for (int i=0; i<3; i++) {
        printf("%d ", i+1);
        for (int j=0; j<3; j++) {
            sel_cor(tab[i][j]);
            printf(" %c ", tab[i][j]);
        }
        cor_normal();
        printf(" %d\n", i+1);
    }
    printf("   1  2  3\n");
}

// versao um pouco mais elaborada do tabuleiro
void desenha_jogo_2(char tab[3][3])
{
    printf("\n    1    2    3\n");
    for (int i=0; i<3; i++) {
        for (int l=0; l<3; l++) {
            if (l == 1) printf("%d ", i+1);
            else printf("  ");
            for (int j=0; j<3; j++) {
                sel_cor(tab[i][j]);
                if (l == 1) {
                    printf("  %c  ", tab[i][j]);
                } else {
                    printf("     ");
                }
            }
            cor_normal();
            if (l == 1) printf(" %d", i+1);
            printf("\n");
        }
    }
    printf("    1    2    3\n");
}


// funcoes auxiliares

void inicializa_tabuleiro(char tab[3][3])
{
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            tab[i][j] = ' ';
        }
    }
}

char outro_jogador(char jogador)
{
    if (jogador == 'O') return 'X';
    else return 'O';
}

char escolhe_jogador(char ultimo_iniciante, char ultimo_ganhador)
{
    if (ultimo_ganhador != ' ') return ultimo_ganhador;
    if (ultimo_iniciante == ' ') {
        if ((rand() % 2) == 0) return 'X';
        else return 'O';
    } else {
        return outro_jogador(ultimo_iniciante);
    }
}

bool quer_outra_partida(void)
{
    printf("Quer jogar outra (S/N)? ");
    char resp;
    scanf(" %c", &resp);
    return resp == 's' || resp == 'S';
}

void le_jogada(char tab[3][3], int *lin, int *col)
{
    int l, c;
    while (true) {
        printf("digite linha e coluna da jogada ");
        scanf("%d%d", &l, &c);
        if (l >= 1 && c >= 1 && l <=3 && c <= 3) {
            if (tab[l-1][c-1] == ' ') {
                break;
            }
        }
        printf("jogada inválida\n");
    }
    *lin = l-1;
    *col = c-1;
}

void anuncia_vencedor(char vencedor)
{
    if (vencedor == 'E') {
        printf("Empate\n");
    } else {
        escreve_jogador("Vencedor", vencedor);
    }
}

char velha(char jogador)
{
    char tab[3][3];
    char estado;

    inicializa_tabuleiro(tab);
    sel_cor(' '); printf("               "); cor_normal(); printf("\n");
    sel_cor(' '); printf(" JOGO DA VELHA "); cor_normal(); printf("\n");
    sel_cor(' '); printf("               "); cor_normal(); printf("\n");
    printf("\nNova partida\n");
    escreve_jogador("Inicia", jogador); 

    do {
        desenha_jogo_2(tab);
        escreve_jogador("Joga", jogador);
        int lin, col;
        le_jogada(tab, &lin, &col);
        tab[lin][col] = jogador;
        jogador = outro_jogador(jogador);
        estado = estado_do_jogo(tab);
    } while (estado == ' ');
    printf("Fim da partida\n");
    desenha_jogo(tab);
    anuncia_vencedor(estado);

    return estado;
}

int main()
{
    int vitorias_x = 0, vitorias_o = 0, empates = 0;
    char ultimo_iniciante = ' ';
    char ultimo_vencedor = ' ';
    char jogador;

    do {
        jogador = escolhe_jogador(ultimo_iniciante, ultimo_vencedor);
        ultimo_iniciante = jogador;
        ultimo_vencedor = velha(jogador);
        if (ultimo_vencedor == 'O') vitorias_o++;
        else if (ultimo_vencedor == 'X') vitorias_x++;
        else empates++;
        printf("\nPlacar: X%d E%d O%d\n", vitorias_x, empates, vitorias_o);
    } while (quer_outra_partida());

    printf("\nPlacar final: X%d E%d O%d\n", vitorias_x, empates, vitorias_o);
    return 0;
}
