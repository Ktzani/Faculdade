#include <stdio.h>
#include <math.h>

int main (){

    double n1, n2 ;

    printf ("Digite valores para n1 e n2:\n");

    scanf ("%lf %lf", &n1, &n2);
    
    double soma = n1 + n2 ;

    printf ("A soma é igual = %.3lf\n", soma);

return 0; 
}