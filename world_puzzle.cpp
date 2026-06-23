#include<iostream>
#include<string>

using namespace std;

string puzzle_resolvedor(string puzzle [][4],string palavras[],int quantidade_de_palavra,int colunas_linhas){
    string teste;
    string encontradas[quantidade_de_palavra];
    string todas_encontradas = "";

    int indice = 0;

    for (int i= 0 ; i< colunas_linhas ; i ++){
        for (int j = 0; j < colunas_linhas ; j++ ){
           teste = teste + puzzle[i][j];
        }

        for (int k = 0; k < quantidade_de_palavra; k++){
            if (palavras[k] == teste){
                encontradas[indice] = palavras[k];
                indice ++;
            }

        }
        teste = "";
    }

    for (int w =0;w<indice;w++){
        todas_encontradas = todas_encontradas + encontradas[w] + " ";
    }
    
    return todas_encontradas;

}


int main(void){

    string puzzle [4][4];

    puzzle[0][0] = "t";puzzle[0][1] = "h";puzzle[0][2] = "i";puzzle[0][3] = "s";
    puzzle[1][0] = "w";puzzle[1][1] = "a";puzzle[1][2] = "t";puzzle[1][3] = "s";
    puzzle[2][0] = "o";puzzle[2][1] = "a";puzzle[2][2] = "h";puzzle[2][3] = "g";
    puzzle[3][0] = "f";puzzle[3][1] = "g";puzzle[3][2] = "d";puzzle[3][3] = "t";

    string palavras[3] = {"this","wats","fats"};

    string resultado = puzzle_resolvedor(puzzle,palavras,3,4);

    cout << "Palavra encontrada: " << resultado << endl;


}