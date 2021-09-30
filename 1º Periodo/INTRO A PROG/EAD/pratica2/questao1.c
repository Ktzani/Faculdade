//Expressao com x1, x2 e x3

#include <stdio.h>

int main (){

    int x1, x2 , x3 ;
    printf ("Digite os valores de x1, x2 e x3: \n");
    
    scanf ("%d %d %d", &x1 , &x2, &x3);

    int y = (x1 + (x2 * x2) + (x3 * x3)) * (x1 + (x2 * x2) + (x3 * x3)) 
         + (x1 * x2 * x3 ) * (x1 *x2 * x3 );

    printf ("\nx1 = %d, x2 = %d, x3 = %d \n", x1, x2, x3);

    printf ("y = %d \n", y);

return 0; 
}