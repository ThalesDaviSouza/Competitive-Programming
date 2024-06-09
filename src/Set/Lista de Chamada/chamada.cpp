/**
 * O desafio aqui é completar essa tarefa
 * utilizando set. Outras estruturas seriam
 * mais eficientes, como o vector.
 */

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    set<string> nomes;
    int alunoSorteado;
    int numAlunos;

    cin >> numAlunos >> alunoSorteado;

    for(int i = 0; i < numAlunos; i++){
        string aluno;
        cin >> aluno;
        nomes.insert(aluno);
    }

    int i = 1;
    for(const auto&nome : nomes){
        if(i == alunoSorteado){
            cout << nome;
            break;
        }
        else{
            i++;
        }
    }


    return 0;
}
