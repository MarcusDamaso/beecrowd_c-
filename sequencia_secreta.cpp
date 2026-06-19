#include<iostream>

using namespace std;

int main(void){

    int N,circular;

    circular = 0;
    
    cin >> N;
    int sequencia[N];

    for (int i = 0; i < N ; i++){

        cin >> sequencia[i];

    }

    for (int i = 0; i< N; i ++){
        if (sequencia[i+1] != sequencia[i+2]) 
            circular ++;

    }
    cout << circular << endl;
}