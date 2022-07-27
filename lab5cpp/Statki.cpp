#include "Statki.h"
int Statki::licznik=0;
Statki::~Statki(){
    licznik--;
}
void Statki::rysuj()
{
     int i,j;
	 for (i=0; i<rozmiar; i++)
		{
			for(j=0; j<rozmiar; j++)
			{
				if (tab[i][j]==true)
				{
					cout << " o ";
				}
				else
				cout << " x ";
		}
		cout << endl;
	}
}
void Statki::strzal(int x, int y)
{

	if (tab[x][y]==true) // tu chyba jest coœ nie tak?
	{
		cout << "na podanym polu jest statek" << endl;
	}
	else if (tab[x][y]==false)
		cout << "na podanym polu nie ma statku" << endl;


}

