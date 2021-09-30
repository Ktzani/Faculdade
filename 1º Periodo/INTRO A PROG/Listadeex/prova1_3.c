//RAIZ QUADRADA E POTENCIA
#include <stdio.h>
#include <math.h>

int main () {

    double n1,n2;

    printf ("Escolha dois numeros n1 e n2:\n"); 
    scanf ("%lf %lf", &n1, &n2);

    if (n1 == n2) {

        printf ("\nAs operações não serão realizadas com números iguais\n");
    }

    else if (n1 > n2) {
        
        double raiz = sqrt (n1);
        double pot = pow (n2, 2);

        printf ("\nA raiz quadrada de %.1lf = %.2lf\n", n1, raiz);
        printf ("\nO quadrado de %.1lf = %.2lf\n", n2, pot);
    }

    else if (n2 > n1) {

        double raiz = sqrt (n2);
        double pot = pow (n1, 2);

        printf ("\nA raiz quadrada de %.1lf = %.2lf\n", n2, raiz);
        printf ("\nO quadrado de %.1lf = %.2lf\n", n1, pot);

    }    

    
    return 0;

}