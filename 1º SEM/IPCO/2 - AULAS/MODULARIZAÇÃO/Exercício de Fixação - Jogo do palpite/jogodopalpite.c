// Gabrielly Fernanda Faria Maia - TSI 026 - Leal
// dia 17.04.2026
// criar um jogo de palpites em que o usuario chute tres numeros, o programa deve exibir a porcentagem de quao longe esat o palpite e depois de 3 tentativas o programa encerra

#include <stdio.h>
#include "1 - BIBLIOTECA.c"
// #include <time.h>

// funções
int gerar(int min, int max);
float proximidadePalpite(float prox, int n1, int n2, int sub);

// inicio
int main()
{
    int n_user, n_randon, tentativas = 0;
    int min, max;
    /*float prox;*/
    
    printf("Qual sera o menor?");
    scanf("%d", &min);
    printf("Qual sera o maior numero possivel?");
    scanf("%d", &max);
 
    n_randon = gerar(min ,max); // Gera número de 0 a 100
    
    do
    {    
        tentativas ++;

        printf("Numero pensado! Seu palpite é: \n");
        scanf("%d", &n_user);
        
        if(n_user == n_randon){
            printf("Voce acertou!");
        }

        if(proximidadePalpite <= 10/100){
            printf("Muito quente! Perto...");
        }
        if(proximidadePalpite <= 30/100){
            printf("Quente! Perto...");
        }
        if(proximidadePalpite <= 60/100){
            printf("Frio! Você esta muito distante...");
        }
        if(proximidadePalpite >= 61/100){
            printf("Muito distante!!!");
        }
        
    } while (tentativas < 3 && n_user != n_randon);
    printf("O numero gerado é: %d", n_randon);

    return 0;
}
