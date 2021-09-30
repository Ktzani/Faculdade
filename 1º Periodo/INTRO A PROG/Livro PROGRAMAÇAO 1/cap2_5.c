//DINHEIRO COM MENOR QUANTIDADE DE NOTAS 
#include <stdio.h>
#include <math.h>

int main (){
    
    int valor; 
    int a = 100; 
    int b = 50;
    int c = 20;
    int d = 10 ;
    int e = 5; 
    int f = 2 ;
    int g = 1;

    printf ("Digite um valor inteiro : \n");

    scanf ("%d", &valor);

    double n1 = valor / a;

    double n2 = valor / b;

    double n3 = valor / c;

    double n4 = valor / d;

    double n5 = valor / e; 

    double n6 = valor / f;

    double n7 = valor / g;

    printf ("\n Notas de 100 = %.0lf\n", n1);
    printf ("\n Notas de 50 = %.0lf\n", n2);
    printf ("\n Notas de 20 = %.0lf\n", n3);
    printf ("\n Notas de 10 = %.0lf\n", n4);
    printf ("\n Notas de 5 = %.0lf\n", n5);
    printf ("\n Notas de 2 = %.0lf\n", n6);
    printf ("\n Notas de 1 = %.0lf\n", n7);

    return 0;
}


    
    