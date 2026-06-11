// Objetivo: Escrever uma função chamada dobro que receba um número inteiro como parâmetro e retorne o dobro desse valor. No main, peça um número ao usuário e exiba o resultado da função
// Gabrielly Fernanda - TSI 026 - Profº Leal
// data: 10/04/2026
// Lista de exercícios dia 10 de abril - Funções

#include <stdio.h>

// funções
    int dobro();

        int main()
        {
            // inclusão de vars
            int numero;

            printf("Digite um número.");
            scanf("%d", &numero);
            
            printf("O dobro do número é: %d", dobro (numero));
            return(0);


        }

// funções feitas
    int dobro(int n1)
    {
        return(n1*2);
    }