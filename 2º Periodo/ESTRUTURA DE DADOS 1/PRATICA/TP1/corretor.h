# ifndef duende_h
# define duende_h

typedef struct alunos TADaluno;

//typedef struct pontuacao TADtempo;

void lerSubmissoes(int *submi);

TADaluno *alocaAlunos(TADaluno *alu, int submi);

//TADtempo *alocaPontuacao(TADtempo *pont, int submi);

TADaluno *desalocaAlunos(TADaluno *alu);

//TADtempo *desalocaPontuacao(TADtempo *pont);

void lerAlunosSubmissoes(TADaluno *alu, int submi);

int casoscorretos(TADaluno *alu, int submi);

int somandoTempos (TADaluno *alu, int submi);

void printandoCorrecao(int tempototal, int corretos);

# endif
