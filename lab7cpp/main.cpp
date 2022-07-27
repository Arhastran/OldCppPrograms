#include "Pojazdy.h"

int main()
{
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;
Pojazd*wsk=NULL;
wsk = new Samochod(1998, "Zielony");
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;
wsk->wyswietl();
delete wsk;
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;

cout << "**********************************************" << endl;

wsk = new Osobowy(2007, "Niebieski", 5);
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;
wsk->wyswietl();
delete wsk;
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;

cout << "**********************************************" << endl;

wsk = new Ciezarowy(2004, "Bialy", 16);
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;
wsk->wyswietl();
delete wsk;
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;

cout << "**********************************************" << endl;

wsk = new Ford(2018, "Srebrny", 5, "Focus");
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;
wsk->wyswietl();
delete wsk;
cout << "Jest " << Pojazd::licznik << " pojazdow " << endl;

return 0;
}
