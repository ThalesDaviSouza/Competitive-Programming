#include <iostream>
#include <vector>

using namespace std;

int main(){
    int numPessoas;
    int tempo = 0;
    vector<int> tempos;

    cin >> numPessoas;

    for(int i = 0; i < numPessoas; i++){
        int input;
        cin >> input;

        tempos.push_back(input);

        if(i > 0){
            tempo += (tempos[i] - tempos[i-1]) <= 10 ? tempos[i] - tempos[i-1] : 10; 
        }else{
            tempo += 10;
        }
    }

    cout << tempo;

    return 0;
}