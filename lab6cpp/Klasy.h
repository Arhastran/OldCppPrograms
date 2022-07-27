//Adam Ignaciuk
#ifndef _wiaderko_H
#define _wiaderko_H
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
class Wiadro; // do zaprzyjaznienia
class Biedronka{
private:
     double masa;
public:
    static int licznik;
    Biedronka(double masa) // konstrukor glowny
    {
        this->masa=masa;
        licznik++;
    }
    Biedronka(Biedronka&b) // konstruktor kopiujacy
    {
        masa=b.masa;
        licznik++;
    }
    Biedronka() // konstruktor domyslny
    {
        masa=0;
        licznik++;
    };
    ~Biedronka(); // niszczyciel
    friend Wiadro operator-(Biedronka b, Wiadro w);
    friend Wiadro operator+(Biedronka b, Wiadro w);
    friend istream& operator>>(istream&, Biedronka&);
    friend ostream& operator<<(ostream&, Biedronka&);
};
class Wiadro{
private:
    double masa;
    double h;
public:
    const static double g;
    double energia();
    Wiadro(double masa, double h){ // konstruktor glowny
        this->masa=masa;
        this->h=h;
    };
    Wiadro() // konstruktor domyslny
    {
        masa=0;
        h=0;
    };
    ~Wiadro(){}
    friend Wiadro operator-(Biedronka b, Wiadro w);
    friend Wiadro operator+(Biedronka b, Wiadro w);
    friend ostream& operator<<(ostream&, Wiadro&);
    friend istream& operator>>(istream&, Wiadro&);


};
Wiadro operator-(Biedronka b, Wiadro w); // do zaprzyjeznienia
Wiadro operator+(Biedronka b, Wiadro w);


#endif
