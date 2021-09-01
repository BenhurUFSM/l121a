## Esquenta para o exame

A prova do exame consistirá no desenvolvimento de um programa não muito complexo, em um tempo limitado, durante o horário de aula.

Segue um exemplo de programa que poderia ser usado nessa prova.

* * *

### Sequência de Collatz

Lothar Collatz propôs uma conjectura, em 1937, que é um problema ainda não resolvido na matemática.
A conjectura é que, partindo-se de qualquer inteiro *n*, a sequência de números produzida pelas regras a seguir sempre chega ao valor *1*.
As regras para produzir um termo da sequência a partir do termo anterior são:
- se o termo anterior for par, o próximo é obtido dividindo-o por dois;
- se o termo anterior for ímpar, o próximo é obtido multiplicando-o por 3 e somando 1.

Por exemplo, a sequência partindo de 5 é *5, 16, 8, 4, 2, 1*; partindo de 6 é *6, 3, 10, 5, 16, 8, 4, 2, 1*. 

Você deve fazer um programa que determina o comprimento de uma sequência como essa. No nosso caso, a sequência tem duas formas de parar: quando atingir o valor 1 ou quando iria atingir um valor maior que certo limite. Por exemplo, se o limite for 15, a sequência iniciando em 6 teria só 3 termos depois do 6.

#### Entrada

A entrada para o seu programa é um arquivo, contendo múltiplos casos para testar.
Para cada caso, a entrada contém uma linha com dois inteiros positivos, o primeiro é o número inicial da sequência e o segundo é o valor limite. Ambos os números são representáveis como inteiros de 32 bits. O primeiro número é sempre menor que o segundo.
Uma linha contendo dois valores negativos segue o último caso.

#### Saída

O programa deve imprimir uma linha para cada caso, contendo o número do caso (sequencial iniciando em 1), ':', o valor inicial, o limite, e o número de termos.

#### Exemplo de entrada

```
3 100
34 100
75 250
27 2147483647
101 304
101 303
6 20
6 15
-1 -1
```

#### Exemplo de saída

Para a entrada acima, a saída deve ser:

```
1: 3 100 8
2: 34 100 14
3: 75 250 3
4: 27 2147483647 112
5: 101 304 26
6: 101 303 1
7: 6 20 9
8: 6 15 4
```

* * *

### Autômato celular linear

Um biólogo está experimentando modificações no DNA de colônias de bactérias criadas em placas de petri lineares.
Mudando o DNA, ele consegue programar a resposta das bactérias à densidade populacional em regiões vizinhas da placa.
A densidade populacional de uma região da placa é representada por um valor inteiro entre 0 e 3.
A placa é representada por um vetor de 41 posições (0 a 40), cada uma contendo a densidade populacional de uma região da placa.
A informação de DNA é representada por um vetor de 10 posições (0 a 9), contendo valores entre 0 e 3.
A densidade populacional de cada região da placa é calculada a cada dia, baseada na densidade populacional dessa região e das duas regiões vizinhas, da seguinte forma:
- soma-se em `s` os valores de densidade populacional da região considerada e de suas duas vizinhas. A densidade populacional da região considerada no dia seguinte será `DNA\[s\]`;
- considera-se que a densidade populacional à esquerda da primeira região e à direita da última é sempre 0.

Escreva um programa para simular o crescimento de uma cultura, que inicia com a região 20 com densidade populacional 1 e todas as demais regiões com densidade 0.

#### Entrada

A entrada começa com uma linha contendo um inteiro positivo, que representa o número de casos que deve ser simulado, seguido pelos casos, um por linha.
Cada caso é composto pelos 10 valores do DNA, separados por espaço.

#### Saída

A saída é composta pela evolução de cada caso, como descrito a seguir. Os casos são separados por uma linha em branco.

Cada caso é composto por 21 linhas, cada uma representando um dia na evolução da densidade populacional das regiões da placa.
Cada linha é composta por 41 caracteres, um para cada uma das 41 regiões.
Se a região tem densidade 0, é representada pelo caractere `.`; se tem densidade 1, por `:`; se densidade 2, por `x`, e se tiver densidade 3, por `@`.

#### Exemplo de entrada

```
2
0 1 2 0 1 3 3 2 3 0
0 1 3 2 1 0 3 2 3 1
```

#### Exemplo de saída

Para a entrada acima, a saída deve ser como abaixo.

```
....................:....................
...................:::...................
..................:x.x:..................
.................:..:..:.................
................:::::::::................
...............:x.......x:...............
..............:..x.....x..:..............
.............:::xxx...xxx:::.............
............:x.:@@:x.x:@@:.x:............
...........:...:xx@.:.@xx:...:...........
..........:::.:.@x@:::@x@.:.:::..........
.........:x.xx::@@@@.@@@@::xx.x:.........
........:..::@:@x..@@@..x@:@::..:........
.......::::x@@x@@x.@.@.x@@x@@x::::.......
......:x..:@@@@@@@@.@.@@@@@@@@:..x:......
.....:..x::x......@@.@@......x::x..:.....
....:::x.::.x.....@@@@@.....x.::.x:::....
...:x.:..xx.xx....@...@....xx.xx..:.x:...
..:...::x:::::x...........x:::::x::...:..
.:::.:x:::...:.x.........x.:...:::x:.:::.
:x.xx.::.x:.::.xx.......xx.::.:x.::.xx.x:

....................:....................
...................:::...................
..................:@x@:..................
.................::@@@::.................
................:@.x:x.@:................
...............:::.x.x.:::...............
..............:@x@x@:@x@x@:..............
.............::@@x@@x@@x@@::.............
............:@.x@@@@@@@@@x.@:............
...........:::..@:::::::@..:::...........
..........:@x@:x:.xxxxx.:x:@x@:..........
.........::@@@@:xx:@@@:xx:@@@@::.........
........:@.x::x@..@x:x@..@x::x.@:........
.......:::.x::@.xx.@.@.xx.@::x.:::.......
......:@x@xx:.:.::.x@x.::.:.:xx@x@:......
.....::@@xx.x@:@@@x.x.x@@@:@x.xx@@::.....
....:@.x@x::.@xx:@.:@:.@:xx@.::x@x.@:....
...:::..x@:@:.x.@:::.:::@.x.:@:@x..:::...
..:@x@:@.@x.:x@.:.x@@@x.:.@x:.x@.@:@x@:..
.::@@@x:@..xx@.::x.@:@.x::.@xx..@:x@@@::.
:@.x:@@@:x@:x.:@:x.:x:.x:@:.x:@x:@@@:x.@:

```
