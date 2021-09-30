//Mensalidade do plano de saude 
#include <stdio.h>

int main (){

    int idade; 

    printf ("Digite sua idade para saber o preço mensal do seu plano de saúde: \n");

    scanf ("%d", &idade);

    if (idade <= 10){

        printf ("\nVoce tera que pagar 90 reais por mes \n ");
    }
    else if ((idade > 10) && (idade <= 29)) {

        printf ("\nVoce tera que pagar 170 reais por mes\n ");
    }
    else if ((idade > 29) && (idade <= 45)) {
        
        printf ("\nVoce tera que pagar 290 reais por mes\n ");
    }
    else if ((idade > 45) && (idade <= 59)) {

        printf ("\nVoce tera que pagar 400 reais por mes\n ");
    }
    else if ((idade > 59) && (idade <= 65)) {
        
        printf ("\nVoce tera que pagar 515 reais por mes\n ");
    }

    else {

        printf ("\nVoce tera que pagar 695 reais por mes\n ");

    }

    return 0;

}