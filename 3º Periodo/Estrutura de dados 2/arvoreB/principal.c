#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "arvoreb.h"
//#include "contimpri.h"
//#include <conio.h>
//#include "asi.h"
//#include "arvore.h"
//#include "arvorebestrela.h"

int main () {

    long int chave = 10;

    FILE *arqReg;

    TipoApontador ap;

    TipoRegistro *r;

    r = (TipoRegistro*) malloc (sizeof(TipoRegistro));

    r->chave = chave;
    
    int quantidade = 100;

    int contComp = 0; 
    int contTrans = 0; 

    if((arqReg = fopen("aleatorio.bin", "rb")) == NULL){
        printf ("ERRO na abertura do arquivo \n");
        return 0;
    }

    //Árvore B
    //1º construção da arvore B 
    //CONTAR TEMPO DE PRE PROCESSAMENTO
    criaArvoreB(arqReg, &ap, quantidade, &contComp, &contTrans);

    //2º pesquisa da chave na arvore B
    //CONTAR TEMPO DE PESQUISA 
    if (pesquisaArvoreB(r, ap, &contComp, &contTrans)){

        printf("Registro encontrado!\n");
        imprimeRegistro(*r);
    }  

    else {
        printf("Não há registro com essa chave...\n");
    }


    imprimirExperimento (contComp, contTrans);

    fclose(arqReg);
    
    return 0;
}


