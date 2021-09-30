#include <stdio.h>
#include <math.h>

int main()
{

    int idade, matricula;

    int somaAlunos20 = 0;

    for (int a = 1; a <= 50; a++){

        printf ("Digite a idade e a matricula do aluno %d, respectivamente:\n", a);
        scanf ("%d %d", &idade, &matricula);

            if (idade >= 20){

                printf ("O aluno %d de matricula %d tem mais de 20 anos\n", a, matricula);
                somaAlunos20 = somaAlunos20 + 1; // OUUUU somaaAlunos20++

            }
            else {

                printf ("O aluno %d de matricula %d tem menos de 20 anos\n", a, matricula);
            }
    }

        printf ("A quantidade de alunos com mais de 20 anos é igual a %d\n", somaAlunos20);

        return 0;

}