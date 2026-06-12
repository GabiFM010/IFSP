/*
    Escreva uma função que insira um valor dado num vetor ordenado de modo que o vetor continue
    ordenado. Por exemplo, se o vetor dado for v = {2, 5, 7, 10, 12, 13} e o valor dado for 6, a função
    deve fornecer o vetor v = {2, 5, 6, 7, 10, 12, 13}

    Gabrielly Fernanda - tsi 026
    arqipco - e.leal
*/

#include <stdio.h>
#define tam 10

int main(){

    //definção de variaveis e vetores
    int vet[tam] = {2, 5, 7, 10, 12, 13};
    int novoVet, aux = 0;
    int simNão, qtd = 6;

    //exibe o vetor pro usuario
    printf("Vetor atual:");
    for(int i=0; i<qtd; i++){ // não tem necessidade de colocar tam pq se colocar o for vai percorrer indices vazios
        printf("|%d|", vet[i]);
    }
    
    do{
        // pergunta o novo valor que sera inserido e salva em novoVet
        printf("\n\nQual numero deseja incluir?\n");
        scanf("%d", &novoVet);
        
        //pos = qtd, se o numero for maior que todos os que ja estão dentro do vetor, insere no final
        // nenhum if sera valido então pos continua valendo 6 e o número será inserido após o 13
        int pos = qtd;

        // o laço roda e verifica se o novo vetor e maior, quando for menor ele para e insere o valor do novoVet no indice de i
        for(int i=0; i<qtd; i++){
            if(novoVet < vet[i]){
                pos = i; //posição do numero vai ser a do indice maior

                break;
            }
        }

        // joga os vets pra direita
        // o i tem o mesmo valor de qtd, 6, e enquanto ele for menor que pos ele fica decrementando o i
        // quando chegrar no vator do i menor ele tira 1 do menor
        for (int i = qtd; i > pos; i--) {
            vet[i] = vet[i - 1];
        }

        // o numero naquela posição no vet sera = novoValor
        // e insere -1 na qtd
        vet[pos] = novoVet;
        qtd++;

        printf("continuar adicionando?\n1- Sim\n2-Não\n");
        scanf("%d", &simNão);
        
    }while(simNão=1);

    return(0);
}
