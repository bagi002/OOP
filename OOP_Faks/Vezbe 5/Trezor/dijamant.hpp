#ifndef DIJAMANT_HPP_INCLUDED
#define DIJAMANT_HPP_INCLUDED

//#include <iostream>
//using namespace std;
#include <iomanip>

class Dijamant{
private:
    double vrednost;
    double brKarata;
public:
    Dijamant(){
        vrednost = 0;
        brKarata = 0;
            }
    Dijamant(double a, double b){
        vrednost = a;
        brKarata = b;
        }
    Dijamant(const Dijamant& stari){
        vrednost = stari.vrednost;
        brKarata = stari.brKarata;
    }

    friend ostream& operator<<(ostream& os, const Dijamant& a){
    os << "--------- DIJAMANT ------" << endl;
    os << setw(15)<<"VREDNOST: " << a.vrednost << endl;
    os << setw(15)<<"BROJ KARATA: " << a.brKarata << endl;
    os << "------------------------" << endl << endl;

    return os;
}

};

#endif // DIJAMANT_HPP_INCLUDED
