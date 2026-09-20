/*
    ESTRUTURA DE DADOS - PROF ROBERTA AKEMI SINOARA

    GABRIELLY FERNANDA FARIA MAIA
    ARARAQUARA - 3046222
    TSI - 2º SEMESTRE 2026

    PROVA DIA 23/09/2026 - PARTE PRATICA
*/

// o arquivo .c serve pra implementação
#include <stdio.h>
#include <string.h>

#define TAM_TITULO 100 // numero maximo de caracteres do titulo (incluindo o caractere final '\0)
#define MAX_FILMES 100 // numero maximo de filmes no catalogo

// struct(s)
typedef struct
{
    char titulo[TAM_TITULO]; // nome do filme
    int anoLancamento; // ano que foi lançado
    int nota; // nota dele
} Filme; // nome da struct

// prototipos das funções (chama em cima, define embiaxo)
int salvarNaStruct(Filme filmes[], int n);

void lerTxt(Filme filmes[], int n);

int checarQuantidadeFilmes();

float notaGeral(Filme filmes[], int n);

void ordenarPorNota(Filme filmes[], int in, int fn);

int particao(Filme filmes[], int in, int fn);

int acharPrimeiro(Filme filmes[], int in, int fn, int notaProcurada, int resultado);

int acharUltimo(Filme filmes[], int in, int fn, int notaProcurada, int resultado);

// menu pro usuario escolher o que quer fazer
void menu()
{

    int opcao;
    int notaDesejada;
    Filme filmes[MAX_FILMES]; // define um vetor do tipo Filme chamado filmes

    int totalFilmes = totalFilmes = salvarNaStruct(filmes, totalFilmes);// chama a função pra checar a quantidade de filmes
    /* o salvarNaStruct vai salvar nessa variavel totalFilmes o conteudo que foi salvo dentro de salvarNaStruct ( <titulo;ano;nota>)*/

    do
    {

        printf("\n==== MENU DE AÇÕES ====\n");
        printf("1 – Carregar os filmes do catalogo\n");
        printf("2 - Exibir o catalogo ordenado por nota\n");
        printf("3 - Buscar filme por nota\n");
        printf("4 - Exibir nota geral do catalogo\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nCarregando os filmes do catalogo...\n");
            lerTxt(filmes, totalFilmes);
            break;
        case 2:
            printf("\nCarregando o catalogo...\n\n");
            ordenarPorNota(filmes, 0, totalFilmes - 1); // chama a função pra ordenar o catalogo por nota
            lerTxt(filmes, totalFilmes); // chama a função pra exibir o catalogo ordenado por nota decrescente
            break;
        case 3:
            printf("\nQual nota deseja buscar? (0/10)\n");
            scanf("%d", &notaDesejada);

            printf("Buscando filme...\n");

            int primeiro = acharPrimeiro(filmes, 0, totalFilmes - 1, notaDesejada, -1); // chama a função pra achar o primeiro filme com a nota desejada

            if (primeiro == -1){
                printf("Nenhum filme com a nota desejada foi encontrado.\n");
            } else {

                int ultimo = acharUltimo(filmes, 0, totalFilmes - 1, notaDesejada, -1); // chama a função pra achar o ultimo filme com a nota desejada

                printf("Foramencontrados esse(s) filme(s)com a nota %d:\n", notaDesejada);
                for (int i = primeiro; i <= ultimo; i++) // recebe o primeiro indice e vai ate o ultimo indice, imprimindo todos os filmes com a nota desejada
                {
                    printf("%d:\nTitulo: %s\n", i + 1, filmes[i].titulo);
                    printf("Ano: %d\n", filmes[i].anoLancamento);
                    printf("Nota: %d\n\n", filmes[i].nota);
                }
            }

            break;
        case 4:
            printf("\nExibindo notas...\n");
            float media = notaGeral(filmes, totalFilmes); // chama a função pra calcular a nota geral do catalogo
            printf("Média das notas: %.2f\n", media);
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (opcao != 5); // repete enquanto a opção for diferente de 5
}

void lerTxt(Filme filmes[], int n)
{
    printf("Quantidade de filmes lidos: %d\n\n", n);
    printf("Filmes carregados:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d:\nTitulo: %s\n", i+1, filmes[i].titulo);
        /* titulo daquele indice que ta no filmes, ref. a aquele filme (numero do indice)
           salvo na struct
           os dados dos filmes foram salvos em um array da struct*/
        printf("Ano: %d\n", filmes[i].anoLancamento);
        printf("Nota: %d\n\n", filmes[i].nota);
    }
}

