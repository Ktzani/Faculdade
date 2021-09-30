 while (j >= 0 && strcmp (aux.nome, paises[j].nome) < 0){

     if (paises[i - 1].ouro != paises[i].ouro ){

         while (aux.ouro != paises[cont].ouro) {




             pra = j - 1;

                while(pra >= j && aux.prata <= paises[pra].prata){ 

                    //Se encontrar valores de prata iguais e ouro iguais, passa a ordenar com os valores de bronze
                    if (aux.prata == paises[j].prata) {
                        bron = pra - 1;
    
                        while(bron >= j && aux.bronze <= paises[bron].bronze){

                            //Se encontrar valores de bronze, prata e ouro iguais, passa a ordenar com ordem alfabetica
                            if(aux.bronze == paises[j].bronze) {

                                pal = bron - 1;

                                while (pal >= j && strcmp (aux.nome, paises[pal].nome) < 0){

                                    paises[pal + 1] = paises[pal];

                                    pal--;
                                }
                            }
                            else {

                                paises[bron + 1] = paises[bron];

                                bron--;
                            }
                        }
                    }
                    else {
                    paises[pra + 1] = paises[pra];

                    pra--;
                    }
                }





//Se encontrar valores de ouro que sao iguais, vê qual é o maior e o menor do prata. 
            if (aux.ouro == paises[j].ouro){    
                if (aux.prata < paises[j].prata){

                    //"troca" as posiçoes no vetor, onde o auxiliar passa a ser o pais com menor numero de medalhas de prata
                    troca = aux;

                    aux = paises[j];

                    paises[j] = troca;
                            
                    j--;

                }
                //Se encontrar valores de prata iguais, vê qual é o maior e o menor de bronze
                else if (aux.prata == paises[j].prata){
                    if (aux.bronze < paises[j].bronze){
                        
                        //"troca" as posiçoes no vetor, onde a auxiliar passa a ser o pais com menor numero de medalhas de bronze
                        troca = aux;

                        aux = paises[j];

                        paises[j] = troca;
                            
                        j--;
                    }
                    //Se encontrar valores de bronze iguais, vê qual palavra vem depois da outra, ou seja, faz a ordem alfabetica
                    else if (aux.bronze == paises[j].bronze){
                        if (strcmp (aux.nome, paises[j].nome) < 0){

                            //"troca" as posiçoes no vetor, onde a auxiliar passa a ser o pais que vem primeiro na ordem alfabetica 
                            troca = aux;

                            aux = paises[j];

                            paises[j] = troca;
                            
                            j--;
                        }
                    }
                }
            }





            Sudan 23 24 3

            Chinese 23 22 22

            Iran 23 27 18


            Compara Iran 23 27 18 && Chinese 23 22 22

            Compara Iran 23 27 18 && Sudan 23 24 3

            Iran 23 27 18




            Spain 26 12 21

            Italy 26 25 15

            Bolivia 26 10 13


            Compara Bolivia 26 10 13 && Italy 26 25 15

            Compara Italy 26 25 15 && Spain 26 12 21

            Italy 26 25 15

            Spain 26 12 21
            
            Bolivia 26 10 13