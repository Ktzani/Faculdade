#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int matricula;

    char nome[30];

    float nota1, nota2, nota3;

    int faltas;

} regAluno;

int main () {

    int excluirmat;

    FILE *alubi;

    FILE *temporario;

    regAluno aluno;

    if ((alubi = fopen ("alunos.bin", "rb")) == NULL) {

        printf ("Erro na abertura do arquivo \n");
        return 0;
    }

    if ((temporario = fopen ("temporario.bin", "wb")) == NULL) {

        printf ("Erro na criação do arquivo \n");
        return 0;
    }

    printf ("Digite a matricula de um aluno que vc deseja excluir do arquivo: ");

    scanf ("%d", &excluirmat);

    while (fread(&aluno, sizeof (aluno), 1, alubi) == 1) {

        if (aluno.matricula != excluirmat){
            
            fwrite (&aluno, sizeof(aluno), 1, temporario);
        }
    }

    fclose(temporario);

    fclose (alubi);

    remove ("alunos.bin");

    rename ("temporario.bin", "alunos.bin");
    return 0;
}
