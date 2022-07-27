//Adam Ignaciuk
#ifndef _statki_H
#define _statki_H
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
class Statki{
private:
    int rozmiar, ilosc;
    bool ** tab;


public:
    static int licznik;
    Statki(int rozmiar=3, int ilosc=1): rozmiar(3) , ilosc(1) {
        this->rozmiar=rozmiar;
        this->ilosc=ilosc;
        licznik ++;

        tab = new bool*[rozmiar];
         for (int i=0; i<rozmiar; i++)
         {
             tab[i] = new bool [rozmiar];
             for (int j=0; j<rozmiar; j++)
             {
                 tab[i][j]=false;
             }
         }
         for (int i=0; i<ilosc; i++)
         {
             int wiersze=rand()%rozmiar;
             int kolumny=rand()%rozmiar;
             tab[wiersze][kolumny]=true;
         }
    };
    ~Statki();

    void rysuj();
    void strzal (int x, int y);


};



#endif

