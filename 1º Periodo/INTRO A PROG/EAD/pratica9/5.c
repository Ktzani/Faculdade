#include <stdio.h>

void menormaior(int *maior, int *menor, int n, int vetor[]);

int main()
{

    int n, menor, maior;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++)
    {

        printf("Digite um valor para posiçao %d:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    menormaior(&maior, &menor, n, vetor);

    printf ("Menor valor: %d\n", menor);
    printf ("Maior valor: %d\n", maior);

    return 0;

}

    void menormaior(int *maior, int *menor, int n, int *vetor)
    {

        for (int i = 0; i < n; i++)
        {

            if (i == 0)
            {

                *menor = vetor[0];
                *maior = vetor[0];
            }
            else if (vetor[i] > *maior)
            {

                *maior = vetor[i];
            }
            else if (vetor[i] < *menor)
            {

                *menor = vetor[i];
            }
        }
    }
