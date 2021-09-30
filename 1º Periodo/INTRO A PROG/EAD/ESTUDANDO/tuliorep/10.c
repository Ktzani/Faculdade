#include <stdio.h>

int main()
{

    char sexo;
    double altura;

    int contFemi = 0;

    int contMasc = 0;

    double somaFemi = 0;

    int contIndi = 1;

    do
    {
        printf("Pessoa %d: \n", contIndi);

        printf("Digite o sexo da pessoa(M ou F): ");
        scanf(" %c", &sexo);

        printf("Digite a altura da pessoa (em metros): ");
        scanf(" %lf", &altura);

        if ((sexo == 'f') || (sexo == 'F'))
        {

            somaFemi += altura;

            contFemi++;
        }
        else
        {

            contMasc++;
        }

        contIndi++;
    } while (contIndi <= 50);

    double mediaFemi = somaFemi / contFemi;

    printf("Media altura mulheres: %.2lf", mediaFemi);

    printf("Numero de homens: %d", contMasc);

    return 0;
}