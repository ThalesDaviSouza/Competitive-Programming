#include <iostream>
#include <set>

using namespace std;

int main(){
    int tamSet;
    set<int> numerosProibidos;
    int consulta;
    int input;

    cin >> tamSet;

    for(int i = 0; i < tamSet; i++){
        cin >> input;
        numerosProibidos.insert(input);
    }

    while(cin >> consulta){
        if(numerosProibidos.find(consulta) != numerosProibidos.end()){
            cout << "sim" << endl;
        }else{
            cout << "nao" << endl;
        }
    }

    return 0;
}
