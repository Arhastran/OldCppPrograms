//Adam Ignaciuk
#ifndef _osoba_H
#define _osoba_H
#include <iostream>
#include<math.h>
using namespace std;
class Osoba{
protected:
    int wiek;
    int wzrost;
    string nazwa;
public:
    static int licznik;
Osoba(string nazwa, int wiek, int wzrost){
    this->wzrost=wzrost;
    this->nazwa=nazwa;
    this->wiek=wiek;
    licznik++;
}
Osoba(){
    wzrost=0;
    nazwa="";
    wiek=0;
    licznik++;
}
virtual ~Osoba()
{
    licznik--;
}
int dajWiek();
int dajWzrost();
string dajNazwe();
double virtual pensja()=0;
friend ostream& operator<<(ostream&, Osoba&);
Osoba & operator=(const Osoba&);
};
class Doktorant: public Osoba{
protected:
    double stypendium;
public:
    static int licznik_doc;
    Doktorant(string nazwa, int wiek, int wzrost, double stypendium): Osoba(nazwa, wiek, wzrost){
        this->stypendium=stypendium;
        licznik_doc++;
    }
    Doktorant(): Osoba() {
        wzrost=0;
        nazwa="";
        wiek=0;
        stypendium=0;
        licznik_doc++;
    }
    ~Doktorant(){
        licznik_doc--;
    }
double pensja();
Doktorant & operator=(const Doktorant&);
};
class Pracownik: public Osoba{
protected:
    double podstawa, stawka;
    int godziny;
public:
    static int licznik_prac;
    Pracownik(string nazwa, int wiek, int wzrost, double podstawa, double stawka, int godziny): Osoba(nazwa, wiek, wzrost){
        this->podstawa=podstawa;
        this->stawka=stawka;
        this->godziny=godziny;
        licznik_prac++;
    }
    Pracownik(){
        wzrost=0;
        nazwa="";
        wiek=0;
        podstawa=0;
        stawka=0;
        godziny=0;
        licznik_prac++;
    }
    ~Pracownik(){
        licznik_prac--;
    }
double pensja();
Pracownik & operator=(const Pracownik&);
};



#endif
