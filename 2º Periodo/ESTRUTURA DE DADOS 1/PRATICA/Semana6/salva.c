aux1 = pLista2->pPrimeiro->pProximo;

    while(aux1 != NULL){

        TLista_InsereFinal(pLista1, aux1->item);
        
        aux1 = aux1->pProximo;

    }



    TCelula *pAux, *pAux2;

    pAux = pLista->pPrimeiro;

    while (pAux != NULL){
        
        pAux2 = pAux;

        pAux = pAux->pProximo;

        free(pAux2);
    }



     pAux = pLista ->pPrimeiro->pProximo;

        pAux = pAux->pProximo

         TCelula *pAux;

    pAux = pLista ->pPrimeiro->pProximo;
