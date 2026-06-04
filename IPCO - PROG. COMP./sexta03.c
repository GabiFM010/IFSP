#include "mensagens.c"

void formata_data (int dia, int mes, int ano)
{
    printf("\n %d/%d/%d", dia, mes, ano);
}
int main()
{
    int dia = 1, mes = 10, ano = 2026;
    formata_data(dia, mes, ano);
    return 0;
}
