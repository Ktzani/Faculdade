#include <stdio.h>
#include <math.h>

#define PI 3.14159

double area(int Raio) {

    double area = PI * pow (Raio, 2);

    return area;

}

int main (){

    int r;

    double A;

    printf ("Digite um valor inteiro para o raio do circulo\n");

    scanf ("%d", &r);

    A = area (r);

    printf ("A area do circulo é: %.2lf\n", A);

    return 0;

}
