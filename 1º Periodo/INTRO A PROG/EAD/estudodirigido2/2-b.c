#include <stdio.h>
#include <math.h>

int main (){

    double n1, n2 ;

    printf ("\nDigite valores para n1 e n2:\n");

    scanf ("%lf %lf", &n1, &n2);
    
    double calcu = n1 * pow(n2, 2);

    printf ("\nO calculo é igual = %.3lf\n", calcu);

return 0;
}