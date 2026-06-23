#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(void){

    std :: fstream fs;

    fs.open("include2.txt",fs.out);
    fs << "asdubal";
    fs.close();

    return 0;


}