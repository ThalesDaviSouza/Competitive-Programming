#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> figura;
int quadradosPintados = 0;
int linhasFigura, colunasFigura;

void DPS(int linha, int coluna){
    if(linha < 0 || linha >= linhasFigura){
        return;
    }
    
    if(coluna < 0 || coluna >= colunasFigura){
        return;
    }

    if(figura[linha][coluna] == -1){
        figura[linha][coluna] = 1;
        quadradosPintados++;

        DPS(linha-1, coluna-1);
        DPS(linha-1, coluna);
        DPS(linha-1, coluna+1);
        DPS(linha, coluna-1);
        DPS(linha, coluna+1);
        DPS(linha+1, coluna-1);
        DPS(linha+1, coluna);
        DPS(linha+1, coluna+1);

    }
}

int main(){
    int linhaInicial, colunaInicial;
    int inputs;

    cin >> linhasFigura >> colunasFigura >> linhaInicial >> colunaInicial >> inputs;

    figura.resize(linhasFigura, {});

    for(int i = 0; i < linhasFigura; i++){
        figura[i].resize(colunasFigura, -1);
    }

    for(int i = 0; i < inputs; i++){
        int linha, coluna;
        cin >> linha >> coluna;
        figura[linha-1][coluna-1] = 1;
    }

    DPS(linhaInicial-1, colunaInicial-1);

    cout << quadradosPintados;

    return 0;
}