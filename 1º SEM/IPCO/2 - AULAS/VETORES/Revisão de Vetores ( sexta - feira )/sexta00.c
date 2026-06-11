#include <stdio.h>

const int TAM = 5;

int main (){

    // declaração do vetor
    int vetor[TAM];

    // atribuição dos valores
    for(int i=0;i<TAM;i++){ 
        vetor[i] = i+10; 
    }
    
    // impressão do vetor
    printf("\n Vamos exibir o vetor... \n");
    for(int i=0;i<TAM;i++){
        printf("\n %d",vetor[i]);
    }

    return (0);
}

/*  ultima posição = 3
    ultimo indice/elemento = de 0 a 2 ( de 0 a n-1 ) 

   deu erro aqui pq ele jogou o valor que tava na memoria dele 
   c permite sobrepor memoria 

   i < x tem que ser equivalente ao vetor 

   esse int i so podera ser usado dentro da estrutura for, fora dela ele não existe 

   se o i dentro de [] fosse 0 ia acontecer a linha 31 

   na linguagem C o primeiro do indice é o 0 */
