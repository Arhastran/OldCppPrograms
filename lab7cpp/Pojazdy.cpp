#include "Pojazdy.h"
int Pojazd::licznik =0;

void Pojazd::wyswietl()
{
   cout<<"Oto: "<< nazwa <<" rok produkcji: "<<rok_produkcji<<endl;
}
void Samochod::wyswietl()
{
     cout<<"Oto: "<< nazwa <<", rok produkcji: "<<rok_produkcji<<", kolor: "<< kolor <<endl;
}
void Osobowy::wyswietl()
{
     cout<<"Oto samochod: "<< nazwa <<", rok produkcji: "<<rok_produkcji<<", kolor: "<< kolor << ", ilosc drzwi:" << drzwi <<endl;
}
void Ciezarowy::wyswietl()
{
     cout<<"Oto samochod: "<< nazwa <<", rok produkcji: "<<rok_produkcji<<", kolor: "<< kolor << ", ilosc kol: " << kola<<endl;
}
void Ford::wyswietl()
{
     cout<<"Oto samochod: "<< nazwa <<", model: "<< model <<", rok produkcji: "<<rok_produkcji<<", kolor: "<< kolor << ", ilosc drzwi:" << drzwi <<endl;
}
