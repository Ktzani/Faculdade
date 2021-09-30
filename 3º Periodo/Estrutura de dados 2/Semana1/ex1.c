#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

	FILE *alunos;

    FILE *boletim;

    int matricula;

    char nome[30];

    float nota1, nota2, nota3;
    
    int faltas;

    char conceito;

    float media;

    if ((alunos = fopen ("alunos.txt", "r")) == NULL) {

        printf ("Erro na abertura do arquivo \n");
        return 0;
    }

    if ((boletim = fopen ("conceitos.txt", "w")) == NULL) {

        printf ("Erro na criação do arquivo \n");
        return 0;
    }

    while (fscanf (alunos, "%d %[A-Z a-z] %f %f %f %d \n", &matricula, nome, &nota1, &nota2, &nota3, &faltas) != EOF) {

        //printf ("%d %s %.1f %.1f %.1f %d \n", matricula, nome, nota1, nota2, nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (faltas > 18)
            conceito = 'F';

        else if (faltas <= 18 && media < 6.0)
            conceito = 'R';

        else if (faltas <= 18 && media >= 6.0 && media < 7.5)
            conceito = 'C';
        
        else if (faltas <= 18 && media >= 7.5 && media < 9.0)
            conceito = 'B';
        
        else 
            conceito = 'A';
        

        fprintf (boletim, "%-4d %-30s %c\n", matricula, nome, conceito);
    }

    fclose(alunos);

    fclose(boletim);

    return 0;
}