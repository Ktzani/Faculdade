//Peso e altura de um adulto para achar o IMC
#include <stdio.h>

int main (){
    double peso, altura;

    printf ("\nDigite os valores do seu peso e sua altura, respectivamente, para descobrir o seu IMC:\n");
    scanf ("%lf %lf", &peso, &altura);

    double IMC = peso / (altura * altura);

    printf ("O seu IMC é igual a %.2lf\n", IMC);

return 0;

}