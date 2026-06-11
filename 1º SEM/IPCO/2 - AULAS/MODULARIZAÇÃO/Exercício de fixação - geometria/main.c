// Objetivo: Criar uma biblioteca chamada "geometria" que contenha funções para calcular a área e o perímetro de um círculo, retângulo e triângulo.
// Gabrielly Fernanda - TSI 026
//  dia 15 de abril de 2026

#include <stdio.h>
#include "geometria.c"

int main()
{
    float pi;
    float raio;

    pi =  3.14;
    raio = 12;

    printf("A área do circulo é %.2f", areaCirculo(pi, raio));

    return 0;
}
