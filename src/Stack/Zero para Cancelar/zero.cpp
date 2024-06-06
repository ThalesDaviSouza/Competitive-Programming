#include <iostream>
#include <stack>

using namespace std;

int main(){
    int numLinhas;
    stack<int> pilha;
    int resultado = 0;

    cin >> numLinhas;

    for(int i = 0; i < numLinhas; i++){
        int input;
        cin >> input;

        if(input == 0 && !pilha.empty())
        {
            pilha.pop();
        }
        else
        {
            pilha.push(input);
        }
    }

    while(!pilha.empty())
    {
        resultado += pilha.top();
        pilha.pop();
    }

    cout << resultado;

    return 0;
}
