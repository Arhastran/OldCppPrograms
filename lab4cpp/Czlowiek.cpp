#include "Czlowiek.h"
int Czlowiek::licznik=0;
Czlowiek::Czlowiek(string imie, string nazwisko, int wiek)
{
 this->imie=imie;
 this->nazwisko=nazwisko;
 this->wiek=wiek;
 licznik++;
}
Czlowiek::~Czlowiek(){
licznik--;
}

void Czlowiek::przedstaw()
{
    cout << endl << "Imie: "<<imie<<" Nazwisko: "<<nazwisko<<" Wiek: "<<wiek<<" lat "<<endl;
}
void Czlowiek::ile()
{
   cout<<endl<<"Mamy "<< licznik <<" Ludzi"<<endl;
}

