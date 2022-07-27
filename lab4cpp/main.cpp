#include "Czlowiek.h"
#include <cstdlib>
#include <iostream>
#include <time.h>
int main ()
{
    string imie[]={"Asia","Basia","Adam","Bartek","Cyprian"};
    string nazwisko[]={"Jasny","Chlebny","Wodny","Kovalski","Ciemnogrodny"};

    srand(time(NULL));
    int losuj = rand ()%25+1;

    cout << "Wylosowana liczba to: " << losuj << endl;

    Czlowiek::ile();
    Czlowiek*ludzie[losuj];

    int i;
    for(i=0; i<losuj; i++)
    {
      string x=imie[rand()%5];
      string y=nazwisko[rand()%5];
      int z= (rand()%40)+20;
      ludzie[i]=new Czlowiek(x,y,z);
    }
    cout<<"Po otwarciu "<<endl;
    Czlowiek::ile();
    for (int i=0; i<losuj; i++)
    {
        ludzie[i]->przedstaw();
    }
    if (losuj>10)
    {
        for (int i=10; i<losuj; i++)
        {
            delete ludzie[i];
        }

        cout<<"Po usunieciu:"<<endl;
        Czlowiek::ile();
    }
    if (losuj>10)
        {
         for (int i=0; i<10; i++)
            {
               ludzie[i]->przedstaw();
            }
        }

    return 0;
}
