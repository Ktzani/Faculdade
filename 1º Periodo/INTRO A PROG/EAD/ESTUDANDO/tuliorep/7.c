#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    int individuos = 0;

    double somaIdade;


    do {

        printf ("Digite a idade do individuo(PARAR = 0): \n");
        scanf ("%d", &idade);


        if (idade > 0){
            
        somaIdade += idade; // ou somaIdade = somaIdade + idade;

        individuos++;
        }

    }while(idade > 0);

    double idadeMedia = somaIdade / individuos;

    printf ("Idade media desses individuos = %.2lf\n", idadeMedia);

    return 0;

}