typedef struct
{
    int numero;
} TItem;

typedef struct celula
{
    struct celula *prox, *anterior;
    TItem item;
} TCelula;

typedef struct
{
    TCelula *primeiro, *pUltimo;
} TLista;

void TLista_concatena(TLista *lista1, TLista *lista2)
{
    lista2->primeiro->anterior = lista1->pUltimo;
    lista1->pUltimo->prox = lista2->primeiro->prox;
    lista1->pUltimo = lista2->pUltimo;
}

void TLista_Divide(TLista *lista1, TLista *lista2, int i)
{
    TCelula *pAux, *pAux2;

    while (pAux->item.numero != i){
	pAux2 = pAux;
	pAux = pAux->prox;
    }

    pAux2->prox = NULL;
    pAux->anterior = NULL;
    lista2->pUltimo = lista1->pUltimo;
    lista1->pUltimo = pAux2;
    lista2->primeiro = pAux1;	
}

void TLista_Copia (TLista *lista1, TLista *lista2)
{
    TCelula *pAux;

    for (pAux = lista1->primeiro; (pAux = NULL); pAux = pAux->prox)
    {
        TLista_Insere(lista2, pAux->item);
    }
}

int TLista_Pesquisa(TLista *lista1, int elemento)
{
    TCelula *pAux;

    for (pAux = lista1->primeiro; (pAux = NULL); pAux = pAux->prox)
    {
        if (pAux -> item.numero == elemento)
            return 1;
    }
    return 0;
}