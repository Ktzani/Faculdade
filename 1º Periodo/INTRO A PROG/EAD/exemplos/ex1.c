#include <stdio.h>
#include <math.h>

int main (){
    
    double n1, n2;

    char op;

    printf ("Digite dois numeros reais:\n");

    scanf ("%lf %lf", &n1, &n2);

    printf ("Digite um operador de adição (+), subtração(-), divisão (/) ou multiplicaçao (*):\n ");

    scanf (" %c", &op);

    printf("Primeiro valor : %.1lf\n", n1);
    printf("Segundo valor: %.1lf\n", n2);

    if (op == '+') {

        double resultado = n1 + n2; 
        printf ("Operador: %c\n", op);
        printf ("Resultado: %.1lf %c %.1lf = %.1lf\n", n1, op, n2, resultado );
    }

    else if(op == '-') {

        double resultado = n1 - n2;
        printf ("Operador: %c\n", op);
        printf ("Resultado: %.1lf %c %.1lf = %.1lf\n", n1, op, n2, resultado );
    }

    else if(op == '*') {
        
        double resultado = n1 * n2;
        printf ("Operador: %c\n", op);
        printf ("Resultado: %.1lf %c %.1lf = %.1lf\n", n1, op, n2, resultado );
    }

    else if(op == '/') {
        
        double resultado = n1 / n2;
        printf ("Operador: %c\n", op);
        printf ("Resultado: %.1lf %c %.1lf = %.1lf\n", n1, op, n2, resultado );

    }

return 0;

}