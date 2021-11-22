#include "arvorebestrela.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//O metodo de pesquisa ira retornar 0 caso nao encontre o item, e 1 caso encontre
int pesquisaArvoreBEstrela(TipoRegistro *x, TipoApontadorB ap){
    long i;

    if(ap == NULL)
        return 0;

    //Pesquisa sequencial na pagina interna
    if(ap->Pt == Interna){
        i = 1;


        while(i < ap->UU.U0.ni && x->chave > ap->UU.U0.ri[i-1]){
    
            i++;
        }


        if(x->chave < ap->UU.U0.ri[i-1])
            return pesquisaArvoreBEstrela(x, ap->UU.U0.pi[i-1]);
        else
            return pesquisaArvoreBEstrela(x, ap->UU.U0.pi[i]);
    }

    //Pesquisa sequencial na pagina folha
    i = 1;
    while(i < ap->UU.U1.ne && x->chave > ap->UU.U1.re[i-1].chave){

        i++;
    }

    if(x->chave == ap->UU.U1.re[i-1].chave){
        *x = ap->UU.U1.re[i-1];
        return 1;
    }
    else
        return 0;
}

//O metodo criaArvoreBEstrela eh responsavel por criar a arvore B* em memoria principal, tendo Ap como o ponteiro 
//para a raiz dessa arvore B*
void criaArvoreBEstrela(FILE *arq, TipoApontadorB *ap){
    TipoRegistro reg;

    
    while(fread(&reg, sizeof(TipoApontadorB), 1, arq) == 1){
        
        insereEstrela(reg,ap);
    }
}

void insereArvoreBEstrela(TipoRegistro Reg, TipoApontadorB *ap){
    short cresceu;
    TipoRegistro RegRetorno;
    TipoPaginaB *ApRetorno;
    TipoPaginaB *ApTemp;
    
    //Insercao do primeiro item em uma arvore B* vazia
    if(*ap == NULL){
        ApTemp = (TipoPaginaB*) malloc(sizeof(TipoPaginaB));
        ApTemp->Pt = Externa;
        ApTemp->UU.U1.ne = 1;
        ApTemp->UU.U1.re[0] = Reg;
        *ap = ApTemp;
        return;
    }
    //Insercao dos demais itens
    else{
        insEstrela(Reg, *ap, &cresceu, &RegRetorno, &ApRetorno);
        //Arvore cresceu na altura pela raiz
        if (cresceu){
            ApTemp = (TipoPaginaB*) malloc(sizeof(TipoPaginaB));
            ApTemp->Pt = Interna;
            ApTemp->UU.U0.ni = 1;
            ApTemp->UU.U0.ri[0] = RegRetorno.chave;
            ApTemp->UU.U0.pi[1] = ApRetorno;
            ApTemp->UU.U0.pi[0] = *ap;
            *ap = ApTemp;
        }
    }
}

