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
```
