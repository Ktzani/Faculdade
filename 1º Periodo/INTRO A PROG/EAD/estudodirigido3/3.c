//Conversão de dolár para real
#include <stdio.h>
#include <math.h>

double Dinheiro( double real, double cotacao){
 
    double conversao = real / cotacao ;

    return conversao;

}



int main (){ 

    double real, cot;

    printf ("Digite um valor em real: \n");
    scanf ("%lf", &real);

    printf ("Digite o valor da cotaçao atual do dolár: \n");
    scanf ("%lf", &cot);

    double conversao = Dinheiro (real, cot);

    printf ("O valor convertido é: %.2lf\n", conversao);

    return 0;

}