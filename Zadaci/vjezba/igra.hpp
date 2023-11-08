#ifndef IGRA_HPP_INCLUDED
#define IGRA_HPP_INCLUDED

#include "grac.hpp"
#include <cstdlib>
enum Stanje{NEPOZNAT_IGRAC, PROFILIGRACA, IGRARACUNAR, IGRAPROTIVNIK};

class Igra{
private:
    Igrac igrac;
    Stanje trenutnoStanje;

public:

    Igra() : igrac(0,0){
        trenutnoStanje = NEPOZNAT_IGRAC;
    }

    Igra(int a, int b, Stanje s) : igrac(a, b) , trenutnoStanje(s){}

    bool prijaviIgraca(){
        if(trenutnoStanje == NEPOZNAT_IGRAC){
            trenutnoStanje = PROFILIGRACA;
            return true;
        }
        return false;
    }

    bool odjaviIgraca(){
    if(trenutnoStanje==PROFILIGRACA){
        trenutnoStanje=NEPOZNAT_IGRAC;
        igrac.resetuj();
        return true;
    } return false;}

    bool pocniIgruRacunar(){
     if((trenutnoStanje==PROFILIGRACA || trenutnoStanje==IGRAPROTIVNIK) && igrac.getBrojPartija() <=9) {
         igrac.odigrajPartiju();
        trenutnoStanje=IGRARACUNAR;
        return true;
     }return false;}

     bool pocniIgruOnline(){
     if((trenutnoStanje==PROFILIGRACA || trenutnoStanje==IGRARACUNAR) && igrac.getBrojPartija() <= 8){
        igrac.odigrajPartiju();
        trenutnoStanje=IGRAPROTIVNIK;
        return true;
     }return false;}


     bool pobedi(){
     if(trenutnoStanje==IGRARACUNAR && igrac.getPoeni()<=9){
        igrac.dodajPoene(1);
        return true;
     }
     else if(trenutnoStanje==IGRAPROTIVNIK && igrac.getPoeni()<=8){
        igrac.dodajPoene(2);
        return true;
     }else {return false;}
     }

      bool izgubi(){
     if(trenutnoStanje==IGRARACUNAR && igrac.getPoeni()>=1){
        igrac.dodajPoene(-1);
        return true;
     }
     else if(trenutnoStanje==IGRAPROTIVNIK && igrac.getPoeni()>=2){
        igrac.dodajPoene(-2);
        return true;
     }else {return false;}
     }

     bool ostvariBonus(){
       if(trenutnoStanje==IGRAPROTIVNIK && igrac.getPoeni()>5){
            int x=rand()%3+1;
          igrac.dodajPoene(x);
       cout<<"dobili ste dodatnih "<<x<<"poena"<<endl;
       if(igrac.getPoeni()>10){
        igrac.setPoeni(10);
       }
       return true;
    }
       return false;
       }

   friend void ispisiIgru(const Igra &);









};

#endif // IGRA_HPP_INCLUDED
