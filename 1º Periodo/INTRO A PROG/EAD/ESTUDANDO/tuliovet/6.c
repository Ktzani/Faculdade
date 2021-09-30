#include <stdio.h>

#define TEMP 365

int main()
{

    double vetor[TEMP];

    //Determinar as temperaturas
    for (int i = 0; i < TEMP; i++)
    {

        printf("Digite o valor da temperatura %d: ", i + 1);
        scanf("%lf", &vetor[i]);
    }

    double soma = 0;

    //Somar as temperaturas
    for (int i = 0; i < TEMP; i++)
    {

        soma += vetor[i];
    }

    printf("\n");

    double media = soma / TEMP;

    printf("A temperatura media é igual a: %.2lf\n", media);

    int cont = 0;

    for (int i = 0; i < TEMP; i++)
    {
        if (vetor[i] < media)
        {

            cont++;
        }
    }

    printf("Temperaturas abaixo da media: %d\n", cont);

    return 0;
}