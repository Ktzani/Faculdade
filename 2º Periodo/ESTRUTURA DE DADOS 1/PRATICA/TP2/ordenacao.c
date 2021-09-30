#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Manter como especificado
TPais *alocaPaises(TPais *paises, int n){

  paises = (TPais*) malloc(n * sizeof(TPais));
  
  if (paises == NULL){
    printf ("Falta de memoria...\n");
    return 0;
  }

  return paises;
}

//Manter como especificado
TPais *desalocaPaises(TPais *paises){
  
  free(paises);

  return NULL;
}

//pega a quantidade de paises
void quantidadeDePaises(int *n){

    scanf ("%d", n);
}

//pega os nomes de cada pais e suas respectivas medalahas de ouro, prata e bronze 
void lerPaises(TPais *paises, int n){

    int i;
    for (i = 0; i < n; i++){
		scanf (" %s", paises[i].nome);
        scanf ("%d", &paises[i].ouro);
        scanf ("%d", &paises[i].prata);
        scanf ("%d", &paises[i].bronze);
	}
}


void ordenaOURO(TPais *paises, int n){
    int i, j;

    TPais aux;

    /*int pra;

    int bron;

    int pal; 

    TPais troca; */

    for (i = 1; i < n; i++){
        aux = paises[i];

        j = i - 1;
        
    
        while (j >= 0 && aux.ouro < paises[j].ouro){

            paises[j + 1] = paises[j];

            j--;
        }

        paises[j + 1] = aux;
    }

}


void imprimeQuadrodeMedalhas(TPais *paises, int n){
    int i;

    for (i = n - 1; i >= 0; i--){

        printf ("%s %d %d %d\n", paises[i].nome, paises[i].ouro, paises[i].prata, paises[i].bronze);
    }

}

void ordenaPrataINSERTION(TPais *paises, int n){
    int i, j;

    TPais aux;

    //TPais troca;

    for(i = 1; i < n; i++){
        aux = paises[i];
        j = i - 1;

        if (aux.ouro == paises[j].ouro){
            while (j >= 0 && aux.prata < paises[j].prata && aux.ouro == paises[j].ouro){

                paises[j + 1] = paises[j];

                j--;

            }
            paises[j + 1] = aux;
        }
    }
}
void ordenaBronzeINSERTION(TPais *paises, int n){

    int i, j;

    TPais aux;

    //TPais troca;

    for(i = 1; i < n; i++){

        aux = paises[i];
        j = i - 1;
        
        if(aux.ouro == paises[j].ouro && aux.prata == paises[j].prata){
            while (j >= 0 && aux.bronze < paises[j].bronze && aux.ouro == paises[j].ouro && aux.prata == paises[j].prata){
            
                paises[j + 1] = paises[j];
                j--;
            }
            paises[j + 1] = aux;
        }
    }
}

void ordenaNomeINSERTION(TPais *paises, int n){

    int i, j;

    TPais aux;

    //TPais troca;

    for(i = 1; i < n; i++){

        aux = paises[i];
        j = i - 1;

        if (j >= 0 && aux.ouro == paises[j].ouro && aux.prata == paises[j].prata && aux.bronze == paises[j].bronze){
            while (j >= 0 && strcmp (aux.nome, paises[j].nome) > 0 && aux.ouro == paises[j].ouro && aux.prata == paises[j].prata && aux.bronze == paises[j].bronze){

                paises[j + 1] = paises[j];
                j--;

            }
            paises[j + 1] = aux;
        }
    }
}