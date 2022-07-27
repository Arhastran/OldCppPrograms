//Adam Ignaciuk
#ifndef _czlowiek_H
#define _czlowiek_H
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

class Czlowiek {
private:
    string imie, nazwisko;
    int wiek;
    static int licznik;
public:
    void przedstaw();
    static void ile();
    Czlowiek(string imie, string nazwisko, int wiek);
    ~Czlowiek();

};

#endif
