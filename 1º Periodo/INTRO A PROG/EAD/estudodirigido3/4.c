// 

#include <stdio.h>
#include <math.h>

double recebeVenda (double valor);


int main () {

    double Vt;

    printf ("Digite o valor total das vendas: \n");
    scanf ("%lf", &Vt);
    
    double comi = recebeVenda (Vt);

    printf ("O valor da comissao eh: %.2lf\n", comi);



    return 0;
}

double recebeVenda (double valor){
    double recebe;

    if (valor >= 5000) {

        return recebe = valor * 0.25;
    }
    else if ((valor < 5000) && (valor >= 2500 )){

        return recebe = valor * 0.2;
    }
    else {

        return recebe = valor * 0.15;

    }



}
