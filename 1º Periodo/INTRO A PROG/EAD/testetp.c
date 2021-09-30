#include <stdio.h>
#include <string.h>

void lerMatriz(int n, int m, int matriz[][15], FILE *arquivo);
void imprimirTabuleiro(int n, int m, int matriz[][15]);

int main(int argc, char **argv)
{

    int n;
    int m;
    int matriz[15][15];

    char comando[10];
    int tamanho = 0;

    printf("Bem vindo ao Resta UM!\n");

    printf ("\nCOMO JOGAR: \n");

    printf ("O objetivo do jogo é (como o proprio nome diz) deixar apenas uma peça no tabuleiro.       \n");
    printf ("Sempre que você passar uma peça por cima da outra, a peça que está embaixo é retira-      \n");
    printf ("da, porémmm CUIIIIDADOO!!!!: você pode ficar sem movimentos se não retirar as peças       \n");
    printf ("corretas.\n");

    printf ("                      -            COMANDOS            -\n");
    printf ("Comando    Argumento     O que ele faz?\n");
    printf ("----------------------------------------------------------------------------------        \n");
    printf ("c          CD            Move um pino na célula da linha C e coluna D para cima           \n");
    printf ("b          CD            Move um pino na célula da linha C e coluna D para baixo          \n");
    printf ("e          CD            Move um pino na célula da linha C e coluna D para a esquerda     \n");
    printf ("d          CD            Move um pino na célula da linha C e coluna D para a direita      \n");
    printf ("ajuda      n             Seu programa deve sugerir e executar n movimentos para o jogador.\n");
    printf ("salvar     out           Salva o jogo tal como está no momento no arquivo “out.txt”.      \n");
    printf ("sair       -             Encerra o programa (sem salvar as últimas alteracoes).           \n");

    printf ("\n");

    //implementa e abre o arquivo
    FILE *arquivo = fopen(argv[1], "r");

    //lê o m e o n do arquivo texto criado pelo usuario
    fscanf(arquivo, "%d %d", &n, &m);

    //inicia a funçao lermatriz 
    lerMatriz(n, m, matriz, arquivo);

    //Fecha o arquivo
    fclose(arquivo);

    imprimirTabuleiro(n, m, matriz);

    printf ("\nComando: ");
    fgets (comando, 10, stdin);

    tamanho = strlen (comando);
    
    comando[tamanho - 1] = '\0';

    return 0;
    }


void lerMatriz(int n, int m, int matriz[][15], FILE *arquivo)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            fscanf(arquivo, "%d", &matriz[i][j]);
        }
    }
}

void imprimirTabuleiro(int n, int m, int matriz[][15])
{
    printf (" ");
    for (int i = 0; i < n; i++){
            printf (" %1d", i + 1);
    }
    

    printf ("\n");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", i + 1);
        for (int j = 0; j < m; j++)
        {

            if (matriz[i][j] == -1){
                printf("  ");
            }
            else if (matriz[i][j] == 0){
                printf ("X ");
            }
            else if (matriz[i][j] == 1){
                printf ("O ");
            }
        }
        printf("\n");
    }
}


void imprimirTabuleiro(int n, int m, int matriz[][15])
{
    for (int i = 0; i < n; i++){

            printf ("%d ", i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf ("%d ", i + 1);
        for (int j = 0; j < m; j++)
        {
            printf ("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}





