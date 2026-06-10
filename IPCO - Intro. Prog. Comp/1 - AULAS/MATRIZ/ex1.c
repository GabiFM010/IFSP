#include <stdio.h>

#define LINHA 2
#define COLUNA 3

int main(){

    /*
        exemplo de definição de matriz com valores definidos na criação de variavel
    */
    int mat /*x*/[LINHA]/*y*/[COLUNA] = { {2,4,6} , {9,7,5} };

    /*  A MATRIZ É ASSIM
          |[2] [4] [6]|
          |[9] [7] [5]|
    */

    /*
        exibe os dados armazenados na matriz
    */
    printf("Os dados armazenados na matriz são: \n");
        for (int i=0; i< LINHA; i++){ // le todas as linhas
            for (int j=0; j < COLUNA; j++){ // le todas as ciolunas
                printf("%d", mat[i][j]); //exibe o que ta no indice daquela repetição de linha e coluna
            }
            printf("\n");
        }

    return(0);
}