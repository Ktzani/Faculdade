#include <stdio.h>
#include <math.h>

int main (){

    double x;

    scanf ("%lf", &x);

    double result = pow(x, 2) - (3 * x) + 4;

    printf ("%.2lf\n", result);

    return 0;
}



