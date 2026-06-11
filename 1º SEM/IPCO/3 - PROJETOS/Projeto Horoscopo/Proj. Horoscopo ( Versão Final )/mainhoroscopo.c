/* Prova 1 - IPCO
    Gabrielly Fernanda e Raquel Cristina
        Criar um programa que leia o dia e o mes que o usuario digitar e exibir a imagem do signo correspondente

        - dia (1-31), mes (1-12)

        - if - else p/ determinar signo - gaby
        - estrutura de repetição p/ que o usuario possa digitar varias datas de nascimento - quel
        - exibir representação visual do signo na tela - quel
        - invalidar datas erradas, ex 31/02, 32/01 - gaby
        ------ deve ser apresentado, obrigatorio o uso do github*/

#include <stdio.h>
#include <stdlib.h> // p/ usar a função system(xdg-open)
#include "biblioteca.c"

int main() {

int verificaData();

    // variaveis
    int dia, mes;
    int opcao;

            do
            { /*repetição pra fazer o programa rodar enquanto o usuario quiser digitar novas datas*/

                do // inicio do programa
                {
                    printf("\nDigite o dia: "); // exibe o texto pro usuario faazer o que se pede
                    scanf("%d", &dia); // le o que o usuario digitou e armazena na variavel depois do &

                    printf("Digite o mes: "); // exibe o texto pro usuario faazer o que se pede
                    scanf("%d", &mes); // le o que o usuario digitou e armazena na variavel depois do &

                    if (!verificaData(dia, mes)) {
                        printf("Data invalida! Tente de novo.\n");
                    }

                }while (!verificaData(dia, mes)); // colocar um printf aqui não exibe nada, tem que serdentro do do{}
                        /*return 0 -> falso */
                        /* return 1 -> verdadeiro */
                        /* O ! inverte o resultado da função, fazendo o loop girar enquanto a condição e falsa */

                // validação de qual é o signo correspondente a data que o usuario digitou
                    if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4)) {
                        printf("\nSigno: Aries\n");
                        system("xdg-open ../html/aries.html");
                    }
                    else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5)) {
                        printf("\nSigno: Touro\n");
                        system("xdg-open ../html/touro.html");
                    }
                    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) {
                        printf("\nSigno: Gemeos\n");
                        system("xdg-open ../html/gemeos.html");
                    }
                    else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7)) {
                        printf("\nSigno: Cancer\n\n");
                        system("xdg-open ../html/cancer.html");
                    }
                    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)) {
                        printf("\nSigno: Leao\n\n");
                        system("xdg-open ../html/leao.html");
                    }
                    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) {
                        printf("\nSigno: Virgem\n\n");
                        system("xdg-open ../html/virgem.html");
                    }
                    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) {
                        printf("\nSigno: Libra\n\n");
                        system("xdg-open ../html/libra.html");
                    }
                    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) {
                        printf("\nSigno: Escorpiao\n\n");
                        system("xdg-open ../html/escorpião.html");
                    }
                    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) {
                        printf("\nSigno: Sagitario\n\n");
                        system("xdg-open ../html/sagitario.html");
                    }
                    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1)) {
                        printf("\nSigno: Capricornio\n");
                        system("xdg-open ../html/capricornio.html");
                    }
                    else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2)) {
                        printf("\nSigno: Aquario\n");
                        system("xdg-open ../html/aquario.html");
                    }
                    else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3)) {
                        printf("\nSigno: Peixes\n");
                        system("xdg-open ../html/peixes.html");
                    }

                    // verifica se o usuario quer continuar digitando novas datas
                    printf("\n1 - Verificar outra data\n");
                    printf("\n0 - Sair\n");
                    printf("\nOpcao:\n ");
                    scanf("%d", &opcao);

            } while (opcao == 1); // se o usuario escolher opção diferente de um o programa se fecha
                
                printf("\nPrograma encerrado.\n"); //aparece se opç "0" for escolhida

    return 0;
}
