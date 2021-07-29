# l121a --- Laboratório de Programação I
turmas CC2 e SI2, primeiro semestre 2021\
ELC1065 DLSC/CT/UFSM\
professor: Benhur Stein 
([benhur+l121a@inf.ufsm.br](mailto:benhur%2bl121a@inf.ufsm.br))\
monitor: Marcos Visentini [mvisentini@inf.ufsm.br]\
material complementar da monitoria: [https://github.com/wisentini/monitoria-l121a]\
terças e quintas, 14h30


## Desenvolvimento da disciplina

Os canais de comunicação entre o professor e os alunos são esta página (<https://github.com/BenhurUFSM/l121a>), o servidor discord (<https://discord.gg/8CGb3VnTSj>) e e-mail para [benhur+l121a@inf.ufsm.br](mailto:benhur%2bl121a@inf.ufsm.br).
Outros canais que eventualmente sejam criados serão comunicados aqui.

Todos os alunos **devem** enviar um e-mail inicial para o professor para confirmar o seu endereço de e-mail, e **devem** se inscrever no servidor discord.

O e-mail pode ser usado para o envio de perguntas, exercícios, reclamações, sugestões, críticas e o que mais for, durante todo o período em que durar a disciplina.

Esta página concentrará os assuntos vistos em aula, a descrição de exercícios e trabalhos, avaliações, etc. Ela estará sendo aumentada/atualizada durante todo o semestre. Ela é o canal mais oficial de informações sobre a disciplina.

A disciplina de laboratório de programação I é bastante prática, e exige que os alunos se dediquem bastante e desenvolvam trabalhos práticos.
O objetivo da disciplina, aprender a programar computadores, envolve conceitos que podem levar um tempo razoável para serem adquiridos.
A prática de programação tem se mostrado essencial nesse aprendizado.
Para realizar essa prática, é necessário acesso a um computador e a um ambiente de desenvolvimento de programas.
A universidade dispõe de laboratórios com computadores para acesso aos alunos, com todo o software necessário instalado; consulte o NCC caso necessite.

Em um computador pessoal, pode-se instalar um ambiente de desenvolvimento localmente ou usar um dos vários que existem gratuitamente online.
O que se necessita como ambiente de desenvolvimento para a disciplina é o mais básico, basta um compilador da linguagem "C".
Durante as aulas, vamos usar um ambiente online, em princípio será o <www.onlinegdb.com>. Os exercícios e trabalhos da disciplinas podem também ser desenvolvidos nesse ambiente.

Meu ambiente pessoal de trabalho é no sistema linux, e nesse sistema posso auxiliá-los na instalação e uso de um compilador. Não tenho nenhuma experiência pessoal gratificante com windows, não vou poder auxiliá-lo com problemas diretamente relacionados ao uso desse ambiente.

Por ser uma disciplina prática, a principal forma de avaliação dos alunos será através de exercícios, principalmente o desenvolvimento de pequenos programas de computador, a serem enviados para o professor. No final do semestre, deve ser desenvolvido um trabalho final um pouco mais complexo.
A descrição desses exercícios e programas, bem como a forma de entrega e avaliação dos mesmos será disponibilizada nesta página.

O distanciamento físico entre todos da turma torna o desenvolvimento da disciplina bem mais desafiante para todos nós.
Todos vamos precisar nos empenhar mais que em um semestre normal.
Eu espero conseguir ajudar o máximo o maior número de vocês.
Eu só consigo identificar os problemas através do que usarmos como canais de comunicação.
Não deixem dúvidas acumularem. Quanto mais cedo conseguirmos nos comunicar para apontar problemas, expor sugestões, melhores vão ser nossas chances de sucesso.

##  Aulas 

|    N |   data | assunto
| ---: | :----: | :--------
|    1 |  18mai | [introdução](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/01.Intro.md)
|    2 |  20mai | [primeiro programa C](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/02.p1.c.md)
|    3 |  25mai | [variáveis, entrada de dados](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/03.md)
|    4 |  27mai | [tipos de dados em ponto flutuante](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/04.md)
|    5 |   1jun | [funções](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/05.md)
|    6 |   8jun | [seleção `if`, operadores de comparação](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/06.md)
|    7 |  10jun | [operadores lógicos, seleção múltipla com `if`s aninhados](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/07.md)
|    8 |  15jun | [comando de repetição `for`](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/08.md)
|    9 |  17jun | [comandos de repetição `while` e `do .. while`](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/09.md)
|   10 |  24jun | [comando de seleção `switch`; vetores](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/10.md)
|   11 |  29jun | [vetores, cont](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/11.md)
|   12 |   1jul | [strings](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/12.md)
|   13 |   6jul | [exercícios de string; sscanf, sprintf](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/13.md)
|   14 |   8jul | [passagem de parâmetros por referência](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/14.md)
|   15 |  13jul | [arquivos](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/15.md)
|   16 |  15jul | [exercícios](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/16.md)
|   17 |  20jul | [registros](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/17.md)
|   18 |  22jul | [exercícios](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/18.md)
|   19 |  27jul | [exercícios](https://github.com/BenhurUFSM/l121a/blob/main/Assuntos/18.md)

<!--
  , organização de computadores (CPU (UC+ULA), Mem, E/S), "tudo é número!"
  [2]   3nov   programa básico em C, *printf*, expressões numéricas
  [3]   5nov   números binários, tipos de dados básicos em C, variáveis, *scanf*
  [4]  10nov   funções
  [5]  12nov   exercícios
  [6]  17nov   correção dos exercícios; operadores de comparação; comando de seleção *if*
  [7]  19nov   correção dos exercícios; *if*s aninhados para seleção múltipla
  [8]  24nov   operadores lógicos; comando de repetição *while*
  [9]  26nov   comandos *break* e *continue* em laços; operadores de atribuição
 [10]  1dez    comandos *for* e *do .. while*
 [11]  3dez    comando *switch*; vetores
       8dez    feriado
 [12]  10dez   matrizes
 [13]  15dez   arquivos
  14   17dez   ?
 [15]  5jan    passagem de argumentos por referência (ponteiros)
 [16]  7jan    funções recursivas
 [17]  12jan   implementação trabalho 3
 [18]  14jan   registros (struct)
 [19]  19jan   exemplo comentado de registros (struct)
 [20]  21jan   alocação dinâmica de memória

[1]: aula1.html
[2]: aula2.html
[3]: aula3.html
[4]: aula4.html
[5]: aula5.html
[6]: aula6.html
[7]: aula7.html
[8]: aula8.html
[9]: aula9.html
[10]: aula10.html
[11]: aula11.html
[12]: aula12.html
[13]: aula13.html
[15]: aula15.html
[16]: aula16.html
[17]: aula17.html
[18]: aula18.html
[19]: aula19.html
[20]: aula20.html

-->

## Exercícios e trabalhos

|     N |    prazo | assunto
| ----: | -------: | :-----------
|    e1 | 18mai14h30 | envio de email de confirmação, acesso ao discord
|    e2 | 27mai14h30 | ver aula 3
|    e3 | 8jun14h  | ver aula 5
|    t1 | 15jun14h | ver aula 6
|    t2 | 10jul    | ver aula 11 ([exemplo](https://github.com/BenhurUFSM/l121a/blob/main/Complementos/t2.c))
|    t3 | 3ago     | ver aula 16 (foi adicionada a parte 2)

<!--
  [t1]    <8dez adivinha
  [t2]   <16dez adivinha 2
  [t3]     8jan sudoku
  [t4]    27jan get10
  [t5]     ?fev largue o número

[t1]: trab1.html
[t2]: trab2.html
[t3]: trab3.html
[t4]: trab4.html
[t5]: trab5.html

-->

## Ementa

Ver [aqui](https://www.ufsm.br/ementario/disciplinas/elc1065/).

## Material Auxiliar

[Apostila de C da UFPR](http://www.inf.ufpr.br/cursos/ci067/Docs/NotasAula.pdf)

[Curso de programação C da UFMG](http://www2.dcc.ufmg.br/disciplinas/pc/source/introducao_c_renatocm_deeufmg.pdf)

[Apostila de programação da UFPR](http://www.inf.ufpr.br/cursos/ci055/apostila.pdf)

Ajude o robozinho a iluminar o mundo (ajuda no desenvolvimento de lógica de programação, fundamental para o conteúdo da disciplina) [lightbot](http://lightbot.com).

Ajude o passarinho a detonar o porco (semelhante ao anterior) [code.org](http://studio.code.org/hoc/1)

O PET oferece tópicos de apoio a disciplinas iniciais.

## Avaliações etc

Veja a [planilha](https://docs.google.com/spreadsheets/d/1vGsbATV6MzJOWgx205w_sS62_PDaY49Z0PNa4bUcHRw/edit?usp=sharing).

