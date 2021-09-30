#include <stdio.h>

int main (){
    
    double sal, aumento, dif;
    int cod;

    printf ("Digite o salario atual e o codigo do funcionario, respectivamente: \n") ;

    scanf ("%lf %d", &sal, &cod);

    switch (cod) {
    case 100:
        
        aumento = sal * 1.03;
        dif = aumento - sal;
        
        printf ("Salario antigo: %.2lf \n", sal);
        printf ("Salario novo: %.2lf \n", aumento);
        printf ("Diferença de salario: %.2lf \n", dif );
        break;

    case 101:

        aumento = sal * 1.05;
        dif = aumento - sal;
        
        printf ("Salario antigo: %.2lf \n", sal);
        printf ("Salario novo: %.2lf \n", aumento);
        printf ("Diferença de salario: %.2lf \n", dif);
        break;

    case 102:

        aumento = sal * 1.075;
        dif = aumento - sal;
        
        printf ("Salario antigo: %.2lf \n", sal);
        printf ("Salario novo: %.2lf \n", aumento);
        printf ("Diferença de salario: %.2lf \n", dif);
        break;
    
        
    case 201:
        aumento = sal * 1.1;
        dif = aumento - sal;
        
        printf ("Salario antigo: %.2lf \n", sal);
        printf ("Salario novo: %.2lf \n", aumento);
        printf ("Diferença de salario: %.2lf \n", dif);
        break;
    default:

        aumento = sal * 1.15;
        dif = aumento - sal;
        
        printf ("Salario antigo: %.2lf \n", sal);
        printf ("Salario novo: %.2lf \n", aumento);
        printf ("Diferença de salario: %.2lf \n", dif);
        break;
    }

    return 0;
}