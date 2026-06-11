#include <stdio.h>

int main(){
    int numero, dobro;

    for(int i=1; i<=3 ; i++){
        printf("\n Digite um numero: \n");
        scanf("%d", &numero);

        dobro = numero * 2;

        printf("\n O dobro de %d é %d \n", numero, dobro);

        if( dobro > 100 ){
        printf("\n O dobro do numero e maior que 100. \n");
        }
        else {
            printf("\n o dobro do numero não e maior que 100. \n");
        }
    }
    return (0);
}
