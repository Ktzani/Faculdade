#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*typedef struct {
    char especifico;
} Item;

typedef struct celula {
    Item item;
    struct celula *prox;
} Celula;

typedef struct {
    Celula *cabeca;
} Pilha;*/

// Inicia as variaveis da pilha
void Pilha_Inicia(Pilha *pilha) {
    pilha->cabeca = (Celula*) malloc (sizeof(Celula));

    pilha->cabeca->prox = NULL;
}

//Retorna se a pilha esta vazia
int Pilha_EhVazia(Pilha *pilha) {
    if (pilha->cabeca->prox == NULL) 
        return 1;
    return 0;
}

// Insere um item no topo da pilha
int Pilha_Push(Pilha *pilha, Item item) {
    Celula *aux = (Celula *) malloc(sizeof(Celula));

    if (aux == NULL)
        return 0;

    aux->item = item;

    aux->prox = pilha->cabeca->prox;

    pilha->cabeca->prox = aux;

    return 1;
}

// Retira o item do topo da pilha
int Pilha_Pop(Pilha *pilha, Item *item) {
    if (Pilha_EhVazia(pilha))
        return 0;

    Celula *aux;

    aux = pilha->cabeca->prox;

    pilha->cabeca->prox = aux->prox;

    *item = aux->item;

    free(aux);

    return 1;
}

//Remove cada elemento de uma pilha e libera a memória
void Pilha_Esvazia(Pilha *pilha) {

    Celula *pAux1, *pAux2;

    pAux1 = pilha -> cabeca;

    while (pAux1 != NULL){

        pAux2 = pAux1;

        pAux1 = pAux1->prox;

        free(pAux2);
    }
}
