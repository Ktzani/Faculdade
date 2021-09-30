#include "matriz.h"
#include<stdio.h>

void lerOperacao(char *operacao){

    scanf ("%c ", operacao);

}

void lerMatriz(double M[][12]){

    int i, j;

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){

        scanf ("%lf", &M[i][j]);
        }
    }
}

double somaMatriz(double M[][12]){

    int i, j;

    double somaTotal = 0;

    for (i = 0; i < 5; i++){
        for (j = i + 1; j < 11 - i; j++){

        somaTotal += M[i][j];

        }
    }

    return somaTotal;
            
}

double media(double resultado){

    double mediaResult = resultado / 30;

    return mediaResult;
}

void printResultado(double resultado){

    printf ("%.1lf\n", resultado);
}
