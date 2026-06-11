/*
    A amplitude de uma relação de números reais é a diferença entre o maior e o menor valor da
    relação. Por exemplo, a amplitude da relação 5, 7, 15, 2, 23 21, 3, 6 é 21 (porque 23 – 2 = 21).
    Escreva um programa que receba um conjunto de 6 números e forneça sua amplitude.

    Gabrielly Fernanda - tsi 026
    arqipco - e.leal
*/

#include <stdio.h>
#define TAM 6

int main()
{
    // definição do vetor
    int vet[TAM], auxMin = 0, auxMax = 0;
    int amplitude;
    
    // laço pra digitar um numero ate acabar o espaço do vetor
    for (int i=0; i<TAM; i++){
        printf("Digite um numero inteiro: \n");
        scanf("%d", &vet[i]);
    }

    // laço pra exibir o vetor criado
    for (int i=0; i<TAM; i++){
        printf("%d\n", vet[i]);
    }

    // na primeira repetição vai ser 0 mesmo, so colocar i=1 pra mudar isso, na segunda vai ficar: vetor[1]>vet[0], tonou comparação, se for maior o auxiliar vai armazenar o vet[1](vetor do 1º indice e assim por diante)
    for(int i = 0; i<TAM; i++){
        if(vet[i]>vet[auxMax]){
            auxMax = i;
        }
    }

    for(int i = 0; i<TAM; i++){
        if(vet[i]<vet[auxMin]){
            auxMin = i;
        }
    }
    
    /*printf("%d", auxMax);
    printf("%d", auxMin);*/

    amplitude = vet[auxMax] - vet[auxMin]; // tem que ser assim (não amplitude = auxMax - auxMin) pq senão só subtrai os indices, dessa forma ele localiza o vetor que ta no indice do auxiliar e subtrai do outro

    printf("A amplitude é: %d .\n", amplitude);

    return(0);
    
}
