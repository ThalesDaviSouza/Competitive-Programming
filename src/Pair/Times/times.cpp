#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ordemAlfabetica(const pair<int, string> a1, pair<int, string> a2){
    return a1.second < a2.second;
}

int main(){
    int numAlunos, numTimes;
    vector<pair<int, string>> alunos;
    vector<vector<pair<int, string>>> times;

    cin >> numAlunos;
    cin >> numTimes;

    for(int i = 0; i < numAlunos; i++){
        string nome;
        int habilidade;
        
        cin >> nome;
        cin >> habilidade;

        alunos.push_back({habilidade, nome});

    } 

    sort(alunos.begin(), alunos.end());

    times.resize(numTimes, {});

    int indexAluno = 0;

    while((int)alunos.size() > 0){
        int time = indexAluno % numTimes;

        times[time].push_back(alunos[(int)alunos.size() - 1]);
        alunos.pop_back();

        indexAluno++;
    }

    for(int i = 0; i < numTimes; i++){
        cout << "Time " << i+1 << endl;
        
        sort(times[i].begin(), times[i].end(), ordemAlfabetica);

        for(int j = 0; j < (int)times[i].size(); j++){
            cout << times[i][j].second << endl;
        }

        cout << endl;
    } 

    return 0;
}