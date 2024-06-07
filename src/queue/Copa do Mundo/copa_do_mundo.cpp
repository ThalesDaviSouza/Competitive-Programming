#include <iostream>
#include <queue>

using namespace std;

#define NUM_JOGOS 15

int main(){
    queue<char> times;
    
    times.push('A');
    times.push('B');
    times.push('C');
    times.push('D');
    times.push('E');
    times.push('F');
    times.push('G');
    times.push('H');
    times.push('I');
    times.push('J');
    times.push('K');
    times.push('L');
    times.push('M');
    times.push('N');
    times.push('O');
    times.push('P');

    for(int i = 0; i < NUM_JOGOS; i++){
        int pontuacaoTime1;
        int pontuacaoTime2;
        char time1;
        char time2;

        cin >> pontuacaoTime1;
        cin >> pontuacaoTime2;

        time1 = times.front();
        times.pop();
        
        time2 = times.front();
        times.pop();
        
        if(pontuacaoTime1 > pontuacaoTime2){
            times.push(time1);
        }
        else{
            times.push(time2);
        }

    }

    cout << times.front();

    return 0;
}

