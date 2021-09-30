#include <stdio.h>
#define M 10

void matrizA(int m, int p);

void matrizB(int n, int q);

int main()
{

    int A[M][M];
    int B[M][M];
    int C[M][M];
    int m, p, n, q;

    do
    {

        printf("Digite as dimensoes da matriz A (m e p): ");
        scanf("%d %d", &m, &p);

        printf("Digite as dimensoes da matriz B (n e q): ");
        scanf("%d %d", &n, &q);

        if (p != q)
        {

            printf("\nERRO: p tem que ser igual a q\n");
        }

    } while (p != q);

    printf ("\nMatriz A: \n");

    matrizA(m, p);

    printf ("\nMatriz B: \n");

    matrizB(n, q);

    for (int i = 0; i < m; i++){
        for (int j = 0; i < n; j++){
            for (int k = 0; k < p; k++)
        
            C[i][j] = A[i][k] * B[k][j];
        }
    }


    for (int i = 0; i < m; i++){
        for (int j = 0; i < n; j++){
            
            printf ("%d ", C[i][j]);
        }
        printf ("\n");
    }

    return 0;

}
void matrizA(int m, int p) {

    int A[10][10];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){

            printf ("Digite um valor para posicao (%d, %d): ", i, j);
            scanf ("%d", &A[i][j] );
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){

            printf ("%d ", A[i][j]);
        }
        printf ("\n");
    }
}

void matrizB(int n, int q) {

    int B[10][10];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < q; j++){

            printf ("Digite um valor para posicao (%d, %d): ", i, j);
            scanf ("%d", &B[i][j] );
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < q; j++){

            printf ("%d ", B[i][j]);
        }
        printf ("\n");
    }
}