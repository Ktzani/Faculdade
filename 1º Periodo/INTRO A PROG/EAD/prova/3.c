#include <stdio.h>

double produto(int n, int m);

double produto(int n, int m)
{

    double resultx;

    do
    {

        printf("Digite um valor para m: ");
        scanf("%d", &m);

        printf("Digite um valor para n: ");
        scanf("%d", &n);

        if ((n < 4) || (m <= 0))
        {

            resultx = 0;

            printf("O valor de x é igual a %.2lf\n", resultx);
        }

    }while (n < 4 || m <= 0);

    int j = 0;

    int sinal = +1;

    for (int i = 0; i <= m; i++){


        resultx *= sinal * (n - i) / (m + j);
        
        j++;
        sinal *= -1;

    }
    
    return printf("O valor de x é igual a %.2lf\n", resultx);

    }


 