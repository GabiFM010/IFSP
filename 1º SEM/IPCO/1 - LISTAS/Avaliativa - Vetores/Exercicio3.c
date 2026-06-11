/*
    Escreva um programa que altere um valor dado num vetor numa posição dada. Por exemplo, se o
    vetor for v = {3, 8, 5, 9, 12, 3}, o valor dado for 10 e a posição dada for 4, a função deve fornecer v =
    {3, 8, 5, 10, 12, 3}

    Gabrielly Fernanda - tsi 026
    arqipco - e.leal
*/

#include <stdio.h>
#define tam 5
int main(){

    int vet[tam] = {2, 4, 6, 8, 10};
    int ind, newVet, escolha;
    
    do // volta aqui depois da escolha ser =1
    {
        for(int i=0; i<tam; i++) // tem que ficar aqui dentro pq depois se escolha=1 ele vai voltar pra ca
        {
            printf("Vetor: |%d|\n", vet[i]);
        }

        do // continua rodando enquanto o indice for invalido, o usuario fica preso
        {
            printf("\nInforme o numero do indice do vetor que voce quer alterar.\n");
            scanf("%d", &ind);

            if (ind < 0 || ind >= tam)
            {
                printf("Indice invalido! Digite outro.");
            }

        }while (ind < 0 || ind >= tam); //  índices válidos: 0 até tam-1
                
            printf("Digite o novo valor: ");
            scanf("%d", &newVet);

            vet[ind] = newVet; // o vetor (vet), no ind (que foi armazenado) agora é o newVet

            printf("O vetor agora esta assim:\n");
            for(int i=0; i<tam; i++)
            {
                printf("|%d|", vet[i]);
            }

            do
            {
                printf("\nDeseja continuar alterando o vetor?\n 1 - sim; \n 2 - não \n");
                scanf("%d", &escolha);

                if (escolha != 1 && escolha != 2)
                {
                    printf("Escolha invalida, digite novamente!");
                }
            }while (escolha != 1 && escolha != 2);

    }while (escolha == 1); // volta pro primeiro do enquando isso for verdadeiro
    
    return (0);
}
