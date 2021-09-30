#include "hash.h"
#include <stdlib.h>
#include <stdio.h>

//Manter como especificado
void TLista_Inicia(TLista *pLista){

    pLista->pPrimeiro = (TCelula*) malloc(sizeof(TCelula));

    pLista->pUltimo = pLista->pPrimeiro;

    pLista->pPrimeiro->pProximo = NULL;
}

//Manter como especificado
int TLista_EhVazia(TLista *pLista){

    return (pLista->pUltimo == pLista->pPrimeiro ) ;
}

//Manter como especificado
int TLista_Insere(TLista *pLista , TItem x){

    pLista->pUltimo->pProximo = (TCelula*) malloc (sizeof(TCelula));

    pLista->pUltimo = pLista->pUltimo->pProximo;

    pLista->pUltimo->item = x;

    pLista->pUltimo->pProximo = NULL;

    return 1;
}

//Manter como especificado
void THash_Inicia(THash *hash, int nro_listas){

    int i;

    alocavetor(hash);

    for(i = 0; i < nro_listas; i++){

        TLista_Inicia(&hash->vetor[i]);
    }
}

//Manter como especificado
int THash_H(THash *hash, TChave chave){

    int end = chave % hash->nro_listas;

    return end;
}

//Manter como especificado
TCelula *THash_PesquisaCelula(THash *hash, TChave chave){
    int i = THash_H(hash, chave);
    TCelula *aux;

    if(TLista_EhVazia(&hash->vetor[i]))
        return NULL;

    aux = hash->vetor[i].pPrimeiro;

    while (aux->pProximo->pProximo != NULL && aux->pProximo->item.numero != chave){

        aux = aux->pProximo;

    }

    if(aux->pProximo->item.numero == chave)
        return aux;

    else 
        return NULL;
}

//Manter como especificado
int THash_Insere (THash *hash, TItem x){

    if(THash_PesquisaCelula(hash, x.numero) == NULL){
        TLista_Insere(&hash->vetor[THash_H(hash, x.numero)], x);

        return 1;
    }
    return 0;
}

void alocavetor(THash *hash){

	hash->vetor = (TLista*) malloc (hash->nro_listas * sizeof(TLista));

	if (hash->vetor == NULL) {

		printf("Falta de memoria...\n");

        exit(1);
	}
}

void desalocavetor(THash *hash){

    free(hash->vetor);

}
