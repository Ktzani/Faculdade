#include <stdio.h>

void proced (int n, int *psoma){
    if  (n % 2 == 0){

     *psoma = n + 5;
    }
    else {

     *psoma = n + 8;
    }
}

int main (){

    int N, soma;
    printf ("Digite um valor para n: ");
    scanf ("%d", &N);

    proced (N, &soma);

    printf ("Resultado = %d\n", soma);

    return 0;
}