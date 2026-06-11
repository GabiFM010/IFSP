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


/* duas formas de fazer retornar que é valido
    a primeira é com !
    return((x.mes<1) || (x.mes>12)); -> a data dentro dessas condições é falsa
    return((x.mes<1) || (x.mes>12)); -> colocou ! = nega o que ta ali dentro

    a outra forma é equivalente
*/

int verifica_data(Data x){
    return((x.mes >= 1) && (x.mes <= 12));
} // testa se é valido
