#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Inicia as variaveis da lista
void TLista_Inicia(TLista *pLista) {

    pLista->pPrimeiro = (TCelula*) malloc(sizeof(TCelula));

    pLista->pUltimo = pLista->pPrimeiro;

    pLista->pPrimeiro->pProximo = NULL;

//semelhante ao visto em aula
}

//Retorna se a lista esta vazia
int TLista_EhVazia(TLista *pLista) {

    return (pLista->pUltimo == pLista->pPrimeiro ) ;
        

//semelhante ao visto em aula
}

// Insere um item no final da lista
int TLista_InsereFinal(TLista *pLista, TItem x) {

    pLista->pUltimo->pProximo = (TCelula*) malloc (sizeof(TCelula));

    pLista->pUltimo = pLista->pUltimo->pProximo;

    pLista->pUltimo->item = x;

    pLista->pUltimo->pProximo = NULL;

    return 1;
}

// Retira o primeiro item da lista
int TLista_RetiraPrimeiro(TLista *pLista, TItem *pX) {

    if (TLista_EhVazia(pLista))
        return 0;


    TCelula *pAux;

    pAux = pLista->pPrimeiro->pProximo;

    *pX = pAux->item;

    pLista->pPrimeiro->pProximo = pAux->pProximo;

    free(pAux); //libero o conteudo que estava em pAux

    return 1;

//semelhante ao visto em aula
}

// Imprime os elementos da lista
void TLista_Imprime(TLista *pLista) {

    TCelula *pAux; 

    if (TLista_EhVazia(pLista) == 1){

        return;
    }

    pAux = pLista->pPrimeiro->pProximo;

    while(pAux != NULL) {

        printf ("%s ", pAux->item.nome);
        pAux = pAux->pProximo;
    }

    printf ("\n");
}

//Remove cada elemento de uma lista e libera a memória
void TLista_Esvazia(TLista *pLista) {

    TCelula *pAux1, *pAux2;

    pAux1 = pLista -> pPrimeiro;

    while (pAux1 != NULL){

        pAux2 = pAux1;

        pAux1 = pAux1->pProximo;

        free(pAux2);
    }
}

// Acrescenta o conteudo de uma lista ao final de outra, apenas manipulando ponteiros
void TLista_append(TLista *pLista1, TLista *pLista2){

    pLista1 ->pUltimo->pProximo = pLista2 ->pPrimeiro->pProximo;

    pLista1->pUltimo = pLista2->pUltimo;

}

// Inclui o conteudo de uma lista em outra, na posicao anterior a str, apenas manipulando ponteiros
void TLista_include(TLista *pLista1, TLista *pLista2, char *str){

    TCelula *aux1, *aux2;

    aux1 = pLista1 -> pPrimeiro;

    while (strcmp(aux1->item.nome, str) != 0){

        //aux1 = pLista2->pPrimeiro->pProximo;
        aux2 = aux1;

        aux1 = aux1->pProximo;
    }

    //quando sair do loop é pq encontrou o valor que precisavamos e assim:

    aux2->pProximo = pLista2->pPrimeiro->pProximo;

    pLista2->pUltimo->pProximo = aux1;
}
