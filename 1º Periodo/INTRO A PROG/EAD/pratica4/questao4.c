#include <stdio.h>

int main (){

    char sexo, Ecivil, L;
    printf ("\nDigite o sexo(F/f ou M/m): \n");

    scanf (" %c", &sexo);
    

    if ((sexo == 'M') || (sexo == 'm')) {

        printf("\nDigite a inicial do estado civil(Casado, Solteiro, Viuvo ou Divorciado): \n");

        scanf (" %c", &Ecivil);

        L = 'o';
    }

    else if ((sexo == 'F') || (sexo == 'f')) {
        printf("\nDigite a inicial do estado civil(Casado, Solteiro, Viuvo ou Divorciado): \n");

        scanf (" %c", &Ecivil);

        L = 'a';
    }
    else {

        printf ("\nErro: sexo invalido...\n");
    }

    if ((Ecivil == 'C') || (Ecivil == 'S') || (Ecivil == 'V') || (Ecivil == 'D') || (Ecivil == 'c') || (Ecivil == 's') || (Ecivil == 'v') || (Ecivil == 'd')) {
    
    switch (Ecivil) {

        case 'C': 
    
        case 'c':
            printf ("Casad%c. \n", L);
            break;

        case 'S':

        case 's':

            printf ("Solteir%c. \n", L);
            break;

        case 'V':

        case 'v':

            printf ("Viuv%c. \n", L);
            break;
        
        case 'D':

        case 'd':

            printf ("Divorciad%c. \n", L);
            break;
        }
    }
        else
             printf ("\nErro: estado civil invalido...\n");
        
    return 0;
}


    


