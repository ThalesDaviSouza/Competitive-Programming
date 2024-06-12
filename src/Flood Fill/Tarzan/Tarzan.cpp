#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class arvore{
    public:
        int x;
        int y;
        bool visited = false;

        arvore(int x, int y){
            this->x = x;
            this->y = y;
        }
};

vector<arvore> nos;
int numArvoresAlcancadas = 0;
int numNos, distanciaMax;

void DFS(int posicaoNo){
    if(!nos[posicaoNo].visited){
        nos[posicaoNo].visited = true;
        
        numArvoresAlcancadas++;

        double quadradoDistanciaMax = pow(distanciaMax, 2);
        
        for(int i = 0; i < numNos; i++){
            arvore prox = nos[i];

            if(prox.x != nos[posicaoNo].x || prox.y != nos[posicaoNo].y){
                int diferencaX = nos[posicaoNo].x - prox.x;
                int diferencaY = nos[posicaoNo].y - prox.y;

                if(diferencaX < 0) diferencaX *= -1;
                if(diferencaY < 0) diferencaY *= -1;

                double somaQuadrado = pow(diferencaX, 2) + pow(diferencaY, 2);

                // A soma do quadrado dos catetos é
                // igual a hipotenusa
                // Nesse caso a hipotenusa seria a nossa
                // distnância entre um ponto e outro
                if(somaQuadrado <= quadradoDistanciaMax){
                    DFS(i);
                }
            }
        }
    }
}

int main(){

    cin >> numNos >> distanciaMax;

    for(int i = 0; i < numNos; i++){
        int x, y;
        cin >> x >> y;
        nos.push_back(arvore(x-1, y-1));
    }

    DFS(0);

    if(numArvoresAlcancadas == numNos){
        cout << "S";
    }else{
        cout << "N";
    }

    return 0;
}