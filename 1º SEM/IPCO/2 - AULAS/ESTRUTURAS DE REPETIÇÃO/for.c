// estrutura de repetição: tabuada

#include <stdio.h>

int main(){
    int num;
    int i;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Aqui a tabuada do %d:\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("n%d x %2d = %2d", num, 1, (  num*i));
    }
    return 0;
}
