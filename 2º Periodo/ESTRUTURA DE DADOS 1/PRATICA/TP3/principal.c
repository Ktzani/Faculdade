#include "buscabinaria.h"
#include <stdio.h>

int main ()
{

	TDicionario pesqui;

    long int tiras;

    double area;

    int i;

    double altura;

    double somatotal;

    do{
        TDicionario_Inicia(&pesqui);
        
        Pega_AREA(&area);

        if(pesqui.max == 0 && area == 0){

            break;
        }

        for(i = 0; i < pesqui.max; i++){

            Pega_NUMEROS(&tiras);

            TDicionario_Insere(&pesqui, tiras);

        }

        ordenaVetor(&pesqui, 0, pesqui.max-1);

        /*
        printf ("Vetor ordenado:");

        for (i = 0; i < pesqui.max; i++){

            printf("%ld ", pesqui.v[i].comprimentoti);

        }
        
        */
       
        somatotal = somaTUDO(&pesqui);
        
        //PROBLEMA ESTA DAQUI PARA BAIXO:
        if(somatotal < area){
            imprimirIMPOSSIVEL();
            
        }

        else if (somatotal == area){
            imprimirEXATO();
        }

        else{
            altura = TDicionario_Binario(&pesqui, area);
        
            imprimirAltura(altura);

            desalocaDICIONARIO(&pesqui);
        }

    } while (pesqui.max > 0 && area > 0);

    return 0;
}