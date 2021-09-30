//Resistencia em serie 
#include <stdio.h>

int main (){

    double R1, R2 ;

    printf ("Digite o valor da resistencia 1 e resistencia 2, em ohms, respectivamente:\n");

    scanf ("%lf %lf", &R1, &R2);

    double Req = R1 + R2 ;

    printf ("\nO valor da associaçao em serie é igual a = %.2lf\n", Req);

return 0 ;

}  
