#include <stdio.h>

#include "arvore_binaria.h"

void adicionarIndice(long int seek, FILE *arquivo, Indice item, int *comp, int *transf){

    Indice indice;
    fseek(arquivo, seek * sizeof(Indice), SEEK_SET);
    fread(&indice, sizeof(Indice), 1, arquivo);
    (*transf) += 1;

    if(item.chave > indice.chave){
        (*comp) += 1;
        if(indice.dir == -1){
            add(arquivo,indice, 1, item);
            return;
        }

        adicionarIndice(indice.dir, arquivo, item, comp, transf);
    }else if(item.chave < indice.chave){
        (*comp) += 1;
        if(indice.esq == -1){
            add(arquivo,indice, 0, item);
            return;
        }

        adicionarIndice(indice.esq, arquivo, item, comp, transf);
    }else{
        return;
    }

    return;

}

void add(FILE *arquivo, Indice indice, int flag, Indice filho){

    long int tellpai = (ftell(arquivo) - sizeof(Indice));

    fseek(arquivo, 0, SEEK_END);
    long int tellfilho = ftell(arquivo);

    fwrite(&filho, sizeof(Indice), 1, arquivo);

    if(flag == 1){
        indice.dir = tellfilho/sizeof(Indice);
    }else{
        indice.esq = tellfilho/sizeof(Indice);
    }

    fseek(arquivo, tellpai, SEEK_SET);
    fwrite(&indice, sizeof(Indice), 1, arquivo);
}

void arvoreBinaria(char *nome, int tam, int *comp, int *transf){

    FILE *arquivo = fopen(nome, "rb");
    if(arquivo == NULL){
        printf("ERRO NA ABERTURA ARQUIVO ARVORE BINARIA \n");
        return;
    }

    char nome_arvore[] = "arvore_binaria";
    FILE *arvore = fopen(nome_arvore, "wb");
    if(arvore == NULL){
        printf("ERRO NA CRIAÇÃO DO ARQUIVO DA ARVORE BINARIA \n");
        return;
    }
    
    Indice aux;
    Registro temp;

    aux.posicao = ftell(arvore);
    fread(&temp, sizeof(Registro), 1, arquivo);
    aux.chave = temp.chave;
    aux.dir = aux.esq = -1;
    (*transf) += 1;

    fwrite(&aux, sizeof(Indice), 1, arvore);

    arvore = freopen(nome_arvore, "r+b", arvore);

    int i;
    for(i = 1; i < tam; i++){
        aux.posicao = ftell(arquivo);
        fread(&temp, sizeof(Registro), 1, arquivo);
        aux.chave = temp.chave;
        aux.dir = aux.esq = -1;
        (*transf) += 1;

        adicionarIndice(0, arvore, aux, comp, transf);
    }

    fclose(arvore);
    fclose(arquivo);
}

Registro pesquisaArvoreBinaria(char *nome, int chave, char *arq, int *comp, int *transf){

    Registro t;
    t.chave = -1;
    t.dado1 = -1;
    t.dado2[0] = 'z';
    t.dado2[1] = '\0';
    t.dado3[0] = 'z';
    t.dado3[1] = '\0';


    FILE *arvore = fopen(nome, "rb");
    if(arvore == NULL){
        printf("ERRO NA ABERTURA DO ARQUIVO DA ARVORE BINARIA \n");
        return t;
    }

    Indice temp;
    temp.chave = chave;

    long int seek = pesquisa(0, arvore, temp, comp, transf);

    if(seek == -1){
        return t;
    }

    FILE *arquivo = fopen(arq, "rb");
    if(arquivo == NULL){
        printf("ERRO NA PESQUISA\n");
        return t;
    }

    fseek(arquivo,seek, SEEK_SET);
    fread(&t, sizeof(Registro), 1, arquivo);
    (*transf) += 1;

    fclose(arquivo);
    fclose(arvore);

    return t;

}

long int pesquisa(long int seek, FILE *arquivo, Indice item, int *comp, int *transf){

    Indice indice;
    fseek(arquivo, (int)seek * sizeof(Indice), SEEK_SET);
    fread(&indice, sizeof(Indice), 1, arquivo);
    (*transf) += 1;

    if(item.chave > indice.chave){
        (*comp) += 1;
        if(indice.dir == -1){
            return -1;
        }
        return pesquisa(indice.dir, arquivo, item, comp, transf);
    }else if(item.chave < indice.chave){
        (*comp) += 1;
        if(indice.esq == -1){
            return -1;
        }
        return pesquisa(indice.esq, arquivo, item, comp, transf);
    }else{
        return indice.posicao;
    }

}