#include <stdio.h>

#define posi 50

int main()
{

    int n;

    do
    {

        printf("Digite a quantidade de valores n: ");

        scanf("%d", &n);

        if (n > 50)
        {

            printf("ERRO: A QUANTIDADE TEM QUE SER MENOR QUE 50\n");
        }

    } while (n > 50);

    int vetorast[posi];

    printf("Digite um valor para posições:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetorast[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int recVetor;

        int contast = 0;

        recVetor = vetorast[i];

        while (contast < recVetor)
        {
            printf("*");
            contast++;
        }
        printf("\n");
    }

    return 0;
}
