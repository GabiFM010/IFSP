/*
    Fazer um programa que leia um vetor A contendo 5 números inteiros, calcule e exiba:
        a) O maior elemento;
        b) A posição (índice) do maior elemento.

    gabrielly fernanda faria maia
    tsi 026 - leal - 06.05.2026
*/

#include <stdio.h>

const int TAM = 5;

int main (){

    int A[TAM], posicao = 0;

    for (int i = 0; i < TAM; i++)
    {
        printf("\n Digite o valor [%d]. \n",i);
        scanf("%d",&A[i]);
    }

    posicao = 0;

    for(int i = 0; i<TAM; i++){
        if(A[i]>A[posicao]){
            posicao = i;
        }
    }
    
    printf("\n O maior é %d na posicao %d",A[posicao],posicao);

    return (0);
}
