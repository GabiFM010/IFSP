// Escrever um programa que, a partir da idade e peso informado pelo usuário, calcule a dosagem de um medicamento e exiba quantas gotas do medicamento deve-se tomar por dose. Considere que o medicamento possui 500 mg por ml, e que cada ml corresponde a 20 gotas
/* Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 quilos devem tomar 1000 mg; com peso abaixo de 60 quilos devem tomar 875 mg*/
/* Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso corpóreo conforme a tabela*/
// 5~9kg 125mg
// 9.1~16kg 250mg
// 16.1~24kg 375mg
// 24.1~30kg 500mg
// +30kg 750mg

// Gabrielly Fernanda - TSI 026 - Profº Leal
// dia 17/04/2026


#include <stdio.h>

int calcularDosePeso(int idade, float peso);

int main()
{
    int idade;
    float peso;
        // 20 gotas = 1 ml = 500 mg
        // 1 ml = 500 mg

    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    printf("Informe seu peso: \n");
    scanf("%f", &peso);

    printf("Retorna calcularDosePeso %d", calcularDosePeso(idade, peso));

    return 0;    
}

int calcularDosePeso (int idade, float peso)
{

    int gota = 0;
    float mg = 500;

    if(idade >= 12){
        if(peso >= 60){
            gota = (1000/mg)*20;

        }else if(peso < 60){
            gota = (875/mg)*20;

        }
    }

    if(idade < 12){
        if (peso >=5 && peso<=9)
        {
            gota = (125/mg)*20;
        } else if (peso >9 && peso<=16)
        {
            gota = (250/mg)*20;
        } else if (peso >16 && peso<=24)
        {
            gota = (375/mg)*20;
        } else if (peso >24 && peso<=30)
        {
            gota = (500/mg)*20;
        } else {
            gota = (750/mg)*20;
        }
    }

    return (gota);

}