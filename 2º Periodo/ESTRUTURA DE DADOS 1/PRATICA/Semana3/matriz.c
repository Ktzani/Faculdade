#include "matriz.h"
#include<stdio.h>
#include<stdlib.h>

void lerOrdem(int *ordem){

    scanf ("%d", ordem);
}

//manter como especificado
double **alocaMatriz(double **M, int ordem){

    M = (double **) malloc (ordem * sizeof(double *));

    int i;

    for (i = 0; i < ordem; i++) {

        M[i] = (double *) malloc(ordem * sizeof(double));
    }

    if (M == NULL) {

        printf ("Falta de memoria \n");
        exit (1);
    }   

    return M;
}

//manter como especificado
double **desalocaMatriz(double **M, int ordem){

    int i;

    for (i = 0; i < ordem; i++){

        free (M [i]);
    }

    free (M);

    return NULL;

}

//manter como especificado
void lerOperacao(char *operacao){

    scanf (" %c", operacao);
}

void lerMatriz(double **M, int ordem){

    int i, j;

    for (i = 0; i < ordem; i++){
        for (j = 0; j < ordem; j++){

            scanf ("%lf", &M[i][j]);
        }

    }
}

double somaMatriz(double **M, int ordem){

    int i, j;

    double somaTotal = 0;

    for (i = 0; i < (ordem / 2.0); i++){
        for (j = i + 1; j < (ordem - 1) - i; j++){

            somaTotal += M[i][j];
        }
    }

    return somaTotal;
}
double media(double resultado, int ordem){

    int i, j;

    int contMedia = 0;

    double media;

    for (i = 0; i < (ordem/2); i++){
        for (j = i + 1; j < (ordem - 1) - i; j++){

            contMedia++;
        }
    }

    media = resultado / contMedia;

    return media;

    
}

void printResultado(double resultado){

    printf ("%.1lf", resultado);
}



