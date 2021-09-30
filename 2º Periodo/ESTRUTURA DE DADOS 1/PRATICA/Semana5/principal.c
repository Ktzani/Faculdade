#include "fib.h"
#include<stdio.h>

int main()
{

    TADfib f;
    
    int ncasos;

    int j;

    //fazer a leitura do numero de casos de teste
    scanf("%d", &ncasos);

    //ler o caso de teste e processar antes de ler o proximo
    for(j = 0; j < ncasos; j++){

        scanf ("%d", &f.i);

        f.chamadasrecu = 0;

        f.result = fibonacci(f.i, &f);
        
        //imprimir a resposta no formato adequado
        printf ("fib(%d) = %lld chamadas = %lld\n", f.i, f.chamadasrecu, f.result);
    }


    return 0;//nao remova
}
