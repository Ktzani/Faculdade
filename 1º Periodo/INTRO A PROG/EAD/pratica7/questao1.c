#include <stdio.h>

int main()
{

    double somaPOS, somaNEG;

    int i = 0;

    do
    {
        double real;
        printf("Digite um numero real (PARAR = 0):");
        scanf("%lf", &real);

        if (real < 0)
        {

            somaNEG = somaNEG + 1; // ou somaNEG++
        }
        else if (real > 0)
        {

            somaPOS = somaPOS + 1;
        }

        i = real;

    } while (i != 0);

    printf("Quantidade de negativos digitados: %.0lf\n", somaNEG);

    printf("Quantidade de positivos digitados: %.0lf\n", somaPOS);

    return 0;
}
