#include <stdio.h>

int main ()
{
    int vet[100];

    int numeros = 1;

    for (int i = 0; i < 100 ;i++)  {

        vet[i] = numeros;

        printf ("Vet[%d] = %d\n", i, vet[i]);

        numeros++;

    }

    return 0;
}