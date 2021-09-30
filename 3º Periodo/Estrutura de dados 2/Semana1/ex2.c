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

    FILE *alunos;

    FILE *bina;

    regAluno aluno;

    if ((alunos = fopen ("alunos.txt", "r")) == NULL) {

        printf ("Erro na abertura do arquivo \n");
        return 0;
    }

    if ((bina = fopen ("alunos.bin", "wb")) == NULL) {

        printf ("Erro na criação do arquivo \n");
        return 0;
    }

    while (fscanf (alunos, "%d %[A-Z a-z] %f %f %f %d \n", &aluno.matricula, aluno.nome, &aluno.nota1, &aluno.nota2, &aluno.nota3, &aluno.faltas) != EOF) {

        fwrite (&aluno, sizeof(aluno), 1, bina);
    }

    fclose(alunos);
    fclose(bina);
    
    return 0;
}


