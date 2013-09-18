#include "wspolne.h"

void naukaCzesc(int pomnau[3][LIMIT/2], int licznik, int kom){
  //wstawia 1 do tabeli pomocniczej, gdzie komputer zrobil ruch

  pomnau[kom-1][licznik]=1;
}

//****************

int ruchKom(int licznik, int pomnau[3][LIMIT/2], int nau[3][LIMIT/2], int suma){
  //wybiera ruch komputera

  int kolej[3];
  int i,r,kom;

  sortuj(nau,kolej,licznik);

  i=0;
  do{
    kom=kolej[i]+1;
    i++;
  }while(czyLegal(suma,kom) && i<3);

  naukaCzesc(pomnau,licznik,kom);

  return kom;
}

//****************

void naukaCalosc(int pomnau[3][LIMIT/2], int nau[3][LIMIT/2], char znak){
  //przenosi pochwale (+1) lub negacje (-1) do tabeli nauki

  int i,j;

  if(znak=='-'){
    for(i=0;i<(LIMIT/2);i++){
      for(j=0;j<3;j++)nau[j][i]-=pomnau[j][i];
    }
  }else{
    for(i=0;i<(LIMIT/2);i++){
      for(j=0;j<3;j++)nau[j][i]+=pomnau[j][i];
    }
  }//koniec if elsa
}
