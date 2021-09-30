//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41
#include <stdio.h>

int duracao (int *HI, int *MI, int *HF, int *MF); 

int duracao (int *HI, int *MI, int *HF, int *MF) {

    if (*HF >= *HI) {
        int duracaominutosDIAIGUAL = (*HF - *HI - 1 ) * 60 + (60 - *MI) + *MF  ;

        return duracaominutosDIAIGUAL;
    }
    else {
        int duracaominutoDIADIFERENTE = ((24 - *HI + *HF - 1) * 60)  + (60 - *MI) + *MF;

        return duracaominutoDIADIFERENTE;

    }
}
int main () {

    int HoraInicio, MinutoInicio, HoraFinal, MinutoFinal;

    printf ("Digite a hora do inicio: \n");
    scanf ("%d", &HoraInicio);

    printf ("Digite a minuto do inicio: \n");
    scanf ("%d", &MinutoInicio);

    printf ("Digite a hora do termino: \n");
    scanf ("%d", &HoraFinal);

    printf ("Digite a minuto do termino: \n");
    scanf ("%d", &MinutoFinal);

    int dura = duracao (&HoraInicio, &MinutoInicio, &HoraFinal, &MinutoFinal);

    printf ("O tempo de jogo em minutos foi de : %d\n", dura);

    return 0;

}

