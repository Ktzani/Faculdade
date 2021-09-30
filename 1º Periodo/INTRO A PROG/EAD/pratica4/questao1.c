//IMC em adultos - Condição
#include <stdio.h>
#include <math.h>

int main (){

    double peso, altura;

    printf ("Digite o valor do seu peso e de sua altura, respectivamente:\n ");

    scanf ("%lf %lf", &peso, &altura);

    double IMC = peso / pow (altura, 2);

    printf ("IMC = %.2lf\n", IMC );

    if (IMC <= 18.5) {

        printf ("\nVocê esta abaixo do peso \n");
    }
    else if ((IMC > 18.5) && (IMC <= 25)) {

        printf ("\nVocê esta com peso normal \n");
    }
    else if ((IMC > 25 && IMC <= 30)) {

        printf ("\nVocê esta acima do peso \n");
    }
    else {

        printf ("Você tem obesidade \n");

    }

    return 0 ;

}
