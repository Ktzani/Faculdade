#include <stdio.h>

#define M 10

void matrizA(int m, int p, int a[][10]);

void matrizB(int n, int q, int b[][10]);

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

        printf("Digite as dimensoes da matriz B (q e n): ");
        scanf("%d %d", &q, &n);

        if (p != q)
        {

            printf("\nERRO: p tem que ser igual a q\n");
        }

    } while (p != q);

    printf ("\nMatriz A: \n");

    matrizA(m, p, A);

    printf ("\nMatriz B: \n");

    matrizB(n, q, B);


    printf ("\nMATRIZ C:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            C[i][j] = 0;

            for (int k = 0; k < p; k++) {

                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            
            printf ("%d ", C[i][j]);
        }
        printf ("\n");
    }

    return 0;

}

void matrizA(int m, int p, int a[][10]) {

    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){

            printf ("Digite um valor para posicao (%d, %d): ", i, j);
            scanf ("%d", &a[i][j] );
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){

            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
}

void matrizB(int n, int q, int b[][10]) {

    for (int i = 0; i < q; i++){
        for (int j = 0; j < n; j++){

            printf ("Digite um valor para posicao (%d, %d): ", i, j);
            scanf ("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < q; i++){
        for (int j = 0; j < n; j++){

            printf ("%d ", b[i][j]);
        }
        printf ("\n");
    }
}