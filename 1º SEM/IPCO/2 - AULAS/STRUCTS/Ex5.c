#include <stdio.h>

typedef struct{
    char nome[30];
    int idade;
    char sexo[10];
    char endereco[30];
    char profissao[20];
} pessoa;



int main(){
    pessoa pessoa;

    printf("\n\nInforme o nome:\n");
    fgets(pessoa.nome,30,stdin); //estrutura de leitura do fgets

    printf("\nInforme a idade: \n");
    scanf("%d",&pessoa.idade);

   /* printf("Informe o sexo: ");
    fgets(pessoa.sexo,10,stdin);

    printf("Informe o endereco: ");
    fgets(pessoa.endereco,30,stdin);

    printf("Informe a profissao: ");
    fgets(pessoa.profissao,20,stdin); */

    // remove o "\n" que o fgets pode deixar no final
    // pessoa.nome[strcpn(pessoa.nome, "\n")] = '\0';

    printf("\nDados informados: %s, %d\n\n", pessoa.nome , pessoa.idade);

    return (0);
}
