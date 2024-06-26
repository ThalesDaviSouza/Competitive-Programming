# [Gincana](https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/gincana-(obi-2011))
Toda semana Juquinha tem aulas de ACM (Artes Cênicas e Musicais) no colégio em que estuda e, recentemente, sua professora anunciou que haverá uma gincana no final do semestre. No entanto, os times devem ser formados o mais breve possível para que os alunos possam ensaiar.

Cada time é constituído de um ou mais alunos, e cada aluno tem que pertencer a exatamente um time. Além disso, os times não podem ser formados de qualquer maneira: se um aluno é amigo de outro, esses alunos devem estar no mesmo time. A professora então pediu para que os alunos a informassem das relações de amizade na sala de aula.

Os alunos então se numeraram de 1 até N e escreveram uma lista cujas linhas contém pares de números. Se dois alunos cujos números são i e j são amigos, haverá ao menos uma linha contendo i e j ou j e i na lista. Inversamente, se há uma linha contendo i e j na lista, então os alunos cujos números são i e j são amigos.

A professora então recolheu a lista e, na próxima aula, deverá decidir que times formar. Ela está pensando em formar o maior número possível
de times e gostaria de saber quantos times ela formaria. Ajude então a professora escrevendo um programa que, dada a lista de amizades, determina qual o maior número de
times que ela pode formar.

## Entrada
A primeira linha da entrada contém dois inteiros N e M que representam, respectivamente, o número de alunos na turma e o número de linhas na lista. As próximas M linhas contêm a lista de amizades. Cada linha contém dois inteiros I e J separados por exatamente um espaço.

## Saída
Seu programa deve imprimir uma linha contendo o número máximo de times que podem ser formados pela professora.

### Exemplos de Entrada	
3 1

1 3

### Exemplos de Saída
2

### Exemplos de Entrada	
7 6

1 6

6 4

5 2

3 7

2 3

7 2

### Exemplos de Saída
2