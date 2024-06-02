#include <iostream>

using namespace std;

#define TAM_MATRIX 3

int main(){
    int matriz[TAM_MATRIX][TAM_MATRIX];

    int diagonalPrincipal = 0;
    int diagonalSecundaria = 0;

    for(int i = 0; i < TAM_MATRIX; i++){
        for(int j =0; j < TAM_MATRIX; j++){
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < TAM_MATRIX; i++){
        diagonalPrincipal += matriz[i][i];
        diagonalSecundaria += matriz[i][TAM_MATRIX-i-1];
    }


    cout << "Diagonal principal: " << diagonalPrincipal << endl;
    cout << "Diagonal secundaria: " << diagonalSecundaria << endl;

    return 0;
}