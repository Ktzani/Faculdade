//Conversao do valor do litro de gasolina de dolares para reais

#include <stdio.h>
#include <math.h>

int main (){

    double GalEST;
    double L = 3.7854;
    double Taxa;

    printf ("\n Digite o atual valor de um tanque de gasolina de %.4lf L nos EUA e a taxa de conversão do dólar para o real:\n",L);

    scanf ("%lf %lf", &GalEST, &Taxa );

    double ValorD_1L = GalEST / L ;
    double ValorR_1L = (ValorD_1L * Taxa);

    printf ("\n Litro de gasolina nos EUA em dólares: %.2lf \n", ValorD_1L);
    printf ("\n O valor do litro de gasolina correspondete em reais = %.4lf \n", ValorR_1L);

    return 0;

}