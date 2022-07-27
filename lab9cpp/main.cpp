#include"Osoba.h"
#include"Porownanie.h"
#include <vector>
void sortuj(vector<Osoba* > &p, Porownanie &a){

    for(int i=0;i< p.size();i++)
	{
		for(int j=i; j< p.size();j++)
		{
			if(a.sprawdz(*p[i], *p[j])==1)
                // kurcze nie mam pomyslu
                swap(p[i], p[j]);
		}
	}
}
void wyswietl(vector<Osoba* > v) {
 for(int i=0;i<v.size();i++)
	{
		cout<<*v[i]<<endl;
	}
}
int main()
{
    vector<Osoba* > v;

	v.push_back(new Doktorant());
	v.push_back(new Doktorant("Milosz Jarzanek", 25, 170, 2100));
	v.push_back(new Doktorant("Kasia Kowalska", 27, 168, 2500));
	v.push_back(new Doktorant("Rafal Gawel", 25, 185, 1900));

	v.push_back(new Pracownik());
	v.push_back(new Pracownik("Jaroslaw Nowak", 50, 170, 5000, 30, 15));
	v.push_back(new Pracownik("Elzbieta Bartosiewicz", 42, 177, 3000, 90, 25));
	v.push_back(new Pracownik("Monika Lewandowska", 52, 167, 5000, 30, 30));

    cout << "Ilosc doktorantow: " << Doktorant::licznik_doc << " Ilosc pracownikow: " << Pracownik::licznik_prac << endl;
	cout << "Mamy " << Osoba::licznik << " osob" << endl;

    for(int i =0; i<25; i++) cout << "*";
	cout << endl;

	wyswietl(v);

	for(int i =0; i<25; i++) cout << "*";
	cout << endl;

	int option = 0;
	cout << "Wybierz jak posortowac liste:\n\t1 - po wieku,\n\t2 - po wzroscie,\n\t3 - po pensji,\n\t4 - po nazwie" << endl;
	cin >> option;

	Porownanie* p;
	switch(option) {
		case 1:
			p = new PorownanieWieku;
			break;
		case 2:
			p = new PorownanieWzrostu;
			break;
			// skad te bledy tutaj?
		//case 3:
			//p = new PorownaniePensji;
			//break;
		//case 4:
			//p = new PorownanieNazw;
			//break;
		default:
			cout << "Zla opcja" << endl;
			return 0;
			break;
	}
	sortuj(v, *p);

	for(int i =0; i<25; i++) cout << "*";
	cout << endl;

	wyswietl(v);

	for(int i =0; i<25; i++) cout << "*";
	cout << endl;


	cout << "Ilosc doktorantow: " << Doktorant::licznik_doc << "\tIlosc pracownikow: " << Pracownik::licznik_prac << endl;
	cout << "Mamy " << Osoba::licznik << " osob" << endl;


    return 0;
}
