#include <stdio.h>

int main()
{
    int N;


    do
    {
        printf("Digite o numero de termos N: ");
        scanf("%d", &N);

        if (N <= 0)
        {
            printf("NUMERO INVALIDO...\n");
        }
    } while (N <= 0);
        
    
    int sinal = +1;

    int divi = 1;

    double somaH = 0;

    int i = 0;

        while (i <= N) {
    
            somaH += sinal * (1.0  / divi);

            divi += 2.0;

            sinal *= -1;
            i++;
        }

    printf("O valor de H é igual a %.2lf \n", somaH);

    return 0;
}