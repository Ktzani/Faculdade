#include <stdio.h>

int main()
{

    double matricula, salario;
    char cargo;
    double reajuste;

    do
    {
        printf("Digite a matricula do funcionario: ");
        scanf("%lf", &matricula);

        printf ("Digite o cargo do funcionario (operador (O) OU programador(P)): ");
        scanf(" %c", &cargo);   

        printf ("Digite o salario atual do funcionario (PARAR = 0): ");
        scanf("%lf", &salario);

        if (salario != 0) {
        switch (cargo) {

        case 'O': 
        case 'o': 
            reajuste = salario * 1.2;
            printf ("Matricula: %.2lf", matricula);
            printf ("Salario reajustado: %.2lf\n", reajuste);
            printf ("\n");
            break;
        case 'P':
        case 'p':
            reajuste = salario * 1.18;
            printf ("Matricula: %.2lf\n", matricula);
            printf ("Salario reajustado: %.2lf\n", reajuste);

            printf ("\n");
            break;
        default:
            printf ("CARGO INVALIDO\n");
            printf ("\n");
        
        }
        }
    }while (salario != 0);
        return 0;

    
}