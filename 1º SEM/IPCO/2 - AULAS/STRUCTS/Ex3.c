#include "stdio.h"

typedef struct {
    int dia;
    int mes;
    int ano;
} Data; //definindo o tipo data, convenção: fica + claro pro programador indica que foi criado por outro programador

verfica_data(Data x); //variavel "x" que é do tipo data

int main(){
    Data data; //variavel "data" do tipo "Data"

    printf("\nEntre o dia: ");
    scanf("%d", &data.dia);

    printf("\nEntre o mes: ");
    scanf("%d", &data.mes);

    printf("\nEntre o ano: ");
    scanf("%d", &data.ano);

    if(verifica_data(data)){ //função que verifica data que tem como parametro "data"
        printf("\n data com mes valido");
    } else{
        printf("\n data com mes invalido");
    }

    return (0);
}

int verifica_data(Data x){
    int valido = 1; // se retornar 1 = verdadeiro

    if((x.mes<1) || (x.mes>12)){
        valido = 0; // se retornar 0 = falso
    }
    return(valido);
} // testa se é valido
