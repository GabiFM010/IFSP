#include <stdio.h>

int menor (int n1, int n2)
{ 
    if(n1<n2){
        return(n1);
    }else{
        return(n2);
    }
}

int main() //função main
{

    int numero_1, numero_2;

    numero_1 = 4;
    numero_2 = 5;

    printf("\n o menor dos numeros é %d", menor(numero_1,numero_2));
    return (0);
}
