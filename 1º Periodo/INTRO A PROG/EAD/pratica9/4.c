#include <stdio.h>

#define alu 100

int main()
{

    int n;

    do
    {

        printf("Digite a quantidade de alunos: ");
        scanf("%d", &n);

        if (n > 100)

            printf("O NUMERO DE ALUNOS TEM QUE SER MENOR OU IGUAL A 100!!\n");

    } while (n > 100);

    float vetornota1[n];
    float vetornota2[n];
    int i;

    for (i = 0; i < n; i++)
    {

        printf("Digite a nota do aluno%d na prova 1:", i + 1);
        scanf("%f", &vetornota1[i]);

        printf("Digite a nota do aluno%d na prova 2:", i + 1);
        scanf("%f", &vetornota2[i]);

        vetornota1[i] += vetornota2[i];

        printf ("\n");
    }

    for (i = 0; i < n; i++){

        if (vetornota1[i] / 2 >= 60) {

        printf ("ALUNO %d aprovado\n", i + 1);
        }
        else {

        printf ("ALUNO %d REPROVADO\n", i + 1);
        }

    }

    return 0;

}