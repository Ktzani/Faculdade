#include <stdio.h>

int main()
{
    double salario;
    for (int i = 1; i <= 30; i++)
    {

        printf("Digite o salario do funcionario %d:\n", i);
        scanf("%lf", &salario);

        if (salario < 1000)
        {

            double novoSalario = salario * 1.15;
            printf("Reajuste salarial(Funcionario %d): %.2lf\n", i, novoSalario);
        }

        else if ((salario >= 1000) && (salario < 2000))
        {

            double novoSalario = salario * 1.1;
            printf("Reajuste salarial(Funcionario %d): %.2lf\n", i, novoSalario);
        }

        else
        {

            double novoSalario = salario * 1.05;
            printf("Reajuste salarial(Funcionario %d): %.2lf\n", i, novoSalario);
            
        }
    }
        return 0;
}
