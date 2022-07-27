#include "Punkt.h"
ostream& operator<<(ostream& wartosc, Punkt1D&p)
{
   wartosc<<"Nazwa: "<<p.nazwa<<endl;
   wartosc<<"Typ: "<<p.typ<<endl;
   wartosc<<"Wymiar "<<p.wymiar<<endl;
   p.getPunktInfo(wartosc); // funkcja bedac tutaj od razu wyskakuje z operatorem wyjscia i pozwala na wyswietlanie info w prosty sposob
   return wartosc;
}
void Punkt1D::getPunktInfo(ostream& wartosc){
   wartosc<<"Wspolrzedna x: "<<polozenie<<endl;
}
void Punkt2D::getPunktInfo(ostream& wartosc){
   wartosc<<"Wspolrzedna x: "<<polozenie<<endl;
   wartosc<<"Wspolrzedna y: "<<y<<endl;
}

void Punkt3D::getPunktInfo(ostream& wartosc){
   wartosc<<"Wspolrzedna x: "<<polozenie<<endl;
   wartosc<<"Wspolrzedna y: "<<y<<endl;
   wartosc<<"Wspolrzedna z: "<<z<<endl;

}

void Piksel::getPunktInfo(ostream& wartosc){
   wartosc<<"Kolor: "<<kolor<<endl;
   wartosc<<"Wspolrzedna x: "<<polozenie<<endl;
   wartosc<<"Wspolrzedna y: "<<y<<endl;

}

