#include "wspolne.h"

int ruchCzl(int suma){
  //pyta gracza o jego ruch i oddaje go programowi
  int czl,i=0;

  do{
    if(i!=0)printf("\n\n Nie rozumiem.\n");

    printf("\n Podaj liczbe: ");
    scanf("%i",&czl);
    getchar();

    if(i==0)i=1;
  }while(czyLegal(suma,czl));

  return czl;
}

//****************

int czyJeszcze(){
  //pyta czy gracz chce grac dalej, jesli tak: 1, jesli nie: 0

  int w,i=0;

  do{
    if(i!=0)printf("\n Nie rozumiem.");

    printf("\n\n Czy chcesz grac dalej?\n");
    printf(" 0 - nie\n");
    printf(" 1 - tak\n");
    printf(" Podaj cyfre: ");
    scanf("%i",&w);
    getchar();

    if(i==0)i=1;
  }while(w!=1 && w!=0);

  return w;
}
