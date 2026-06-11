/*
    programa para revisar os conceitos basicos de vetor
    15/05 - prof leal
    Gabrielly Fernanda - tsi

    criou função em tudo que era igual
*/

#include <stdio.h>
#define TAM 5

int exibeVetor( int vetor[]); //função pra passar vetor, se não tivesse [] seria variavel comum

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
        printf("Digite o valor do indice %d ", i); //vai rodar o for ate chegar no ultimo indice, esse printf segue isso, o espaço depois do %d faz diferença
        scanf("%d", &vet_b[i]); // armazena em b, i = posição, vet_b[i]=valor dentro da posição
    }

    // exibe os dados dos vetores
    //vetor a
    printf("Os dados do vetor a"); //a chave aqui vai ser fechada embaixo
    exibeVetor(vet_a);

    // aqui tinha um if, a função eliminou a necessidade dele

    //vetor b
    printf("\nOs dados do vetor b \n"); //tirou a chave e colocou na função
    exibeVetor(vet_b);

    // aqui tinha um if, a função eliminou a necessidade dele

    return (0);
}

// funções

int exibeVetor(int vetor[]) // precisa de [] senão seria variavel comum
{
    //olha as chaves aqui
    printf("{ ");
    for(int i=0; i<TAM; i++)
    {
        printf(" %d", vetor[i]);
    }
    printf("}");
    return 0;
}
