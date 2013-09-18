#include "wspolne.h"

void zasady(){
  //opisuje zasady w grze

  printf("\n\n\n ZASADY GRY:\n\n");
  printf("Gra polega na podawaniu kolejno przez gracza i komputer jednej liczby: 1, 2 lub 3, ktore sa do siebie dodawane. Gra konczy sie, gdy suma liczb osiagne %i. Wygrywa ten, kto poda ostatnia liczbe do sumy.\n\n",LIMIT);
}

//*********************

void wyswietl(int czl, int kom, int suma){
  //wyswietla aktualny stan gry, ostatnie ruchy

  printf("\n Ruch gracza:   %i\n Ruch komputera:   %i\n Suma:   %i\n",czl,kom,suma);
}

//********************

void sortuj(int naupom[3][LIMIT/2], int kolej[3], int licznik){
  //sortuje kolejnosc liczb wg ktorej komputer bedzie wykonywac ruch

  int i,j,x;

  for(i=0;i<3;i++){
    kolej[i]=i;
  }

  for(i=0;i<3;i++){
    for(j=i+1;j<3;j++){
      if(naupom[kolej[i]][licznik]<naupom[kolej[j]][licznik]){
	x=kolej[i];
	kolej[i]=kolej[j];
	kolej[j]=x;
      }
    }//wewnetrzny for
  }//zewnetrzny for
}

//*******************

void czyscTab(int tab[3][LIMIT/2]){
  //czysci tablice wpisujac wszedzie zera

  int i,j;

  for(i=0;i<(LIMIT/2);i++){
    for(j=0;j<3;j++)tab[j][i]=0;
  }
}
