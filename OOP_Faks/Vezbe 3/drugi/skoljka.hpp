#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum BojaSkoljke {PLAVA , CRVENA , ZELENA};

class Skoljka{
private:

    BojaSkoljke boja;

public:

    Skoljka() {
        boja = PLAVA;
    }

    Skoljka(BojaSkoljke x){
        boja = x;
    }

    Skoljka (const Skoljka& stara){
        boja = stara.boja;
    }

    void setBoja (BojaSkoljke x){
        boja = x;
    }

    BojaSkoljke getBoja() const{
        return boja;
    }

};

#endif // SKOLJKA_HPP_INCLUDED
