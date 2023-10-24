#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include "skoljka.hpp"
#include "menjac.hpp"

enum StanjeAutomobila{UGASEN , POKVAREN , U_VOZNJI};

class Automobil{

private:

    Menjac m;
    Skoljka s;
    StanjeAutomobila stanje;
    int trenutnaBrzina;

public:

    Automobil() : m() , s() {

        stanje = UGASEN;
        trenutnaBrzina = 0;

    }

     Automobil(StanjeAutomobila xx , int n) : m() , s() {
        if()
        trenutnaBrzina = n;
        stanje = xx;
    }

    Automobil(const Automobil& stari) : m(stari.m) , s(stari.s) {
        stanje = stari.stanje;
        trenutnaBrzina = stari.trenutnaBrzina;
    }



};

#endif // AUTOMOBIL_HPP_INCLUDED
