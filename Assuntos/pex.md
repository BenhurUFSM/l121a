## Prova final -- L121a -- 9set2021

Você deve desenvolver um programa na linguagem C, capaz de ler um arquivo de entrada e produzir um arquivo de saída, de acordo com o especificado abaixo.
O arquivo contendo o programa deve ser enviado por e-mail para `benhur+l121a@inf.ufsm.br` antes das 16h30min.
O arquivo deve ter um comentário no início, identificando o autor.
Você deve permanecer conectado no discord, no canal individual, durante o tempo da prova.
Pode usar o canal geral de texto para chamar a atenção do professor.

Será avaliada, além da correção da solução, a organização do código.

A avaliação pode ser complementada por uma prova oral individual, em horário a combinar.

### Jogo da forca

O seu programa deve julgar partidas do jogo da forca.
Para cada partida, é fornecida a palavra secreta e as letras que foram usadas na tentativa de descobrir a palavra. Baseado nessa entrada, o programa deve fornecer o resultado da partida, que pode ser a vitória do jogador, sua derrota ou sua desistência (caso não tenham tentativas suficientes para decidir a vitória nem a derrota).
As regras do jogo são:

- O jogo começa com o desenho de uma forca e um traço correspondente a cada letra da palavra secreta.
- O jogador tenta descobrir a palavra secreta, propondo uma letra por vez;
- Se a letra proposta pertence à palavra secreta, as ocorrências dessa letra são reveladas e escritas nos traços correspondentes; por exemplo, se a palavra secreta for `CASA` e a primeira letra proposta for `A`, os dois traços correspondentes são preenchidos com essa letra, resultando `_A_A`.
- Se a letra proposta não pertence à palavra secreta, uma parte do enforcado é desenhada. O diagrama abaixo mostra a sequência do desenho, com 0 a 7 letras erradas.
   ```
    _____     _____     _____     _____     _____     _____     _____     _____    
    |   |     |   |     |   |     |   |     |   |     |   |     |   |     |   |    
    |         |   O     |   O     |   O     |   O     |   O     |   O     |   O    
    |         |         |   |     |  /|     |  /|\    |  /|\    |  /|\    |  /|\   
    |         |         |         |         |         |   |     |   |     |   |    
    |         |         |         |         |         |         |  /      |  / \   
    |         |         |         |         |         |         |         |        
   ---       ---       ---       ---       ---       ---       ---       ---       
   ```
- Se o desenho do enforcado terminar antes que todas as letras da palavra secreta tenham sido reveladas, o jogador perde (o sétimo erro é fatal).
- Se todas as letras da palavra secreta forem reveladas antes do desenho ser concluído, o jogador ganha.
- Se o jogador não propuser letras suficientes para ganhar ou perder, o jogador fugiu.
- Letras propostas em repetição são ignoradas (uma mesma letra não pode ser usada para desenhar duas partes do enforcado).

### Entrada

As partidas que o programa deve analisar estão em um arquivo chamado "entrada".
Cada partida ocupa 3 linhas consecutivas no arquivo:

- A primeira linha contém um número que identifica a partida. Se esse número for -1, é o final da entrada.
- A segunda linha contém a palavra secreta, em minúsculas. Somente são usadas as 26 letras do alfabeto, sem acentos e sem nenhum outro caractere que não seja letra.
- A terceira linha contém as letras propostas pelo jogador, em minúsculas. Somente são usadas as 26 letras do alfabeto, sem acentos e sem nenhum outro caractere que não seja letra.

### Saída

O programa deve colocar sua saída em um arquivo chamado "saida". Para cada partida no arquivo de entrada, o programa deve escrever duas linhas no arquivo de saída:

- A primeira linha deve conter a identificação da partida.
- A segunda linha deve conter "Ganhou", "Perdeu" ou "Desistiu", de acordo com o resultado do jogo.

### Exemplo de entrada

```
1
cavalo
bolachastvm
2
super
abcdefgh
3
perigo
pertinho
-1
```

### Exemplo de saída

Caso o arquivo de entrada contenha o exemplo d entrada acima, o arquivo de saída deve conter:
```
1
Ganhou
2
Perdeu
3
Desistiu
```