float notaGeral(Filme filmes[], int n)
{
    if (n <= 0)
    {
        return 0.0f; // Retorna 0 se não tiver filme nenhum
    }

    float somaNotas = 0; // começa a soma em 0

    for (int i = 0; i < n; i++)
    {
        somaNotas += filmes[i].nota; // soma as notas dos filmes
    }

    float mediaNotas = somaNotas / n; // calcula a media das notas

    return mediaNotas; // retorna a media das notas
}

int salvarNaStruct(Filme filmes[], int n)
{
    FILE *file = fopen("../ARQUIVOS_TXT/filmes.txt", "r");
    /* cria o arquivo do tipo "FILE"
       passa pro ponteiro de nome "file"
       depois chama a função fopen pra abir o arquivo dos parenteses
       o "r" indica que o arquivo será aberto para leitura */

    // checador de inconformidade ( existencia de um txt )
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1; // retorna 1 se houver erro
    }

    int quantidade; // qtdd de filmes
    int ano; // ano do filme
    int nota; // le a nota do filme
    char conteudo[TAM_TITULO]; // le titulo por linha

    fscanf(file, "%d", &quantidade); // le a quantidade de filmes do arquivo

    // checador de inconformidade ( quantidade de filmes )
    if (quantidade > MAX_FILMES || quantidade < 0)
    {
        printf("Quantidade de filmes inválida!\n");
        fclose(file); // fecha o arquivo
        return 1;     // retorna 1 se houver erro
    }

    fgetc(file); // pula a leiturar para o prox caractere depois do \n invisivel (11\n)

    int contador = 0; // contador dos filmes sem ordenar, do jeito que ta escriyo no txt

    // chegador de inconformidade na linha ( ordem nomeFilme, anoFilme, notaFilme ) ja esta inclusa no while
    while (contador < quantidade && fscanf(file, " %100[^;];%d;%d", conteudo, &ano, &nota) == 3)
    {
        /*fscanf -> armazena e enquanto o contador for menor que a qtdd de filmes e a impressão do titulo, ano e nota for =3 variaveis, ele vai ler o arquivo
            %100 -> pq são 100 caracteres que o titulo pode ter
            [^;] -> faz a leitura do que é o titulo ate achar o ";"
            ; -> indica que o titulo acabou e vai ler o prox, que é ano

            esse while ira se repetir ate uma das sentenças for falsa, (ate o contador ser maior que a qtdd de filmes ou a leitura do arquivo não for 3 variaveis)
        */

        // checador de inconformidade ( nota do filme )
        if (nota < 0 || nota > 10)
        {
            printf("Nota do filme inválida!\n");
            fclose(file); // fecha o arquivo
            return 1;     // retorna 1 se houver erro
        }

        // salva os dados na struct
        strcpy(filmes[contador].titulo, conteudo);
        /* copia o titulo de conteudo (nome do filme) pro filmes como string (strcpy)
           strcpy -> copia uma string pra outra
                filmes[contador].titulo -> mostra o local onde vai pegar o titulo do filme e copiar
                conteudo -> mostra o local de onde vai ser colado o titulo (antes do ";" ele pega)*/
            
        filmes[contador].anoLancamento = ano; // recebe o ano pro filmes, depois do 1º ";" e antes do 2º ";"
        filmes[contador].nota = nota;// recebe a nota pro filmes, depois do 2º ";" e antes do "\n" invisivel
        /* catagolo é a struct que guarda a strig do conteudo (titulo)
           depois o filmes vai guardar o ano e a nota 
           depois que salvar todos o contador vai aumentar em 
        */

        contador++; // incrementa o contador pra salvar no porx. indice do vetor da struct
    }
    
    fclose(file); // fecha o arquivo depois que o while chega ao final dele..
    return contador; //... e retorna o número de filmes lidos
}

