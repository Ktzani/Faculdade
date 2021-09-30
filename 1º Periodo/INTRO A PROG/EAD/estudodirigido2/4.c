#include <stdio.h>


int main () {
    
  int A,B,C,D, E, F, G, H, I, K, L,  M, ano;
  int mesP, diaP, diaSS, mesSS, diaTC, mesTC, diaCC, mesCC; 
  int auxa;

  printf ("Digite um ano de 4 digitos: \n");

  scanf ("%d", &ano);



  A = ano % 19;
  B = ano / 100;
  C = ano % 100;
  D = B / 4 ;
  E = B % 4;
  F = (B + 8)/25;
  G = (B - F + 1)/3;
  H = (19 * A + B - D - G + 15) % 30;
  I = C / 4;
  K = C % 4;
  L = (32 + 2 * E + 2 * I - H - K) % 7;
  M = (A + 11 * H + 22 * L)/451;

  mesP = (H + L - 7 * M + 114) / 31;
  diaP = (H + L - 7 * M + 114) % 31 + 1;

  mesSS = mesP;
  diaSS = diaP - 2;
  if(diaSS<=0){
    if(mesSS==5 || mesSS==7){
      mesSS-=1;
      diaSS = 30 + diaSS;
    }else if(mesSS==2 || mesSS==4 || mesSS==6){
      mesSS-=1;
      diaSS = 31 + diaSS;
    }else if(mesSS==3){
      if(ano%4==0 && ano%100!=0 && ano%400!=0){
        mesSS-=1;
        diaSS = 29 + diaSS;
      }else{
        mesSS-=1;
        diaSS = 28 + diaSS;
      }
    }
  }

  


  mesTC = mesP;
  auxa = 47 - diaP;
  diaTC = diaP - 47;


  if(diaTC<=0){
    if(mesTC==5 || mesTC==7){
      mesTC-=1;
      diaTC = 30 -  auxa;
    }else if(mesTC==2 || mesTC==4 || mesTC==6){
      mesTC-=1;
      diaTC = 31 - auxa;
    }else if(mesTC==3){
      if(ano%4==0 && ano%100!=0 && ano%400!=0){
        mesTC-=1;
        diaTC = 29 - auxa;
      }else{
        mesTC-=1;
        diaTC = 28 - auxa;
      }
    }
  }

  if(diaTC<=0){
    if(mesTC==5 || mesTC==7){
      mesTC-=1;
      diaTC = 30 + diaTC;
    }else if(mesTC==2 || mesTC==4 || mesTC==6){
      mesTC-=1;
      diaTC = 31 + diaTC;
    }else if(mesTC==3){
      if(ano%4==0 && ano%100!=0 && ano%400!=0){
        mesTC-=1;
        diaTC = 29 + diaTC;
      }else{
        mesTC-=1;
        diaTC = 28 + diaTC;
      }
    }
  }
  
  mesCC = mesP + 2;
  diaCC = diaP-1;
  if(diaCC<=0){
    if(mesCC==5 || mesCC==7){
      mesCC-=1;
      diaCC = 30 + diaCC;
    }else if(mesCC==2 || mesCC==4 || mesCC==6){
      mesCC-=1;
      diaCC = 31 + diaCC;
    }else if(mesCC==3){
      if(ano%4==0 && ano%100!=0 && ano%400!=0){
        mesCC-=1;
        diaCC = 29 + diaCC;
      }else{
        mesCC-=1;
        diaCC = 28 + diaCC;
      }
    }
  }
  

  printf ("Pascoa: %d/%d \n",diaP, mesP);

  printf ("Sexta feira Santa: %d/%d \n",diaSS, mesSS);
  printf ("Terca feira de Carnaval: %d/%d \n",diaTC,  mesTC);

  printf ("Corpus Christi: %d/%d \n", diaCC,  mesCC);

return 0;
}