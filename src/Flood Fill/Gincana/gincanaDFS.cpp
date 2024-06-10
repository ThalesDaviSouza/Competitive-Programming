#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> conexoes;
vector<bool> componente;

void DFS(int i){
    vector<int> amizades = conexoes[i];
    
    for(int j = 0; j < (int)amizades.size(); j++){
        if(!componente[amizades[j]]){
            componente[amizades[j]] = true;
            DFS(amizades[j]);
        }
    }
}

int main(){
    int numAlunos, numVertices;
    int numGrupos = 0;

    cin >> numAlunos >> numVertices;

    conexoes.resize(numAlunos);
    componente.resize(numAlunos, false);

    for(int i = 0; i < numVertices; i++){
        int x, y;
        cin >> x >> y;

        x--;
        y--;

        conexoes[x].push_back(y);
        conexoes[y].push_back(x);

    }

    for(int i = 0; i < numAlunos; i++){
        if(!componente[i]){
            componente[i] = true;
            DFS(i);

            numGrupos++;
        }
    }

    cout << numGrupos;

    return 0;
}