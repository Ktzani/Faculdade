#include <stdio.h>
#include <math.h>


int main () {
    
    int ano;
    printf ("Digite um ano de 4 digitos: \n");

    scanf ("%d", &ano);


    int A, D, E, F, G, I, K, M;
    int B;
    int C;
    int H;
    int L;

    A = ano % 19;
    B = ano / 100;
    C = ano % 100;
    D = B / 4 ;
    E = B % 4;
    F = (B + 8)/25;
    G = (B - F + 1)/3;
    H = (19 * A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L)/451;

    int mesP = (H + L - 7 * M + 114) / 31;
    int diaP = (H + L - 7 * M + 114) % 31 + 1;

    int mesSS = ((H + L - 7 * M + 114) / 31 )- 2;
    int diaSS = ((H + L - 7 * M + 114) % 31 + 1) - 2;

    int mesTC = (H + L - 7 * M + 114) / (31 - 18);
    int diaTC = (H + L - 7 * M + 114) % (31 - 17);

    int mesCC = ((H + L - 7 * M + 114) / 31 ) + 2;
    int diaCC = ((H + L - 7 * M + 114) % 31 + 1) + 60;

    printf ("Mes páscoa: %d Dia pascoa: %d \n", mesP, diaP);

    printf ("Mes sexta feira santa: %d Dia sexta feira santa: %d \n", mesSS, diaSS);

    printf ("Mes terça feira de carnaval: %d Dia terça feira de carnaval: %d \n", mesTC, diaTC);

    printf ("Mes Corpus Christi: %d Dia Corpus Christi: %d \n", mesCC, diaCC);

return 0;
}