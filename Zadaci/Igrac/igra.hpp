#ifndef IGRA_HPP_INCLUDED
#define IGRA_HPP_INCLUDED

#include "igrac.hpp"

enum Stanje{NEPOZNAT_IGRAC, PROFIL_IGRACA, IGRA_RACUNAR, IGRA_PROTIVNIK};

class Igra{
private:
    Igrac igrac;
    Stanje trenutnoStanje;
public:

    Igra () : igrac(){
        trenutnoStanje = NEPOZNAT_IGRAC;
    }

    Igra (int a, int b, Stanje x) : igrac(b, a){
        trenutnoStanje = x;
    }

    bool prijaviIgraca(){
        if(trenutnoStanje == NEPOZNAT_IGRAC){
            return true;
        }
        return false;
    }

    bool odjaviIgraca(){
        if(trenutnoStanje == PROFIL_IGRACA){
            trenutnoStanje = NEPOZNAT_IGRAC;
            igrac.resetuj();
        }
        return false;
    }

    bool pocniIgruRacunar() {
        if((trenutnoStanje == PROFIL_IGRACA) || (trenutnoStanje == IGRA_PROTIVNIK)){
           if(igrac.getBrojPartija < 10){
                trenutnoStanje = IGRA_RACUNAR;
                igrac.odigrajPartiju();
           }
        }
        return false;
    }

    bool pocniIgruOnline() {
        if((trenutnoStanje == PROFIL_IGRACA) || (trenutnoStanje == IGRA_RACUNAR)){
           if(igrac.getBrojPartija < 10){
                trenutnoStanje = IGRA_PROTIVNIK;
                igrac.odigrajPartiju();
           }
        }
        return false;
    }

    bool pobedi(){
        if((trenutnoStanje == IGRA_PROTIVNIK) || (trenutnoStanje == IGRA_RACUNAR)){
            if ((igrac.getPoeni() <= 9) && (trenutnoStanje == IGRA_RACUNAR){
                    igrac.dodajPoene(1);
                    return true;
                }
            if ((igrac.getPoeni() <= 8) && (trenutnoStanje == IGRA_PROTIVNIK){
                    igrac.dodajPoene(2);
                    return true;
                }
        }
        return false;
    }

      bool izgubi(){
        if((trenutnoStanje == IGRA_PROTIVNIK) || (trenutnoStanje == IGRA_RACUNAR)){
            if ((igrac.getPoeni() >= 1) && (trenutnoStanje == IGRA_RACUNAR){
                    igrac.dodajPoene(-1);
                    return true;
                }
            if ((igrac.getPoeni() >= 2) && (trenutnoStanje == IGRA_PROTIVNIK){
                    igrac.dodajPoene(-2);
                    return true;
                }
        }
        return false;
    }

    bool ostvariBonus(){
        int x;
        if((trenutnoStanje == IGRA_PROTIVNIK) && (igrac.getPoeni() > 5)){
            x = (rand() % 3) + 1;
            igrac.dodajPoene(x);
            if(igrac.getPoeni() > 10){
                igrac.setPoeni(10);
            }
            return true;
        }
        return false;
    }

    friend void ispisiIgru(const Igra&);



};

#endif // IGRA_HPP_INCLUDED
