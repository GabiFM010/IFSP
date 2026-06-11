/*
    Gabrielly Fernanda - TSI - 026 - Leal
    dia: 13/05/2026

    Sorteio de Brindes no Supermercado Algorítmico. O supermercado Algorítmico está fazendo
    uma promoção: quando faz uma compra, o cliente participa de um sorteio e, se agraciado, ganha
    um prêmio.
    O sorteio é feito da seguinte maneira: o comprador fala um número entre 1 e 512. O programa
    pesquisa se esse número está armazenado em um vetor de inteiros com 16 posições, preenchido
    com números aleatórios entre 1 e 512. Se o número falado estiver no vetor, o comprador ganha o
    prêmio.
    Você deve usar recursos da linguagem de programação para gerar os números aleatórios. Não
    devem existir números repetidos no vetor. O programa deve permitir criar um novo conjunto de
    números a qualquer momento. Deve ser possível exibir na tela este vetor, de forma limpa e
    compacta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define TAM 16 // define constante

int gerarNumeroAleatorio(int min, int max);

int main()
{
    int npc, nplayer;

    npc = gerarNumeroAleatorio(0,100); // Gera número de 0 a 100

    int gerarNumeroAleatorio(int min, int max){
        srand((unsigned)time(NULL));
        return( min+rand()%max );
    }

    printf("O numero é %d", npc);

    return 0;

    
}
