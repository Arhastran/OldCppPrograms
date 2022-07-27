//Adam Ignaciuk
#include"Osoba.h"
#ifndef _porownanie_H
#define _porownanie_H
#include <iostream>
#include<math.h>
using namespace std;
class Porownanie{
public:
    bool virtual sprawdz(Osoba&a, Osoba&b)=0;
    Porownanie(){}
    virtual ~Porownanie(){}
};
class PorownanieWieku: public Porownanie{
public:
    PorownanieWieku(){}
    ~PorownanieWieku(){}
    bool sprawdz(Osoba&a, Osoba&b);
};
class PorownanieWzrostu: public Porownanie{
public:
     PorownanieWzrostu(){}
    ~PorownanieWzrostu(){}
    bool sprawdz(Osoba&a, Osoba&b);
};
class PorownanieNazw: public Porownanie{
public:
     PorownanieNazw(){}
    ~PorownanieNazw(){}
    bool sprawdz(Osoba&a, Osoba&b);
};
class PorownaniePensji: public Porownanie{
public:
     PorownaniePensji(){}
    ~PorownaniePensji(){}
    bool sprawdz(Osoba&a, Osoba&b);
};

#endif
