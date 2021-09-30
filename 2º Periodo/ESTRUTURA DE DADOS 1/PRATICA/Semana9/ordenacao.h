# ifndef ordenacao_h
# define ordenacao_h

void ordenacao(int *vetor, int L, int R, int *movimentos);
//Manter como especificado
int *alocaVetor(int *vetor, int n);
//Manter como especificado
int *desalocaVetor(int *vetor);

void merge (int *vetor, int L, int M, int R, int *movimentos);
# endif
