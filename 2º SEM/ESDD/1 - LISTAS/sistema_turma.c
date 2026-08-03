/* =====================================================================
   SISTEMA DE GERENCIAMENTO DE TURMA
   ---------------------------------------------------------------------
   Este programa cadastra alunos, calcula médias, classifica situação
   e oferece um menu de operações.

   ATENÇÃO: este código contém BUGS propositais e FUNCIONALIDADES
   INCOMPLETAS (marcadas com TODO). Seu trabalho é corrigir os bugs
   e implementar o que estiver faltando, sem mudar a estrutura geral
   do programa.
   ===================================================================== */

#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 50
#define NUM_NOTAS 3

/* Variável composta HETEROGÊNEA (struct): agrupa tipos diferentes
   sob um mesmo nome. */
typedef struct {
    char nome[50];
    float notas[NUM_NOTAS];
    float media;
    char situacao;
} Aluno;

/* Protótipos das funções */
int cadastrarAlunos(Aluno turma[]);
float calcularMedia(float notas[], int qtd);
char definirSituacao(float media); 
void listarAlunos(Aluno turma[], int n); //aletrada
int buscarAlunoPorNome(Aluno turma[], int n, char nome[]);
void estatisticas(Aluno turma[], int n);
int fatorial(int n);
int ehPalindromo(char palavra[], int inicio, int fim);
void exibirMenu(void);

int main() {
    Aluno turma[MAX_ALUNOS];
    int totalAlunos = 0;
    int opcao;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); // alterada

        /* Estrutura condicional múltipla (switch) */
        switch (opcao) {
            case 1:
                totalAlunos = cadastrarAlunos(turma);
                break;
            case 2:
                listarAlunos(turma, totalAlunos);
                break;
            case 3: {
                char nomeBusca[50];
                printf("Digite o nome do aluno a buscar: ");
                scanf(" %[^\n]", nomeBusca);
                int pos = buscarAlunoPorNome(turma, totalAlunos, nomeBusca);
                if (pos == -1) {
                    printf("Aluno nao encontrado.\n");
                } else {
                    printf("Aluno encontrado: %s (media %.2f)\n",
                           turma[pos].nome, turma[pos].media);
                }
                break;
            }
            case 4:
                estatisticas(turma, totalAlunos);
                break;
            case 5: {
                char palavra[50];
                printf("Digite uma palavra para testar se e palindromo: ");
                scanf(" %[^\n]", palavra);
                if (ehPalindromo(palavra, 0, strlen(palavra) - 1)) {
                    printf("\"%s\" e um palindromo!\n", palavra);
                } else {
                    printf("\"%s\" nao e um palindromo.\n", palavra);
                }
                break;
            }
            case 0:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0); /* laço controlado pelo usuário */

    return 0;
}

/* ---------------------------------------------------------------------
   Cadastra N alunos digitados pelo usuário (laço controlado por
   contador dentro de um laço aninhado para ler as notas).
   --------------------------------------------------------------------- */
int cadastrarAlunos(Aluno turma[]) {
    int qtd = 0;
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &qtd);

    if (qtd <= 0 || qtd > MAX_ALUNOS) {
        printf("Quantidade invalida!\n");
        return -1; /* Retorna -1 para indicar erro na quantidade de alunos */
    }

    /* Laço externo: um por aluno (controlado por contador) */
    for (int i = 0; i < qtd; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", turma[i].nome);

        /* Laço interno (aninhado): um por nota do aluno */
        for (int j = 0; j < NUM_NOTAS; j++) {
            float nota;
            printf("Nota %d: ", j + 1);
            scanf("%f", &nota);

            /* Validação com operadores lógicos. */
            while (nota < 0 && nota > 10) {
                printf("Nota invalida! Digite novamente (0 a 10): ");
                scanf("%f", &nota);
            }

            turma[i].notas[j] = nota;
        }

        turma[i].media = calcularMedia(turma[i].notas, NUM_NOTAS);
        turma[i].situacao = definirSituacao(turma[i].media);
    }

    return qtd;
}

/* ---------------------------------------------------------------------
   Calcula a média aritmética simples de um vetor de notas
   (variável composta HOMOGÊNEA: todos os elementos são do mesmo tipo).
   --------------------------------------------------------------------- */
