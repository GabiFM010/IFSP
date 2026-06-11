/*
    Escreva um programa que leia um vetor e o decomponha em dois outros vetores, um contendo os
    elementos de ordem ímpar e o outro contendo os elementos de ordem par. Por exemplo, se o vetor
    dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7}, o vetor deve gerar os vetores a = {3, 6, 1, 2, 7} e b = {5, 8, 4, 3}

    Gabrielly Fernanda - tsi 026
    arqipco - e.leal
*/

#include <stdio.h>
#define TAM 10

int main()
{
    // definição do vetor
    int vet[TAM]= {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    
    //vetores novos
    int imp[TAM], par[TAM], auxImp = 0, auxPar = 0;

    for (int i=0; i<TAM; i++){ //tem que ser menor pq tam vai ate o 10e começa do 0, ou seja, 11 numeros, então passa da qtd de vetores
        if (i % 2){
            //o vetor par vai receber o numero do indice que estiver rodando na hora, tipo, se estiver na repetição 6 portando vetor 66 vai ficar 'par[auxPar]=vet[6]'
            par[auxPar] = vet[i]; // o auxPar aqui, na 1ª repetição esta em 0, então pra ele ver o vetor do indice certo ele tem que ser incrementado
            auxPar++;             
        }else{
            imp[auxImp] = vet[i]; // o auxPar aqui, na 1ª repetição esta em 0, então pra ele ver o vetor do indice certo ele tem que ser incrementado
            auxImp++; 
        }
    }

    for(int i=0; i<auxImp; i++){ // aux pq ele tem o tamnanho exato do vetor
        printf("%d\n", imp[i]);
    }
    printf("\n");
    for(int i=0; i<auxPar; i++){
        printf("%d\n", par[i]);
    }
    
    return(0);
    
}
