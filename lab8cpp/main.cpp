#include "Human.h"
void Liczniki()
{
    cout<<"*************************************"<<endl;
    cout<<"Mamy: "<< Osoba::licznik<<" osob"<<endl;
    cout<<"Mamy: "<< Student::licznik_stud<<" studentow"<<endl;
    cout<<"Mamy: "<< Wykladowca::licznik_wyk<<" wykladowcow"<<endl;
    cout<<"Mamy: "<< Doktorant::licznik_doc<<" doktorantow"<<endl;
}
int main()
{
    // W przypadku domyslnych (s1, d1, w1) nie pojawia sie nic bo nie dalem zadnych danych w konstruktorach domyslnych. Mozna to zmienic w pliku.h
    Liczniki();
    Student s1;
    Student s2("Nowak Marek", 22, 3.22, 3 , 120);
    Student s3("Wisniewski Henryk", 20, 3.02, 2, 90);
    Liczniki();

    Wykladowca w1;
    Wykladowca w2("Cooper Sheldon", 44, 100, 100);
    Liczniki();

    Doktorant d1;
    Doktorant d2("Jakubowska Aleksandra", 25, 4.1, 2, 15, 120);
    Doktorant d3("Matusiak Patryk", 29, 3.6, 5, 42, 0);
    Liczniki();

    s1.getInfo();
    s2.getInfo();
    s3.getInfo();

    w1.getInfo();
    w1.getPensja();

    w2.getInfo();
    w2.getPensja();

    d1.getInfo();
    d1.getPensja();
    d2.getInfo();
    d2.getPensja();
    d3.getInfo();
    d3.getPensja();
    return 0;
}
