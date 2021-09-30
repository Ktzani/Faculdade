//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41
#include <stdio.h>
#include <math.h>

#define EPS 1E-20

double calculaRaizes (double *raiz1, double *raiz2, double Pa , double Pb, double Pc, double *delta) {

    *delta = pow (Pb, 2) - (4 * (Pa) * (Pc));

    if (*delta >= -EPS){

        *raiz1 = (-Pb + sqrt (*delta)) / (2 * (Pa));

        *raiz2 = (-Pb - sqrt (*delta)) / (2 * (Pa));

        return 1;
    }
    else {

        return 0;
    }
}
int main () {

    double a, b, c, raiz1, raiz2, delta;
    

    printf ("Digite os valores para a, b, c: \n");

    scanf ("%lf %lf %lf", &a, &b, &c);

    if (calculaRaizes (&raiz1,  &raiz2, a, b, c, &delta) == 1) {
        
        if(raiz1 != raiz2) 
            printf ("Raiz1: %.2lf, Raiz2: %.2lf \n", raiz1, raiz2);
        else 
            printf ("Duas raizes reais iguais: %.2lf\n", raiz1);
    }
    else {

        printf ("Nao existem raizes reais \n");
    }   
    return 0;
    
}