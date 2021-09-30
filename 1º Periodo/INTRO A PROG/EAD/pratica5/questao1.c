//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41

#include <stdio.h>

void converterCelsius(float celsius, float *fahrenheit, float *kelvin);

void converterCelsius(float celsius, float *fahrenheit, float *kelvin) {
    
    *fahrenheit = celsius * 1.8 + 32;

    *kelvin = celsius + 273.15;

}

int main () {

    float C, F, K;

    printf ("Digite o valor da tempetaratura em celsius \n");

    scanf ("%f", &C);

    converterCelsius(C, &F, &K);

    printf ("O valor da temperatura em Fahrenheit = %.2f \n", F);
    printf ("O valor da temperatura em Kelvin = %.2f \n", K);

    return 0;

    
}
