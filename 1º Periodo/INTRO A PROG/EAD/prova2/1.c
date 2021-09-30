#include <stdio.h>

#include <stdlib.h>

void troca(int n, int matriztroca[][100], int matriz[][100]);

int main()
{

    int n;
    int matriz[100][100];
    int matriztroca[100][100];

    do
    {
        printf("Digite um valor para n: ");
        scanf("%d", &n);

        if (n > 100)
        {

            printf("n invalido...\n");
        }

    } while (n > 100);

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite valores para matriz[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    troca(n, matriztroca, matriz);

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriztroca[i][j]);
        }

        printf("\n");
    }

    return 0;
}

void troca(int n, int matriztroca[][100], int matriz[][100])
{
    int menorcoluna[100];

    menorcoluna[0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == 0)
            {

                menorcoluna[j] = matriz[0][0];
            }
            else if (matriz[i][j] < menorcoluna[j])
            {

                menorcoluna[j] = matriz[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == (n - 1 - j))

                matriz[i][j] = menorcoluna[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriztroca[i][j] = matriz[i][j];
        }
    }
}