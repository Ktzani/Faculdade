#include <stdio.h>

int main()
{

    double n1, n2;
    char op;
    printf ("Digite um valor para n1: ");
    scanf ("%lf", &n1);

    printf ("Digite um valor para n2: ");
    scanf ("%lf", &n2);

    do {

        printf ("Digite um operador: ");
        scanf (" %c", &op);

        switch (op) {

        case '+':

            printf ("OPERACAO:%.2lf %c %.2lf = %.2lf\n", n1, op, n2, n1 + (n2));
            break;
        case '-':

            printf ("OPERACAO:%.2lf %c %.2lf = %.2lf\n", n1, op, n2, n1 - (n2));
            break;
        case '*':

            printf ("OPERACAO:%.2lf %c %.2lf = %.2lf\n", n1, op, n2, n1 * (n2));
            break;

        case '/':
            printf ("OPERACAO:%.2lf %c %.2lf = %.2lf\n", n1, op, n2, n1 / n2);
            break;
        }
    } while ((op == '+') || (op == '-') || (op == '*') || (op == '/'));

    return 0;

}