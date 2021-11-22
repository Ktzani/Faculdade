#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "arvoreb.h"
#include "contimpri.h"
//#include "asi.h"
#include "arvore_binaria.h"
//#include "arvorebestrela.h"

int main (int argc, const char *argv[]) {

    int metodo = atoi(argv[1]);
    long int quantidade = atoi (argv[2]);
    int situ = atoi (argv[3]);
    int chave = atoi (argv[4]);
    int argOpc = 0;

    int contComp = 0; 
    int contTrans = 0; 
    double tPreProce = 0.0; 
    double tPesquisa = 0.0; 
    double tTotal = 0.0;

    clock_t tempo;

    clock_t InicioPreProcessamento;
    clock_t FinalPreProcessamento;
    clock_t InicioPesquisa;
    clock_t FinalPesquisa;

    char nome[6];

    if (quantidade <= 0){
        printf ("ERRO: o arquivo deve ter no minimo 1 registro\n");
        exit(1);

    }

    if (argc < 5){
        printf("ERRO: Poucos comandos digitados...\n");
        printf("Os argumentos sao: pesquisa <metodo> <quantidade> <situacao> <chave> [-P] \n");
        printf ("OBS: [-P] é opcional\n");
        exit(1);
    }

    if (argc > 6){
        printf("ERRO: Muitos comandos digitados...\n");
        printf("O formato de execucao é: pesquisa <metodo> <quantidade> <situacao> <chave> [-P]\n");
        printf ("OBS: [-P] é opcional\n");
        exit(1);
    }

    if (metodo < 1 || metodo > 4){

        printf ("ERRO: Argumento (método) inválido!\n");
        printf ("Metodo deve ser digitado como '1' para acesso sequencial indexado, '2' para arvore binaria, '3' para arvore B e '4' para arvore B*\n");
        exit(1);
    }

    if (situ < 1 || situ > 3){
        printf("ERRO: Argumento (situação) inválido!\n");
        printf("Situação deve ser digitada como '1' para arquivo arquivo ordenado ascendentemente , '2' para arquivo ordenado descendentemente e '3' para arquivo desordenado aleatoriamente\n");
        exit(1);

    }

     /*vemos se foi ou nao digitado o argumento opcional. Se sim, ele passa a ser 1 (verdadeiro), para mais na frente
    realizarmos a impressao de todas as chaves do arquivo*/
    if(argc == 6){
        if(strcmp(argv[5],"[-P]") == 0)
            argOpc = 1;
        else{
            printf("ERRO: argumento opcional digitado errado!\n.");
            printf("Maneira correta é [-P]\n");
            exit(1);
        }
    }
    FILE *arqReg;

    //vê qual arquivo iremos pegar
    switch (situ) {
        case 1:
            if(quantidade != 1000000){
                nome[0] = 'c';
                nome[1] = 'r';
                nome[2] = 'e';
                nome[3] = '_';
                nome[4] = 'a';
                nome[5] = '\0';
            }else{
                if(chave <= 250000){
                    nome[0] = 'c';
                    nome[1] = 'r';
                    nome[2] = 'e';
                    nome[3] = '_';
                    nome[4] = 'a';
                    nome[5] = '\0';
                }else if((chave > 250000) && (chave <= 50000)){
                    nome[0] = 'c';
                    nome[1] = 'r';
                    nome[2] = 'e';
                    nome[3] = '_';
                    nome[4] = 'b';
                    nome[5] = '\0';
                }else if((chave > 500000) && (chave <= 75000)){
                    nome[0] = 'c';
                    nome[1] = 'r';
                    nome[2] = 'e';
                    nome[3] = '_';
                    nome[4] = 'c';
                    nome[5] = '\0';
                }else{
                    nome[0] = 'c';
                    nome[1] = 'r';
                    nome[2] = 'e';
                    nome[3] = '_';
                    nome[4] = 'd';
                    nome[5] = '\0';
                }
            }

            if((arqReg = fopen(nome, "rb")) == NULL){
                printf ("ERRO na abertura do arquivo \n");
                return 0;
            }
            break;

        case 2: 
            if(quantidade != 1000000){
                nome[0] = 'd';
                nome[1] = 'e';
                nome[2] = 'c';
                nome[3] = '_';
                nome[4] = 'd';
                nome[5] = '\0';
            }else{
                if(chave <= 250000){
                    nome[0] = 'd';
                    nome[1] = 'e';
                    nome[2] = 'c';
                    nome[3] = '_';
                    nome[4] = 'd';
                    nome[5] = '\0';
                }else if((chave > 250000) && (chave <= 50000)){
                    nome[0] = 'd';
                    nome[1] = 'e';
                    nome[2] = 'c';
                    nome[3] = '_';
                    nome[4] = 'c';
                    nome[5] = '\0';
                }else if((chave > 500000) && (chave <= 75000)){
                    nome[0] = 'd';
                    nome[1] = 'e';
                    nome[2] = 'c';
                    nome[3] = '_';
                    nome[4] = 'b';
                    nome[5] = '\0';
                }else{
                    nome[0] = 'd';
                    nome[1] = 'e';
                    nome[2] = 'c';
                    nome[3] = '_';
                    nome[4] = 'a';
                    nome[5] = '\0';
                }
            }

            if((arqReg = fopen(nome, "rb")) == NULL){
                printf ("ERRO na abertura do arquivo \n");
                return 0;

            }
            break;

        case 3: 
            if(quantidade != 1000000){
                nome[0] = 'a';
                nome[1] = 'l';
                nome[2] = 'e';
                nome[3] = '_';
                nome[4] = 'a';
                nome[5] = '\0';
            }else{
                if(chave <= 250000){
                    nome[0] = 'a';
                    nome[1] = 'l';
                    nome[2] = 'e';
                    nome[3] = '_';
                    nome[4] = 'a';
                    nome[5] = '\0';
                }else if((chave > 250000) && (chave <= 50000)){
                    nome[0] = 'a';
                    nome[1] = 'l';
                    nome[2] = 'e';
                    nome[3] = '_';
                    nome[4] = 'b';
                    nome[5] = '\0';
                }else if((chave > 500000) && (chave <= 75000)){
                    nome[0] = 'a';
                    nome[1] = 'l';
                    nome[2] = 'e';
                    nome[3] = '_';
                    nome[4] = 'c';
                    nome[5] = '\0';
                }else{
                    nome[0] = 'a';
                    nome[1] = 'l';
                    nome[2] = 'e';
                    nome[3] = '_';
                    nome[4] = 'd';
                    nome[5] = '\0';
                }
            }

            if((arqReg = fopen(nome, "rb")) == NULL){
                printf ("ERRO na abertura do arquivo \n");
                return 0;
            }
            break;
    }

    TipoApontador ap;

    TipoRegistro r;

    Registro temp;

    r.chave = chave;

    //Identifica qual método de pesquisa será utilizado
    switch (metodo){
        case 1: //Acesso sequencial indexado

            break;

        case 2: //Arvore binaria  
            //Árvore B
             //1º construção da arvore Binaria 
            //CONTAR TEMPO DE PRE PROCESSAMENTO
            iniciarTempoPreProcessamento(&InicioPreProcessamento);
            arvoreBinaria(nome, quantidade, &contComp, &contTrans);
            finalizarTempoPreProcessamento(&FinalPreProcessamento);
            
            

            //2º pesquisa da chave desejada na arvore Binaria
            //CONTAR TEMPO DE PESQUISA 
            tempo = clock();
            temp = pesquisaArvoreBinaria("arvore_binaria", chave, nome, &contComp, &contTrans);
            if (temp.chave != -1){
                printf("Registro encontrado!\n");

                printf ("DADOS:\n");
                printf ("Chave:  %d\n", temp.chave);
                printf ("Dado 1: %ld\n", temp.dado1);
                printf ("Dado 2: %s\n", temp.dado2);
                printf ("Dado 3: %s\n", temp.dado3);

            }else {
                printf("Não há registro com essa chave...\n");
            } 
                tempo = clock() - tempo;
            break;

        case 3: //Árvore B
             //1º construção da arvore B 
            //CONTAR TEMPO DE PRE PROCESSAMENTO
            iniciarTempoPreProcessamento(&InicioPreProcessamento);
            criaArvoreB(arqReg, &ap, quantidade, &contComp, &contTrans);
            finalizarTempoPreProcessamento(&FinalPreProcessamento);
            
            

            //2º pesquisa da chave desejada na arvore B
            //CONTAR TEMPO DE PESQUISA 
            iniciarTempoPesquisa(&InicioPesquisa);
            if (pesquisaArvoreB(&r, ap, &contComp, &contTrans)){

                finalizarTempoPesquisa(&FinalPesquisa);
                printf("Registro encontrado!\n");
                imprimeRegistro(r);

            }  

            else {
                finalizarTempoPesquisa(&FinalPesquisa);
                printf("Não há registro com essa chave...\n");
            }

            break;
        case 4: //Arvore B*
        
            break;
    } 

    

    if(argOpc == 1){
        imprimeChaves(arqReg);
    }

    calcularTempoPreProcessamento (InicioPreProcessamento, FinalPreProcessamento, &tPreProce);

    tPesquisa = (((double)tempo)/1000.0);

    calcularTempoTotal (tPreProce, tPesquisa, &tTotal);

    imprimirExperimento (contComp, contTrans, tPreProce, tPesquisa, tTotal);

    fclose(arqReg);
    
    return 0;
}



