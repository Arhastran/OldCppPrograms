// Adam Ignaciuk 
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <fstream>
#include <time.h>

using namespace std;

int main(int argc, char* argv[])
{
    srand(time(NULL));
    cout<<"Ilosc argumentow: "<< argc <<endl;
    for (int i=0; i< argc; i++){
        cout << "Argumentem nr: " << i <<" jest " << argv[i] << endl;
    }
    if (argc==1) { // tutaj jeœli nie bêdzie argumentow, czyli puscimy program samym run
	cout<<"Opcje uruchamiania: \n \t0- zapis liczb losowych do pliku \n \t1 - wyswietlanie losowych liczb lub liczb wczytanych z pliku \n \t2 - wyswietlanie posortowanych liczb losowych lub wczytanych z pliku  \n \t3 - policzenie wystêpowania lowosych liczb lub liczb wczytanych z pliku"<<endl;
	cout<<"*********************************************************************************************************"<<endl;
	cout<<"Drugi parametr to ilosc losowanych liczb, trzeci to nazwa pliku"<<endl;
	}
	if (argc>1){ // tutaj jesli damy wiecej niz sam run
            int par1 = atoi(argv[1]);// pierwszy argument ozanczony i ponizej nastepne
            int par2 = atoi(argv[2]);
            int par3 = atoi(argv[3]);
        if (par1==0){ // jesli pierwszy argument bedzie zero...
            ofstream file(argv[3]); // wczytamy nazwe z 3 argumentu
				for (int i=0; i<par2;i++) { // w ilosci podanej w drugim parametrze
					int x= rand()%30+1;
					file<<x<<endl;
				}
				file.close();
        }
        if (par1==1){ // jesli zas pierwszy argument przyjmie jeden
            if (argc==4){ // jesli beda 4 argumenty (trzy plus zerowy )
                fstream file(argv[3]); // robimy to samo co w zerowym
                    for (int i=0; i<par2;i++) {
                        int x= rand()%30+1;
                        file<<x<<endl;
                    }
                    file.close();
                    }
             else if(argc<4){ // jesli zas nie bedzie nazwy
                for (int i=0; i<par2;i++) { // losujemy jak w zerowym
					int x= rand()%30+1;
					cout<<x<<endl;
				}
             }
          }
          if (par1==2){
            if (argc==4){ //jak wyzej
                fstream file(argv[3]); // sortowanie rzeczy z pliku
                vector <int> v;
                //v.push_back(file);
                // sort(v.begin(), v.end());
                file.close();
            }
            else if (argc<4){ // jesli nie ma pliczka to sortowanko losowych z argumentu 2
                int x;
                vector <int> v;
                for (int i=0; i<par2;i++) {
                    x= rand()%30+1;
                    v.push_back(x);
               }
               sort(v.begin(), v.end());
               for (int i=0; i<par2; i++) {
				cout<<v[i]<<endl;
			}
           }
        }
            if (par1==3){
                if (argc==4){
                      fstream file(argv[3]);
                      vector <int> v;
                      file.close();
                }
                else if (argc<4){
                    int x;
                    vector <int> v;
                    for (int i=0; i<par2;i++) {
                            x= rand()%30+1;
                            v.push_back(x);
                        }
                    for (int i=0 ;i<31;i++) {
                        int zlicz = count( v.begin(), v.end(), i);
                        cout<<i<<" wystepuje "<<zlicz<<" razy"<<endl;
				}
                }
        }
    }
    return 0;
}
