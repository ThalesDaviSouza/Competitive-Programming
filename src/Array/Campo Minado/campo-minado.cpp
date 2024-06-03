#include <iostream>

int main(){
    int n;
    
    std::cin >> n;

    int tabuleiro[n];
    int result[n];

    for(int i = 0; i < n; i++){
        std::cin >> tabuleiro[i];
    }
    
    for(int i = 0; i < n; i++){
        result[i] = 0;
        
        if(i != 0 ){
            result[i] += tabuleiro[i-1] != 0 ? 1 : 0;
        }
        if(i+1 != n){
            result[i] += tabuleiro[i+1] != 0 ? 1 : 0;
        }
        if(tabuleiro[i] != 0){
            result[i] += tabuleiro[i] != 0 ? 1 : 0;
        }
    }

    for(int i = 0; i < n; i++){
        std::cout << result[i] << "\n";
    }

    return 0;
}
