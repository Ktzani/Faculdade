# ifndef buscabinaria_h
# define buscabinaria_h


typedef long TChave;

typedef struct {
    long int comprimentoti;
    
} TItem;

typedef struct {
    TItem *v;
    int n, max;
} TDicionario;

void TDicionario_Inicia (TDicionario *dic);

void Pega_AREA(double *area);

void Pega_NUMEROS(long int *comp);

//int TDicionario_FindMAIOR (TDicionario *dic, TChave comp);

double TDicionario_Binario(TDicionario *dic, double area);

void TDicionario_Insere(TDicionario *dic, long int comp);

void ordenaVetor(TDicionario *dic, int L, int R);

void merge (TDicionario *dic, int L, int M, int R);

int somaTUDO (TDicionario *dic);

void imprimirIMPOSSIVEL();

void imprimirEXATO();

void imprimirAltura(double altura);

void desalocaDICIONARIO(TDicionario *dic);
# endif
