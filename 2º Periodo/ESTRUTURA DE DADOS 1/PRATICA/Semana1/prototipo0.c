#include <stdio.h>
int main()
{
    double M[12][12];//utilize esta matriz para ler os 144 numeros reais

    char op;

    double somaTotal = 0;

    int i;

    int j;

    scanf ("%c ", &op);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            
            scanf("%lf", &M[i][j]);

        }
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 11 - i; j++) { 

            somaTotal += M[i][j];
        }
    
    }
    double media = somaTotal / 30.0;

    if (op == 'S'){

        printf("%.1lf", somaTotal);

    }
    else if (op == 'M') {

        printf("%.1lf", media);
    }


    return 0;//não remova
}
