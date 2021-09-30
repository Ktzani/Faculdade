#include <stdio.h>
#include <math.h>

int main()
{
    int valor, multiplos3;

    printf("Digite ate qual valor vc quer os multiplos de 3: ");
    scanf("%d", &valor);
    do
    {
        if (valor < 6)
        {
            printf("MULTIPLOS DE 3 MAIOR QUE 6 pf...\n");
            printf ("\n");

            printf("Digite ate qual valor vc quer os multiplos de 3: ");
            scanf("%d", &valor);
        }

    } while (valor < 6);

    printf ("Multiplos de 3: ");

    for (int i = 6; i <= valor; i++)
    {

        multiplos3 = i;

        if (multiplos3 % 3 == 0)
        {

            printf("%d ", multiplos3);
        }
    }

    printf("\n");

    return 0;
}
