#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

enum TipMenjaca{MANUELNI , AUTOMATSKI};

class Menjac{
private:

    int brojBrzina;
    TipMenjaca tip;

public:

    Menjac(){
        tip = MANUELNI;
        brojBrzina = 3;
    }

    Menjac(int x, TipMenjaca vrsta){
        brojBrzina = x;
        tip = vrsta;
    }

    Menjac(const Menjac& stari){
        brojBrzina = stari.brojBrzina;
        tip = stari.tip;
    }

    void setTip(TipMenjaca x){
        tip = x;
    }

    void setBrojBrzina(int x){
        brojBrzina = x;
    }

    int getBrojBrzina() const{
        return brojBrzina;
    }

    TipMenjaca getTip() const{
        return tip;
    }

};

#endif // MENJAC_HPP_INCLUDED
