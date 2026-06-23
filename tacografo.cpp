#include<iostream>

using namespace std;

int main(void){


    int N,T,V;
    int d_total = 0;

    cin >> N;
    while (N < 1 || N > 1000){
        cin >> N;
    }


    for (int i = 0;i<N;i++){

        cin >> T;
        while (T < 1 || T > 100){
            cin >> T;
        }

        cin >> V;

        while (V < 0 || V > 120){
            cin >> V;
        }

        d_total += V*T;

    }

    cout << d_total << endl;
}