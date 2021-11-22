#ifndef arvorebestrela_h
#define arvorebestrela_h

#define M 2
#define MM 2 * M

typedef long TChave;

typedef struct TipoRegistro{
    TChave chave;
    long int dado1;
    char dado2[1000];
    char dado3[5000];
} TipoRegistro ;

typedef struct TipoPaginaB* TipoApontadorB;

typedef enum {Interna, Externa} TipoIntExt;

typedef struct TipoPaginaB{
    TipoIntExt Pt;
    union {
        struct { //Pagina interna
            int ni;
            TChave ri[MM];
            TipoApontadorB pi[MM + 1];
        } U0;
        struct { //Pagina externa (folha)
            int ne;
            TipoRegistro re[2 * MM];
        } U1;
    } UU;
}TipoPaginaB;

int pesquisaArvoreBEstrela(TipoRegistro *x, TipoApontadorB ap);
void criaArvoreBEstrela(FILE *arq, TipoApontadorB *ap);
void insereArvoreBEstrela(TipoRegistro Reg, TipoApontadorB *ap);
void insrecuBEstrela(TipoRegistro Reg, TipoApontadorB ap, short *cresceu, TipoRegistro *RegRetorno, TipoApontadorB *ApRetorno);
void insereNapaginaEstrela(TipoApontadorB ap, TipoRegistro Reg, TipoApontadorB apDir);

#endif