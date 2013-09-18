#include<stdio.h>

#define LIMIT 20

void zasady();//opisuje zasady w grze
void wyswietl(int czl, int kom, int suma);//wyswietla aktualny stan gry, ostatnie ruchy
void sortuj(int naupom[3][LIMIT/2], int kolej[3], int licznik);//sortuje kolejnosc liczb wg ktorej komputer bedzie wykonywac ruch
void czyscTab(int tab[3][LIMIT/2]);//czysci tablice wpisujac wszedzie zera
int czyKoniec(int suma);//sprawdza czy gra jest skonczona i zwraza 0 jesli tak lub 1 jesli nie
int czyLegal(int suma, int ruch);//sprawdza czy ruch jest legalny, jesli tak:0, jesli nie:1
void ktoWygr(char ruch, int pomnau[3][LIMIT/2], int nau[3][LIMIT/2]);//decyduje o tym kto wygral i wypisuje zwyciezce
void naukaCzesc(int pomnau[3][LIMIT/2], int licznik, int kom);//wstawia 1 do tabeli pomocniczej, gdzie komputer zrobil ruch
int ruchKom(int licznik, int pomnau[3][LIMIT/2], int nau[3][LIMIT/2], int suma);//wybiera ruch komputera
void naukaCalosc(int pomnau[3][LIMIT/2], int nau[3][LIMIT/2], char znak);//przenosi pochwale (+1) lub negacje (-1) do tabeli nauki
int ruchCzl(int suma);//pyta gracza o jego ruch i oddaje go programowi
int czyJeszcze();//pyta czy gracz chce grac dalej, jesli tak: 1, jesli nie: 0

