#include <stdio.h>

#include <stdlib.h>

float *reverso(int n, float *v);

int main()
{

    int tamanha_vetor;

    printf("Digite o tamanho do vetor principal:\n");

    scanf("%d", &tamanha_vetor);

    float *vetor_principal = (float *)malloc(tamanha_vetor * sizeof(float));

    if (vetor_principal == NULL)
    {

        printf("Falta de memória\n");

        return 0;
    }

    int i;

    for (i = 0; i < tamanha_vetor; i++)
    {

        printf("Digite um valor para Vetor[%d] = ", i);

        scanf("%f", &vetor_principal[i]);
    }

    int j;

    float *vetor_reverso = reverso(tamanha_vetor, vetor_principal);

    for (j = 0; j < tamanha_vetor; j++)
    {

        printf("%.2f\n", vetor_reverso[j]);
    }

    free(vetor_reverso);
    free(vetor_principal);

    return 0;
}

float *reverso(int n, float *v)
{

    float *rever = (float *)malloc(n * sizeof(float));

    if (rever == NULL)
    {

        printf("Falta de memória\n");

        exit(1);
    }

    int g;

    for (g = 0; g < n; g++)
    {

        rever[g] = v[(n - 1) - g];
    }

    return rever;
} 