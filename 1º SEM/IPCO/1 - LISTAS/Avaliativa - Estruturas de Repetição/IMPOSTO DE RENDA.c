// Imposto de renda
// Exercicio avaliativo de estruturas de repetição
// Atividade 3: Deseja-se calcular o imposto de renda (fictício) de um contribuinte. Para isto escreva um programa que: leia os dados do contribuinte (cpf, rendimento mensal, contribuição previdenciaria e n de dependentes)       
// Materia: introdução a programação de computadores; Professor: Leal
// Gabrielly Fernanda - TSI 026 - 02/04/2026

// observações --------------
// valor total das deduções = contribuição previdenciária + dedução
// cada dependente tem valor fixo de R$ 20,00. Crie uma constante para armazenar esse valor dos dependentes
// Cálculo do imposto devido: (base de cálculo x alíquota) - parcela a deduzir
//exiba todos os dados lidos e calculados

#include <stdio.h>

int main()
{
        // variáveis aqui
        int cpf;
        float salario;
        float contribuicao;
        int dependentes; 
        float deducao; // vai sr o valor que vai ser tirado por causa ds dependesntes
        float total_deducoes;
        float imposto;
        float base;
        float aliquota = 0, parcela = 0; // aliquota é a porcentagem de imposto que vai ser paga variando de renda pa renda, aqui aliquota e parcela estao comecando com 0

        // entrada
        printf ("Informe seu CPF: \n");
        scanf("%d", &cpf);
        printf ("Informe seu RENDIMENTO MENSAL: \n");
        scanf("%f", &salario);
        printf("Informe sua CONTRIBUIÇÃO MENSAL: \n");
        scanf("%f", &contribuicao);
        printf("Informe o NUMERO DE DEPENDENTES \n");
        scanf("%d", &dependentes);

        // cálculos - tem que ser depois 
        deducao = dependentes * 20;
        total_deducoes = contribuicao + deducao;

        base = salario - total_deducoes; //calcula o que sobra 

            if (base <= 100){
                aliquota = 0;
                parcela = 0;
            } else if (base <= 200){
                aliquota = 0.15;
                parcela = 16;
            } else {
                aliquota = 0.25;
                parcela = 30;
            }

            // imposto
            imposto = (base * aliquota) - parcela;

            // saída
            printf("Dados informados: \n");
            printf("CPF: %d\n", cpf);
            printf("Rendimento: %f\n", salario); 
            printf("Contribuicao: %f\n", contribuicao);
            printf("Dependentes: %d\n", dependentes);
            printf("Total de deducoes: %f\n", total_deducoes);
            printf("Base de calculo: %f\n", base);
            printf("Imposto devido: %f\n", imposto);

    return 0;
}