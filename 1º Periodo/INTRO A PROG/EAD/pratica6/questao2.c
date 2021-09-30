//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41
// NUMERO PRIMO
#include <stdio.h>

int ehPrimo(int n);

int main()
{

    int num, result;

    printf("Digite um numero: ");

    scanf("%d", &num);

    result = ehPrimo(num);

    if (result == 1)
    {
        printf("%d é primo! \n", num);
    }
    else
    {
        printf("%d NÃO um numero primo! \n", num);
    }
}

int ehPrimo(int n)
{

    int i = 1;
    int divisor = 0;

    while (i <= n)
    {

        if (n % i == 0)
        {

            divisor++;
        }

        i++;
    }

    if (divisor == 2)
    {

        return 1;
    }

    else
    {
        return 0;

    }

}