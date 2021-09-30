#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>

int main ()
{

	int *vetor = NULL;
	int i, n, movimentos;

	while(scanf("%d", &n), n)
	{
		int L = 0;
		int R = n - 1;
		
		//alocar vetor
		vetor = alocaVetor(vetor, n);

		//preencher o vetor
		for (i = 0; i < n; i++){

			scanf ("%d", &vetor[i]);

			if (vetor[i] == 0){
				free (vetor);
				break;
			}
		}

		movimentos = 0;
		//ordenar o vetor e determinar o número de movimentos
		ordenacao(vetor, L, R, &movimentos);

		//imprimir o resultado
		if (movimentos % 2 == 0){
			printf ("Carlos\n");

		}

		else {
			printf ("Marcelo\n");
		}

		//desalocar o vetor
		vetor = desalocaVetor(vetor);


	}

	return 0;
}
