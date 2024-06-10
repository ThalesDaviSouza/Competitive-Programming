#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> conexoes;
vector<bool> componente;

void BFS(int i){
    vector<int> amizades = conexoes[i];
    vector<int> proximos;

    for(int j = 0; j < (int)amizades.size(); j++){
        if(!componente[amizades[j]]){
            proximos.push_back(amizades[j]);
        }
    }

    while(!proximos.empty()){
        int amizade = proximos.front();
        proximos.erase(proximos.begin());
        
        if(!componente[amizade]){
            componente[amizade] = true;
            vector<int> prox = conexoes[amizade];
            for(int j = 0; j < (int)prox.size(); j++){
                if(!componente[prox[j]]){
                    proximos.push_back(prox[j]);
                }
            } 
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
            BFS(i);

            numGrupos++;
        }
    }

    cout << numGrupos;

    return 0;
}