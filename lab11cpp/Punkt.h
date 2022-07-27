//Adam Ignaciuk
#ifndef _punkt_H
#define _punkt_H
#include <iostream>
#include <fstream> // do zapisu i odczytu!
#include<math.h>
using namespace std;
class Punkt1D{
protected:
    string nazwa, typ;
    double polozenie;
    int wymiar;
public:
    Punkt1D(){
        nazwa="";
        typ="Punkt 1D";
        polozenie=0;
        wymiar=1;
    }
    Punkt1D(string nazwa, double polozenie){
        this->nazwa=nazwa;
        this->polozenie=polozenie;
        int wymiar=1;
        string typ="Punkt 1D";
        this->wymiar=wymiar;
        this->typ=typ;
    }
    virtual ~Punkt1D(){
    }
    virtual void getPunktInfo(ostream&);
    friend ostream& operator<<(ostream&, Punkt1D&);

};
class Punkt2D : public Punkt1D{
protected:
    double y;
public:
    Punkt2D(): Punkt1D(){
        nazwa="";
        typ="Punkt 2D";
        polozenie=(0,0);
        wymiar=2;
    }
    Punkt2D(string nazwa, double polozenie, double y):Punkt1D(nazwa, polozenie){
        int wymiar=2;
        string typ="Punkt 2D";
        this->wymiar=wymiar;
        this->typ=typ;
        this->y=y;
        }
    ~Punkt2D(){}
    void getPunktInfo(ostream&);
};
class Punkt3D : public Punkt2D{
protected:
    double z;
public:
    Punkt3D(): Punkt2D(){
        nazwa="";
        typ="Punkt 3D";
        polozenie=(0,0,0);
        wymiar=3;
    }
    Punkt3D(string nazwa, double polozenie, double y, double z) :Punkt2D(nazwa, polozenie, y){
        int wymiar=3;
        string typ="Punkt 3D";
        this->wymiar=wymiar;
        this->typ=typ;
        this->y=y;
        this->z=z;
    }
    ~Punkt3D(){}
    void getPunktInfo(ostream&);
};
class Piksel : public Punkt2D{
protected:
    string kolor;
public:
    Piksel(): Punkt2D(){
        kolor="";
        nazwa="";
        typ="Piksel";
        polozenie=(0,0);
        wymiar=2;
    }
    Piksel(string nazwa, string kolor, double polozenie, double y):Punkt2D(nazwa, polozenie, y){
        int wymiar=2;
        string typ="Piksel";
        this->wymiar=wymiar;
        this->typ=typ;
        this->kolor=kolor;

    }
    void getPunktInfo(ostream&);


};


#endif
