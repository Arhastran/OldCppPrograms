#include"Osoba.h"
int Osoba::licznik=0;
int Doktorant::licznik_doc=0;
int Pracownik::licznik_prac=0;
ostream& operator<<(ostream& wartosc, Osoba&o)
{
   wartosc<<"Imie i Nazwisko: "<<o.dajNazwe()<<endl;
   wartosc<<"Wiek: "<<o.dajWiek()<<endl;
   wartosc<<"Wzrost"<<o.dajWzrost()<<"cm"<<endl;
    wartosc<<"Pensja: "<<o.pensja()<<endl;
   return wartosc;
}

Osoba & Osoba::operator=(const Osoba&o){
    if(&o == this) return *this;
    wiek=o.wiek;
    wzrost=o.wzrost;
    nazwa=o.nazwa;

}
Doktorant & Doktorant::operator=(const Doktorant&d){
    if(&d == this) return *this;
    wiek=d.wiek;
    wzrost=d.wzrost;
    nazwa=d.nazwa;
    stypendium=d.stypendium;
}
Pracownik & Pracownik::operator=(const Pracownik&p){
    if(&p == this) return *this;
    wiek=p.wiek;
    wzrost=p.wzrost;
    nazwa=p.nazwa;
    podstawa=p.podstawa;
    stawka=p.stawka;
    godziny=p.godziny;
}

double Doktorant::pensja()
{
    return stypendium;
}
double Pracownik::pensja()
{
    double wartosc;
    wartosc=podstawa+stawka*godziny;
    return wartosc;
}
string Osoba::dajNazwe(){
    return nazwa;
}
int Osoba::dajWiek(){
    return wiek;
}
int Osoba::dajWzrost(){
    return wzrost;
}
