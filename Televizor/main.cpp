#include <iostream>

using namespace std;

#include "televizor.hpp"

void ispis(const Televizor &tv){
    cout << "Trenutno stanje: ";
    switch(tv.getStanje()){
    case UKLJUCEN:
        cout << "UKLJUCEN";
        break;
    case ISKLJUCEN:
        cout << "ISKLJUCEN";
        break;
    case POKVAREN:
        cout << "POKVAREN";
        break;
    }
    cout << endl;

    cout << "Kanal: " << tv.getKanal() << endl;
    cout << "Zvuk: " << tv.getZvuk() << endl;
    cout << endl;
}

int main()
{
    Televizor tv;
    ispis(tv);
    tv.ukljuci();
    tv.pojacajZvuk();
    tv.pojacajZvuk();
    ispis(tv);
    tv.sledeciKanal();
    ispis(tv);
    tv.pokvari();
    tv.ukljuci();
    ispis(tv);
    tv.popravi();
    ispis(tv);

    return 0;
}
