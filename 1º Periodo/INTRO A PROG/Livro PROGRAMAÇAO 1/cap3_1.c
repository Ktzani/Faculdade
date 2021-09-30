//MAIOR NUMERO ENTRES 3 NUMEROS
#include <stdio.h>
#include <math.h>

int main (){

    int n1, n2, n3;

    printf ("Digite valores inteiros para n1, n2 e n3: \n");

    scanf ("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3){
    

        printf ("\n %d é o maior numero \n", n1);
    }

    else if (n2 > n1 && n2 > n3) {

        printf ("\n %d é o maior numero \n", n2);
    }

    else {

        printf ("\n %d é o maior numero \n", n3);

    }

    return 0;

}