#include <stdio.h>

#define pos 7

int main() {

    int vetor[pos];
    int valor;

    for (int i = 0; i < pos; i++ ) {

        printf ("Digite um valor para posiçao %d: ", i + 1);
        scanf ("%d", &vetor[i]);

    }


    printf ("Digite um valor para ser procurado: ");
    scanf ("%d", &valor);

    int result ;

    for (int i = 0; i < pos; i++) {

        if (vetor [i] == valor ) {

            result = 1;

            break;
        }
        else{

            result = 2;

        }
    }
    
    if (result == 1)

        printf ("Valor encontrado\n");

    else 
        printf ("Valor NAO encontrado\n");

    return 0;

}
