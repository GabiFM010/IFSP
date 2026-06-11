//bibliotecas
#include <stdio.h>
#include <string.h>

//definição de tamanho da string
#define TAM 20

int main()
{
    //declaração de variaveis
    char nome [TAM];
    char sobrenome [TAM] = " Faria Maia";//outra forma de instanciar
    

    //atribuição de valor , igual a printf("blavblabloa %d", nome) - leal
    strcpy(nome,"Gabrielly");

    //exibição do valor - leal
    printf("\nNome: %s\n", nome);

    //atribuição de valor - euu
    strcpy(sobrenome, "Fernanda");

    //exibição do valor - euu
    printf("\nSobrenome: %s\n", sobrenome);

    return (0);
}

/*
Gabrielly fernanda - 22.05
*/
