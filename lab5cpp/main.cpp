#include "Statki.h"
#include <time.h>
using namespace std;

int main()
{
   srand(time(NULL));
   cout << "Istnieje "<< Statki::licznik << " plansz" << endl;
   Statki jeden;
   cout << "Istnieje "<< Statki::licznik << " plansza" << endl;
   jeden.rysuj();
   Statki dwa(5,4);
   cout << "Istnieje "<< Statki::licznik << " plansz" << endl;
   int x, y;
   cout<<"Tworze plansze 5x5..."<<endl;
   cout<<"Oddaj strzal. Podaj pozycje wierszowa a pozniej kolumnowa, pozycje od 0 do 4"<<endl; // próbowa³em zaczaæ od 1 ale wyrzuca³o b³êdy :<
   cin>>x;
   cin>>y;
   dwa.strzal(x,y);
   dwa.rysuj();
}
