#include<iostream>

using namespace std;

int fatorial(int n){
    
    if (n == 0) 
        return 1;
    return n * fatorial(n - 1);

}

int main (void){

    int fat,resultado;
    cin >> fat;
    resultado = fatorial(fat);
    cout << resultado << endl;
}