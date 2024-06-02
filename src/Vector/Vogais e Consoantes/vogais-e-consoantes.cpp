#include <iostream>
#include <string>

using namespace std;

bool isVogal(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }

    return false;
}

int main(){
    string input;

    string vogais = "";
    string consoantes = "";

    cin >> input;

    for(int i = 0; i < input.size(); i++)
    {
        string letra = input.substr(i, 1) + " "; 

        if(isVogal(input[i]))
        {
            vogais += letra;
        }
        else
        {
            consoantes += letra;
        }
    }

    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;    

    return 0;
}