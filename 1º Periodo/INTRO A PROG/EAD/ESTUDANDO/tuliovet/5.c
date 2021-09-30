#include <stdio.h>

#define dobro 50

int main()
{

    int vet[dobro];


    for (int i = 0; i < dobro; i++)
    {

        vet[i] = i * 2;

        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;

}