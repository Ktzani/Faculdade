# ifndef arvoreb_h
# define arvoreb_h

#include "contimpri.h"


void inicializaArvoreB (TipoApontador *arvore);

void criaArvoreB(FILE *arqReg, TipoApontador *ap, int quantidade, int *contComp, int *contTrans);

int pesquisaArvoreB (TipoRegistro *x, TipoApontador ap, int *contComp, int *contTrans);

void insereArvoreB(TipoRegistro Reg, TipoApontador *ap, int *contComp, int *contTrans);

void InsRecu (TipoRegistro Reg, TipoApontador ap, short *cresceu, TipoRegistro *regRetorno, TipoApontador *apRetorno, int *contComp, int *contTrans);

void InsereNaPagina (TipoApontador ap, TipoRegistro Reg, TipoApontador apDir, int *contComp, int *contTrans);


# endif
