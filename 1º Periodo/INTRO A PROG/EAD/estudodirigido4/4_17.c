#include <stdio.h>

int main()
{

    double conta, limite, saldo;
    double novoLimite; 
    for (int i = 1; i <= 3; i++) {
        
        printf ("Cliente %d:\n", i);

        printf ("Digite o numero de conta: ");
        scanf ("%lf", &conta);

        printf ("Digite o limite antes da recessão: ");
        scanf ("%lf", &limite);

        printf ("Saldo atual:");
        scanf ("%lf", &saldo);

        novoLimite = limite / 2 ;
        
        if (saldo > novoLimite){

            printf ("O saldo do cliente %d foi excedido!!\n", i);
        }
        else {
            printf ("Saldo normal\n");
        }
        printf ("\n");
    }

    return 0;

}