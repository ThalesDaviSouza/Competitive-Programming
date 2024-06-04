#include <iostream>
#include <vector>

using namespace std;

bool naoEstaContido(
    pair<pair<int,int>, pair<int,int>> retangulo0,
    pair<pair<int,int>, pair<int,int>> retangulo1
    )
{
    return (
        retangulo0.second.first < retangulo1.first.first 
    ||  retangulo1.second.first < retangulo0.first.first 
    ||  retangulo0.first.first > retangulo1.second.first 
    ||  retangulo1.first.first > retangulo0.second.first 
    ||  retangulo0.second.second < retangulo1.first.second 
    ||  retangulo1.second.second < retangulo0.first.second 
    ||  retangulo0.first.second > retangulo1.second.second 
    ||  retangulo1.first.second > retangulo0.second.second
    );
}

int main(){
    vector<pair<pair<int,int>, pair<int,int>>> retangulos;

    pair<pair<int,int>, pair<int,int>> retangulo1;
    pair<pair<int,int>, pair<int,int>> retangulo2;

    int x0, y0, x1,y1;

    int result = 0;

    for(int i = 0; i < 2; i++){
        cin >> x0;
        cin >> y0;
        cin >> x1;
        cin >> y1;

        retangulos.push_back({{x0, y0}, {x1,y1}});
    }

    retangulo1 = retangulos[0];
    retangulo2 = retangulos[1];

    if(naoEstaContido(retangulo1, retangulo2)) 
    {
        cout << 0;
    }
    else{
        cout << 1;
    }

    return 0;
}
