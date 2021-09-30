#include <stdio.h>
#include <math.h>

int main (){

    int ano;
    printf("Para descobrir se o ano é bissexto, digite um ano:\n");

    scanf ("%d", &ano);


    if (( ano % 4 == 0 ) && ( ano % 100 != 0))
    {
        printf ("\nO ano de %d é bissexto\n", ano);

    }
    if (( ano % 100 == 0) && ( ano % 400 == 0))
    {
        printf ("\nO ano de %d é bissexto\n", ano);

    }
    

    return 0;

}

