#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class aresta {
    public:
        int origem;
        int destino;
        int peso;

        aresta(int o, int d, int p){
            this->origem = o;
            this->destino = d;
            this->peso = p;
        }
};

vector<vector<aresta>> lista;
vector<int> distancia;
int numPilares;
int numPontes;

void dijkstra(){
    queue<vector<aresta>> fila;

    fila.push(lista[0]);

    while(!fila.empty()){
        vector<aresta> conexoes = fila.front();
        fila.pop();

        for(const auto& ponte:conexoes){
            if(distancia[ponte.origem] == -1) break;

            int distanciaPilarOrigem = distancia[ponte.origem]; 

            int custoCaminho = distanciaPilarOrigem + ponte.peso;

            if(distancia[ponte.destino] == -1){
                distancia[ponte.destino] = custoCaminho;
                fila.push(lista[ponte.destino]);
            }
            else{
                if(distancia[ponte.destino] > custoCaminho){
                    distancia[ponte.destino] = custoCaminho;
                    fila.push(lista[ponte.destino]);
                }
            }
        }
    }    

}


int main(){
    cin >> numPilares >> numPontes;
    numPilares += 2;

    lista.resize(numPilares, {});
    distancia.resize(numPilares, -1);

    for(int i = 0; i < numPontes; i++){
        int pilarOrigem;
        int pilarDestino;
        int numBuracos;

        cin >> pilarOrigem >> pilarDestino >> numBuracos;

        lista[pilarOrigem].push_back(aresta(pilarOrigem, pilarDestino, numBuracos));

    }

    distancia[0] = 0;

    dijkstra();

    int retorno = distancia[numPilares-1]; 

    cout << retorno;

    return 0;
}