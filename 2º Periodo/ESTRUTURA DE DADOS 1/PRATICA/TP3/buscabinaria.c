#include "buscabinaria.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void TDicionario_Inicia (TDicionario *dic){

    dic->n = 0;

    scanf("%d", &dic->max);

    dic->v = (TItem*) malloc(dic->max * sizeof(TItem));

}

void desalocaDICIONARIO(TDicionario *dic){

    free(dic->v);
}

void Pega_AREA(double *area){

    scanf("%lf", area);
}

void Pega_NUMEROS(long int *compri) {

    scanf("%ld", compri);

}

/*
int TDicionario_FindMaior (TDicionario *dic, TChave comp) {
    int i;
    int maior ;
    int tiramaior;

    dic->v[0].comprimentoti = maior;

    for(i = 1; i < dic->max; i++){

        if (dic->v[i].comprimentoti > maior)
            maior = dic->v[i].comprimentoti;
            tiramaior = i;
    }

    return i;
}
*/

void TDicionario_Insere(TDicionario *dic, long int comp){

    if(dic->n == dic->max) {

        dic->max *= 2;

        dic->v = (TItem*) realloc (dic->v, dic->max * sizeof(TItem));
    }
    
    dic->v[dic->n++].comprimentoti = comp;
}

int somaTUDO (TDicionario *dic){    

    int i;

    double soma = 0;

    for (i = 0; i < dic->max; i++){

        soma += dic->v[i].comprimentoti;

    }

    return soma;
}

void imprimirIMPOSSIVEL(){

    printf("-.-\n");
}

void imprimirEXATO(){

    printf(":D\n");
}

void imprimirAltura(double altura){

    printf("%.4lf\n", altura);
}

double TDicionario_Binario(TDicionario *dic, double area){

    int i;

    double esq, dir;

    double areaRecortada;

    double aux;

    double altura;

    double alturaanterior;

    esq = 0;

    dir = dic->v[dic->max - 1].comprimentoti;

    altura = 0;

    do{
        areaRecortada = 0;

        alturaanterior = altura;
        
        altura = (esq + dir) / 2;

        i = dic->max - 1;

        while (dic->v[i].comprimentoti > altura){
            aux = dic->v[i].comprimentoti - altura;
            
            areaRecortada = areaRecortada + aux;

            // printf("AREA RECORTADA: %.1f\n", areaRecortada);
            i--;
        }

        if(area < areaRecortada){
            esq = altura;
        }
        else{
            dir = altura;
        }

        //printf("Altura: %.4f\n", altura);

    } while(fabs(alturaanterior - altura) > 0.000001);

    
    return altura;

}

void ordenaVetor (TDicionario *dic, int L, int R){

    
    //Mergesort 
    //n é o tamanho do vetor. Portanto, a ultima casa é igual a n - 1

    int M;

    if (L < R){

        M = (L + R) / 2;

        ordenaVetor(dic, L, M);
        ordenaVetor(dic, M + 1, R);
        merge(dic, L, M, R);
    }
}

void merge (TDicionario *dic, int L, int M, int R){

    int tamanhovetL = M - L + 1;

    int tamanhovetR = R - M;
    
    int i, j;

    int *vetorL = (int *) malloc (tamanhovetL * sizeof(int));

    if (vetorL == NULL) {
        printf ("Falta de memoria...\n");
        return;
    }

    int *vetorR = (int *) malloc (tamanhovetR * sizeof(int));;

    if (vetorR == NULL) {
        printf ("Falta de memoria...\n");
        return;
    }

    for (i = 0; i < tamanhovetL; i++){

        vetorL[i] = dic->v[i + L].comprimentoti;
    }

    for (j = 0; j < tamanhovetR; j++){

        vetorR[j] = dic->v[M + j + 1].comprimentoti;
    }

    i = 0;

    j = 0;

    int k;

    for (k = L; k <= R; k++){

        if (i == tamanhovetL){
            dic->v[k].comprimentoti = vetorR[j];
            j++;
           
        }

        else if (j == tamanhovetR) {
            dic->v[k].comprimentoti = vetorL[i];
            i++;
           
        }

        else if (vetorL[i] <= vetorR[j]){
            dic->v[k].comprimentoti = vetorL[i];
            i++;
            
        }

        else {
            dic->v[k].comprimentoti = vetorR[j];
            j++;
    
        }

    }

    free (vetorR);

    free (vetorL);
}





