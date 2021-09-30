#include <stdio.h>
#include <math.h>

double pi(int *numTermos);

int main()
{

    int termos;
    double piru;
    printf("Digite o numero de termos:\n");
    scanf("%d", &termos);

    piru = pi(&termos);

    printf("O valor de pi é igual %.6lf\n", piru);
}

double pi(int *numTermos)
{

    double soma = 0;

    int j = 3;

    int sinal = -1;

    for (int i = 0; i <= *numTermos; i++)
    {

        soma += sinal * (1.0 / pow(j, 3)); // ou soma = soma + sinal
        sinal *= -1;                       // ou sinal = sinal * -1

        j += 2;
    }

    double PI = cbrt((soma + 1) * 32);

    return PI;
}