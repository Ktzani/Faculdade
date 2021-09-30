//Angulo em RAD para angulo em GRAUS
#include <stdio.h>
#include <math.h>

int main (){
    
    double angA_rad; 

    printf ("Digite o valor em radianos para o ângulo A: \n");

    scanf ("%lf", &angA_rad) ;

    double angA_graus = angA_rad * 57.29579; 

    printf ("Angulo A em RAD \t Angulo A em GRAUS \n");
    printf ("%10.3lf         \t       %5.3lf     \n", angA_rad, angA_graus);

    return 0;

}

