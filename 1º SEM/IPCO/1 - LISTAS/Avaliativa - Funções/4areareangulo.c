// Objetivo: escrever uma função que receba a base e a altura de um retângulo e retorne a sua área (Área = base x altura).
// Gabrielly Fernanda - TSI 026 - Profº Leal
// data: 10/04/2026
// Lista de exercícios dia 10 de abril - Funções


#include <stdio.h>

// função
    int areaRetangulo (int b, int h); //Em chamada de função, você NÃO coloca o tipo (float). Isso só é usado na declaração/definição.
    
    int main(){

    int base;
    int altura;

    printf("Informe a base do retangulo: \n");
    scanf("%d", &base);
    printf("Informe a altura do retangulo: \n");
    scanf("%d", &altura);

    printf("A area deste triangulo é: %d", areaRetangulo(base, altura));

    return(0);
}

// função pt.2
int areaRetangulo(int b, int h)
{
    return(b*h);
}