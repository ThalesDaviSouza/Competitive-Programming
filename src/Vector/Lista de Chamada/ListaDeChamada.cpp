#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int numAlunos, numSorteado;
    vector<string> alunos;

    cin >> numAlunos;
    cin >> numSorteado;

    for(int i = 0; i < numAlunos; i++){
        string input;
        cin >> input;
        alunos.push_back(input);
    }

    sort(alunos.begin(), alunos.end());

    cout << alunos[numSorteado-1];

    return 0;
}
