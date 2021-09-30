#include "arvore.h"
#include <stdio.h>

int main ()
{
	int n, no;
	TArvore *arvore;
	TItem x;

	TArvore_Inicia(arvore);

	scanf("%d", &n);

	//ler o primeiro no e criar a raiz da arvore
	scanf ("%d", &no);

	x.numero = no;

	TArvore_Insere_Raiz(arvore, x);

	for(int i = 1; i<n; i++) {
		//ler o no
		scanf ("%d", &no);
		x.numero = no;
		
		//inserir na arvore
		if (TArvore_Insere(*arvore, x)){

			continue;
		}

	}

	//gerar percurso em ordem prefixa
	printf("PREFIXA: ");
	Prefixa(*arvore);

	printf ("\n");

	//gerar percurso em ordem infixa
	printf("INFIXA: ");
	Infixa(*arvore);

	printf ("\n");

	//gerar percurso em ordem posfixa
	printf("POSFIXA: ");
	Posfixa(*arvore);

	printf ("\n");

	return 0;
}
