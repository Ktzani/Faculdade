#include <stdio.h>

int main()
{
    int restantes1;
    int valores;
    int menor;

    int restantes2;

    printf ("Digite a quantidade de valores:");
    scanf ("%d", &restantes1);
    restantes2 = restantes1;
    

    for (int i = 1; i <= restantes1; i++) {

        printf ("Restantes: %d\n", restantes2);
        printf ("Digite um numero inteiro:");
        scanf ("%d", &valores);

        if (i == 1){
            menor = valores;
        }

        if (menor > valores){

            menor = valores;
        }

        restantes2--;
    }   

    printf ("Menor numero: %d\n", menor);

    return 0;
}

