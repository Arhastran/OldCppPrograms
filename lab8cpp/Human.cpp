#include "Human.h"
int Osoba::licznik=0;
int Student::licznik_stud=0;
int Wykladowca::licznik_wyk=0;
int Doktorant::licznik_doc=0;
void Osoba::getInfo(){}

void Student::getInfo()
{
    cout<<"Student "<< nazwa << " "<<endl;
    cout<<"Ma "<< wiek << " lat i jest studentem "<< rok_studiow <<" roku"<<endl;
    cout<<"Jego srednia ocen wynosi: "<< srednia << " i ma: "<< ects <<" punktow ECTS"<<endl;
}
void Wykladowca::getInfo()
{
    cout<<"Wykladowca "<< nazwa << " "<<endl;
    cout<<"Ma "<< wiek << " lat"<<endl;
    cout<<"Przepracowal: "<< godziny<<" godzin, za stawke: "<< stawka<<" zl."<<endl;


}
void Wykladowca::getPensja()
{
    double pensja;
    pensja=godziny*stawka;
    cout<<"Jego pensja wynosi: "<< pensja <<endl;
}
void Doktorant::getInfo()
{
    cout<<"Doktorant "<< Student::nazwa << " "<<endl;
    cout<<"Ma "<< Student::wiek << " lat"<<endl;
    cout<<"Przepracowal: "<< Wykladowca::godziny<<" godzin, za stawke: 50 zl."<<endl;
}

void Doktorant::getPensja()
{
    double pensja;
    pensja=godziny*50;
      cout<<"Jego pensja wynosi: "<< pensja <<endl;
}

