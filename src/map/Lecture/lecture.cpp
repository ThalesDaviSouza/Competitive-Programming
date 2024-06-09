#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int main(){
    map<string, string> palavrasUsadas;
    int numPalavras, numPalavrasDitas;

    cin >> numPalavrasDitas >> numPalavras;

    for(int i = 0; i < numPalavras; i++){
        string palavra1;
        string palavra2;
        string menorPalavra;

        cin >> palavra1 >> palavra2;
        
        menorPalavra = palavra1.size() > palavra2.size() ? palavra2 : palavra1;

        // precisa salvar apenas a primeira palavra
        // O professor fala apenas no primeiro idioma
        palavrasUsadas[palavra1] = menorPalavra;
        
    } 
    string falaProfessor;
    string palavra;
    // pega o enter digitado anteriormente
    getline(cin, falaProfessor); 
    // Agora pega a fala do professor
    getline(cin, falaProfessor);

    istringstream iss(falaProfessor);
    
    while(iss >> palavra){
        cout << palavrasUsadas[palavra] << " ";
    }

    return 0;
}