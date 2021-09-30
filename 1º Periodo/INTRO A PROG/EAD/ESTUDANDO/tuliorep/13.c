#include <stdio.h>

int main()
{
    printf ("\nFarenheit  \t  Ceslius  \n");

    double celsius;
    double farenheit;   


    for (int i = 50; i <= 150; i++){

        farenheit = i;

        celsius = (5.0 / 9.0) * (farenheit - 32);

        printf ("%3.2lf  \t   %3.2lf \n", farenheit, celsius );

    }

    return 0;
}