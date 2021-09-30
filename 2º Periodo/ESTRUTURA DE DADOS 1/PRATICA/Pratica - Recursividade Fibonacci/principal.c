#include "fib.h"
#include<stdio.h>

int main()
{

    TADfib f;
    
    int ncasos;

    //fazer a leitura do numero de casos de teste
    scanf("%d", &ncasos);

    //ler o caso de teste e processar antes de ler o proximo
    for(i = 0; i < f.ncasos; i++){

        scanf ("%d", &f.i);

        f.result = fibonacci(f);
        
        //imprimir a resposta no formato adequado
        printf ("fib(%d) = %d chamadas = %lld\n", f.i, f.chamadasrecu, f.result);
    }


    return 0;//nao remova
}
