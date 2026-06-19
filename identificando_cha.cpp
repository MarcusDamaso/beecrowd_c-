#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()

{
   int T,certos;

   certos = 0;
   
   int resultados[5];
   unsigned seed = time(0);
   srand(seed);

   T = rand() % 4 + 1;

   for (int i = 0;i<5; i++){
    resultados[i] = rand()%4 + 1;

    if (resultados[i] == T){
        certos ++;
    }

   }
   cout << T << endl;

   for (int i = 0;i<5;i++){
    cout << resultados[i] << " ";
   }
   cout << endl << certos << endl;
    
    return 0;
}