// ================================== quickSort ==================================
// quickSort pra ordenar o catalogo por nota
void ordenarPorNota(Filme filmes[], int in, int fn) { // função pra ordenar as notas dos filmes da maior pra menor
    if(in < fn){ // se a nota do inicio for  menor que a nota do final, ele vai continuar ordenando
        int pivo = particao(filmes, in, fn); // define a variavel do pivo chamando a função "partição"
        ordenarPorNota(filmes, in, pivo - 1); // chama ele mesmo pra ordenar o vetor das menores ntas recursivamente
        ordenarPorNota(filmes, pivo + 1, fn); // o mesmo aqui, mas pras notas maiores
    }
}

int particao(Filme filmes[], int in, int fn){ // funçaõ que ramifica o vetor pra depois organizar ele
    int pivo = filmes[fn].nota; // pega a nota do ultimo filme do filmes (struct)
    int i = in - 1; // pega o menor elemento do vetor filmes (1º filme)

    for(int j = in; j < fn; j++){ // percorre o vetor inteiro do inicio ate o final (menos o ultimo, pq o final é o pivo)
        if(filmes[j].nota >= pivo){ // verifica se a nota do filme do indice de j é maior ou igual a nota do pivo
            i++; // se for, o i adiciona +1
            Filme temp = filmes[i]; // cria uma variavel temporaria da struct Filme
            filmes[i] = filmes[j]; // troca o filme do indice i pelo filme do indice j
            filmes[j] = temp; // troca o filme do indice j pelo filme temporario
        }
    }
    // troca o pivo para a posicao correta
    Filme temp = filmes[i+1]; // a variavel temporaria recebe o filme do indice i+1
    filmes[i+1] = filmes[fn]; // filme do final vai pro lugar do +1
    filmes[fn] = temp; // variavel temporaria vai pro final

    return i+1; // retorna o indice do pivo (sempre vai ser o ultimo)
}

// ================================== busca binaria ==================================
// primeira busca (maior para menor)
int acharPrimeiro(Filme filmes[], int in, int fn, int notaProcurada, int resultado){     
    if (in > fn){         
        return resultado; 
    }      
    int meio = (in + fn) / 2;      
    
    if (filmes[meio].nota == notaProcurada){ 
        // guarda a posição e continua procurando na esquerda (onde estão as notas iguais ou maiores que vieram antes)
        return acharPrimeiro(filmes, in, meio - 1, notaProcurada, meio);     
    } else if (filmes[meio].nota < notaProcurada){ // se a nota do meio for <, a nota procurada ta antes (na esquerda)
        return acharPrimeiro(filmes, in, meio - 1, notaProcurada, resultado);     
    } else { // se a nota do meio for >, a nota procurada ta depois (na direita)
        return acharPrimeiro(filmes, meio + 1, fn, notaProcurada, resultado);     
    } 
}  

// segunda busca (maior para menor)
int acharUltimo(Filme filmes[], int in, int fn, int notaProcurada, int resultado){     
    if (in > fn){ // se o inicio for maior que o final ele retorna o resultado
        return resultado; 
    }

    int meio = (in + fn) / 2; // pra achar o meio ele soma o inicio com o fim e divide o resultado por 2
    
    if (filmes[meio].nota == notaProcurada){ // se a nota do filme do meio for = nota procurada...   
        //... ele so guarda a posição e continua procurando na direira (onde a nota procurada pode terminar)
        return acharUltimo(filmes, meio + 1, fn, notaProcurada, meio);     
    } else if (filmes[meio].nota < notaProcurada){ // se a nota do meio for <, procura na esquerda
        return acharUltimo(filmes, in, meio - 1, notaProcurada, resultado);     
    } else { // se a nota do meio for >, procura na direita
        return acharUltimo(filmes, meio + 1, fn, notaProcurada, resultado);     
    } 
}
