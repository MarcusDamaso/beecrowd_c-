#include <iostream>
#include <iomanip>



#define n  3.14159
#define newline '\n'
using namespace std;

int main(void){

    double  R,A;
    cin >>  R;
    A = n * R * R;

    //necessário configurar o cout para saida com 4 casas decimais
    cout << fixed << setprecision(4);

    cout << "A=" << A << endl;
    return 0;
}