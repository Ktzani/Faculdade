//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41

#include <stdio.h>

typedef struct
{
    int numerador;
    int denominador;
} Racional;

int equal(Racional r1, Racional r2, Racional r1original, Racional r2original);

int main()
{

    Racional r1, r2, r1original, r2original;
    printf("Digite um numerador e denominador para r1, respectivamente:\n");
    scanf("%d %d", &r1.numerador, &r1.denominador);

    r1original = r1;

    printf("Digite um numerador e denominador para r2, respectivamente:\n");
    scanf("%d %d", &r2.numerador, &r2.denominador);

    r2original = r2;

    int Resultado = equal(r1, r2, r1original, r2original);

    if (Resultado == 1)
    {

        printf("r1 e r2 sao iguais\n");
    }
    else
    {

        printf("r1 e r2 sao diferentes\n");
    }

    return 0;
}

int equal(Racional r1, Racional r2, Racional r1original, Racional r2original) {
    int resto1;

    int resto2;

	resto1 = r1.numerador % r1.denominador;

    do {

        r1.numerador = r1.denominador;

        r1.denominador = resto1;

		resto1 = r1.numerador % r1.denominador;

    } while (resto1 != 0);

    r1original.numerador /= (float)r1.denominador;

    r1original.denominador /= (float)r1.denominador;

	resto2 = r2.numerador % r2.denominador;

    do {

        r2.numerador = r2.denominador;

        r2.denominador = resto2;

		resto2 = r2.numerador % r2.denominador;

    } while (resto2 != 0);

    r2original.numerador /= (float)r2.denominador;

    r2original.denominador /= (float)r2.denominador;

    //Testar se a fraçao r2 é igual a fraçao r1

    if ((r2original.numerador == r1original.numerador) && (r2original.denominador == r1original.denominador)) {

        return 1;
    }
    else {
        return 0;

    }
}