#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int numAtendentes, numLigacoes;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> vendedores;
    
    vector<int> ligacoesPorVendedor;

    cin >> numAtendentes >> numLigacoes;

    for(int i = 0; i < numAtendentes; i++){
        ligacoesPorVendedor.push_back(0);
        vendedores.push(make_pair(0, i));
    }

    for(int i = 0; i < numLigacoes; i++){
        int tempoLigacao;

        cin >> tempoLigacao;

        pair<int, int> proxVendedor = vendedores.top();
        vendedores.pop();

        proxVendedor.first += tempoLigacao;

        vendedores.push(proxVendedor);
        ligacoesPorVendedor[proxVendedor.second]++;
    }

    for(int i = 0; i < numAtendentes; i++){
        cout << i + 1 << " " << ligacoesPorVendedor[i] << endl;
    }

    return 0;
}