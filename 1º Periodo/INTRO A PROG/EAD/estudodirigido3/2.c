#include <stdio.h>
#include <math.h>
#define PI 3.14159



double volume (double raio);

int main () {

    double r;
    printf ("Digite um valor real para o raio da esfera\n");
    scanf ("%lf", &r);

    double vol = volume(r);

    printf ("O volume da esfera é: %.2lf\n", vol);

    return 0;

}

double volume (double raio) {
    
    double volume = (4.0 * pow (raio, 3) * PI ) / 3.0 ;

    return volume;


}