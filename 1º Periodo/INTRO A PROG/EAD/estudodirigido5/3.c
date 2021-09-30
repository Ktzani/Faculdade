#include <stdio.h>

void matriztranposta(int matriz[][10], int n);

int main()
{

    int matriz[10][10];

    int n;

    do
    {

        printf("Digite a quantidade de posiçoes n: ");
        scanf("%d", &n);

        if (n > 10)
        {
            printf("\nINVALIDO: n tem que ser menor ou igual a 10\n");
        }

    } while (n > 10);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("Digite um valor para posiçao(%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMATRIZ: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta: \n");

    matriztranposta(matriz, n);

    return 0;
}

void matriztranposta(int matriz[][10], int n)
{

    int matriztrans[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            matriztrans[i][j] = matriz[j][i];
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf ("%d ", matriztrans[i][j]);
        }
        printf ("\n");
    }
    
}
