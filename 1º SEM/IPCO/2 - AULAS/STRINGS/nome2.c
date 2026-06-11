//bibliotecas
#include <stdio.h>
#include <string.h>

//definição de tamanho da string
#define TAM 20

int main()
{
    //declaração de variaveis
    char nome [TAM];
    char nome2 [TAM] = "gabrielly";

    //atribuição de valor
    strcpy(nome,"Gabrielly");

    //exibição do valor - 1
    printf("\nPrimeiro nome: %s\n", nome);

    //exibição do valor - 2
    printf("\nSegundo nome: %s\n", nome2);

    /*
        Retorno:
            -1, se: s1 < s2
            0, se: s1 == s2
            1, se: s1 > s2

            quando compara é uma classificação alfabetica
            menores vem primeiro
            ex: 100 ou 20? 20
                a ou z? a -> tabela ASCII -> AS MAIUSCULAS SÃO menores
                f ou h? f
            compara a primeira letra, se forem iguais vai pra proxima letra
    */

    if(strcmp(nome , nome2) == 0)
    {
        printf("São iguais.");
    }
    else if (strcmp (nome , nome2) < 0)
    {
        printf("O segundo nome é maior.");
    } else 
        {
            printf("O primeiro nome é maior.");
        }

    return (0);
}

/*
Gabrielly fernanda - 22.05
*/
