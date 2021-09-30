//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41
#include <stdio.h>

int validezcpf(long cpf);

int main()
{
    long cpf;
    printf("Digite seu cpf (11 numeros): ");
    scanf("%lu", &cpf);
    if (validezcpf(cpf) == 1)
        printf("CPF válido!\n");
    else
        printf("CPF inválido!\n");
    return 0;
}

int validezcpf(long cpf)
{
    int contador = 1;
    int multiplicador = 2;
    int somatorio = 0;
    int cpfcerto = cpf / 100;

    while (contador < 10)
    {
        int cpf1 = cpfcerto % 10;
        cpfcerto = cpfcerto / 10;
        int recebecpf = cpf1;
        int base = multiplicador - 1;
        while (base < multiplicador)
        {
            recebecpf *= multiplicador;
            base++;
        }
        contador++;
        multiplicador++;
        somatorio += recebecpf;
    }

    int valor = cpf % 100;
    int valor2 = valor / 10;
    int base, base2;
    int base3, base4;
    if (valor2 == 10)
    {
        valor2 = 0;
        base = somatorio * 10;
        base2 = base % 11;
    }
    else
    {
        base3 = somatorio * 10;
        base4 = base3 % 11;
    }

    int somatorio2 = 0;
    long cpfcerto2 = cpf / 10;
    int contador2 = 1;
    int multiplicador2 = 2;
    while (contador2 < 11)
    {
        int cpf2 = cpfcerto2 % 10;
        cpfcerto2 = cpfcerto2 / 10;
        int recebecpf = cpf2;
        int base = multiplicador2 - 1;
        while (base < multiplicador2)
        {
            recebecpf *= multiplicador2;
            base++;
        }
        contador2++;
        multiplicador2++;
        somatorio2 += recebecpf;
    }

    long valor3 = cpf % 10;
    int valor4 = somatorio2 * 10;
    int valor5 = valor4 % 11;
    int base5, base6, base7, base8;
    if (valor5 == 10)
    {
        valor5 = 0;
        base5 = somatorio2 * 10;
        base6 = base5 % 11;
    }
    else
    {
        base7 = somatorio2 * 10;
        base8 = base7 % 11;
    }

    if (((base6 == valor3) || (base8 == valor3)) && ((base2 == valor2) || (base4 == valor2))) {
        return 1;
    }
    else {
        return 0;
    }
}