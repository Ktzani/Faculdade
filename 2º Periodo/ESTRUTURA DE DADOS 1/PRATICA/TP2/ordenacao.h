# ifndef ordenacao_h
# define ordenacao_h

typedef struct{
	char nome[40];
    int ouro;
    int prata;
    int bronze;
} TPais;

void ordenaOURO(TPais *paises, int n);

void quantidadeDePaises(int *n);

void lerPaises(TPais *paises, int n);

TPais *alocaPaises(TPais *paises, int n);

TPais *desalocaPaises(TPais *paises);

void imprimeQuadrodeMedalhas(TPais *paises, int n);

void ordenaPrataINSERTION(TPais *paises, int n);

void ordenaBronzeINSERTION(TPais *paises, int n);

void ordenaNomeINSERTION(TPais *paises, int n);
# endif
