#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[100];
    double nota;
    double frequencia;

} Alunos;

int main () {

    int n;
    char nomeArquivo[100];
    int tamanho;

    Alunos alunos[100];



    printf ("Digite o nome do arquivo: ");

    fgets(nomeArquivo, 100, stdin);

    tamanho = strlen(nomeArquivo);

    nomeArquivo[tamanho - 1] = '\0';
    
    FILE *arquivo = fopen (nomeArquivo, "r");

        double somaNota = 0;
        double somaFrequencia = 0;

        int aprovados = 0;

        fscanf (arquivo, "%d", &n);

        //Pegar os valores do arquivo alunos.txt e somar as notas e a frequencia;
        for(int i = 0; i < n; i++){

            fscanf (arquivo, "%s %lf %lf", alunos[i].nome, &alunos[i].frequencia, &alunos[i].nota );

            somaNota += alunos[i].nota;

            somaFrequencia += alunos[i].frequencia;
            
        }

        printf ("\nNota média: %.2lf\n", somaNota / (double)n);

        printf ("\nFrequencia média: %.2lf%%\n", somaFrequencia / (double)n);


        //quantidade de aprovados 
        for(int i = 0; i < n; i++){

            if (alunos[i].nota >= 60)
                aprovados++;
        }

        printf ("\nPercentual de aprovaçao: %.2lf%% \n", (double)(aprovados / n) * 100);

        //nome dos alunos com percentual acima da media 
        printf ("\nNome dos alunos com nota acima da nota média: \n");
        for(int i = 0; i < n; i++){

            if (alunos[i].nota >= 60) {
                printf ("%s\n", alunos[i].nome);
            }
        }

        fclose(arquivo);

        return 0;
}