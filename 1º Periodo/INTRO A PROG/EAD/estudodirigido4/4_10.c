#include <stdio.h>

int main()
{

    double soma = 0;
    int i = 0;
    int n;
    
    do{

        printf ("Digite valores para fazermos uma media(PARAR = 9999): ");
        scanf ("%d", &n);
        if (n == 9999){

            printf ("Calculando...\n");
        }
        else {
        soma += n;
        i++;
        }

    }while (n != 9999);

    double media = soma / i;

    printf ("A media entre os numeros digitados é igual a: %.2lf\n", media);

    return 0;

}