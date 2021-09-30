#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[100];
    double nota;
    double frequencia;

} Alunos;

void lerDados(Alunos alunos[], int *n);
void escreveDados(Alunos alunos[], int *n);

int main()
{

    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    getchar();

    Alunos alunos[100];

    lerDados(alunos, &n);

    escreveDados(alunos, &n);
}

void lerDados(Alunos alunos[], int *n)
{

    for (int i = 0; i < *n; i++)
    {
        printf("Digite o nome do aluno %d:", i + 1);
        fgets(alunos[i].nome, 100, stdin);

        printf ("Digite sua frequencia e nota: ");
        scanf("%lf %lf", &alunos[i].frequencia, &alunos[i].nota);
        
        getchar ();
    }
}


void escreveDados(Alunos alunos[], int *n)
{

    FILE *arquivo = fopen("alunos.txt", "w");

    fprintf (arquivo, "%d\n", *n);

    for (int i = 0; i < *n; i++)
    {
        fprintf(arquivo, "%s %.2lf %.2lf\n", alunos[i].nome, alunos[i].frequencia, alunos[i].nota);
    }

    fclose(arquivo);
}