float calcularMedia(float notas[], int qtd) {
    float soma; 

    for (int i = 0; i < qtd; i++) {
        soma = soma + notas[i];
    }

    return soma / qtd;
}

/* ---------------------------------------------------------------------
   Define a situação do aluno (estrutura condicional múltipla).
   --------------------------------------------------------------------- */
char definirSituacao(float media) {
    int faixa = (int) media;
    char situacao;

    switch (faixa) {
        case 10:
            break;
        case 9:
            break;
        case 8:
            /*Aprovado - Conceito A*/
            situacao = 'A';
            break;            
        case 7:
            break;
        case 6:
            /*Aprovado - Conceito B*/
            situacao = 'B';
            break;
        case 5:
            break;
        case 4:
            /*Prova Final - Recuperacao*/
            situacao = 'P';
            break;
        default:
            /*Reprovado*/
            situacao = 'R';
    }
    return situacao;
}
/* ---------------------------------------------------------------------
   Lista todos os alunos cadastrados (laço controlado por contador).
   --------------------------------------------------------------------- */
void listarAlunos(Aluno turma[], int n) {
    if (n == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    printf("\n%-20s %-10s %-15s\n", "Nome", "Media", "Situacao");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10.2f %c\n",
               turma[i].nome, turma[i].media, turma[i].situacao);
    }
}

/* ---------------------------------------------------------------------
   TODO (NOVA FUNCIONALIDADE): implemente a busca de um aluno pelo nome.

   Requisitos:
   - Percorra o vetor "turma" com um laço controlado por contador.
   - Compare o nome de cada aluno com "nome" fornecido pelo usuário.
   - Se encontrar, retorne o índice do aluno no vetor.
   - Se não encontrar após percorrer todo o vetor, retorne -1.
   --------------------------------------------------------------------- */
int buscarAlunoPorNome(Aluno turma[], int n, char nome[]) {
    return -1;
}


/* ---------------------------------------------------------------------
   Calcula estatísticas simples da turma (maior média, menor média
   e média geral da turma). Também demonstra o uso de uma função
   recursiva (fatorial) apenas como exercício de recursividade.
   --------------------------------------------------------------------- */
void estatisticas(Aluno turma[], int n) {
    if (n == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    float maior = turma[0].media;
    float menor = turma[0].media;
    float somaGeral = 0;

    for (int i = 0; i < n; i++) {
        if (turma[i].media > maior) {
            maior = turma[i].media;
        }
        if (turma[i].media > menor) {
            menor = turma[i].media;
        }
        somaGeral += turma[i].media;
    }

    printf("\n--- Estatisticas da turma ---\n");
    printf("Maior media: %.2f\n", maior);
    printf("Menor media: %.2f\n", menor);
    printf("Media geral da turma: %.2f\n", somaGeral / n);
    printf("Fatorial da quantidade de alunos (%d): %d\n", n, fatorial(n));
}

/* ---------------------------------------------------------------------
   Função recursiva para calcular o fatorial de um número.
   --------------------------------------------------------------------- */
int fatorial(int n) {

    if(n == 0 || n == 1) return 1;

    return n * fatorial(n - 1);
}

/* ---------------------------------------------------------------------
   TODO (NOVA FUNCIONALIDADE): função recursiva que verifica se uma
   palavra é palíndromo.

   Requisitos:
   - Se "inicio >= fim", a palavra é palíndromo (retorne 1).
   - Se os caracteres em palavra[inicio] e palavra[fim] forem
     diferentes, não é palíndromo (retorne 0).
   - Caso contrário, chame a função recursivamente avançando "inicio"
     e recuando "fim".
   --------------------------------------------------------------------- */
int ehPalindromo(char palavra[], int primeira, int ultima) {
    if (primeira >= ultima) return 1;

    if (palavra[primeira] != palavra[ultima]) return 0;
}

/* ---------------------------------------------------------------------
   Exibe o menu principal (entrada/saída de dados).
   --------------------------------------------------------------------- */
void exibirMenu(void) {
    printf("\n===== MENU =====\n");
    printf("1 - Cadastrar alunos\n");
    printf("2 - Listar alunos\n");
    printf("3 - Buscar aluno por nome\n");
    printf("4 - Ver estatisticas da turma\n");
    printf("5 - Verificar se uma palavra e palindromo\n");
    printf("0 - Sair\n");
}
