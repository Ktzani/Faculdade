//Gabriel Catizani Faria Oliveira 20.1.4004 Turma: 41
#include <stdio.h>

long long fat(int n);

int main (){

    int n;

    printf ("Digite o valor de n: ");
    scanf ("%d", &n);
    
    long long fatorial = fat (n);


    printf ("O fatorial de %d = %lld \n", n, fatorial);
}

long long fat(int n) {

    int i = 0;
    long long multi = 1;
    
    while (i < n) {

        multi = multi * (n - i);

        i++;

    }
    return multi;
}   
