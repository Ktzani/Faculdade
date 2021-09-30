//Nota de um aluno
#include <stdio.h>
#include <math.h>


int main (){

    double p1, p2, p3;
    
    printf ("Digite as notas p1 e p2 do aluno (de 0 a 10), respectivamente:\n ");

    scanf ("%lf %lf", &p1,&p2);

    double m1 = (p1 + p2) / 2.0; 

    printf ("\nProva 1 = %.2lf \t Prova 2 = %.2lf\n", p1, p2);

    if ( m1 >= 5 && p1 >= 3 && p2 >= 3) {

        printf ("\nAprovado com media: %.2lf \n", m1 );

    }

    else {

        printf ("\nAluno não passou direto e deve fazer uma prova p3 \n");
        printf ("\nDigite a nota de p3: \n");
        
        scanf ("%lf", &p3);
        
        printf ("\nProva p3 =  %.2lf\n", p3);
        double m2 = (p3 + p1) / 2.0;
        double m3 = (p3 + p2) / 2.0;
        
        if (m2 >= 5 && p1 >= p2) {

            printf ("\nAluno aprovado com media: %.2lf\n", m2 );

        }
    
        else if (m3 >= 5 && p2 >= p1){

            printf ("\nAluno aprovado com media: %.2lf\n", m3 );

            
        }
        else if (m2 < 5 || m3 < 5) {
        
            printf ("\nAluno reprovado\n");


        }
    }
    return 0;

}