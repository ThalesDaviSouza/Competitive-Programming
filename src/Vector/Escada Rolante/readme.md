# Escada Rolante
O Shopping Boas Compras - SBC, através de sua política ambiental, está preocupado com o consumo de energia e, resolveu trocar todas as escadas rolantes por modelos mais modernos, que se desligam caso ningúem esteja utilizando, poupando energia.

A nova escada rolante possui um sensor no início. Toda vez que ela está vazia e algúem passa pelo sensor, a escada começa a funcionar, parando de funcionar novamente após 10 segundos se ningúem mais passar pelo sensor. Estes 10 segundos representam o tempo suficiente para levar algúem de um nível ao outro. Preocupados em saber exatamente quanto de energia o shopping está economizando, o gerente pediu sua ajuda. Como eles sabem qual era o consumo da escada rolante antiga, eles te pediram para calcular o tempo que a nova escada ficou funcionando.

Dados os instantes, em segundos, em que passaram pessoas pela escada rolante, você deve calcular quantos segundos ela ficou ligada.

## Entrada
A primeira linha da entrada contém um inteiro N que indica o número de pessoas que o sensor detectou. As N linhas seguintes representam o instante em que a i-ésima pessoa passou pelo sensor e contém um inteiro T. Os tempos estão em ordem crescente, sem repetições.

## Saída
Seu programa deve imprimir uma única linha, contendo o tempo que a escada rolante ficou ligada.

### Restrições
1 ≤ N ≤ 1000
0 ≤ N ≤ 104

## Exemplos

### Entrada
3

0

10

20

### Saída
30

### Entrada
5

5

10

17

20

30

### Saída
35

### Entrada
3

1

2

3

### Saída
12