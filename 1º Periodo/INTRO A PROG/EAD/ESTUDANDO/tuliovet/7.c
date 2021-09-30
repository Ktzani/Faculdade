#include <stdio.h>

#define num 10

int main()
{

    int vetor[num];

    for (int i = 0; i < num; i++)
    {

        printf("Digite um valor para posiçao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n");

    int invVetor[num];

    int j = 9;

    for (int i = 0; i < num; i++)
    {

        invVetor[i] = vetor[j];
        j--;
    }

    for (int i = 0; i < num; i++)
    {

        printf("Para posiçao %d |  Vetor original: %d\t Vetor invertido: %d\n",i , vetor [i],invVetor[i]);
    }

    printf("\n");

    return 0;
}