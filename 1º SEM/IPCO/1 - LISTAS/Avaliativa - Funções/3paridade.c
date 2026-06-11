// Objetivo: escrever uma função que receba um número inteiro e retorne 1 se o número for par e 0 se for ímpar
// Gabrielly Fernanda - TSI 026 - Profº Leal
// data: 10/04/2026
// Lista de exercícios dia 10 de abril - Funções

//usar esse pra fazer o jogo com o computador

#include <stdio.h>

// funções
int imparPar(int n1);

//inicio
    int main()
    {
        int numero;

        printf("Digite um número:");
        scanf("%d", &numero);
        
        if (imparPar(numero) == 1){
            printf("Numero Par!");
        }
        else{
            printf("Numero Impar!");
        }
        
        return (0);
    }

//funções pt.2
int imparPar(int n1)
{
    if (n1 % 2 == 0){
        return(1);
    } 
    return(0);
}    