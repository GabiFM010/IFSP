#include <stdio.h>

int main(){
    int inicio, fim, contador, soma;
    soma = 0;

    printf("digite o inicio do intervalo:");
    scanf("%d", &inicio);

    printf("digite o fim do intervalo:");
    scanf("%d", &fim);

    for(contador=inicio; contador<=fim; contador = contador+1){
        soma = soma + contador;
    }
    printf("o valor da soma = %d \n", soma);

    return 0;
}