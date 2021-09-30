//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41

#include <stdio.h>

#include <string.h>

int main()
{

    char nome[70];

    printf("Digite seu nome completo: ");

    fgets(nome, 70, stdin);

    int contEspaco = 0;

    int tamNome = strlen(nome) - 1;

    nome [tamNome] = '\0';

    char doisNomes[70];

    int ultimoEspaco;

    for (int i = 0; i < tamNome; i++)
    {

        if (nome[i] == ' ')
        {

            contEspaco++;
            ultimoEspaco = i;
        }
    }

    for (int i = 0; i < ultimoEspaco; i++)
    {
        
        doisNomes[i] = nome[i];
    }

    doisNomes[ultimoEspaco] = '\0'; // Troca o espaço(' ') entre Silva e Souza (exemplo da questão) por \O

    printf ("%s, %s\n", nome + ultimoEspaco + 1, doisNomes);

    int totalultima = strlen(nome + ultimoEspaco + 1);


    int total = tamNome - contEspaco;

    printf("Total de letras: %d\n", total);

    printf("Total de letras do ultimo sobrenome: %d\n", totalultima);

    return 0;

}
 