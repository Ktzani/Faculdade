//ENCONTRANDO O VOULME DE UMA ESFERA

#include <stdio.h>
#include <math.h>

int main (){
    
    double R;
    const double PI = 3.14;

    printf ("Digite um valor para o raio:\n");
    scanf ("%lf", &R);

    if(R > 0) {
    
        double Vc = (4.0 / 3.0) * PI * pow (R , 3);

        printf("O valor volume da esfera = %.2lf \n", Vc);

    }

    return 0;
}