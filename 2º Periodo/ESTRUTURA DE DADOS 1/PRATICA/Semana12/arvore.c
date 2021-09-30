#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

//Manter como especificado
void TArvore_Inicia (TNo ** pRaiz){

    *pRaiz = NULL;
}
//Manter como especificado
void TArvore_Insere_Raiz (TNo ** ppRaiz , TItem x){
    if (*ppRaiz == NULL) {

        *ppRaiz = TNo_Cria(x);
        return;
    }
}
//Manter como especificado
int TArvore_Insere (TNo * pRaiz , TItem x){

    if (pRaiz == NULL)
        return -1;

    if (x.numero < pRaiz->item.numero){
        if(pRaiz->pEsq == NULL) {

            pRaiz->pEsq = TNo_Cria(x);
            return 1;
        }
        return TArvore_Insere(pRaiz->pEsq, x);
    }
    
    if(x.numero > pRaiz->item.numero){
        if(pRaiz->pDir == NULL){

            pRaiz->pDir = TNo_Cria(x);
            return 1;
        }
        return TArvore_Insere(pRaiz->pDir, x);

    }

    return 0; 
}

//Manter como especificado
TNo * TNo_Cria (TItem x){

    TNo *pAux = (TNo *) malloc (sizeof(TNo));
    pAux->item = x;
    pAux->pEsq = NULL;
    pAux->pDir = NULL;

    return pAux;

}
//Manter como especificado
void Prefixa(TNo * p){
    if (p == NULL)
        return;
    printf("%ld ", p->item.numero);
    Prefixa(p->pEsq);
    Prefixa(p->pDir);
}

//Manter como especificado
void Infixa(TNo * p){
    if(p == NULL)
        return;
    Infixa(p->pEsq);
    printf("%ld ", p->item.numero);
    Infixa(p->pDir);
}

//Manter como especificado
void Posfixa(TNo * p){
    if(p == NULL)
        return;

    Posfixa(p->pEsq);
    Posfixa(p->pDir);
    printf ("%ld ", p->item.numero);
}
