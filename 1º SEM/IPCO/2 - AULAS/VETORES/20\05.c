/*
    Escreva um programa que leia um vetor e o decomponha em dois outros vetores, um contendo os
    elementos de ordem ímpar e o outro contendo os elementos de ordem par. Por exemplo, se o vetor
    dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7}, o vetor deve gerar os vetores a = {3, 6, 1, 2, 7} e b = {5, 8, 4, 3}.

*/


#include <stdio.h>
#define TAM 10

int imparPar (n1);

int main()
{
    //declaração de vetores
    int vet [TAM] = {2,5,12,6,7,11,13,8,15,3};
    int i;
    
    //laço de repetição - verificar se é par ou impar
    for ( i = 0; i<TAM; i++)
    {
        printf("\nO vetor é: %d ", i[vet]);
    }

    if (vet == i[vet] % 2){
        printf("\nO vetor dos pares: %d\n", imparPar);
    } 
    
    if (vet != i[vet] % 2){
        printf("\nO vetor dos impares: %d\n", imparPar);
    }

    //fim
    return (0);
}

int imparPar(int n1, int vet){
    if (n1 % 2 == 0){
        int vet;
    } else {
        int vet;
    }
} 
