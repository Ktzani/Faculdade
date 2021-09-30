#include <stdio.h>

#define N 1000
int main()
{

    int n;

    do
    {

        printf("Digite o numero de termos n: ");

        scanf("%d", &n);

        if (n <= 2)
        {

            printf("Digite um valor maior que 2\n");
        }

    } while (n <= 2);

    int vetor[N];

    vetor[0] = 1;
    vetor[1] = 1;

    printf ("%d %d ", vetor[0], vetor[1]);

    for (int i = 2; i < n; i++)
    {

        vetor[i] = vetor[i - 1] + vetor[i - 2];

        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
