#include <iostream>
#include <vector>

using namespace std;

int main(){ 
    int num;
    int soma = 0;
    vector<int> numsChefe;

    cin >> num;

    for(int i = 0; i < num; i++){
        int input;
        cin >> input;
        if(input != 0){
            numsChefe.push_back(input);
        }else{
            numsChefe.pop_back();
        }
    }

    for(int i = 0; i < (int)numsChefe.size(); i++){
        soma += numsChefe[i];
    }

    cout << soma;

    return 0;
}