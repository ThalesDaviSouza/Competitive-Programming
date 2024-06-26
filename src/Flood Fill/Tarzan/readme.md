# [Tarzan](https://olimpiada.ic.unicamp.br/pratique/p2/2012/f1/tarzan/)
Tarzan vive na floresta e é o responsável por manter a ordem na região onde vive. Para locomover-se entre as árvores ele só usa cipós pois esse é um meio de transporte muito mais rápido e seguro do que andar no chão da selva, além de, é claro, poder soltar seu grito característico enquanto viaja.

Os cipós das árvores têm todos o mesmo alcance. Dessa forma, é possível viajar de cipó de uma árvore para outra se a distância entre elas é no máximo D, onde D é o alcance dos cipós.

Recentemente uma forte chuva assolou a região e derrubou algumas árvores, restando na floresta apenas N árvores. Agora Tarzan quer saber se ele consegue viajar de cipó entre todas árvores remanescentes para poder continuar mantendo a ordem na região.

Para poder manter a ordem ele precisa ser capaz de, partindo de qualquer uma das árvores, poder chegar a todas as outras árvores remanescentes, possivelmente passando por outras árvores no caminho, sempre utilizando somente cipós.

## Entrada
A primeira linha da entrada contém dois inteiros, N e D, indicando respectivamente o número de árvores remanescentes e o alcance dos cipós. Cada uma das N linhas seguintes contém dois inteiros Xi e Yi , as coordenadas da i-ésima árvore. Não existem duas árvores com as mesmas coordenadas.

## Saída
Seu programa deve escrever uma única linha, contendo um único caractere: `S` se Tarzan consegue viajar de cipó entre todas as árvores remanescentes, e `N` caso contrário.

## Exemplos
### Entrada
4 5

1 1

6 1

6 6

11 6
			
### Saída
S	
			
### Entrada
4 5

1 1

6 6

11 6

13 8
			
### Saída
N