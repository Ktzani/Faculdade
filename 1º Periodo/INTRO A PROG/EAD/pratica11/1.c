//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41
#include <stdio.h>
#include <string.h>

#define alu 100

#define not 10

typedef struct
{
    int matricula;

    char nomeCompleto[alu];

    double Nota[not ];

} Aluno;

Aluno encontraAluno(Aluno alunos[], int nAlunos, int matricula);

int main()
{

    int n;

    int m;

    Aluno alunos[alu];

    int pesquisa;

    do
    {

        printf("Digite o numero de alunos: ");
        scanf("%d", &n);

        printf("Digite a quantidade de notas: ");
        scanf("%d", &m);
        if (n > alu)
        {

            printf("NUMERO INVALIDO: TEM QUE SER MENOR OU IGUAL A 100");
        }
        if (m > not )
        {

            printf("NUMERO INVALIDO: TEM QUER MENOR OU IGUAL A 10");
        }
    } while ((n > alu) && (m > not ));

    printf("\n");

    int tamanho = 0;

    double soma = 0;

    for (int i = 0; i < n; i++)
    {

        getchar();

        printf("Digite o nome completo do aluno %d: ", i + 1);
        fgets(alunos[i].nomeCompleto, 99, stdin);

        tamanho = strlen(alunos[i].nomeCompleto);

        alunos[i].nomeCompleto[tamanho - 1] = '\0';

        printf("Digite a matricula do aluno %s: ", alunos[i].nomeCompleto);
        scanf("%d", &alunos[i].matricula);

        for (int j = 0; j < m; j++)
        {

            printf("Nota da prova %d: ", j + 1);
            scanf("%lf", &alunos[i].Nota[j]);

            soma += alunos[i].Nota[j];
        }

        printf ("\n");

    }

    printf("\nA media das notas eh igual a %.2lf\n", soma / (double)(m * n));

    printf("\nCOLOQUE SUA MATRICULA: ");
    scanf("%d", &pesquisa);

    Aluno encontrar = encontraAluno(alunos, n, pesquisa);

    printf("%s\n", encontrar.nomeCompleto);

    soma = 0;

    for (int i = 0; i < m; i++)
    {

        soma += encontrar.Nota[i];
    }

    printf("MEDIA DO ALUNO %s: %.2lf\n", encontrar.nomeCompleto, soma / (double)m);   
    return 0;
}

Aluno encontraAluno(Aluno alunos[], int nAlunos, int matricula)
{
    for (int i = 0; i < nAlunos; i++)
    {

        if (alunos[i].matricula == matricula)
        {

            return alunos[i];
        }
    }
}