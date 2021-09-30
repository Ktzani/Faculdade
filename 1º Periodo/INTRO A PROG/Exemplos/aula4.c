#include <stdio.h>
#include <math.h>

int main () {

    int n1,n2;

    printf ("Digite dois numeros: \n");

    scanf("%d %d", &n1, &n2);

    if (n1 >= n2) {

        printf ("%d é o maior numero \n", n1);

    }

    else {

        printf ("%d é o maior numero \n", n2);

    }

    return 0;

}