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

    FILE *alubi;

    FILE *boletim;

    regAluno aluno;

    float media;

    char conceito;

    if ((alubi = fopen ("alunos.bin", "rb")) == NULL) {

        printf ("Erro na abertura do arquivo \n");
        return 0;
    }

      if ((boletim = fopen ("conceitos.txt", "w")) == NULL) {

        printf ("Erro na criação do arquivo \n");
        return 0;
      }


    while (fread(&aluno, sizeof (aluno), 1, alubi) == 1) {

        media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;

        if (aluno.faltas > 18)
            conceito = 'F';

        else if (aluno.faltas <= 18 && media < 6.0)
            conceito = 'R';

        else if (aluno.faltas <= 18 && media >= 6.0 && media < 7.5)
            conceito = 'C';
        
        else if (aluno.faltas <= 18 && media >= 7.5 && media < 9.0)
            conceito = 'B';
        
        else 
            conceito = 'A';

        fprintf (boletim, "%-4d %-30s %c\n", aluno.matricula, aluno.nome, conceito);
    }    

        fclose(alubi);
        fclose(boletim);

        return 0;
}