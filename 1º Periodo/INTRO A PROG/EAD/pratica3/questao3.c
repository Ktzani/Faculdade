//MAIOR MENOR E INTERMDEDIARIO 

#include <stdio.h>
#include <math.h>

int main (){

    int n1, n2 ,n3;

    printf ("Digite valores difrentes para n1, n2 e n3\n");

    scanf ("%d %d %d", &n1, &n2, &n3);

    if ((n1 > n2) && (n1 > n3) && (n2 > n3))

        printf ("\n Menor: %d\n Intermediario:%d\n Maior:%d\n", n3, n2, n1);

    if ((n2 > n1) && (n2 > n3) && (n1 > n3)) 

        printf ("\n Menor: %d\n Intermediario:%d\n Maior:%d\n", n3, n1, n2);
    
    if ((n3 > n1) && (n3 > n2) && (n2 > n1))

        printf ("\n Menor: %d\n Intermediario:%d\n Maior:%d\n", n1, n2, n3);
    
     if ((n2 > n1) && (n2 > n3) && (n3 > n1))

        printf ("\n Menor: %d\n Intermediario:%d\n Maior:%d\n", n1, n3, n2);

    if ((n3 > n1) && (n3 > n2) && (n1 > n2)) 

        printf ("\n Menor: %d\n Intermediario:%d\n Maior:%d\n", n2, n1, n3);
    
    if ((n1 > n3) && (n1 > n2) && (n3 > n2))

        printf ("\n Menor: %d\n Intermediario:%d\n Maior:%d\n", n2, n3, n1);

    return 0;
}