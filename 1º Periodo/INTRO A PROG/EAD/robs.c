#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Digite um valor que informará os n primeiros números da série de Fibonacci: ");
        scanf("%d", &n);
        if (n <= 2)
            printf("O valor deve ser maior que 2");
    } while (n <= 2);
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        vetor[0] = 1;
        vetor[1] = 1;
        vetor[i + 2] = vetor[i] + vetor[i + 1];
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}