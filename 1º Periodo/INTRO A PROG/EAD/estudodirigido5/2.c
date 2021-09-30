#include <stdio.h>

int somaColuna0(int matriz[][3]);

int produtoLinha0(int matriz[][3]);

int somaTotal(int matriz[][3]);

int main()
{

    int matriz[3][3];
    int ResSomacoluna0, Resprodutolinha0, ResSomaTotal;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("Digite um valor para posiçao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    ResSomacoluna0 = somaColuna0(matriz);

    printf("\nSoma da primeira coluna = %d\n", ResSomacoluna0);

    Resprodutolinha0 = produtoLinha0(matriz);

    printf("\nProduto da primeira coluna = %d\n", Resprodutolinha0);

    ResSomaTotal = somaTotal(matriz);

    printf("\nSoma total = %d\n", ResSomaTotal);

    return 0;
}

int somaColuna0(int matriz[][3])
{

    int somacol0 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (j == 0)
            {

                somacol0 += matriz[i][0];
            }
        }
    }
    return somacol0;
}

int produtoLinha0(int matriz[][3])
{

    int prodlin0 = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (i == 0)
            {

                prodlin0 *= matriz[0][j];
            }
        }
    }
    return prodlin0;
}

int somaTotal(int matriz[][3])
{

    int somatot = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            somatot += matriz[i][j];
        }
    }
    return somatot;
}
