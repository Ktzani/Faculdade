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

    regAluno aluno;

    if ((alubi = fopen ("alunos.bin", "rb+")) == NULL) {

        printf ("Erro na abertura do arquivo \n");
        return 0;
    }

    printf ("Digite a matricula de um aluno que vc deseja excluir do arquivo: ");

    scanf ("%d", &excluirmat);

    while (fread(&aluno, sizeof (aluno), 1, alubi) == 1) {

        if (aluno.matricula == excluirmat){

            aluno.matricula = 0;
            aluno.nota1 = 0;
            aluno.nota2 = 0;
            aluno.nota3 = 0;
            aluno.faltas = 0;

            fseek(alubi, -(sizeof (aluno)) , 1); //ponteiro do arquivo volta n posiçoes em bytes para voltar ao aluno excluido

            fwrite(&aluno, sizeof (aluno), 1, alubi); /* ponteiro do arquivo aponta para o aluno a ser excluido e 
                                                        substitui os campos pelos valores de exclusao ( 0 ), menos o 
                                                        nome que continua o mesmo */
        }
    }

    return 0;
}