//Operaçoes com funções

#include <stdio.h>
#include <math.h>

#include <stdlib.h>


double Soma (double n1, double n2){
    double soma = n1 + n2 ;

    return soma;    
}

double Subtracao (double n1, double n2) {

    double sub = n1 - n2;

    return sub;
}
double Multiplicacao (double n1, double n2) {

    double multi = n1 * n2;

    return multi;
}
double Divisao (double n1, double n2) {

    if (n2 != 0) {
    double div = n1 / n2;

    return div; 
    }
    else {
        printf ("ERRO: Divisao por zero ...\n");
        exit(-1);
    }
}
double Potencia (double n1, double n2) {

    double pot = pow (n1,n2);

    return pot;
}


int main () {
    double x, y, result;
    char op;

    printf ("Digite o primeiro valor: \n");
    scanf ("%lf", &x);

    printf ("Digite o segundo valor: \n");
    scanf ("%lf", &y);

    printf ("Informe a operacao: \n");
    scanf (" %c", &op);

    if (op == '+') {

        result = Soma(x,y);

        printf ("%.2lf %c %.2lf = %.2lf\n", x, op, y, result);

    }
    else if (op == '-'){

        result = Subtracao(x,y);
        
        printf ("%.2lf %c %.2lf = %.2lf\n", x, op, y, result);

    }
    else if (op == '*'){

        result = Multiplicacao(x,y);
        
        printf ("%.2lf %c %.2lf = %.2lf\n", x, op, y, result);

    }
    else if (op == '/'){

        result = Divisao(x,y);
        
        printf ("%.2lf %c %.2lf = %.2lf\n", x, op, y, result);

    }
    else if (op == '^'){

        result = Potencia(x,y);
        
        printf ("%.2lf %c %.2lf = %.2lf\n", x, op, y, result);

    }
    else {

        printf ("ERRO: Operador invalido...\n");

    }
    return 0;

}

