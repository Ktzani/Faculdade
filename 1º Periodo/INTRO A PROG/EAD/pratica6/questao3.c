//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41
#include <stdio.h>

int main()
{

    int x, y;

        do
    {

        printf("Digite os valores para x e y: \n");

        scanf("%d %d", &x, &y);

        if ((x % 2 != 0) || (y % 2 != 0))
        {

            printf("Apenas numeros pares sao aceitos.\n");
        }

        if (x > y)
        {

            printf("ERRO: x deve ser menor que y.\n");
        }
    }
    while ((x % 2 != 0) || (y % 2 != 0) || (x > y));

    printf("\n");

    int linha = 1 + ((y - x) / 2);
    int espaco, aste;
    int cont;
    aste = x;

    while (linha > 0)
    {

        espaco = linha - 1;

        cont = aste;

        while (espaco > 0)
        {

            printf(" ");
            espaco--;
        }

        while (cont > 0)
        {

            printf("*");
            cont--;
        }

        printf ("\n");

        linha--;
        aste+= 2;
    }

    return 0;
} 