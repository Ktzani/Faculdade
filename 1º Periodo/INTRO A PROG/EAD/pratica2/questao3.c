//De Celsius para Fahrenheit e Kelvin
#include <stdio.h>

int main (){


    double C;

    printf ("\nDigite uma o valor de uma temparatura em Celsius: \n");
    
    scanf ("%lf", &C);

    double F = (9.0 * C/5.0) + 32;
    double K = C + 273.15;

    printf ("\nO valor de Celsius em Fahrenheit eh %.2lf F\n ", F);
    printf ("\nO valor de Celsius em Kelvin eh %.2lf K\n", K);

return 0;

}