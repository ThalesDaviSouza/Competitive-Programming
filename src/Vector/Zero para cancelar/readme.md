# Zero para Cancelar
Seu chefe está ao telefone, nervoso. Ele quer que você compute a soma de uma sequência de números que ele vai falar para você ao telefone, para saber o total das vendas em sua mais recente viagem de negócios. Infelizmente, de vez em quando seu chefe fala números errados para você ao telefone.

Felizmente, seu chefe rapidamente percebe que falou um número errado e diz “zero”, que como combinado previamente quer dizer ignore o último número corrente. Infelizmente, seu chefe pode cometer erros repetidos, e diz “zero” para cada erro.

Por exemplo, seu chefe pode falar ao telefone “Um, três, cinco, quatro, zero, zero, sete, zero, zero, seis”, o que significa uma soma total igual a 7.

Para não deixar seu chefe ainda mais nervoso, escreva um programa que determine a soma total dos números falados por seu chefe ao telefone.

## Entrada
A primeira linha da entrada contém um inteiro N, a quantidade de números inteiros (incluindo os “zeros”) que o seu chefe falou ao telefone. Cada uma das N linhas seguintes contém um número inteiro Xi.

## Saída
Seu programa deve produzir uma única linha na saída, contendo um único inteiro, a soma correta dos números, levando em conta que o valor 0 significa erro, conforme descrito.

### Exemplos de Entrada
4

3

0

4

0

### Exemplos de Saída
0

### Exemplos de Entrada
10

1

3

5

4

0

0

7

0

0

6

### Exemplos de Saída
7

