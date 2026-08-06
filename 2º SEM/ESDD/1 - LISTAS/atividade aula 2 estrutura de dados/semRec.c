#include <stdio.h>
#include <string.h>

int funcaoFatorial( int n1, int fat);
void Menu(void);

int main(){

    do
    {
        int numero, fat = 1, escolha;
        //int resultado;

        printf("Digite um número, podendo ser maior ou igual a zero:\n");
        scanf("%d", &numero);

        do{
            if (numero <= 0) printf("Número inválido! Digite outro");
            /*printf("Número inválido! Digite outro");*/
        } while(numero <= 0);

        printf("%d", funcaoFatorial(numero, fat));
        
        // resultado = funcaoFatorial(numero, fat);

        // aqui não pode ter return(funcaoFatorial(), da erro pq não é assim que se mostra/exibe função

        exibirMenu();
        printf("Escolha uma ação");
        scanf("%d", &escolha);

        if (escolha == 2){
            printf("Encerrar.")
        }


    } while (escolha && 1);
    
    
}

int funcaoFatorial(int n1, int fat){
    /*int n1;
    int fat;*/

    for(int i = n1; i > 0; i--){
        fat = fat * i;
        // printf("\n%d\n", fat);
    }
    return (fat);
}

void exibirMenu(void) {
    printf("1 - Cotinuar calculando\n");
    printf("2 - Sair\n");
}
