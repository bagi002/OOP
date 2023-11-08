#include <iostream>

using namespace std;

#include "grac.hpp"
#include "igra.hpp"
 void ispisiIgru(const Igra &i){
 cout<<"IGRA"<<endl;
 cout<<"trenutno stanje igre je: ";
 cout<<i.trenutnoStanje<<endl;
 i.igrac.ispis();


 }

int main()
{
    Igrac prvi(10,5);
    Igrac kopija(prvi);
    kopija.ispis();
    cout << endl;

    kopija.odigrajPartiju();
    kopija.dodajPoene(5);

    kopija.ispis();

    kopija.resetuj();
    kopija.ispis();

    cout << kopija.getPoeni() << endl;
    kopija.setPoeni(50);

    kopija.ispis();

    Igra i;
    ispisiIgru(i);
    return 0;
}
