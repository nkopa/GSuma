#include "wspolne.h"

int main(){
  int czl; //jaki ruch wykonal czlowiek
  int kom; //jaki ruch wykonal komputer
  int suma; //jaka jest aktualnie suma
  int licznik; //ktora kolejka jest teraz
  int nau[3][LIMIT/2]; //tabela nakuki calkowitej; komp wykona najw tylko polowe wszystkich ruchow
  int pomnau[3][LIMIT/2]; //tabela wykonanych ruchow w pojedynczej grze
  char ruch='z'; //informacja o tym kto wykonal ostatni ruch

  czyscTab(nau);

  do{
    czyscTab(pomnau);
    suma=0;
    czl=0;
    kom=0;
    licznik=0;

    zasady();
    wyswietl(czl,kom,suma);

    while(czyKoniec(suma)){
      czl=ruchCzl(suma); //czyLegal(suma,czl)
      ruch='c';
      suma+=czl;

      if(czyKoniec(suma)){
	kom=ruchKom(licznik,pomnau,nau,suma); //czyLegal(suma,kom),naukaCzesc(),sortuj()
        ruch='k';
	suma+=kom;
      }

      wyswietl(czl,kom,suma);
      licznik++;
    }//koniec wewnetrznej petli

    ktoWygr(ruch,pomnau,nau);//naukaCalosc(pomnau,nau,znak)

  }while(czyJeszcze());

  printf("Dzieki za gre. Do zobaczenia nastepnym razem ;)\n");
  return 0;
}
