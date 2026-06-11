//Caixa eletronico
// Exercicio avaliativo de estruturas de repetição
// Atividade 2: programa em linguagem C um  simulador de caixa eletronico simulando suas operações através de transações de 1 à 3, considerando duas contas, seus limites devem ser informados nas variaveis, e tambem validar retirada de dinheiro dependendo do saldo        
// Materia: introdução a programação de computadores Professor: Leal
// Gabrielly Fernanda - TSI 026 - 28/03/2026

#include <stdio.h>
#include <stdlib.h>
/*inicio*/
int main()
{
    /*inclusão de variaveis*/
    int cod;
    int cod_c1 = 345; // não pode colocar dois codigos de conta numa variavel só
    int cod_c2 = 567;
    int escolha;
    float saldo; // essa variavel tem queser do mesmo tipo das que ela vai chamar senão da ruim, nesse caso ai, float
    float saldo_c1 = 450.00;
    float saldo_c2 = 210.40;
    float val;

        /*inicio*/
        system("cls"); //limpa o terminal antes de mostrar o menu novamente no laço de repetição no windows
        
        printf("Bem vindo(A)! Informe o número de sua conta: \n");
        scanf("%d", &cod);

        if ( cod == cod_c1 ){
            saldo = saldo_c1;
            //val 
        }
        else if ( cod == cod_c2 ){ 
            saldo = saldo_c2;
        } else{
            printf("\n Conta inexistente!\n");
        }

        do
        {
            printf("1 - Sacar; \n");
            printf("2 - Depositar; \n");
            printf("3 - Verificar saldo; \n");
            printf("4 - Sair;");
            printf("Selecione uma operação:");
            scanf("%d", &escolha);

            switch ( escolha )
            {
                case 1:
                    printf(" ' SACAR' selecionado. \n");
                    printf("Informe o valor que deseja sacar: \n");
                    scanf("%f", &val);
                        if (val <= saldo){
                            printf("Saque realizado! Novo saldo: %f \n", saldo-val);
                        } else{
                            printf("Saldo insulficiente. \n");
                        }
                    break;
                case 2:
                    printf(" ' DEPOSITAR ' selecionado. \n");
                    printf("Informe o valor que deseja depositar: \n");
                    scanf("%f", &val);
                    printf("Seu novo saldo é: %d \n", saldo + val);
                    break;
                case 3:
                    printf(" ' VERIFICAR SALDO ' selecionado. \n");
                    printf("Seu saldo é %f \n", saldo);
                    break;
                case 4:
                    printf(" ' SAIR ' selecionado. ");
                    break;
                default:
                    printf("Opção indisponível! \n");
            }
        }while( escolha != 4 ); //se escolha for igual a 4 o programa encerra

    return 0;
} 


