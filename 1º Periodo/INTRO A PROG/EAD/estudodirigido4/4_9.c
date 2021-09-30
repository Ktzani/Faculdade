#include <stdio.h>

int main()
{
    int vezes;
    int valor;
    int i = 0;
    int soma = 0;

    printf("Digite o numero de valores que vc quer:\n");
    scanf("%d", &vezes);

    printf("NUMERO DE VEZES: %d\n", vezes);

    do
    {

        if (i < vezes)
        {
            scanf ("%d", &valor);
            soma = soma + valor; 
        }
        i++;

    } while (i < vezes);

    printf ("SOMA = %d\n", soma);

    return 0;
}