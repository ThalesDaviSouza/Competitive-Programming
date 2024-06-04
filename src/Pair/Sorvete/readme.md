# Sorvete
Joãozinho é um menino que costuma ir à praia todos os finais de semana com seus pais. Eles frequentam sempre a mesma praia, mas cada semana o pai de Joãozinho estaciona o carro em um local diferente ao longo da praia, e instala sua família em um ponto na praia em frente ao carro. Joãozinho é muito comilão, e adora tomar sorvete na praia.

Contudo, alguns dias acontece de nenhum sorveteiro passar pelo local onde eles estão. Intrigado com isto, e não querendo mais ficar sem tomar seu sorvete semanal, Joãozinho foi até a Associação dos Sorveteiros da Praia (ASP), onde ficou sabendo que cada sorveteiro passa o dia percorrendo uma mesma região da praia, indo e voltando. Além disto, cada sorveteiro percorre todos os dias a mesma região. Joãozinho conseguiu ainda a informação dos pontos de início e fim da região percorrida por cada um dos sorveteiros.

Com base nestes dados, Joãozinho quer descobrir os locais da praia onde o pai dele deve parar o carro, de forma que pelo menos um sorveteiro passe naquele local. Só que o volume de dados é muito grande, e Joãozinho está pensando se seria possível utilizar o computador para ajudá-lo nesta tarefa. No entanto Joãozinho não sabe programar, e está pedindo a sua ajuda.

Você deve escrever um programa que leia os dados obtidos pelo Joãozinho e imprima uma lista de intervalos da praia por onde passa pelo menos um sorveteiro.

## Entrada
A primeira linha contém dois inteiros não negativos, P e S, que indicam respectivamente o comprimento em metros da praia e o número de sorveteiros. Seguem-se S linhas, cada uma contendo dois números inteiros U e V que descrevem o intervalo de trabalho de cada um dos sorveteiros, em metros contados a partir do início da praia.

## Saída
Seu programa deve produzir uma lista dos intervalos da praia que são servidos por pelo menos um sorveteiro. Cada intervalo da lista deve aparecer em uma linha separada, sendo descrito por dois números inteiros U e V, representando respectivamente o início e o final do intervalo (U < V). O final da lista de intervalos deve ser indicado por uma linha em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.

### Exemplos de Entrada
200 2

0 21

110 180

### Exemplos de Saída
0 21

110 180

### Exemplos de Entrada
1000 3

10 400

80 200

400 1000

### Exemplos de Saída
10 1000

### Exemplos de Entrada
10 2

1 4

5 6

### Exemplos de Saída
1 4

5 6
