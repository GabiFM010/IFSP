// validação de dados

#include <stdio.h>

int main (){

    int numero;
    printf("Digite um número entre 0 e 10:");
    scanf("%d", &numero);

    if ((numero<0) || (numero>10)){
        printf("Numero incorreto! Digite novamente");
    } while ((numero>=0) || (numero<=10)); {
        printf ("Correto!")
    }
}