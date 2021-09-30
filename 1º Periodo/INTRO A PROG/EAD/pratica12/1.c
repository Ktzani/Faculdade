#include <stdio.h>
#include <string.h>

typedef struct 
{
    char comida[20];
    double peso;  
    double calorias;
    
}Dieta;

void LerDieta (char nomedoarquivo[], Dieta cardapio[100], double calporgrama[],  int *nalimentos);

int main () {

    char nomeArquivo[50];
    
    int tamanho;

    int nAlimentos;

    double calporgrama[20];

    double maior = 0;

    Dieta cardapio[100];

    printf ("Nome do arquivo: ");
    fgets(nomeArquivo, 50, stdin);

    tamanho = strlen(nomeArquivo);

    nomeArquivo[tamanho - 1] = '\0';

    LerDieta(nomeArquivo, cardapio, calporgrama, &nAlimentos);
    
    printf ("\nAlimento            cal/grama\n");
    printf ("-------------------------------\n");

    for (int i = 0; i < nAlimentos; i++){  

        if(i == 0){

            maior = calporgrama[0];
        }
        else if (calporgrama[i] > maior){

            maior = calporgrama[i];
        }
    }

    for (int i = 0; i < nAlimentos; i++){ 

        printf ("%s              %.2lf", cardapio[i].comida, calporgrama[i]);

        if (calporgrama[i] == maior){
            printf (" *");
        }
    printf ("\n");
    }

    return 0;
}

    void LerDieta (char nomedoarquivo[], Dieta cardapio[100],  double calporgrama[], int *nalimentos) {

        FILE *arquivo = fopen(nomedoarquivo, "r");

        fscanf(arquivo, "%d", &*nalimentos);
        
        for (int i = 0; i < *nalimentos; i++){ 

            fscanf (arquivo, "%s %lf %lf", cardapio[i].comida, &cardapio[i].peso, &cardapio[i].calorias);

            calporgrama[i] = cardapio[i].calorias / cardapio[i].peso;
        }

        fclose(arquivo);
    }
