#include "duende.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct duende {
  char nome[20];

  int idade;

  int escalado;
};

struct time { 
    
    char lider[20];
    char entregador[20];
    char piloto[20];

    int idadelider;
    int idadeentregador;
    int idadepiloto;
};

void lerQuantidade(int *qtd){

  scanf ("%d", qtd);
}

//Manter como especificado
TADduende *alocaDuendes(TADduende *D, int qtd){

  D = (TADduende*) malloc (qtd * sizeof(TADduende));

  if (D == NULL){

    printf ("Falta de memória");
    exit(1);
  }
  return D;
}

//Manter como especificado
TADtime *alocaTimes(TADtime *T, int qtd){
  T = (TADtime*) malloc (qtd * sizeof(TADtime));

  if (T == NULL){

    printf ("Falta de memória");
    exit(1);
  }

  return T;
}

//Manter como especificado
TADduende *desalocaDuendes(TADduende *D){

  free (D);
  return NULL;

}

//Manter como especificado
TADtime *desalocaTimes(TADtime *T){

  free (T);

  return NULL;
}

//Manter como especificado
void lerDuendes(TADduende *D, int qtd){
  int i;

  for (i = 0; i < qtd; i++){

    scanf (" %s", D[i].nome);

    scanf ("%d", &D[i].idade);

    D[i].escalado = 0;
  } 
  
}

//Manter como especificado
void escalarTimes(TADduende *D, TADtime *T, int qtd){
  int i, indice;

  //completar o XXX
  for (i = 0; i < qtd/3; i++)
  {
    indice = proximoMaisVelho(D, qtd);

    //marcar o duende do indice como escalado
    D[indice].escalado = 1;

    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].lider, D[indice].nome);
    //copiar a idade

    T[i].idadelider = D[indice].idade;


  }

  for (i = 0; i < qtd/3; i++)
  {
    indice = proximoMaisVelho(D, qtd);

    //marcar o duende do indice como escalado
    D[indice].escalado = 1;

    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].entregador, D[indice].nome);

    //copiar a idade
    T[i].idadeentregador = D[indice].idade;
  }

  for (i = 0 ; i < qtd/3; i++)
  {
    indice = proximoMaisVelho(D, qtd);

    //marcar o duende do indice como escalado
    D[indice].escalado = 1;
    
    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].piloto, D[indice].nome);

    //copiar a idade
    T[i].idadepiloto = D[indice].idade;
  }
}

int proximoMaisVelho(TADduende *D, int qtd){
  int indice;

  int maiorIdade;

  maiorIdade = 9;

  for (int i = 0; i < qtd; i++){

    if(D[i].idade > maiorIdade && D[i].escalado == 0){

        maiorIdade = D[i].idade ;

        indice = i;
    }
  }


  return indice;
}

//Manter como especificado
void printTimes(TADtime *T, int qtd){
  
  int i;

  int quantidadetimes = qtd;

  for (i = 0; i < quantidadetimes; i ++){

    printf("Time %d\n", i + 1);

    printf ("%s %d\n", T[i].lider, T[i].idadelider);
    printf ("%s %d\n", T[i].entregador, T[i].idadeentregador);
    printf ("%s %d\n", T[i].piloto, T[i].idadepiloto);

    printf ("\n");
  }

}