// Escreva um programa que leia três números inteiros e indique qual o menor valor dentre eles. O cálculo deve ser feito em uma função.
// Gabrielly Fernanda - TSI 026
// objetivo: programa que exiba o menor numero dentre 3

#include <stdio.h>

int menor (int n1, int n2, int n3)
{ 
    if((n1<n2) && (n1<n3)){
        return(n1);
    }else if ((n2<n1) && (n2<n3)){
        return(n2);
    }else{
        return (n3);
    }
}

int main()
{
    int numero_1, numero_2, numero_3;

    numero_1 = 4;
    numero_2 = 5;
    numero_3 = 2;

    printf("\n o menor dos numeros é %d", menor(numero_1,numero_2,numero_3));
    return (0);
}
