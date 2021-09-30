//Jogando dois dados 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    srand ( time(NULL) );

    int dado1 = rand () % 6 + 1;
    int dado2 = rand () % 6 + 1;
    int soma = dado1 + dado2;

    printf ("\nDado 1 = %d\n", dado1);

    printf ("\nDado 2 = %d\n", dado2);

    printf ("\nSoma dos dados = %d\n", soma);

return 0;
}
