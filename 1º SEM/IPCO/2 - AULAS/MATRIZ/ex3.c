#include <stdio.h>

#define LINHA 2
#define COLUNA 3

int exibirMatriz(int mat[LINHA][COLUNA]);

int main(){

    // exemplo de definição de matriz 
    
    int mat /*x*/[LINHA]/*y*/[COLUNA];

    // leitura dos valores
        for (int i=0; i < LINHA; i++){
            for (int j=0; j < COLUNA; j++){
                printf("informe a mat(riz) [%d][%d]: ", i, j);
                scanf("%d", &mat[i][j]);
            }
        }

    // EXIBE A MATRIZ
        exibirMatriz(int mat[LINHA][COLUNA]){
                printf("\n os dados armazenados são");
        }


    // exibição dos valores
        printf("Os dados armazenados na matriz são: \n");
            for (int i=0; i< LINHA; i++){
                for (int j=0; j < COLUNA; j++){
                    printf("%d", mat[i][j]); //exibe o que ta no indice daquela repetição de linha e coluna
                }
                printf("\n");
            }

    return(0);
}
