//Tempo de duraçao de um evento 

#include <stdio.h>
#include <math.h>

int main (){

    int H, M;
    float S;

    printf ("Indique quanto tempo durou a festa do Manoel ontem em horas, minutos e segundos, respectivamente: \n");

    scanf ("%d %d %f", &H, &M, &S);

    printf ("\n A festa do Manoel durou: %02dh, %02dmin, %05.2fs \n", H, M, S);
    
    return 0;

}

