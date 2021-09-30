#include <stdio.h>
#include <math.h>
 
int main (){

    double k, m, x;

    printf ("\nDigite os valores da constante elastica da mola(k), a massa do corpo (m) e a extensao a partir da posicao inicial (x):\n");


    scanf ("%lf %lf %lf", &k, &m, &x);

    double F = k * x ;

    double a = F / m;

    printf ("\nA aceleraçao do corpo sendo puxado por uma mola é igual a %.2lf\n", a);

return 0;

}
