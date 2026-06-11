#include <stdio.h>

int main()
{
    struct{
        int dia;
        int mes;
        int ano;
    } x; //aqui fica o nome da struct

    x.dia = 12;
    x.mes = 6;
    x.ano = 2026;

    printf("A data de %d/%d/%d TALVEZ não teremos aula!\n",x.dia, x.mes, x.ano);

    return (0);
}
