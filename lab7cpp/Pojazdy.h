//Adam Ignaciuk
#ifndef _pojazdy_H
#define _pojazdy_H
#include <iostream>
#include<math.h>
using namespace std;
class Pojazd{
protected:
    int rok_produkcji;
    string nazwa;
public:
    static int licznik;
    Pojazd()
    {
       rok_produkcji=0;
       nazwa="Pojazd";
       licznik++;
    }
    Pojazd(int rok_produkcji, string nazwa)
    {
      this->rok_produkcji=rok_produkcji;
      this->nazwa=nazwa;
      licznik ++;
    }
     virtual ~Pojazd(){
       licznik--;
   }
     virtual void wyswietl();
};
class Samochod : public Pojazd{

protected:
    string kolor;
public:
    Samochod() : Pojazd()
    {
        kolor="";
        rok_produkcji=0;
        nazwa="Samochod";

    }
    Samochod(int rok_produkcji, string kolor) : Pojazd(rok_produkcji, "Samochod")
    {
      this->rok_produkcji=rok_produkcji;
      this->kolor=kolor;
      nazwa="Samochod";

    }

     ~Samochod()
     {

        cout<<"Destruktor klasy Samochod"<<endl;
     }
      void wyswietl();

};
class Osobowy : public Samochod{
protected:
    int drzwi;
public:
    Osobowy() : Samochod()
    {
        drzwi=0;
        rok_produkcji=0;
        kolor="";
        nazwa="Osobowy";

    }
     Osobowy(int rok_produkcji, string kolor, int drzwi): Samochod(rok_produkcji, kolor)
    {
      this->rok_produkcji=rok_produkcji;
      this->kolor=kolor;
      this->drzwi=drzwi;
      nazwa="Osobowy";

    }

    ~Osobowy()
     {

        cout<<"Destruktor klasy Osobowy"<<endl;
     }
      void wyswietl();
};
class Ciezarowy : public Samochod{
protected:
    int kola;
public:
     Ciezarowy() : Samochod()
    {
        kola=0;
        rok_produkcji=0;
        kolor="";
        nazwa="Ciezarowy";

    }
     Ciezarowy(int rok_produkcji, string kolor, int kola) : Samochod(rok_produkcji, kolor)
    {
      this->rok_produkcji=rok_produkcji;
      this->kolor=kolor;
      this->kola=kola;
      nazwa="Ciezarowy";

    }
     ~Ciezarowy()
     {

        cout<<"Destruktor klasy Ciezarowy"<<endl;
     }
       void wyswietl();
};
class Ford : public Osobowy{
protected:
    string model;
public:
     Ford() : Osobowy()
    {
        model="";
        rok_produkcji=0;
        kolor="";
        nazwa="Ford";

    }
     Ford(int rok_produkcji, string kolor, int drzwi, string model) : Osobowy(rok_produkcji, kolor, drzwi)
    {
      this->rok_produkcji=rok_produkcji;
      this->kolor=kolor;
      this->drzwi=drzwi;
      this->model=model;
      nazwa="Ford";

    }
     ~Ford()
     {

        cout<<"Destruktor klasy Ford"<<endl;
     }
       void wyswietl();

};



#endif

