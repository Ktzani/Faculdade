//ORDEM CRESCENTE DE TRES NUMEROS - 6 possibilidades 
#include <stdio.h>
#include <math.h>


int main (){

    int n1, n2, n3;

    printf ("Digite valores inteiros para n1, n2 e n3: \n");

    scanf ("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3 && n2 > n3 ) {
    

        printf ("\n Ordem crescente: %d, %d e %d  \n", n3, n2, n1);
    }

    else if (n1 > n2 && n1 > n3 && n3 > n2 ) {

        printf ("\n Ordem crescente: %d, %d e %d \n", n2, n3, n1);
    }

    else if (n2 > n1 && n2 > n3 && n1 > n3 ) {

        printf ("\n Ordem crescente: %d, %d e %d \n", n3, n1, n2);

    }
    else if (n2 > n1 && n2 > n3 && n3 > n1) {

        printf ("\n Ordem crescente: %d, %d e %d \n", n1, n3, n2);

    }
    else if (n3 > n1 && n3 > n2 && n1 > n2) {


        printf ("\n Ordem crescente: %d, %d e %d \n", n3, n1, n2);
    }
    else {
        
        printf ("\n Ordem crescente: %d, %d e %d \n", n1, n2, n3);

    }
    return 0;
}
