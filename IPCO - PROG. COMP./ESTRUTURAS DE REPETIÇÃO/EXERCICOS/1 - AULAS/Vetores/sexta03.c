#include <stdio.h>

int main(){

int TAM = 10; // aqui fala o tamanho
int num [TAM]; // aqui tem o numero do tamnaho

for(int i=0; i<=TAM; i++){ // 10 numeros que começa no 0: 0,1,2,3,4,5,6,7,8,9
printf("\n Digite o numero %d \n", i);
scanf("%d", &num[i]);
}
for(int i=0; i<=TAM; i++){
printf("\n Numero %d: %d", i, num[i]);
}

return (0);
}

/*
    repita isso.
    quantas vezes?
    de acordo com o numero do vetor.
*/

/*
    vai usar vetor?
    cria variavel TAM.
    funcionou? coloca como constante
*/
