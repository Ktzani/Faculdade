#include <stdio.h>
#include <math.h>

int main () {

    double n1, n2 ;
    char c; 
    
    printf ("Digite valores para n1, n2 e coloque um operador para c: \n");
    scanf ("%lf %lf %c", &n1, &n2 ,&c);

    printf ("Primeiro valor: %.1lf \n", n1);
    printf ("Segundo valor: %.1lf \n", n2);
    printf ("Operador: %c \n", c);

    if (c == '+') {

        double R = n1 + n2 ;
        printf ("Resultado = %.1lf %c %.1lf = %.1lf  \n ", n1,c , n2 , R);

    } 
    else if (c == '-') { 

        double R = n1 - n2 ;
        printf ("Resultado = %.1lf %c %.1lf = %.1lf \n ", n1 ,c ,  n2 , R);   
    
    }   
    else if (c == '*') { 
        
        double R = n1 * n2 ;
        printf ("Resultado = %.1lf %c %.1lf = %.1lf \n ", n1 ,c ,  n2 , R);
 
    }

    else if (c == '/') { 
        
        double R = n1 / n2 ;
        printf ("Resultado = %.1lf %c %.1lf = %.1lf \n ", n1 ,c ,  n2 , R);


    }
    
    return 0;
}
