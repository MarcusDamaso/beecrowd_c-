#include<iostream>

using namespace std;

void selection_mediana(int a[],int n){

    for (int j = 0; j<n; j++){

        for (int i = 0;i<n;i++){
            int temp;

            if (a[j] < a[i]){
               temp = a[j];
                a[j] = a[i];
                a[i] = temp;  
            }


        }

    }

    cout << a[n/2] << endl;
    
}

int main  (void){


    //int teste1[100];

    //for (int x = 0 ;x<100;x++){
    //    teste1[x] = x;
    //}


    //selection_mediana(teste1,sizeof(teste1)/sizeof(teste1[0]));

    
   // int teste2[1000];

    //for (int y = 0 ;y<1000;y++){
      //  teste2[y] = y;
    //}


    //selection_mediana(teste2,sizeof(teste2)/sizeof(teste2[0]));


    int teste4[100000];

    for (int y = 0 ;y<100000;y++){
        teste4[y] = y;
    }


    selection_mediana(teste4,sizeof(teste4)/sizeof(teste4[0]));


    



    return 0;


}