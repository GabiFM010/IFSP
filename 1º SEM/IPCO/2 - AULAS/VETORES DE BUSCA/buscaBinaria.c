#include <stdio.h>
#define TAM 10 // define constante

// funções
int pesqSeq (int numeros[], int x); // vetor e o numero ( x ) do vetor ( numeros []) que ele quer buscar
int pesqBin (int numeros[], int x);

int main(){

    // int numeros[TAM] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    int numeros [TAM] = {14, 18, 27, 32, 37, 60, 64, 70, 90, 95};
    int buscar, posicao; //pede pro user digitar pq depois da pra testar com os outros valores

    printf("Digite o valor que deseja buscar: \n");
    scanf("%d", &buscar);

    /* posicao = pesqSeq(numeros, buscar); */ //vai >buscar< o numero de o usuario deseja achar dentro do vetor >numeros<
    posicao = pesqBin(numeros, buscar);

    if (posicao == -1){
        printf("\nValor não encontrado!\n");
    }
    else{
        printf("Valor encontrado na posição: %d", posicao);
    }
    return 0;


    if (posicao == 1){
        printf("\nValor não encontrado!\n");
    }
    else{
        printf("Valor encontrado na posição: %d", posicao);
    }
        return 0;

    }
    
    //vai fazer um while ate achar o elemento desejado ou ate o ultimo elemento, pq mesmo sabendo qtos elementos são, não se sabe quando vai achar ele
    int pesqSeq(int numeros[], int x){
        int i = 0;

        while ((numeros[i] !=x) && (i<TAM)){
            i = i+1;
        }
        
        if(i<TAM){
            return(i); //se achou retorna i (posição do vetor)
        }
        else{
            return(-1); // se não achar retorna -1
        }
    }

    int pesqBin(int numeros [], int x){
        int ini=0, fim=TAM, meio;
        while(ini<=fim){
            meio = (ini+fim)/2;
            if (numeros[meio] == x) { return meio;}
            if (numeros[meio] < x) { ini = meio +1;} // adianto o meu inicio
            if (numeros[meio] > x) {fim = meio-1;}
        }
        return -1;
    }

/*
    a busca ordenada / binaria coloca eles em ordem bonitinha (conjunto ordenado) (pode ser colocado só em ordenados)
    é tipo um livro, sla, quer a pagina 50, vc abre mais ou menos o livro no meio e ve se ta muito longe ou muito perto


    14, 18, 27, 32, 37, 60, 64, 70, 90, 95 -> 10 numeros, 9 indices

    x = 37

    0 + 9(indices) / 2 = 9 / 2 = 4,5 -> 4 -> checa a posição 4
    5 (proxima posicao) + 9(indices) / 2 = 14 / 2 = 7 -> checa a posição 7
    5 (proxima posicao) + 6(anterior) / 2 = 11 / 2 = 5 -> achou


*/
