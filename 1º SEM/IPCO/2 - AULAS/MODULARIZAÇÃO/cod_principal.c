#include <stdio.h> // isso aqui procura na pasta .C em bin
#include "matematica.c" // se quero eu indicar um caminho, pê aspas, com aspar vc diz para o compilador que o arquivo esta na mesma pasta

// tomar cuidado: arquivos diferentes se espera que as funções tenham nome diferente

int main()
{
    int n1, n2;
    n1 = 30;
    n2 = 5;
    
    printf("A soma é = %d \n", soma(n1, n2));
    printf("Subtraindo... %d \n", subtrai(1, n1, n2)); // o 1 define qual vai subtrair quem
    // printf("Dividindo... %d", divide(n1, n2));
    return 0;
}
