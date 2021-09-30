#include <stdio.h>
#include <math.h>

int main (){

    double n1, n2 ;

    printf ("\nDigite valores para n1 e n2:\n");

    scanf ("%lf %lf", &n1, &n2);
    
    double mod = fabs(n1);

    printf ("\nO modulo do primeiro numero é igual = %.3lf\n", mod);

return 0;
}