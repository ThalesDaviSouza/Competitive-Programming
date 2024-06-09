#include <iostream>
#include <map>
#include <set>

using namespace std;


int main(){ 
    map<int, string> alunos;
    map<int, set<string>> times; 

    int numAlunos, numTimes;

    cin >> numAlunos >> numTimes;

    for(int i = 0; i < numAlunos; i++)
    {
        string nome;
        int habilidade;
        
        cin >> nome >> habilidade;

        // Map salva em ordem crescente
        // Precisamos que seja ordenado
        // de forma decrescente, então
        // Multiplicar por -1 faz com que
        // o maior se torne o menor e vice
        // versa
        alunos[habilidade*-1] = nome;
    }
    
    int timeIndex = 0;

    for(const auto& aluno : alunos)
    {
        times[timeIndex % numTimes].insert(aluno.second);
        
        timeIndex++;
    }

    for(int i = 0; i < numTimes; i++)
    {
        cout << "Time " << i+1 << endl;
        
        for(const auto&aluno : times[i]){
            cout << aluno << endl;
        }

        cout << endl;
    }

    return 0;
}