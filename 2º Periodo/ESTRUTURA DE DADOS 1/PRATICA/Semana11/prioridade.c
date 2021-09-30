#include "prioridade.h"
#include <stdio.h>
#include <stdlib.h>

//Manter como especificado
TipoCaixa *alocaVetor(TipoCaixa *heap, int n){

    heap = (TipoCaixa*) malloc(n * sizeof (TipoCaixa));

    if (heap == NULL){

        printf("Falta de memoria...\n");
        exit(1);
    }

    return heap;
}
//Manter como especificado
TipoCaixa *desalocaVetor(TipoCaixa *heap){

    free (heap);

    return NULL;
}

//Manter como especificado
void Heap_Constroi(TipoCaixa *heap, int n){

    int esq;

    esq = (n / 2) - 1;

    while (esq >= 0){

        Heap_Refaz(heap, esq, n - 1);

        esq--;
    }
}

//Manter como especificado
void Heap_Refaz(TipoCaixa *heap, int esq, int dir){

    int i = esq;

    int j = i * 2 + 1;

    TipoCaixa aux = heap[i];

    while (j <= dir){
        if (j < dir) {
            if ((heap[j].tempoocupado > heap[j+1].tempoocupado) || ((heap[j].tempoocupado == heap[j+1].tempoocupado) && (heap[j].identific > heap[j+1].identific))) {
                j++;
            }
        }
        if ((heap[j].tempoocupado > aux.tempoocupado) || ((heap[j].tempoocupado == aux.tempoocupado) && (heap[j].identific > aux.identific))) {
            break;
        }
        heap[i] = heap[j];
        i = j;
        j = i * 2 + 1;
        }
    heap[i] = aux;
    }


/*
void Heap_Ordena(TipoCaixa *heap, int n) {

    TipoCaixa aux;

    Heap_Constroi(heap, n);

    while (n > 1){

        aux = heap[n - 1];

        heap[n - 1] = heap[0];

        heap[0] = aux;

        n--; 

        Heap_Refaz (heap, 0, n - 1);

    }

}
*/