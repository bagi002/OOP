#ifndef IGRAC_HPP_INCLUDED
#define IGRAC_HPP_INCLUDED

class Igrac{
private:
    int poeni;
    int brojPartija;

public:
    Igrac(int x = 0, int y = 0){
        poeni = x;
        brojPartija = y;
    }

    Igrac(Const Igrac& stari){
        poeni = stari.poeni;
        brojPartija = stari.brojPartija;
    }

    void dodajPoene(int x){
        poeni += x;
    }

    void odigrajPartiju(){
        brojPartija++;
    }

    void resetuj(){
        poeni = 0;
        brojPartija = 0;
    }

    void ispisi() const{
        cout << "Poeni: " << poeni << endl;
        cout << "Broj partija: " << brojPartija << endl;
    }

    int getPoeni() const{
        return poeni;
    }

    int getBrojPartija() const{
        return brojPartija;
    }

    void setPoeni(int x){
        poeni = x;
    }

    void setBrojPartija(int x){
        brojPartija = x;
    }

};



#endif // IGRAC_HPP_INCLUDED
