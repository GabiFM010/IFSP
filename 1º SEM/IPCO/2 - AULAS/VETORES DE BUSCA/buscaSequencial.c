#include <stdio.h>
#define TAM 10 // define constante

// funções
int pesqSeq (int numeros[], int x); // vetor e o numero ( x ) do vetor ( numeros []) que ele quer buscar

int main(){

    int numeros[TAM] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    int buscar, posicao; //pede pro user digitar pq depois da pra testar com os outros valores

    printf("Digite o valor que deseja buscar: \n");
    scanf("%d", &buscar);

    posicao = pesqSeq(numeros, buscar); //vai >buscar< o numero de o usuario deseja achar dentro do vetor >numeros<

    if (posicao == 1){
        printf("\nValor não encontrado!\n");
    }
    else{
        printf("Valor encontrado na posição: %d", posicao);
    }
    return 0;

}
    //vai fazer um while ate achar o elemento desejado ou ate o ultimo elemento, pq mesmo sabendo qtos elementos são, não se sabe quando vai achar ele
    int pesqSeq(int numeros[], int x){
        int i = 0;

        while ((numeros[i] !=x) && (i<TAM)){
            i = i+1;
        }
        
        if(i<TAM){
            return(i); //se achou retorna i (posição do vetor)
        }
        else{
            return(-1); // se não achar retorna -1
        }
    }

/*
    a busca sequencial é uma tecnica que funciona em qualquer caso, ou seja, qualquer conjunto de dados que coloca vai dar certo pq ele varre todos os elementos, mas ele e lento pq compara um por um e acha o ultimo elemento ou não acha, 10 vetores, 10 comparações, 1000000 vetores, 1000000 comparações
*/
