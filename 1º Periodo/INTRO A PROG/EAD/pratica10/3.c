//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41

#include <stdio.h>

#include <string.h>

int main (){

    char frase[100];

    printf ("Digite o texto para censurar:\n");

    fgets (frase, 99, stdin);

    int tam = strlen(frase);

    frase[tam - 1] = '\0';

    for(int i = 0; i < tam; i++) {

        if (frase[i] == 'a')

            frase[i] = '@';

        if (frase[i] == 'e')

            frase[i] = '_';

        if (frase[i] == 'i')

            frase[i] = '|';

        if (frase[i] == 'o')

            frase[i] = '0';

        if (frase[i] == 'u')

            frase[i] = '#';
        
        if (frase[i] == 's')

            frase[i] = '$';

    }

    printf ("%s\n", frase);

    return 0;

}