#include <stdio.h>
#include <math.h>

#define g 9.807

int main (){

    double t ;

    printf ("\nDigite um instante de tempo de um objeto em queda livre (em segundos):\n ");

    scanf ("%lf", &t);

    double V = g * t ;

    double S = (g * pow (t, 2)) / 2.0;

    printf ("\nVelocidade do corpo: %.3lf \n", V);
    printf ("\nDistancia total percorrida: %.3lf \n", S);

return 0;
}
