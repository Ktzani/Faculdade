#include <stdio.h>
#include <math.h>
int main (){

    double n1;
    
    printf ("Digite um numero decimal:\n ");
    
    scanf ("%lf", &n1 );
    
    double n2 = trunc(n1);

    double D = n1 - n2;


    printf ("\nNumero: %.4lf\n", n1);

    printf ("\nParte inteira do numero : %.0lf\n", n2);
   
    printf ("\nParte decimal do numero : %lf\n", D);
   
return 0;
}

