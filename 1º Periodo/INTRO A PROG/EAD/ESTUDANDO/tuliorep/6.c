#include <stdio.h>
#include <math.h>

int main()
{

    int a, b;
    printf("Digite o limite inferior(a): ");
    scanf("%d", &a);

    printf("Digite o limite superior(b): ");
    scanf("%d", &b);

    while (a > b)
    {

        printf("O valor de b tem q ser maior que a!!\n");
        printf("\n");

        printf("Digite o limite superior(b): ");
        scanf("%d", &b);
    }

    printf("\n");

    double somaimp = 0;
    long long prodpar = 1;
    int i = a;
    int contimp = 0;

    while (i <= b)
    {

        if (i % 2 == 0)
        {
            prodpar *= i; // ou prodpar = prodpar * i
        }
        else
        {
            somaimp += i; // ou somaimp = somaimp + i
            contimp++;
        }
        i++;
    }

    double mediaimp = somaimp / contimp;

    printf("Media dos impares: %.2lf\n", mediaimp);

    printf("Produtorio dos pares: %lld\n", prodpar);

    return 0;
}