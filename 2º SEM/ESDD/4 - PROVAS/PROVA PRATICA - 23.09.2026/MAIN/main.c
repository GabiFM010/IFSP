/*
    ESTRUTURA DE DADOS - PROF ROBERTA AKEMI SINOARA

    GABRIELLY FERNANDA FARIA MAIA
    ARARAQUARA - 3046222
    TSI - 2º SEMESTRE 2026

    PROVA DIA 23/09/2026 - PARTE PRATICA

    COMPILA TODOS OS ARQUIVOS .C E CRIA UM EXECUTAVEL PELO -o (gera o nome do ark executavel) NO DIRETÓRIO INDICADO (EXECUTAVEL)
    gcc ./main.c ../BIBLIOTECAS/biblioteca_funcoes.c -o ../EXECUTAVEL/Filmes
    ../EXECUTAVEL/Filmes
    
    ./ -> representa o diretorio atual (ex main)
    ../ -> representa o diretorio anterior (retorna pro diretorio "pai")
*/

#include <stdio.h>
#include "../BIBLIOTECAS/biblioteca_funcoes.h"

int main() {

    menu(); // so chama o menu pq em biblioteca.c ele ja chama todas as outras funções no switch case
}
