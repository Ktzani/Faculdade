#include "prioridade.h"
#include <stdio.h>

int main ()
{
	int n, m;
	TipoCaixa *heap = NULL;

	//ler n e m
	scanf ("%d", &n); // numero de funcionarios

	scanf ("%d", &m); // numero de clientes

	int cliente;

	//alocar o vetor para o heap com tamanho n
	heap = alocaVetor(heap, n);

	//ler o tempo de atendimento de cada caixa
	int i;

	for (i = 0; i < n; i ++){

		heap[i].identific = i + 1;

		scanf ("%d", &heap[i].tempoatendi);

		heap[i].tempoocupado = 0;
	}

	//criar a fila de prioridades a partir da identificação
	Heap_Constroi(heap, n);

	//a principio, cada caixa esta disponivel no tempo zero
	int tempototal = 0;
	
	//int funcionario;

	while (m--) {
		//para cada cliente, ler a quantidade de produtos
		scanf("%d", &cliente);

		Heap_Constroi(heap, n); /*sempre coloco o menor valor no topo da fila, ou seja, irei refazer a fila sempre 
									e portanto pegarei sempre o heap[0]
									LEMBRANDO QUE: se os tempos forem iguais, ordeno pela identificação*/

		heap[0].tempoocupado += heap[0].tempoatendi * cliente; 

		if(tempototal < heap[0].tempoocupado){

			tempototal = heap[0].tempoocupado;

		}
	}




	//desalocar o vetor do heap
	heap = desalocaVetor(heap);

	//imprimir a resposta
	printf ("%d\n", tempototal);

	return 0;
}
