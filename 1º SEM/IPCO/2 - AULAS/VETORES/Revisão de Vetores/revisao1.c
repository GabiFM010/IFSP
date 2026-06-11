/*
    programa para revisar os conceitos basicos de vetor
    15/05 - prof leal
    Gabrielly Fernanda - tsi
*/

#include <stdio.h>
#define TAM 5

int main()
{
    // declarar de vetor com atribuição direta de valores (chumbar)
    int vet_a [TAM] = { 3, 9, 12, 27, 36 };

    //declaração de vetor onde o usuario vai digitar os valores
    int vet_b [TAM];

    // para o usuario digitar os valores é preciso acessar informar o valor de cada posição
    printf("\nDigite os valores do vetor b:\n");

    //nao declra o i pq so vai usar aqui dentro
    //   i inicia em 0, enquanto ele é menor que TAM (só menor, se for <= tem que colocar o return -1)
    //   i+1 e retorna i=1, ainda é menor que TAM, i+1, i=2... ate i=5
    for (int i=0; i<TAM; i++)
    {
        printf("Digite o valor do indice %d", i); //vai rodar o for ate chegar no ultimo indice, esse printf segue isso
        scanf("%d", &vet_b[i]); // armazena em b, i = posição, vet_b[i]=valor dentro da posição
    }

    // exibe os dados dos vetores
    //vetor a
    printf("Os dados do vetor a: {"); //a chave aqui vai ser fechada embaixo
    for(int i=0; i<TAM; i++)
    {
        printf(" %d",vet_a[i]);
    }
    printf("}");

    //vetor b
    printf("Os dados do vetor a: {"); //a chave aqui vai ser fechada embaixo
    for(int i=0; i<TAM; i++)
    {
        printf(" %d",vet_b[i]);
    }
    printf("}");



    return (0);
}
