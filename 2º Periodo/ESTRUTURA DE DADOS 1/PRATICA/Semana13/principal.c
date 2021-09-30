#include "hash.h"
#include <stdio.h>

int main(){
	//criar variavel para tabela hash
	THash tabela;

	TItem x;

	int i;

	//ler tamanho da tabela hash e a quantidade de chaves
	scanf("%d", &tabela.nro_listas);

	scanf("%d", &tabela.n);

	//inicializar a tabela hash
	THash_Inicia(&tabela, tabela.nro_listas);

	//para cada chave da entrada, ler e inserir na tabela hash
	for(i = 0; i < tabela.n; i ++){
		scanf ("%d", &x.numero);

		THash_Insere(&tabela, x);

	}
	//imprimir a tabela hash de acordo com a especificacao da saida

	TCelula *aux;

	for (i = 0; i < tabela.nro_listas; i++){
		printf ("%d -> ", i);

		aux = tabela.vetor[i].pPrimeiro->pProximo;

		while (aux != NULL){

			printf ("%d -> ", aux->item.numero);

			aux = aux->pProximo;
		}

		printf("\\");

		printf("\n");

	}
	
	desalocavetor(&tabela);

   	return 0;
}
