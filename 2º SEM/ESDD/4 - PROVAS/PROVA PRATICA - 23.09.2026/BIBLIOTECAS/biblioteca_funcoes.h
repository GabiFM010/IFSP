/*
    ESTRUTURA DE DADOS - PROF ROBERTA AKEMI SINOARA

    GABRIELLY FERNANDA FARIA MAIA
    ARARAQUARA - 3046222
    TSI - 2º SEMESTRE 2026

    PROVA DIA 23/09/2026 - PARTE PRATICA
*/

// O arquivo .h eclara o que vai ser usado

#ifndef BIBLIOTECA_FUNCOES_H
#define BIBLIOTECA_FUNCOES_H
#define TAM_TITULO 100 // numero maximo de caracteres do titulo (incluindo o caractere final '\0)
#define MAX_FILMES 100 // numero maximo de filmes no catalogo
#define NOME_ARQUIVO "filmes.txt" // nome do arquivo de entrada

/* 
    Struct Filme
        guarda as informações de um filme 
*/
typedef struct {
    char titulo[TAM_TITULO]; // nome do filme
    int anoLancamento; // ano que foi lançado
    int nota; //nota dele
} Filme; // nome da struct

void menu();

int lerTxt(); 

#endif