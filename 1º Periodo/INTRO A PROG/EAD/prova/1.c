#include <stdio.h>

int main()
{

    char plano;
    int filmes;
    double total;
    double media;

    printf("Digite o plano(I OU F): ");
    scanf(" %c", &plano);

    printf("Digite o numero de filmes assistidos no mês: ");
    scanf("%d", &filmes);

    switch (plano)
    {

    case 'I':

        if (filmes <= 7)
        {

            total = filmes * 4.95 + 19.95;

            media = total / filmes;

            printf("Valor total: %.2lf\n", total);
            printf("Media:%.2lf\n", media);
        }
        else if ((filmes > 7) && (filmes <= 15))
        {

            total = (7 * 4.45) + ((filmes - 7) * 4) + 19.95;
            media = total / filmes;

            printf("Valor total: %.2lf\n", total);
            printf("Media:%.2lf\n", media);
        }
        else if ((filmes > 15) && (filmes <= 25))
        {

            total = (15 * 3.85) + ((filmes - 15) * 3) + 19.95;
            media = total / filmes;

            printf("Valor total: %.2lf\n", total);
            printf("Media:%.2lf\n", media);
        }
        else
        {

            total = 2.15 * filmes + 19.95;
            media = total / filmes;

            printf("Valor total: %.2lf\n", total);
            printf("Media:%.2lf\n", media);
        }
        break;
    case 'F':

        if (filmes <= 15)
        {

            total = 2.95 * filmes + 39.95;
            media = total / filmes;

            printf("Valor total: %.2lf\n", total);
            printf("Media:%.2lf\n", media);
        }
        else if (filmes > 15) {
            
                total = 2.15 * filmes + 39.95;
                media = total / filmes;

                printf("Valor total: %.2lf\n", total);
                printf("Media:%.2lf\n", media);
            }
        break;
    }

    return 0;
}