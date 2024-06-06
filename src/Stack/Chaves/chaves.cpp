/**
 * Explicando a solução:
 * Uma sequência válida sempre terá que respeitar a seguinte
 * ordem:
 *  - Abre uma segmento da expressão
 *  - Ou Abre um novo segmento
 *  - Ou fecha o último segmento adicionado
 * 
 * Exemplo:
 *  - {}{{}}
 *  - Abre fecha um segmento {}
 *  - Abre um segmento {
 *  - Abre um outro segmento {
 *  - Fecha os dois segmentos em ordem }}
 * 
 */


#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(){
    vector<string> linhas;
    int numLinhas;
    bool malFormatado = false;
    string lixo;

    cin >> numLinhas;

    // Usado para ler o enter pressionado entre
    // o número de linhas e a primeira linha do
    // código de Juca
    getline(cin, lixo); 

    for(int i = 0; i < numLinhas; i++){
        string input;
        getline(cin, input);
        linhas.push_back(input);
    }

    stack<char> pilha;

    for(int i = 0; i < numLinhas; i++)
    {
        for(int j = 0; j < (int)linhas[i].size(); j++)
        {
            char input = linhas[i][j];
            
            if(input == '{')
            {
                pilha.push(input);
            }
            else if(input == '}')
            {
                if(pilha.empty())
                {
                    malFormatado = true;
                    break;
                }
                else
                {
                    pilha.pop();
                }
            }
        }
    }

    if(pilha.empty() && !malFormatado)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
