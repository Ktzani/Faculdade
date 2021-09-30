#include "pilha.h"
#include <stdio.h>
#include <string.h>

int main()
{
      Pilha pilha;
      char ch;
      Item item;

      Pilha_Inicia(&pilha);

      while (scanf("%c", &ch)!=EOF)
      {

      //processar cada elemento lido
        item.carac = ch;

        if (ch == '('){
          if(Pilha_Push(&pilha, item)){ //coloca "(" no TOPO da pilha
            continue;
          }
        }

        else if (ch == ')'){
          if(Pilha_Pop(&pilha, &item)){ //retira o que esta no TOPO 
            continue;
          } 
          else {
            printf("incorreto\n"); //se a pilha for vazia, já retorna o 0 e a expressao ja estara incorreta(o que acaba o programa)
            return 0;
          }
          
        } 
      }

      //determinar o resultado
      if (Pilha_EhVazia(&pilha)){ // se ainda tiver algum "(" na pilha é pq ela nao esta vazia e assim a expressao é incorreta
        printf ("correto\n");
      }

      else{ 

        printf ("incorreto\n");
      }
  
      //Esvazia pilha, liberando a memoria que foi alocada
      Pilha_Esvazia(&pilha);

      return 0;//nao remova
}
