#include "corretor.h"
#include <stdio.h>

int main()
{
    int submissoes;

    TADaluno *Alu = NULL;

    int pontuacaofinal;

    int corretos;

    lerSubmissoes(&submissoes);

    Alu = alocaAlunos(Alu, submissoes);
    
    lerAlunosSubmissoes(Alu, submissoes);

    corretos = casoscorretos (Alu, submissoes);

    pontuacaofinal = somandoTempos (Alu, submissoes);

    printandoCorrecao(pontuacaofinal, corretos);

    Alu = desalocaAlunos(Alu);

    return 0;
}
