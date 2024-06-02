#include <iostream>

using namespace std;

#define TAM_MATRIZ 3

int main(){
    int matriz[TAM_MATRIZ][TAM_MATRIZ];

    int soma[TAM_MATRIZ];

    for(int i = 0; i < TAM_MATRIZ; i++){
        soma[i] = 0;
        
        for(int j = 0; j < TAM_MATRIZ; j++){
            cin >> matriz[i][j];
            soma[i] += matriz[i][j];
        }
    }

    for(int i = 0; i < TAM_MATRIZ; i++){
        cout << "Coluna " << i << ": " << soma[i] << endl;
    }

    return 0;
}