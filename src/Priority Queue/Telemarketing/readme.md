# Telemarketing
O telemarketing foi patenteado em 1982 pelo empresário Nadji Tehrani e consiste em vender produtos através do telefone. Uma das formas de venda utilizadas hoje em dia é obter-se uma lista de possíveis compradores para os produtos vendidos e seus respectivos telefones e utilizar um time de vendedores para ligar para esse conjunto de pessoas.

Bo Ber Man é um empresário estrangeiro dono da Mar Ato Na, cujos ideogramas em seu idioma significam "Empresa Nacional de Telemarketing". Sua empresa realiza vendas dos produtos mais variados para diversas companhias.

Ele possui um time de N vendedores e uma lista de ligações a serem feitas. Para cada ligação sabe-se o tempo T em minutos que ela vai durar. Os vendedores são identificados por números de 1 a N e fazem as ligações da seguinte forma:

- Inicialmente, todos os vendedores estão inativos.

- Sempre que um vendedor realizar uma ligação, ele ficará ocupado pelos T minutos descritos na lista para aquela ligação. O tempo entre duas ligações consecutivas do mesmo vendedor é desprezível.

- Um vendedor não pode fazer mais de uma ligação ao mesmo tempo.

- Um vendedor que esteja inativo deverá fazer a ligação que estiver no topo da lista. Caso mais de um vendedor esteja inativo no mesmo instante, o vendedor com o menor identificador dentre os vendedores inativos deverá fazer a ligação que estiver no topo da lista.

- Assim que uma ligação é atribuída a um vendedor, ela é removida da lista.

- Um vendedor fica inativo sempre que termina uma ligação.

Por exemplo, suponha que um time de 4 vendedores deve fazer 6 ligações, cujos tempos sejam 5, 2, 3, 3, 4, 9. Como inicialmente nenhum vendedor está ocupado, o primeiro vendedor fará a ligação de 5 minutos, o segundo vendedor a ligação de 2 minutos e os vendedores de número 3 e 4 farão ligações de 3 minutos. Como o segundo vendedor terminará a sua ligação antes dos demais, ele fará a quinta ligação, de 4 minutos e, por fim, o terceiro vendedor (cujo tempo é igual ao do quarto vendedor, mas o número é menor) fará a sexta ligaçao, de 9 minutos.

## Tarefa
Escreva um programa que, dados o número de vendedores, o número de ligações e a duração de cada ligação, determine o número de ligações feitas por cada vendedor.

## Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente o teclado). A primeira linha da entrada contém dois inteiros, N e L indicando o número de vendedores e o número de ligações a serem realizadas (1 ≤ N ≤ 1.000, 1 ≤ L ≤ 1.000.000). As L linhas seguintes contêm um inteiro T cada (1 ≤ T ≤ 30), em que T representa a duração de cada ligação.

## Saída
Seu programa deve imprimir, na saída padrão, N linhas, uma para cada vendedor, contendo dois inteiros I e P representando o número do vendedor e o número de ligações realizadas por este vendedor. Os vendedores devem ser apresentados em ordem crescente de identificador, começando a partir de 1.

## Exemplos
### Entrada
5 3

2

2

1
			
### Saída
1 1

2 1

3 1

4 0

5 0
			
### Entrada
4 6

5

2

3

3

4

9
			
### Saída
1 1

2 2

3 2

4 1
			
### Entrada
3 9

3

5

1

1

1

1

1

1

1
			
### Saída
1 3

2 1

3 5