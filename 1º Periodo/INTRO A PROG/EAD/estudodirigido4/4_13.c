#include <stdio.h>

int main()
{
    int produto = 1;

    for (int i = 1; i <= 15; i = i + 2) {

        produto = produto * i;

    }

    printf ("O produto dos inteiros impares entre 1 a 15 é igual a : %d\n", produto);
   
   return 0;

}