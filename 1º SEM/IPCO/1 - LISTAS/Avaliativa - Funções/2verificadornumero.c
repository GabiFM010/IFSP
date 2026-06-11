// Objetivo: criar um verificador de sinal que faça uma função que receba um número inteiro e retorne: 1 se o número for positivo; -1 se for negativo; 0 se for zero.
// Gabrielly Fernanda - TSI 026 - Profº Leal
// data: 10/04/2026
// Lista de exercícios dia 10 de abril - Funções

#include <stdio.h>

// funções
    int retorno();

    //inicio
        int main()
        {
            int numero;

            printf("Digite um número.");
            scanf("%d", &numero);

            printf("Retorno: %d", retorno (numero));
            return(0);
        }        

// funções feitas
    int retorno(int n1)
    {
        if (n1>0){
            //printf("Positivo!");
            return(1);
        } else if (n1<0) {
            //printf("Negativo!");
            return(-1);
        } else if(n1=0){
            //printf("Igual a zero!");
            return(0);
        }
    }