#include <stdio.h>

int menor (int n1, int n2){    

    return(n1+n2); // posiçãp importa
}

int main(){ //função main

    int numero_1, numero_2;

    numero_1 = 4;
    numero_2 = 5;

    printf("\n o menor dos numeros é %d", menor(numero_1,numero_2));
    return (0);
}

// trecho de codigo de nome main, int é o retorno, garante o retorno inteiro / trouxe o trecho de codigo que estava na linha 13 e trouxe pra ca
// nn precisa ter o mesmo nome, só importa o valor que chega
// função: ver aquilo que vai se repetir
// int numero_1, numero_2, soma; -> "soma" foi apagado por que foi criada uma função de soma de dois numeros inteiros ali encima, que agora foi colocada dentro daqui, da função main
// nn precisa ter o mesmo nome, só importa o valor que chega
