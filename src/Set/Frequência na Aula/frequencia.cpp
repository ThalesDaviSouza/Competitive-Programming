#include <iostream>
#include <set>

using namespace std;

int main(){ 
    int numAlunos;
    set<int> alunosPresentes;

    cin >> numAlunos;

    for(int i = 0; i < numAlunos; i++){
        int aluno;
        cin >> aluno;
        
        // O set insere um número apenas uma vez
        // Assim número repetidos serão contados
        // apenas uma vez
        alunosPresentes.insert(aluno);
    }

    cout << alunosPresentes.size();

    return 0;
}