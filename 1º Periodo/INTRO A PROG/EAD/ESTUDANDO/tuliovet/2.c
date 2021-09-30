#include <stdio.h>

int main ()
{
    int n;
    printf ("Digite o numero de posiçoes n: ");
    scanf ("%d", &n);

    int vetor [n];

    for (int i = 0; i < n; i++) {

        printf ("Digite um valor para posiçao %d: ", i);
        scanf ("%d", &vetor[i]);
    }

    printf ("\n");
    int menor;
    int maior;

    for (int i = 0; i < n; i++) {

        if (i == 0){

            menor = vetor[0];
            maior = vetor[0];
        }

        else if (vetor[i] < menor){

            menor = vetor[i];
        }
        else if (vetor[i] > maior){

            maior = vetor[i];

        }
    }

        printf ("\n Menor: %d\n Maior: %d\n", menor, maior);
        return 0;
}
    