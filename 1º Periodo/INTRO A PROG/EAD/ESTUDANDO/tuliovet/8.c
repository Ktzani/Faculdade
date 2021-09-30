#include <stdio.h>

#define imppar 10

int main()
{

    int vetor[imppar];

    for (int i = 0; i < imppar; i++)
    {

        printf("Digite um valor para posiçao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    int vetorpar[5];
    int vetorimpar[5];

    //COPIA VETORES
    for (int i = 0; i < imppar; i++)
    {
        if (vetor[i] % 2 == 0){
            vetorpar[i] = vetor[i] ;
        }
        else if (vetor [i] % 2 != 0) {
            vetorimpar[i] = vetor[i];
        }
    }

    printf ("Conteudo vetorPAR: ");

    for (int i = 0; i < imppar; i++) {
        if (vetorpar[i] % 2 == 0)

            printf ("%d ", vetorpar[i]);

    }
    printf ("\n");

    printf ("Conteudo vetorIMPAR: ");

    for (int i = 0; i < imppar; i++) {
        if (vetorimpar[i] % 2 != 0)

            printf ("%d ", vetorimpar[i]);
    }

return 0;
}
