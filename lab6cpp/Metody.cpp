#include "Klasy.h"
int Biedronka::licznik =0;
const double Wiadro::g=9.8;
Biedronka::~Biedronka(){
    licznik--;
}

 Wiadro operator+(Biedronka b, Wiadro w)
 {

     w.masa=w.masa+b.masa;
    // wydaje mi sie ze tak jest ok?
     return w;

 }

Wiadro operator-(Biedronka b, Wiadro w)
 {

     w.masa=w.masa-b.masa;

     return w;

 }
 double Wiadro::energia()
 {
   int potencjalna;
   potencjalna=masa*h*g;
   cout<<"Energia potencjalna wynosi:"<<potencjalna<<" J"<<endl;
   return potencjalna;
 }
istream& operator>>(istream& wartosc, Wiadro&w)
{

    wartosc >> w.masa;
    wartosc>> w.h;
    return wartosc;
}
ostream& operator<<(ostream& wartosc, Wiadro&w)
{
   wartosc<<"Masa wiaderka: "<<w.masa<<"kg"<<endl;
   wartosc<<"Wysokosc pozycji wiadra: "<<w.h<<"m"<<endl;
   return wartosc;
}
istream& operator>>(istream& wartosc, Biedronka&b)
{
    wartosc >> b.masa;
	return wartosc;
}
 ostream& operator<<(ostream& wartosc, Biedronka&b)
 {
     wartosc<<"Masa biedronki: "<<b.masa<<"kg"<<endl;
     return wartosc;
 }
