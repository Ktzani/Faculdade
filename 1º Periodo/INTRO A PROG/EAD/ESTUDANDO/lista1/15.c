#include <stdio.h>

void troca3(int *pa, int *pb, int *pc) {

    int aux1;
    int aux2;
    int aux3;

    aux1 = *pa; 
    aux2 = *pb;
    aux3 = *pc; 

    *pa = aux2;
    *pb = aux3;
    *pc = aux1;
} 

    
int main() {

    int a, b, c;
    printf ("Digite valor para a, b e c, respectivamete:\n");

    scanf ("%d %d %d", &a, &b, &c);


    troca3(&a, &b, &c);

    printf ("A = %d, B = %d, C = %d \n", a, b, c);

    return 0;

}


