/*
    ex.5
    dado um vetor ordenado, forneça a maior diferença entre dois elementos consecutivos

    15.05 - Gabrielly Fernanda - tsi
    escolhemos ja preenchido então apagou-se tudo do b
*/

/*
        3-9=6
        12-9=3
        12-27=15
        27-36=9
        36-48=12
        48-54=6
        para aqui, não exite mais comparação -> TAM-1
    */
#include <stdio.h>
#define TAM 8

int exibeVetor( int vetor[]); //função pra passar vetor, se não tivesse [] seria variavel comum
int exibeMaiorDif( int vetor[]); //função pra exibir diferenca


int main()
{
    //declaração
    int vet_a [TAM] = { 3,5,9,16,17,20,26,31 }; 
    
        //int maior_diferenca, dif;

    //vetor a
    printf("Os dados do vetor são \n"); //a chave aqui vai ser fechada embaixo
    exibeVetor(vet_a);
    
    //exibe diferenca
    printf("A maior diferença é igual a %d ", exibeMaiorDif(vet_a));    

    return (0);
}

// funções

int exibeMaiorDif(int vetor[]){
    int maior_dif, dif;
    int posicao = 0;

    maior_dif = vetor[1] - vetor[0];
    for(int i=0; i<TAM-1; i++){

        dif = vetor[i+1]-vetor[i];
        if(dif > maior_dif){
            maior_dif = dif;
            posicao = i;
        }
        
    }
    printf("Posições: %d e %d", posicao, posicao+1);
    return(maior_dif);
}

int exibeVetor(int vetor[]) // precisa de [] senão seria variavel comum
{
    //olha as chaves aqui
    printf("{ ");
    for(int i=0; i<TAM; i++){
        printf(" %d", vetor[i]);
    }

    printf("}");
    return 0;
}
