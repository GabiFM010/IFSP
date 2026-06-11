// Crie um programa para simular o jogo “Par ou Ímpar”. A cada rodada, o jogador digita um número inteiro, no intervalo de 0 a 100, e a opção se esse número é “Par” ou “Ímpar”. O programa somente deve aceitar um número digitado dentro do intervalo. Se o jogador escolheu a opção “Par”, automaticamente o computador (o oponente) deve ficar com a opção Ímpar e vice-versa. O jogo deve gerar um número aleatório, também no intervalo de 0 a 100, que será atribuído ao computador. Então, o jogo efetua a soma dos números (do jogador e do computador) e determina se o resultado é um número par ou ímpar. Vence quem tiver escolhido a opção correta
// para gerar o número aleatório, use a função
// int gerarNumeroAleatorio(int min, int max){
//      srand((unsigned)time(NULL));
//      return min + rand() % max; }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int gerar(int min, int max);
int imparPar (int soma);

int main()
{
    int nj, npc, soma, escolha;

    do{
        printf("Par ou ìmpar? Digite 1 ou 0:");
        scanf("%d", &escolha);
    } while (escolha > 1 || escolha < 0);    

    do{
        printf("Escolha um numero entre 1 e 100:");
        scanf("%d", &nj);

        if (nj < 0 && nj >100){
            printf("Numero invalido");
        }
    } while (nj < 1 || nj > 100);

    npc = gerar(0,100); // Gera número de 0 a 100

    soma = nj + npc;

    printf("Seu numero foi: %d \n", nj);
    printf("O numero do computador foi: %d ", npc);
    printf("A soma foi: %d \n", soma);

    if ( imparPar(soma)) {     // isso é igual a verificaPar(soma) == 1
        printf("(PAR) ");
        if (escolha == 1) {
            printf("o jogador ganhou");
        } else {
            printf("O Computador ganhou");
        }
    } else {
        printf("(IMPAR) ");
        if (escolha == 0) {
            printf("Voce ganhou");
        } else {
            printf("O Computador ganhou");
        }
    }
    return 0;
}

int imparPar(int soma)
{
    if (soma % 2 == 0){
        return(1);
    } 
    return(0);
} 

int gerar(int min, int max){
    srand((unsigned)time(NULL));
    return( min+rand()%max );
}