//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41
#include <stdio.h>

int main()
{

    int coluna;

    int linha;

    int verifica = 0;

    printf("Movimentos de um Bispo no xadrez!\n");

    do
    {
        printf("Digite a linha em que o Bispo se encontra:\n");
        scanf("%d", &linha);

        printf("Digite a coluna em que o Bispo se encontra:\n");
        scanf("%d", &coluna);

        if ((linha >= 1) && (linha <= 8) && (coluna >= 1) && (coluna <= 8)) {

            verifica = 1;
        }

        else {

            printf("ERRO: digite numeros entre 1 a 8 \n");
        }
    } while (verifica == 0);

    printf("      1  2  3  4  5  6  7  8\n");
    printf("    -------------------------\n");

    int i = 1;
    int j;
    int diagPos, diagNeg;

    diagPos = linha + coluna;
    diagNeg = linha - coluna;

    while (i <= 8)
    {

        printf(" %d |", i);

        j = 1;

        while (j <= 8)
        {

            if ((i + j == diagPos) || (i - j == diagNeg))
            {

                printf("  x");
            }
            else
            {

                printf("  -");
            }
            j++;
        }

        i++;

        printf("\n");
    }

    return 0;
}