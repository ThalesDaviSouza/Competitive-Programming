#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> filaInicial;
    int numPessoasFila;
    int numPessoasSaindo;

    cin >> numPessoasFila;

    for(int i = 0; i < numPessoasFila; i++){
        int input;
        cin >> input; 
        filaInicial.push_back(input);
    }

    cin >> numPessoasSaindo;

    for(int i = 0; i < numPessoasSaindo; i++){
        int pessoaRemover;
        cin >> pessoaRemover;

        for(int i = 0; i < (int)filaInicial.size(); i++){
            if(filaInicial[i] == pessoaRemover){
                filaInicial.erase(filaInicial.begin() + i);
                break;
            }
        }
    }    

    for(int i = 0; i < (int)filaInicial.size(); i++){
        cout << filaInicial[i] << " ";
    }
    
    return 0;
}