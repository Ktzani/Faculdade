#include <stdio.h>
#include <math.h>

int main()
{

    int pot;
    for (int i = 1; i <= 20; i++)
    {

        pot = pow(i, 2);

        printf("%d ", pot);
    }

    printf ("\n");
    
    return 0;
}
