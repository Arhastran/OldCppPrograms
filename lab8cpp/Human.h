//Adam Ignaciuk
#ifndef _human_H
#define _human_H
#include <iostream>
#include<math.h>
using namespace std;
class Osoba{
protected:
    string nazwa;
    int wiek;
public:
    static int licznik;
    Osoba(){
        nazwa="";
        wiek=-1;
        licznik++;
    }
    Osoba(string nazwa, int wiek)
    {
        this->nazwa=nazwa;
        this->wiek=wiek;
        licznik++;
    }
    virtual ~Osoba(){
        licznik--;
    }
    virtual void getInfo();
};
class Student : public Osoba{
protected:
    double srednia;
    int rok_studiow;
    int ects;
public:
    static int licznik_stud;
    Student() : Osoba(){
        srednia=0;
        rok_studiow=0;
        ects=0;
        licznik_stud++;

    }
    Student(string nazwa, int wiek, double srednia, int rok_studiow, int ects): Osoba(nazwa, wiek){
        this->srednia=srednia;
        this->rok_studiow=rok_studiow;
        this->ects=ects;
        licznik_stud++;
    }
    ~Student(){
        licznik_stud--;
    }
    void getInfo();

};
class Wykladowca : public Osoba{
protected:
    int godziny;
    double stawka;
public:
    static int licznik_wyk;
    Wykladowca():Osoba(){
        godziny=0;
        stawka=0;
        licznik_wyk++;
    }
    Wykladowca(string nazwa, int wiek, int godziny, double stawka): Osoba(nazwa, wiek){
        this->godziny=godziny;
        this->stawka=stawka;
        licznik_wyk++;
    }
    ~Wykladowca(){
        licznik_wyk--;
    }
    void getInfo();
    void getPensja();
};
class Doktorant: public Student, public Wykladowca{
public:
    static int licznik_doc;
    Doktorant(): Student(), Wykladowca()
    {
        licznik_doc++;
        licznik--;
    }
    Doktorant(string nazwa, int wiek, double srednia, int rok_studiow, int ects, int godziny): Student (nazwa, wiek, srednia,rok_studiow,ects), Wykladowca(nazwa, wiek, godziny,stawka){
        licznik_doc++;
        licznik--;
    }
    ~Doktorant(){
        licznik_doc--;
    }
    void getInfo();
    void getPensja();



};
#endif
