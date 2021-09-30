#include <stdio.h>
#include <math.h>

int main (){
    
    double n1, n2, resultado;

    char op;

    printf ("Digite dois numeros reais:\n");

    scanf ("%lf %lf", &n1, &n2);

    printf ("Digite um operador de adição (+), subtração(-), divisão (/) ou multiplicaçao (*):\n ");

    scanf (" %c", &op);

    printf("Primeiro valor : %.2lf\n", n1);
    printf("Segundo valor: %.2lf\n", n2);

    switch (op) {
    case '+':
        resultado = n1 + n2; 
        printf ("Operador: %c\n", op);
        printf ("Resultado: %.2lf %c %.2lf = %.2lf\n", n1, op, n2, resultado );
        break;

    case '-':
        resultado = n1 - n2; 
        printf ("Operador: %c\n", op);
        printf ("Resultado: %.2lf %c %.2lf = %.2lf\n", n1, op, n2, resultado );
        break;
    
    case '*':
        resultado = n1 * n2; 
        printf ("Operador: %c\n", op);
        printf ("Resultado: %.2lf %c %.2lf = %.2lf\n", n1, op, n2, resultado );
        break;
    case '/':
        resultado = n1 / n2; 
        printf ("Operador: %c\n", op);
        printf ("Resultado: %.2lf %c %.2lf = %.2lf\n", n1, op, n2, resultado );
        break;
    }
    return 0;

}