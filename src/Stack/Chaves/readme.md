# Chaves
Seu amigo Juca está enfrentando problemas com programação. Na linguagem C, algumas partes do código devem ser colocadas entre chaves "\ \" e ele frequentemente esquece de colocá-las ou as coloca de forma errada. Porém, como Juca tem dificuldade para entender os erros de compilação, ele nunca sabe exatamente o que procurar. Por isso ele te pediu para fazer um programa que determine se um código está com as chaves balanceadas, ou seja, se é válido. Um código está com as chaves balanceadas se:

Não há chaves (como por exemplo "Bom" ou "Correto");

O código é composto por uma sequência de códigos válidos (como por exemplo "Bom Correto" ou "\\\\" ou "\\Correto"); ou

O código é formado por um código válido entre chaves (como por exemplo "\\\\" ou "\Bom\").

O código de Juca é composto por N linhas de até 100 caracteres cada. Pode haver linhas vazias e espaços consecutivos.

## Entrada
A primeira linha contém um inteiro N, representando o número de linhas no código. As N linhas seguintes contém até 100 caracteres.

## Saída
Seu programa deve produzir uma única linha, contendo uma única letra, "S" se o código está com as chaves balanceadas e "N", caso contrário.

## Exemplos
### Entrada
6

int main(void)

{

    printf("Hello World\n");

}

### Saída
S
	
### Entrada
5

{I{N{

}F{])

}O}R{

}M}A{T}I{C@!!{onze}!!}

### Saída
S
	
### Entrada
1

{{}}{{}}}

### Saída
N

### Entrada

1

{{{3}}}{{{2}}a{{1}}{0}

### Saída
N
	