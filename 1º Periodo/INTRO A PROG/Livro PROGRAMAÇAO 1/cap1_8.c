#include <stdio.h>

int main (){


    float F;

    printf ("Digite uma temparatura em Farenheit: \n");

    
    scanf ("%f", &F);

    float C = ((5.0 * F) / 9.0) - ( 160.0 / 9.0 );


    printf ("\n Farenheit = %.2f \n ", F);

    printf ("\n Celsius = %.2f \n", C);

    return 0; 



}