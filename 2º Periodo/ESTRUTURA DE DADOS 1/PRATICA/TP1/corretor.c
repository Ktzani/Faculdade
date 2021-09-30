#include "corretor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alunos
{
    char problema;

    char julgamento[20];

    int tempoUNICO;
};

void lerSubmissoes(int *submi)
{
    //do {

    scanf("%d", submi);

    // } while (submi >= 1 && submi <= 300);
}

TADaluno *alocaAlunos(TADaluno *alu, int submi)
{

    alu = (TADaluno *) malloc(submi * sizeof(TADaluno));

    if (alu == NULL)
    {

        printf("Falta de memória");
        exit(1);
    }

    return alu;
}

TADaluno *desalocaAlunos(TADaluno *alu){

    free (alu);

    return NULL;
}

void lerAlunosSubmissoes(TADaluno *alu, int submi)
{

    int i;

    for (i = 0; i < submi; i++)
    {

        scanf(" %c", &alu[i].problema);

        scanf("%d", &alu[i].tempoUNICO);

        scanf(" %s", alu[i].julgamento);
    }
}

int casoscorretos(TADaluno *alu, int submi)
{

    int i;

    int casoscorretos = 0;

    for (i = 0; i < submi; i++)
    {
        if (strcmp(alu[i].julgamento, "correto") == 0)
        {

            casoscorretos++;
        }
    }

    return casoscorretos;
}


int somandoTempos(TADaluno *alu, int submi)
{

    int i, j;

    int tempototal = 0;

    char letraProcurada;

    for (i = 0; i < submi; i++)
    {
        if (strcmp(alu[i].julgamento, "correto") == 0){

            tempototal += alu[i].tempoUNICO; //soma o tempo quando o problema estiver correto
        }

        else {  //if (strcmp(alu[i].julgamento, "incompleto") == 0) 

            //Vai passar novamente por todos os problemas dps do i para encontrar letras parecidas ao que esta no i
            for (j = i + 1; j < submi; j++) {   

                letraProcurada = alu[i].problema;

                //Se passar por um problema que seja igual ao dado em i e esse tiver um julgamento correto, vai somar 20 ao tempo total
                if (letraProcurada == alu[j].problema && (strcmp(alu[j].julgamento, "correto") == 0)) {  

                    tempototal += 20;
                }
            }
        }
    }

    return tempototal;
}

void printandoCorrecao(int tempototal, int corretos)
{

    printf("%d %d\n", corretos, tempototal);

}




