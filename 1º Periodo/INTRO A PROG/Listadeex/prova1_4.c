//
#include <stdio.h>
#include <math.h>

int main () {

    double compra;

    printf ("Digite o valor o qual você comprou o produto:");
    scanf ("%lf", &compra);

    if (compra < 20) {

        printf ("\nComo seu produto comprado teve um valor menor que 20 reais, o lucro sera de 30 porcento\n");
        
        double lucro = 1.3 * compra;

        printf ("\nEntao, o valor de venda desse produto sera de : %.2lf\n", lucro);
    }   

    else { 

        printf ("\nComo seu produto comprado teve um valor maior ou igual a 20 reais, o lucro sera de 45 porcento\n");

        double lucro = 1.45 * compra;

        printf ("\nEntao, o valor de venda desse produto sera de : %.2lf\n", lucro);
    }

    return 0;

}