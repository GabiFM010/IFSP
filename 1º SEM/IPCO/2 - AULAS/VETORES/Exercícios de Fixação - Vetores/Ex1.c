/* gabrielly fernanda faria maia
   tsi 026 - leal - 06.05.2026
*/

/*Exercicio 1. Dado um vetor A definido como int A[10], preenchê-lo com os números inteiros 1,2,3, ...,10*/

#include <stdio.h>

int main(){

   int TAM = 10; 
   int num [TAM]; 

   for(int i=0; i<=TAM; i++){ 
   printf("\n Digite o numero %d \n", i);
   scanf("%d", &num[i]);
   }

   for(int i=0; i<=TAM; i++){
   printf("\n Numero pos[%d]: %d", i, num[i]); // i = posição, num[i]=valor dentro da posição
   }

   return (0);
}
