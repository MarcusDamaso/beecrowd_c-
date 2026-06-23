#include<iostream>

using namespace std;

int main(void){

    int curupira_q,boitata_q,boto_q,mapinguari_q,iara_q;;
    int curupira = 300;
    int boitata = 1500;
    int boto = 600;
    int mapinguari = 1000;
    int iara = 150;
    int chica = 225;
    int total = 0;

    cin >> curupira_q;
    cin >> boitata_q;
    cin >> boto_q;
    cin >> mapinguari_q;
    cin >> iara_q;

    total = chica + curupira * curupira_q + boitata * boitata_q + boto * boto_q + mapinguari * mapinguari_q + iara * iara_q;
    cout << total << endl;
    

}