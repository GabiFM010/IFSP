#include <stdio.h>

int potencia();

int main(){

    int bas, exp;

    printf("Informe a base:\n");
    scanf("%d", &bas);


    printf("Informe o expoente:\n");
    scanf("%d", &exp);

    printf("%d", potencia(bas, exp));

}

int potencia(int base, int exp) {
    if(exp == 0){
        return base;
    }
    else if(exp >= 1){
        return base * potencia(base, exp - 1);
    }
}