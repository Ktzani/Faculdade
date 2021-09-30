#include <stdio.h>

int main (){

    double nota, media, soma;

    int i, alunos;

    printf ("Digite o nmr de alunos: \n");

    scanf ("%d", &alunos);

    i = 1;

    soma = 0 ;

    while (i <= alunos) 
    {
        printf ("Digite a nota do aluno %d \n", i);

        scanf ("%lf", &nota);

        soma += nota;

        i++;

    }
    media = soma / alunos ;

    printf ("A media das notas é igual a %.2lf \n", media);

    return 0;
    }