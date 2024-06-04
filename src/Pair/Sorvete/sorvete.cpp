#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tamPraia, numSorveteiros;
    vector<pair<int, int>> intervalos;

    cin >> tamPraia;
    cin >> numSorveteiros;

    for(int i = 0; i < numSorveteiros; i++){
        int inicio, fim;
        cin >> inicio;
        cin >> fim;

        if((int)intervalos.size() == 0){
            intervalos.push_back({inicio, fim});
        }
        else{
            int ultimoFimIntervalo = intervalos[(int)intervalos.size() - 1].second;
            if(ultimoFimIntervalo >= inicio){
                intervalos[(int)intervalos.size() - 1].second = fim <= ultimoFimIntervalo ? ultimoFimIntervalo : fim;
            }else{
                intervalos.push_back({inicio, fim});
            }
        }
    }

    for(int i = 0; i < (int)intervalos.size(); i++){
        cout << intervalos[i].first << " " << intervalos[i].second << endl;
    }

    return 0;
}