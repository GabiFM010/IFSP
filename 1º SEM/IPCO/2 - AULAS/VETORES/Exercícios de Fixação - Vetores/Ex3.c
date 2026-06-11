/* gabrielly fernanda faria maia
   tsi 026 - leal - 06.05.2026
*/

#include <stdio.h>

int main(){

   int TAM = 10; 
   int num [TAM]; 

   for(int i=0; i<=TAM-1; i++){ 
   printf("\n Digite o numero %d \n", i);
   scanf("%d", &num[i]); // ja leu os 10
   }
   for(int i=TAM-1; i>=0; i++){
   printf("\n Numero %d: %d", i, num[i]); //ENTÃO EXIBE DE TRAS PRA FRENTE
   }

   return (0);
}