void insrecuBEstrela(TipoRegistro Reg, TipoApontadorB ap, short *cresceu, TipoRegistro *RegRetorno, TipoApontadorB *ApRetorno){
    long i = 1;
    long j;
    TipoApontadorB ApTemp;

    //Caso a pagina seja externa (folha)
    if(ap->Pt == Externa){

        while(i < ap->UU.U1.ne && Reg.chave > ap->UU.U1.re[i-1].chave){
    
            i++;
        }


        if(Reg.chave == ap->UU.U1.re[i-1].chave){
            
            *cresceu = 0;
            return;
        }


        if(Reg.chave < ap->UU.U1.re[i-1].chave){
            i--;
        }

        //Página tem espaço
        if(ap->UU.U1.ne < (2 * MM)){
            *RegRetorno = Reg;

            insereNapaginaEstrela(ap, *RegRetorno, *ApRetorno);

            *cresceu = 0;
            return;
        }
        //Página tem que ser dividida
        ApTemp = (TipoPaginaB*) malloc(sizeof(TipoPaginaB));
        ApTemp->Pt = Externa;
        ApTemp->UU.U1.ne = 0;

        *RegRetorno = Reg; //retorno recebe o item
        *ApRetorno = NULL; //Apontador recebe NULL
        
        //Emprestimo
        if(i < (M + 1)){
            insereNapaginaEstrela(ApTemp, ap->UU.U1.re[(2 * MM) - 1], *ApRetorno);
            ap->UU.U1.ne--;
            insereNapaginaEstrela(ap, *RegRetorno, *ApRetorno);
        }
        //Insercao direta
        else{
            insereNapaginaEstrela(ApTemp, *RegRetorno, *ApRetorno);
        }

        //Inserindo a segunda metade dos TipoApontadorBs na pagina criada
        for (j = 1; j <= M; j++){
            insereNapaginaEstrela(ApTemp, ap->UU.U1.re[(2 * MM) - j], *ApRetorno);
        }
        
        ap->UU.U1.ne = M;
        *RegRetorno = ap->UU.U1.re[M];
        *ApRetorno = ApTemp;
        *cresceu = 1;
        return;
    }
    //Caso a pagina seja interna
    else{

        while(i < ap->UU.U0.ni && Reg.chave > ap->UU.U0.ri[i-1])
            i++;

        if(Reg.chave == ap->UU.U0.ri[i-1]){
            *cresceu = 0;
            return;
        }


        if(Reg.chave < ap->UU.U0.ri[i-1]){
            i--;
        }
        
        insrecuBEstrela(Reg, ap->UU.U0.pi[i], cresceu, RegRetorno, ApRetorno);

        if(!*cresceu)
            return;

        //Página tem espaço
        if(ap->UU.U0.ni < MM){
            insereNapaginaEstrela (ap, *RegRetorno, *ApRetorno);

            *cresceu = 0;

            return;
        }
        
        //Página tem que ser dividida
        ApTemp = (TipoPaginaB*) malloc(sizeof(TipoPaginaB));
        ApTemp->Pt = Interna;
        ApTemp->UU.U0.ni = 0;
        ApTemp->UU.U0.pi[0] = NULL;

        TipoRegistro RegAux;

        //Emprestimo
        if(i < M + 1){
            RegAux.chave = ap->UU.U0.ri[MM-1];
            insereNapaginaEstrela(ApTemp, RegAux, ap->UU.U0.pi[MM]);
            ap->UU.U0.ni--;
            insereNapaginaEstrela(ap, *RegRetorno, *ApRetorno);
        }
        //Insercao direta
        else{
            insereNapaginaEstrela(ApTemp, *RegRetorno, *ApRetorno);
        }

        for (j = (M + 2); j <= MM; j++){
            RegAux.chave = ap->UU.U0.ri[j - 1];
            insereNapaginaEstrela(ApTemp, RegAux, ap->UU.U0.pi[j]);
        }

        ap->UU.U0.ni = M;

        ApTemp->UU.U0.pi[0] = ap->UU.U0.pi[M+1];

        RegRetorno->chave = ap->UU.U0.ri[M];

        *ApRetorno = ApTemp;

        return;
    }
}

void insereNapaginaEstrela(TipoApontadorB ap, TipoRegistro Reg, TipoApontadorB apDir){
    short naoAchouPosicao = 0;
    int k;

    //Caso a pagina seja externa (folha)
    if(ap->Pt == Externa){
        k = ap->UU.U1.ne;

        if(k > 0)
            naoAchouPosicao = 1;

        while(naoAchouPosicao){
    
            if (Reg.chave >= ap->UU.U1.re[k-1].chave){
                naoAchouPosicao = 0;
                break;
            }
            ap->UU.U1.re[k] = ap->UU.U1.re[k-1];

            k--;

            if(k < 1)
                naoAchouPosicao = 0;
        }
        ap->UU.U1.re[k] = Reg;
        ap->UU.U1.ne++;
    }

    //Caso a pagina seja interna
    else{
        k = ap->UU.U0.ni;

        if(k > 0){
            naoAchouPosicao = 1;
        }

        while(naoAchouPosicao){
    
            if (Reg.chave >= ap->UU.U0.ri[k-1]){
                naoAchouPosicao = 0;
                break;
            }
            ap->UU.U0.ri[k] = ap->UU.U0.ri[k-1];

            ap->UU.U0.pi[k+1] = ap->UU.U0.pi[k];

            k--;

            if(k < 1)
                naoAchouPosicao = 0;
        }

        ap->UU.U0.ri[k] = Reg.chave;

        ap->UU.U0.pi[k+1] = apDir;

        ap->UU.U0.ni++;
    }

    return;
}