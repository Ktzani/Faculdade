//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41

#include <stdio.h>

#include <string.h>

int main()
{

    char palindromo[20];

    char invPalin[20];

    int tam;

    int a;

    do
    {

        printf("Digite uma palavra ou FIM para sair: ");
        fgets(palindromo, 20, stdin);

        tam = strlen(palindromo);

        palindromo[tam - 1] = '\0';

        if (strcmp(palindromo, "FIM") != 0)
        {

            int i;
            a = strlen(palindromo) - 1;

            for (i = 0; palindromo[i] != '\0'; i++)
            {

                invPalin[a] = palindromo[i];

                a--;
            }

            invPalin[i] = '\0';

            if (strcmp(palindromo, invPalin) == 0)
            {

                printf("%s é um palindromo\n", palindromo);
            }
            else
            {

                printf("%s não é um palindromo\n", palindromo);
            }
        }

    } while (strcmp(palindromo, "FIM") != 0);

    return 0;
}
