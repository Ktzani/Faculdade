# define INICIO 0
# define TAM_MAX 1000


typedef struct {
    int numero ; 
} TItem ;

typedef struct {
    TItem item [ TAM_MAX ];

    int primeiro , ultimo ;
} TLista;

void TLista_FazVazia ( TLista * pt_lista ) {
    pt_lista -> primeiro = INICIO ;
    pt_lista -> ultimo = pt_lista -> primeiro ;
}

int TLista_EhVazia (TLista * pt_lista ) {
    return ( pt_lista -> ultimo == pt_lista -> primeiro );
}


int TLista_tentaInserir(TLista * pt_lista, TItem x){

    if( pt_lista->ultimo == TAM_MAX - 1){ // - 1 pq em um vetor conta-se o (tamanho dele - 1) 
        return 0; //Lista CHEIA
    }

    pt_lista->item[pt_lista->ultimo++] = x;
    return 1;
}

int TLista_concatena(TLista * pt_lista_um, TLista * pt_lista_dois){

    if(TLista_tamanho( pt_lista_um ) + TLista_tamanho( pt_lista_dois ) >= TAM_MAX) {
        return 0;
    }

    int cont;

    int inserir;
    for( cont = pt_lista_dois->primeiro; cont < pt_lista_dois->ultimo; cont++) {

        inserir = TLista_tentaInserir( pt_lista_um, pt_lista_dois->item[cont] ); // essa funçao so retorna 0 caso TODA lista esteja ocupada por um valor
        if(!inserir){ // se inserir retornar 0, a condiçao é verdadadeira ja que sera !0 que é igual a 1 e vai retornar 0 que é falso
                     
            return 0;
        }
    }
    return 1;
}

int TLista_Divide(TLista *pt_lista, int p, TLista *pt_dividida){ // p é a posiçao que eu quero dividir

    int cont;

    int correto;

    TLista_FazVazia (pt_dividida);

    if (TLista_EhVazia(pt_lista) || p >= pt_lista-> ultimo){

        return 0;
    }


    for (cont = p; cont < pt_lista->ultimo; cont ++){

        correto = TLista_tentaInserir(pt_dividida, pt_lista->item[cont]); /*pega os valores à frente da posiçao 'p' da lista completa 
                                                                        e coloca na "lista dividida"*/

        if (!correto)   {
            return 0;
        }
    } 

    pt_lista->ultimo = p - 1;

    return 1;
}

int TLista_Copia (TLista *pt_lista, TLista *pt_copia) {

    int cont;

    int insere;

    TLista_FazVazia (pt_copia);

    if ( TLista_EhVazia(pt_lista)){

        return 1;

    }

    for (cont = pt_lista->primeiro; cont < pt_lista->ultimo; cont++){

        insere = TLista_tentaInserir(pt_copia, pt_lista->item[cont]);
        if (!insere) {

            return 0;

        }
    }

    return 1;

}

int TLista_Pesquisa (TLista *pt_lista, int procurado) {

    int cont;

    if ( TLista_EhVazia(pt_lista)){

        return 0;

    }

    for (cont = pt_lista->primeiro; cont < pt_lista->ultimo; cont++){


        if (procurado == pt_lista->item[cont].numero){

            return cont;
        }
    }   
}   