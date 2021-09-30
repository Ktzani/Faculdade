#include <stdio.h>

int main (){

    int codigo, quant;
    double valor;

    printf ("Digite o codigo do item desejado:");
    scanf ("%d", &codigo);
    printf ("Digite a quantidade que você quer:\n");
    scanf ("%d", &quant);

    switch (codigo)
    {
    case 100:
        valor = quant * 5;
        printf ("Valor cachorro quente = %.2lf\n", valor);
        break;
    case 101:
        valor = quant * 6;
        printf ("Valor bauru simples = %.2lf\n", valor);
        break;
    case 102:
        valor = quant * 7.5;
        printf ("Valor bauru com ovo = %.2lf\n", valor);
        break;
    case 103:
        valor = quant * 9;
        printf ("Valor hamburguer = %.2lf\n", valor);
        break;

    case 104:
        valor = quant * 11;
        printf ("Valor cheeseburguer = %.2lf\n", valor);
        break;

    case 105:
        valor = quant * 4;
        printf ("Valor refrigerante = %.2lf\n", valor);
        break;

    default:
        printf ("Codigo invalido\n");
    }

    return 0;

}