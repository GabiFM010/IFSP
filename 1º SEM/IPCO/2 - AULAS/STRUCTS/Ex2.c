#include <stdio.h>

int main()
{
    struct dma{
        int dia;
        int mes;
        int ano;
    };

    struct dma x, y;

    x.dia = 10;
    x.mes = 6;
    x.ano = 2026;

    printf("Hoje = %d/%d/%d TALVEZ nap teremos aula!\n",x.dia, x.mes, x.ano);

    y = x;
    y.dia = x.dia + 1;
    printf("Amanhã = %d/%d/%d", y.dia, y.mes, y.ano);

    return (0);
}
