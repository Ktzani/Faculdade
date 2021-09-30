#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>

//Manter como especificado
int *alocaVetor(int *vetor, int n){

    vetor = (int*) malloc(n * sizeof(int));

    if (vetor == NULL){

        printf("Falta de memoria...");

        return 0;
    }

    return vetor;

}
//Manter como especificado
int *desalocaVetor(int *vetor){

    free(vetor);

    return NULL;
}

void ordenacao(int *vetor, int L, int R, int *movimentos){

    //Mergesort 
    //n é o tamanho do vetor. Portanto, a ultima casa é igual a n - 1

    int M;

    if (L < R){

        M = (L + R) / 2;

        ordenacao(vetor, L, M, movimentos);
        ordenacao(vetor, M + 1, R, movimentos);
        merge(vetor, L, M, R, movimentos);

    }
}

void merge (int *vetor, int L, int M, int R, int *movimentos){

    int tamanhovetL = M - L + 1;

    int tamanhovetR = R - M;
    
    int i, j;

    int *vetorL = (int *) malloc (tamanhovetL * sizeof(int));

    if (vetorL == NULL) {
        printf ("Falta de memoria...\n");
        return;
    }

    int *vetorR = (int *) malloc (tamanhovetR * sizeof(int));;

    if (vetorR == NULL) {
        printf ("Falta de memoria...\n");
        return;
    }

    for (i = 0; i < tamanhovetL; i++){

        vetorL[i] = vetor[i + L];
    }

    for (j = 0; j < tamanhovetR; j++){

        vetorR[j] = vetor[M + j + 1];
    }

    i = 0;

    j = 0;

    int k;

    for (k = L; k <= R; k++){

        if (i == tamanhovetL){
            vetor[k] = vetorR[j];
            j++;
           
        }

        else if (j == tamanhovetR) {
            vetor[k] = vetorL[i];
            i++;
           
        }

        else if (vetorL[i] <= vetorR[j]){
            vetor[k] = vetorL[i];
            i++;
            
        }

        else {
            vetor[k] = vetorR[j];
            j++;
            *movimentos +=  tamanhovetL - i;
        }

    }

    free (vetorR);

    free (vetorL);
}



