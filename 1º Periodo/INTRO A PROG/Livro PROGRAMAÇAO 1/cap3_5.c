#include <stdio.h>
#include <math.h>


int main (){

    double So ,Vo, a, t;

    printf ("\nDigite os valores para posição inicial, velocidade inicial, aceleração e tempo(instante), respectivamente: \n");

    scanf ("%lf %lf %lf %lf", &So, &Vo, &a, &t);
    printf ("\nPosiçao inicial = %.2lf \n", So);
    printf ("\nVelocidade inicial = %.2lf \n", Vo);
    printf ("\nAceleração = %.2lf \n", a);
    printf ("\nTempo = %.2lf \n", t);

    if (t >= 0) {

        double S = So + (Vo * t) + ((a * pow (t,2)) / 2.0);

        double V = Vo + (a * t);

        printf ("\nA velocidade final é igual a %.2lfm/s e posiçao final é igual a %.2lfm\n", V , S);
    }
    
    else {

        printf ("\nNão existe tempo instante negativo \n");
    }

return 0;

}