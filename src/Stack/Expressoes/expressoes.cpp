/**
 * Explicando a solução:
 * Uma sequência válida sempre terá que respeitar a seguinte
 * ordem:
 *  - Abre uma segmento da expressão
 *  - Ou Abre um novo segmento
 *  - Ou fecha o último segmento adicionado
 * 
 * Exemplo:
 *  - ()({})
 *  - Abre fecha um segmento ()
 *  - Abre um segmento (
 *  - Abre um outro segmento {
 *  - Fecha os dois segmentos em ordem })
 * 
 * Caso seja fechado um segmento que não foi o último 
 * a expressão será inválida
 * 
 * Exemplo:
 *  - ({)}
 *  - Abre um segmento (
 *  - Abre um outro segmento {
 *  - Fecha o primeiro segmento ) 
 *    - Aqui já tivemos um erro, deveria ter fechado
 *      último segmento, não o primeiro
 * 
 */

#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

bool estaAbrindoExpressao(char letra){
    return (letra == '(' || letra == '{' || letra == '[');
}

char charAberturaCorrepondente(char charFechamento){
    switch(charFechamento){
        case ')':
            return '(';
        case ']':
            return '[';
        case '}':
            return '{';

        default:
            break;
    }

    return '\0';
}

int main(){
    vector<string> expressoes;
    string input;
    int numExpressoes;
    bool sequenciaInvalida;

    cin >> numExpressoes;

    for(int i = 0; i < numExpressoes; i++){
        cin >> input;

        expressoes.push_back(input);

    }

    for(int i = 0; i < numExpressoes; i++)
    {
        stack<char> pilha;
        sequenciaInvalida = false;

        for(int j = 0; j < (int)expressoes[i].size(); j++)
        {
            char letra = expressoes[i][j];
            
            if(estaAbrindoExpressao(letra))
            {
                pilha.push(letra);
            }
            else
            {
                if(pilha.empty())
                {
                    sequenciaInvalida = true;
                    break;
                }

                if(charAberturaCorrepondente(letra) == pilha.top())
                {
                    pilha.pop();
                }else
                {
                    break;
                }
            }
        }

        if(pilha.empty() && !sequenciaInvalida)
        {
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }

    }

    return 0;
}
