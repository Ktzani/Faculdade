#include "ordenacao.h"
#include <stdio.h>

int main ()
{
	int n;
  	TPais *paises = NULL;

	quantidadeDePaises(&n);

	//alocar o vetor
	paises = alocaPaises(paises, n);
 
	//preencher o vetor
	lerPaises(paises, n);

	//ordenar
	ordenaOURO(paises, n);

	ordenaPrataINSERTION(paises, n);

	ordenaBronzeINSERTION(paises, n);

	ordenaNomeINSERTION(paises, n);

    //imprimir quadro de medalhas

    imprimeQuadrodeMedalhas(paises, n);

	//desalocar o vetor
	paises = desalocaPaises (paises);

  	return 0;
}