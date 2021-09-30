#include <stdio.h>

int main()
{

    char plano;
    double salario, novoSalario;
    printf("Digite seu plano de carreira (A, B OU C):");
    scanf(" %c", &plano);

    printf("Digite seu salario:\n");

    scanf("%lf", &salario);

    switch (plano)
    {
    case 'A':

    case 'a':
        novoSalario = 1.1 * salario;
        printf("Novo salario: %.2lf\n", novoSalario);
        break;
    case 'B':
    case 'b':
        novoSalario = 1.15 * salario;
        printf("Novo salario: %.2lf\n", novoSalario);
        break;
    case 'C':
    case 'c':
        novoSalario = 1.2 * salario;
        printf("Novo salario: %.2lf\n", novoSalario);
        break;
    default:
        printf("PLANO INVALIDO\n");
    }

    return 0;
}