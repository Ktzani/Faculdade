#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int *n1, int *n2, int *n3)
{

    srand (time(NULL));

    *n1 = rand ()  % 100;

    *n2 = rand ()  % 100;

    *n3 = rand ()  % 100;
}

int main (){

    
    int n1, n2, n3;

    shuffle(&n1, &n2, &n3);

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


