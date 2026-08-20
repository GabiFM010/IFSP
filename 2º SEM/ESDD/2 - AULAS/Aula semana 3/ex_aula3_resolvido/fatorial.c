/* -----------------------------------
    Estrutura de Dados
    EXERCICIO DA AULA 3 - Recursividade
    ----------------------------------- */
#include <stdio.h>
#include <time.h> //biblioteca para medir o tempo de execucao

int fatorial_iterativo(int n); //implementacao iterativa
int fatorial_recursivo(int n); //implementacao recursiva


int main() {
    int n = 0;
    int resultado = 0;
    int continuar = 1;
    struct timespec inicio, fim; //cria as variaveis inicio e fim do tipo timespec para medir o tempo de execucao
    //a definicao de struct timespec esta no arquivo time.h, que foi incluido no inicio do codigo
    double tempo_execucao = 0.0; //variavel para armazenar a diferenca entre o tempo final e o tempo inicial, ou seja, o tempo que a execucao levou para ser concluida

    while(continuar){
        printf("Digite um numero natural maior ou igual a zero\n");
        scanf("%d",&n);

        //verifica se o numero eh negativo
        if(n < 0){
            printf("Numero invalido, digite um numero natural maior ou igual a zero\n");
        }
        else {

            /* ---- chamada da versao iterativa ---- */
            clock_gettime(CLOCK_MONOTONIC, &inicio); //pega o tempo de inicio da contagem 
            resultado = fatorial_iterativo(n); 
            clock_gettime(CLOCK_MONOTONIC, &fim); //pega o tempo de fim da contagem

            printf("Resultado iterativo = %d \n", resultado);

            tempo_execucao = (double)(fim.tv_sec - inicio.tv_sec) * 1000.0 + (double)(fim.tv_nsec -inicio.tv_nsec) / 1000000.0; //calcula o tempo de execucao em segundos
            //tv_sec e tv_nsec sao os campos da struct timespec que armazenam o tempo em segundos e nanosegundos, respectivamente
            printf("Tempo de execucao da versao iterativa: %f segundos\n", tempo_execucao);

            /* ---- chamada da versao recursiva ---- */
            clock_gettime(CLOCK_MONOTONIC, &inicio); //pega o tempo de inicio da contagem
            resultado = fatorial_recursivo(n); 
            clock_gettime(CLOCK_MONOTONIC, &fim); //pega o tempo de fim da contagem

            printf("Resultado recursivo = %d \n", resultado);

            tempo_execucao = (double)(fim.tv_sec - inicio.tv_sec) * 1000.0 + (double)(fim.tv_nsec -inicio.tv_nsec) / 1000000.0; //calcula o tempo de execucao em segundos
            printf("Tempo de execucao da versao recursiva: %f segundos\n", tempo_execucao);
        }
        printf("Deseja continuar? (1 - sim / 0 - nao)\n");
        scanf("%d",&continuar);
    }

    return 0;
}

//calculo iterativo
int fatorial_iterativo(int n){
    int fat = 1;
    printf("Calculando fatorial de %d \n", n);
    while(n > 1){
        fat = fat*n;
        n--;
    }
    return fat;
}

//calculo recursivo
int fatorial_recursivo(int n){
    int fat = 1;
    printf("Calculando fatorial de %d \n", n);
    if(n == 0 || n == 1){ //condicao de parada
        printf("%d! = 1\n", n);
        return 1;
    }

    //return n * fatorial_recursivo(n - 1); //chamada recursiva
    //a linha acima foi comentada e substituida pelas proximas para que o printf seja executado antes da chamada recursiva, mostrando a pilha de chamadas recursivas
    fat = n * fatorial_recursivo(n - 1); //chamada recursiva
    printf("%d! = %d\n", n, fat);
    return fat;
}