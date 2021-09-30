//VOGAL E NÃO VOGAL 

#include <stdio.h>
#include <math.h>

int main (){
 
    char vogal;

    printf ("\nDigite uma letra minuscula qualquer: \n");

    scanf ("%c", &vogal);

    if ((vogal == 'a') || (vogal == 'e') || (vogal == 'i') || (vogal == 'o') || (vogal == 'u'))

        printf ("\nA letra %c é vogal\n", vogal);

    else 

        printf ("\nA letra %c não é vogal\n", vogal);

    return 0;

}
