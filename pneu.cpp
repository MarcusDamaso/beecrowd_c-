#include<iostream>

using namespace std;

int main(void){

    int N,M,diff;

    
    cin >> N;
    while (N > 40 || N < 1){
        cin >> N;
    }
    cin >> M;

    while (M > 40 || M < 1 ){
        cin >> M;
    }
    
    diff = N - M;
    cout << diff << endl;

    

}