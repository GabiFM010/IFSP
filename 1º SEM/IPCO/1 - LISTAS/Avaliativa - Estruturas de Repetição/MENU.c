//Menu
// Exercicio avaliativo de estruturas de repetição
// Atividade 1: programa em linguagem C um  simulador de menu de uma livraria que deverá ser exibido continuamente até que o usuario selecione "sair"
// Materia: introdução a programação de computadores Professor: Leal
// Gabrielly Fernanda - TSI 026 - 27/03/2026

/* inclusão de bibliotecas prontas */
#include <stdio.h>
#include <stdlib.h>

/*inicio*/
int main()
{
    /*inclusão de variaveis*/
    int escolha; // não foram necesarias maias variaveis pq o witch case ja mata todas as opções
    do{
        /*inicio*/
        system("cls"); //limpa o terminal antes de mostrar o menu novamente no laço de repetição no windows
        printf("1 - Cadastrar um livro;\n");
        printf("2 - Listar um livro;\n");
        printf("3 - Buscar um livro;\n");
        printf("4 - Sair um livro;\n");
        printf("Digite o que deseja fazer: \n");
        scanf("%d", &escolha);

        switch( escolha ){
            case 1:
                printf(" 'CADASTRAR ' selecionado. \n");
                break;
            case 2:
                printf(" 'LISTAR ' selecionado. \n");
                break;
            case 3:
                printf(" 'BUSCAR ' selecionado. \n");
                break;
            case 4:
                printf(" 'SAIR ' selecionado. \n");
                break;
            default:
                printf("Valor inválido! \n");
        }
    } while( escolha != 4); //se escolha for igual a 4 o programa encerra
    return 0;
}
