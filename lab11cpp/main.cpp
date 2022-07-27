#include "Punkt.h"

using namespace std;

int main()
{
 Punkt1D p1("Pierwszy", 15);
 Punkt2D p2("Drugi", 6, 9);
 Punkt3D p3("Trzeci", 4,0,2);
 Piksel  pix("Piksel","Teczowy!", 22,33);
 Punkt1D p4();

cout<< p1 << endl;
cout<<"************************"<<endl;
cout<< p2 << endl;
cout<<"************************"<<endl;
cout<< p3 << endl;
cout<<"************************"<<endl;
cout<< pix << endl;
cout<<"************************"<<endl;
//cout<< p4 << endl; //hmm...
cout<< "Powiedz mi, co chcesz zrobic:\n 1- zapis wybranych punktow do pliczku, \n 2- wczytanie i wyswietlenie punktow z pliczku \n 3- wyjdz z programu" <<endl;
int wybor;
string nazwa1, kolor1;
double x, y, z;
int wybor2;
int wybor3;
cin>>wybor;
switch (wybor)
    {
    case 1:
    cout<<"Teraz wybierz jaki rodzaj punktu zapisac: \n 1-Jednowymiarowy\n 2-Dwuwymiarowy\n 3-Trzywymiarowy\n 4-Piksel z kolorem"<<endl;

    cin>>wybor2;
    switch (wybor2)
        {
        case 1:
            {
            cout<<" Teraz podaj nazwe i wspolrzedna polozenia x"<<endl;
            cin>>nazwa1;
            cin>>x;
            Punkt1D*p11=NULL;
            p11 = new Punkt1D(nazwa1, x);
            cout<<*p11<<endl; // poprawione, jak moglem o tym wskazniku zapomniec...
            ofstream zapis("plik.txt");
            zapis<<*p11; // poprawione
            zapis.close();
            delete p11;
            }
            break;
        case 2:
            {
            cout<<" Teraz podaj nazwe i wspolrzedna polozenia x a potem y"<<endl;
            cin>>nazwa1;
            cin>>x;
            cin>>y;
            Punkt2D*p22=NULL;
            p22 = new Punkt2D(nazwa1, x, y);
            cout<<*p22<<endl; // poprawione
            ofstream zapis2("plik.txt");
            zapis2<<*p22; //poprawione
            zapis2.close();
            delete p22;
            }
            break;
        case 3:
            {
            cout<<" Teraz podaj nazwe i wspolrzedna polozenia x,y a potem z"<<endl;
            cin>>nazwa1;
            cin>>x;
            cin>>y;
            cin>>z;
            Punkt3D*p33=NULL;
            p33 = new Punkt3D(nazwa1, x, y, z);
            cout<<*p33<<endl; //poprawione
            ofstream zapis3("plik.txt");
            zapis3<<*p33; //poprawione
            zapis3.close();
            delete p33;
            }
            break;
        case 4:
            {
            cout<<" Teraz podaj nazwe, kolor, wspolrzedna polozenia x a potem y"<<endl;
            cin>>nazwa1;
            cin>>kolor1;
            cin>>x;
            cin>>y;
            Piksel*pi=NULL;
            pi = new Piksel(nazwa1,kolor1, x, y);
            cout<<*pi<<endl; // poprawione
            ofstream zapis4("plik.txt");
            zapis4<<*pi; // poprawione
            zapis4.close();
            delete pi;
            }
            break;
        default:
            {
            cout<<"nie."<<endl;
            }
            break;
        }
        break;

    case 2:
        {
         cout<<"Teraz wybierz jaki rodzaj punktu wczytac: \n 1-Jednowymiarowy\n 2-Dwuwymiarowy\n 3-Trzywymiarowy\n 4-Piksel z kolorem"<<endl;
         cin>>wybor3;
         string tmp1, tmp2, tmp3, tmp4, tmp5; // zadeklarowalem string dla kazdego string w pliku
         double p1,p2,p3,p4,p5,p6,p7,p8; // podobnie z wartoscia liczbowa
         ifstream odczyt("wczytanie.txt"); // tu otwarcie pliku
         odczyt>>tmp1>>p1>>tmp2>>p2>>p3>>tmp3>>p4>>p5>>p6>>tmp4>>tmp5>>p7>>p8; // zczytuje wszystko po kolei, wybrane case lapia tylko potrzebne rzeczt
         switch(wybor3) // w pliku przecinki zastapione kropokami, inaczej sie zepsuje (zagranicze definiowane liczb niecalkowitych)
        {
            case 1:
                {
                    Punkt1D*p11=NULL;
                    p11= new Punkt1D(tmp1,p1);
                    cout<<*p11<<endl; // poprawione
                }
            break;

            case 2:
                {
                    Punkt2D*p22=NULL;
                    p22= new Punkt2D(tmp2,p2,p3);
                    cout<<*p22<<endl;
                }
            break;

            case 3:
                {
                    Punkt3D*p33=NULL;
                    p33= new Punkt3D(tmp3,p4,p5,p6);
                    cout<<*p33<<endl;
                }
            break;

            case 4:
                {
                    Piksel*p44=NULL;
                    p44= new Piksel(tmp4,tmp5,p7,p8);
                    cout<<*p44<<endl;
                }
            break;
            default:
                {
                cout<<"Oj nie nie byczq"<<endl;

                break;
              }

        }
        odczyt.close();
        }
        break;
    case 3:
        {
        cout << "I bid you farewell..."<<endl;
        }
        break;
    default:
        {
            cout <<"Absolutely disgusting" << endl;
        }
        break;

    }

}
