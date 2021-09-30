#include "ordenacao.h"
#include <stdio.h>

int main ()
{
	int i;
	int n, k;
  	TipoAluno *alunos = NULL;

	scanf("%d", &n);
	scanf("%d", &k); 

	//alocar o vetor
	alunos = alocaAlunos(alunos, n);


	// Sempre uso o n + 1, pq o vetor sera preenchido a partir de 

	//preencher o vetor
	for (i = 0; i < n; i++){
		scanf (" %s", alunos[i].nome);
	}

	//ordenar
	ordena(alunos, n);

	//imprimir o resultado
	for (i = 0; i < n; i++){
		if (i == k - 1){
			printf ("%s\n", alunos[i].nome);
		}
	}

	//desalocar o vetor
	alunos = desalocaAlunos (alunos);

  	return 0;
}
