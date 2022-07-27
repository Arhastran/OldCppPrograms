#include"Porownanie.h"
bool PorownanieWieku::sprawdz(Osoba&a, Osoba&b){
a.dajWiek();
b.dajWiek();
if (a.dajWiek() > b.dajWiek()){
    return 1;
    }
else {
    return 0;
}

}
bool PorownanieWzrostu::sprawdz(Osoba&a, Osoba&b){
a.dajWzrost();
b.dajWzrost();
if(a.dajWzrost()>b.dajWzrost()){
    return 1;
}
else {
    return 0;
}
}
bool PorownaniePensji(Osoba&a, Osoba&b){
if (a.pensja()>b.pensja()) {
    return 1;
}
else {
    return 0;
}
}


bool PorownanieNazw(Osoba&a, Osoba&b){
    a.dajNazwe();
    b.dajNazwe();
if ((a.dajNazwe()).compare(b.dajNazwe())>=0) {
    return 1;
    }
else {
    return 0;
}
}
