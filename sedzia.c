#include "wspolne.h"

int czyKoniec(int suma){
  //sprawdza czy gra jest skonczona i zwraza 0 jesli tak lub 1 jesli nie

  if(suma<20)return 1;
  else return 0;
}

//***************

int czyLegal(int suma, int ruch){
  //sprawdza czy ruch jest legalny, jesli tak:0, jesli nie:1

  if(suma<=(LIMIT-3)){
    if(ruch==1 || ruch==2 || ruch==3)return 0;
    else return 1;
  }else if(suma==(LIMIT-2)){
    if(ruch==1 || ruch==2)return 0;
    else return 1;
  }else if(suma==(LIMIT-1)){
    if(ruch==1)return 0;
    else return 1;
  }else{
    printf("\n BLAD! PRZERWIJ GRE\n");
    return 0;
  }
}

//****************

void ktoWygr(char ruch, int pomnau[3][LIMIT/2], int nau[3][LIMIT/2]){
  //decyduje o tym kto wygral i wypisuje zwyciezce

  if(ruch=='c'){
    printf("\nWygrales... Gratuluje...\n");
    naukaCalosc(pomnau,nau,'-');
  }
  else if(ruch=='k'){
    printf("\nHURRA!!! WYGRALEM!!!\n");
    naukaCalosc(pomnau,nau,'+');
  }else printf("\nBLAD\n");
}
