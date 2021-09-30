//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41

#include <stdio.h>

#include <string.h>

void toUpper(char texto[], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {

        if ((texto[i] >= 97) && (texto[i] <= 122))
        {

            texto[i] -= 32; //Retirar 32 da respectiva letra minuscula para chegar na letra maisucula e troca-la (TABELA ASCII)
        }
        else

            texto[i] = texto[i];
    }
}

int main()
{

    char texto[100];

    printf("Digite o texto: ");
    fgets(texto, 100, stdin);

    int tam = strlen(texto);

    texto[tam - 1] = '\0';

    toUpper(texto, tam);

    printf ("%s\n", texto);

    return 0;

}