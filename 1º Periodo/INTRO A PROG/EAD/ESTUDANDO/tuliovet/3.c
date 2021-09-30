#include <stdio.h>

#define soma 50

int main()
{

    int vet[soma];

    for (int i = 0; i < soma; i++)
    {

        printf("Digite um valor para posiçao %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf ("\n");

    double somar = 0;

    for (int i = 0; i < soma; i++){

        somar += vet[i];

    }

    printf ("A soma dos 50 termos é igual a %.0lf\n", somar);

    return 0;

}