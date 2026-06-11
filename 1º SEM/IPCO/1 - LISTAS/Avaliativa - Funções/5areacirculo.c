// Objetivo: Faça uma função que calcule a área de um círculo (Área = pi x raio2), recebendo o raio como parâmetro.
// Gabrielly Fernanda - TSI 026 - Profº Leal
// data: 10/04/2026
// Lista de exercícios dia 10 de abril - Funções

#include <stdio.h>

// funções
    int areaCirculo(float pi, float raio);

    //inicio
        int main()
        {
            float pi = 3.14;
            float raio;
            raio = raio * raio;

            printf("Informe o raio: \n");
            scanf("%f", &raio);

            printf("A area do circulo é: %d", areaCirculo(pi, raio));
        }

// funções feitas
    int areaCirculo(float pi, float raio)
    {
        return(pi*raio);
    }