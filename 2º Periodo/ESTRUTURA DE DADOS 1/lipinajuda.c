#include <stdio.h>

#include <string.h>

int main()
{

    int tamanho;

    int jogos;

    int jogadas;

    printf("Digite a quantidade de jogos: ");
    scanf("%d", &jogos);
    
    printf ("Digite o tamanho do seu tabuleiro: ");
    scanf("%d", &tamanho);

   // int tabela = tamanho * tamanho;

    char matriz[tamanho][10];

    //int matriztabu[tamanho][tamanho];

    int i;

    //int j;
    
    printf ("Coloque valores para cada linha do seu tabuleiro:\n");
    for (i = 0; i < tamanho; i++ ){

            printf ("Linha %d: ", i + 1);
            
            scanf (" %s", matriz[i]);
    }  

    /* for (i = 0; i < tamanho; i++ ){
        for (j = 0; j < tamanho; j++ ){

            matriztabu[i][j] = matriz[i];
        }
    }

    */

    printf("Digite a quantidade de jogadas: ");

    scanf ("%d", &jogadas);

    printf ("\n");

    for (i = 0; i < tamanho; i++ ){
        

            printf("%s ", matriz[i]);
            printf ("\n");
    }

    printf ("\n");
}
