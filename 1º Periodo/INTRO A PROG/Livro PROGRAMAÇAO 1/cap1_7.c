#include <stdio.h>

int main (){


    float C;

    printf ("Digite uma temparatura em celsius: \n");

    
    scanf ("%f", &C);

    float F = ((9.0 * C) / 5.0) + 32 ;


    printf ("\n Celsius = %.2f \n ", C);

    printf ("\n Farenheit = %.2f \n", F);

    return 0; 



}