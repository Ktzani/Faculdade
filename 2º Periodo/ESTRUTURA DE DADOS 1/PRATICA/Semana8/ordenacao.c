#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Manter como especificado
TipoAluno *alocaAlunos(TipoAluno *alunos, int n){

  alunos = (TipoAluno*) malloc(n * sizeof(TipoAluno));
  
  if (alunos == NULL){
    printf ("Falta de memoria...\n");
    return 0;
  }

  return alunos;
}

//Manter como especificado
TipoAluno *desalocaAlunos(TipoAluno *alunos){
  
  free(alunos);

  return NULL;
}

void ordena(TipoAluno *alunos, int n){
  int i, j;

  TipoAluno aux;

  /*while (letra ){ Vou comparar as primeiras letras dos nomes para coloca-las em ordem alfabetica. 
                    Caso as primeiras letras sejam iguais em algum nome, compararamos essas letras que
                    que sao iguais*/
    for (i = 1; i < n; i++){

    
      aux = alunos[i];

      j = i - 1;

    while (j >= 0 && strcmp (aux.nome, alunos[j].nome) < 0){

        alunos[j + 1] = alunos[j];

        j--;
    }

    alunos[j + 1] = aux;
    
    }
}
