#include <stdio.h>
#include <stdlib.h> // p/ usar a função system(xdg-open)

int verificaData(int dia, int mes){

    if (mes < 1 || mes > 12 || dia < 1){
        return 0;
    }else if (mes == 1 && (dia > 31 || dia < 1)){
        return 0;
    } else if (mes == 2 && (dia > 29 || dia < 1)){
        return 0;
    } else if (mes == 3 && (dia > 31 || dia < 1)){
        return 0;
    } else if (mes == 4 && (dia > 30 || dia < 1)){
        return 0;
    } else if (mes == 5 && (dia > 31 || dia < 1)){
        return 0;
    } else if (mes == 6 && (dia > 30 || dia < 1)){
        return 0;
    } else if (mes == 7 && (dia > 31 || dia < 1)){
        return 0;
    } else if (mes == 8 && (dia > 31 || dia < 1)){
        return 0;
    } else if (mes == 9 && (dia > 30 || dia < 1)){
        return 0;
    } else if (mes == 10 && (dia > 30 || dia < 1)){
        return 0;
    } else if (mes == 11 && (dia > 30 || dia < 1)){
        return 0;
    } else if (mes == 12 && (dia > 31 || dia < 1)){
        return 0;
    } else{
        return 1;
    }
    
    /*return 0 -> falso */
    /* return 1 -> verdadeiro */

    /*return 0 -> data inválida (falso) */
    /* !0 → verdadeiro → loop continua*/
    /*verificaData(...) = 1 → data válida (verdadeiro)*/
    /*!1 → falso → loop para*/
    
}
