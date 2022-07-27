#include "Klasy.h"

using namespace std;

int main()
{
    cout << "Jest: " << Biedronka::licznik << " biedronek" << endl;
    Biedronka b1;
	Biedronka b2(0.01);
	Biedronka b3(b2);
	cout << "Podaj mase pierwszej biedronki(w kilogramach): " << endl;
	cin >> b1;
	cout << "Sa: " << Biedronka::licznik << " biedronki" << endl;
	cout << b1 << b2 << b3 << endl;
	Wiadro w;
    cout << "Wiatro juz lewituje. Podaj jego mase w kilogramach(pamietaj ze w srodku siedza biedronki i ze sa od niego znacznie lzejsze!) i na jakiej wysokosci jest(metry): " << endl;
    cin >> w;
    cout << w << endl;
    cout << "Energia kinetyczna Wiadra z trzema biedronkami:" << endl;
    w.energia();
    cout << "********************************************"<< endl;
    cout << "Biedronki nagle telportuja sie poza wiadro!"<< endl;
    w=operator-(b1,w);
    w=operator-(b2,w);
    w=operator-(b3,w);
    //if (w.masa>0) tak srednio mi to dzialalo, bo prywatne  :<
   // {
    cout << "Energia kinetyczna samego Wiadra:" << endl;
    w.energia();
    cout << "Ponadto: " << endl;
    cout << w << endl;
    cout << "********************************************"<< endl;
    cout << "Teraz jedna z Biedronek niespodziewanie wrocila!!" << endl;
    w=operator+(b1,w);
    cout << "Energia kinetyczna Wiadra z jedna, pierwsza biedronka:" << endl;
    w.energia();
    cout << "Ponadto: " << endl;
    cout << w << endl;

   // }
   // else if (w.masa<=0)
   // {
   //  cout << "Chyba zepusles fizyke!" << endl;
   // }



    return 0;
}
