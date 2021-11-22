# ifndef contimpri_h
# define contimpri_h
#define M 2
#define MM 2 * M

typedef long TChave;

typedef struct TipoRegistro{
    TChave chave;
    long int dado1;
    char dado2[1000];
    char dado3[5000];
} TipoRegistro;

typedef struct TipoPagina *TipoApontador;

typedef struct TipoPagina {
    int n;    //representa a quantidade de posiçpes preenchidas no meu vetor r
    TipoRegistro  r[M];
    TipoApontador p[M + 1];
    
} TipoPagina ;

void imprimeRegistro(TipoRegistro registro);

void imprimeChaves (FILE *arg);

void imprimirExperimento(int contComp, int contTrans, double tPreProce, double tPesquisa, double tTotal);

void iniciarTempoPreProcessamento(clock_t *InicioPreProcessamento); 

void finalizarTempoPreProcessamento(clock_t *FinalPreProcessamento);

void iniciarTempoPesquisa(clock_t *InicioPesquisa);

void finalizarTempoPesquisa(clock_t *FinalPesquisa);

void calcularTempoPreProcessamento(clock_t InicioPreProcessamento, clock_t FinalPreProcessamento, double *tPreProce);

void calcularTempoPesquisa(clock_t InicioPesquisa, clock_t FinalPesquisa, double *tPesquisa);

void calcularTempoTotal(double tPreProce, double tPesquisa, double *tTotal) ;

#endif