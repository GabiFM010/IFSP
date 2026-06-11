#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// armazenar os dados de uma pessoa
typedef struct{
    char nome[30]; 
    int idade; 
    char sexo; 
    char endereco[30]; 
    char profissao[30]; 
} Pessoa; 

Pessoa lerDados();
int exibirPessoa( Pessoa p);

int main(){
    Pessoa p1 = lerDados();
    exibirPessoa( p1 );
   return 0;
}

Pessoa lerDados(){
   Pessoa p;
   printf("Nome: ");
   fgets(p.nome,30,stdin);
   printf("Idade: ");
   scanf("%d", &p.idade);
   printf("Sexo: ");
   scanf(" %c", &p.sexo);
   while (getchar() != '\n'); //limpeza de buffer
   printf("Endereco: ");
   fgets(p.endereco,30,stdin);
   printf("Profissao: ");
   fgets(p.profissao,30,stdin);
   return p;
}

int exibirPessoa( Pessoa p){
    printf("\n Dados da pessoa");
    printf("\n Nome: %s", p.nome);
    printf("\n Idade: %d", p.idade);
    printf("\n Sexo: %c", p.sexo);
    printf("\n Endereco: %s", p.endereco);
    printf("\n Profissao: %s", p.profissao);
};
