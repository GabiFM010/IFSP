#include <stdio.h>
#include <stdlib.h> // p/ usar a função system(xdg-open)

int main() {

    // variaveis
    int dia, mes;
    int opcao;

    do { /*repetição pra fazer o programa rodar enquanto o usuario quiser digitar novas datas*/

        do // inicio do programa
        {
            printf("\nDigite o dia: "); // exibe o texto pro usuario faazer o que se pede
            scanf("%d", &dia); // le o que o usuario digitou e armazena na variavel depois do &

            printf("Digite o mes: "); // exibe o texto pro usuario faazer o que se pede
            scanf("%d", &mes); // le o que o usuario digitou e armazena na variavel depois do &

        }while (mes < 1 || mes > 12 || dia < 1);

        // validação de qual é o signo correspondente a data que o usuario digitou
        if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4)) {
            printf("\nSigno: Aries\n");
            system("xdg-open ../aries.html");
        }
        else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5)) {
            printf("\nSigno: Touro\n");
            system("xdg-open touro.png");
        }
        else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) {
            printf("\nSigno: Gemeos\n");
            system("xdg-open gemeos.png");
        }
        else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7)) {
            printf("\nSigno: Cancer\n\n");
            system("xdg-open cancer.png");
        }
        else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)) {
            printf("\nSigno: Leao\n\n");
            system("xdg-open leao.png");
        }
        else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) {
            printf("\nSigno: Virgem\n\n");
            system("xdg-open virgem.png");
        }
        else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) {
            printf("\nSigno: Libra\n\n");
            system("xdg-open libra.png");
        }
        else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) {
            printf("\nSigno: Escorpiao\n\n");
            system("xdg-open escorpiao.png");
        }
        else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) {
            printf("\nSigno: Sagitario\n\n");
            system("xdg-open sagitario.png");
        }
        else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1)) {
            printf("\nSigno: Capricornio\n");
            system("xdg-open capricornio.png");
        }
        else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2)) {
            printf("\nSigno: Aquario\n");
            system("xdg-open aquario.png");
        }
        else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3)) {
            printf("\nSigno: Peixes\n");
            system("xdg-open peixes.png");
        }

        // verifica se o usuario quer continuar digitando novas datas
        printf("\n1 - Verificar outra data\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);

    } while (opcao == 1); // se o usuario escolher opção diferente de um o programa se fecha

    printf("\nPrograma encerrado.\n");

    return 0;
}
