
#include <stdio.h>
#include <math.h>

int main (){

    int uni;
    int P = 0;
    int V = 1;
    int C = 2;

    printf ("\nEscolha classe da unidade entre peso(%d), volume(%d) e comprimento(%d): \n", P, V, C);

    scanf ("%d", &uni);

    if (uni == 0) {
        
        printf ("\nUnidade escolhida: PESO\n");

        int conver;

        int lk = 1;
        int kl = 2;
        int og = 3;
        int go = 4;

        printf ("\nEscolha a conversão a qual você deseja de libra para Kg (%d), kg para libra (%d), onça para g (%d) ou g para onça (%d)\n",lk, kl, og ,go );

        scanf ("%d", &conver);

        if (conver == 1){   
            
            double libras;

            printf ("\nEscolha um valor em libras: \n ");
            scanf ("%lf", &libras);

            double LIKG = libras * 0.4536;

            printf ("\nA conversão de libra pra kg desse valor sugerido = %.3lf kg \n", LIKG);
        }

        else if (conver == 2){   
            
            double quilog;

            printf ("\nEscolha um valor em kg: \n ");
            scanf ("%lf", &quilog);

            double KGLI = quilog / 0.4536;

            printf ("\nA conversão de kg para libra desse valor sugerido = %.3lf libras\n", KGLI);

        }

        else if(conver == 3){   
            
            double onca;

            printf ("\nEscolha um valor em onça: \n ");
            scanf ("%lf", &onca);

            double ONG = onca * 28.3495;

            printf ("\nA conversão de onça para gramas desse valor sugerido = %.3lf g\n", ONG);
        }

        else if(conver == 4){   
            
            double gramas;

            printf ("\nEscolha um valor em gramas: \n ");
            scanf ("%lf", &gramas);

            double GON = gramas / 28.3495;

            printf ("\nA conversão de gramas para onça desse valor sugerido = %.3lf onças\n", GON);

        }
    }
    
    if (uni == 1){

        printf ("\nUnidade escolhida: VOLUME\n");
        int conver;
        int gl = 1;
        int lg = 2;
        int oml = 3;
        int mlo = 4;

        printf ("\nEscolha a conversão a qual você deseja de galao para litro (%d), litro para galao (%d), onça para ml (%d) ou ml para onça (%d)\n",gl, lg, oml ,mlo );

        scanf ("%d", &conver);

        if (conver == 1){   
            
            double galao;

            printf ("\nEscolha um valor em galao: \n ");
            scanf ("%lf", &galao);

            double GALI = galao * 3.7854;

            printf ("\nA conversão de galao para litros desse valor sugerido = %.3lf L\n", GALI);
        }

        if (conver == 2) {   
            
            double litros;

            printf ("\nEscolha um valor em litros: \n ");
            scanf ("%lf", &litros);

            double LIGA = litros / 3.7854;

            printf ("\nA conversão de litros para galao desse valor sugerido = %.3lf galões\n", LIGA);
        }

        if (conver == 3) {   
            
            double onca;

            printf ("\nEscolha um valor em onça:\n");
            scanf ("%lf", &onca);

            double ONML = onca * 29.5735;

            printf ("\nA conversão de onça para ml desse valor sugerido = %.3lf ml\n", ONML);

        }

        if (conver == 4) {

            double milil;

            printf ("\nEscolha um valor em mililitros:\n");
            scanf ("%lf", &milil);

            double MLON = milil / 29.5735;

            printf ("\nA conversão de ml para litros desse valor sugerido = %.3lf onça\n", MLON);

        }
    }
    
    if (uni == 2) {

        printf ("\nUnidade escolhida: COMPRIMENTO\n");
        int conver;
        int mikm = 1;
        int kmmi = 2;
        int jm = 3;
        int mj = 4;

        printf ("\nEscolha a conversão a qual você deseja de milha para km (%d), km para milha (%d),jardas para metros (%d) ou metros para jardas (%d)\n",mikm, kmmi, jm ,mj);

        scanf ("%d", &conver);

        if (conver == 1){   
            
            double milha;

            printf ("\nEscolha um valor em milha:\n");
            scanf ("%lf", &milha);

            double MIKM = milha * 1.6093;

            printf ("\nA conversão de milhas para km desse valor sugerido = %.3lf km\n", MIKM);
    
        }

        if (conver == 2){

            double quilom;

            printf ("\nEscolha um valor em quilometros:\n");
            scanf ("%lf", &quilom);

            double KMMI = quilom / 1.6093;

            printf ("\nA conversão de km para milhas desse valor sugerido = %.3lf milhas \n", KMMI);
    
        }    

        if (conver == 3){

            double jardas;

            printf ("\nEscolha um valor em jardas:\n");
            scanf ("%lf", &jardas);

            double JAME = jardas * 0.9144;

            printf ("\nA conversão de jardas para metros desse valor sugerido = %.3lf metros \n", JAME);
        
        }

        if (conver == 4){

            double metros;

            printf ("\nEscolha um valor em metros:\n");
            scanf ("%lf", &metros);

            double MEJA = metros / 0.9144;

            printf ("\nA conversão de metros para jardas desse valor sugerido = %.3lf jardas \n", MEJA);
        }

        
    }

    return 0;

}