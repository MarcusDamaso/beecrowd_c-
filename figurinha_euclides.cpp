#include <iostream>

using namespace std;

// O seu MDC está perfeito e intocado
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(void) {
    // Acelera a leitura/escrita de dados (essencial no Beecrowd)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N; // Lê a quantidade de testes sem questionar os limites
    
    int f1, f2;
    // Lê a dupla, calcula e já joga na tela, sem guardar em arrays
    for (int i = 0; i < N; i++) {
        cin >> f1 >> f2;
        cout << gcd(f1, f2) << "\n"; 
    }

    return 0;
}