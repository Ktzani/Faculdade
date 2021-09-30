#include <stdio.h>

int main (){

    int dia, mes, ano;

    printf ("Digite um dia:\n");
    scanf ("%d", &dia);

    printf ("Digite um mes:\n");
    scanf ("%d", &mes); 

    printf ("Digite um ano:\n");
    scanf ("%d", &ano);

    switch (mes)
    {  
    case 1: 
        printf ("Data: %d de janeiro de %d\n", dia, ano);
        break;
    case 2: 
        printf ("Data: %d de fevereiro de %d\n", dia, ano);
        break;
    case 3:
        printf ("Data: %d de março de %d\n", dia, ano);
        break;
    case 4: 
        printf ("Data: %d de abril de %d\n", dia, ano);
        break;
    case 5: 
        printf ("Data: %d de maio de %d\n", dia, ano);
        break;
    case 6: 
        printf ("Data: %d de junho de %d\n", dia, ano);
        break;
    case 7: 
        printf ("Data: %d de julho de %d\n", dia, ano);
        break;
    case 8: 
        printf ("Data: %d de agosto de %d\n", dia, ano);
        break;
    case 9: 
        printf ("Data: %d de setembro de %d\n", dia, ano);  
        break;
    case 10: 
        printf ("Data: %d de outubro de %d\n", dia, ano);
        break;
    case 11:
        printf ("Data: %d de novembro de %d\n", dia, ano);
        break;
    case 12:
        printf ("Data: %d de dezembro de %d\n", dia, ano);
        break;
    default: 

        printf("Mês invalido\n");

    }

    return 0;
}
