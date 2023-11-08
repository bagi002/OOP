#ifndef GRAC_HPP_INCLUDED
#define GRAC_HPP_INCLUDED

class Igrac{
private:
    int poeni;
    int brojPartija;

public:
    Igrac(int a = 0, int b = 0){
        poeni = a;
        brojPartija = b;

    }

    Igrac(const Igrac &stari){
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

    void ispis() const{
        cout << poeni << endl;
        cout << brojPartija << endl;
    }

    int getPoeni(){
        return poeni;
    }

    int getBrojPartija(){
        return brojPartija;
    }

    void setPoeni(int b){
        poeni = b;
    }

};

#endif // GRAC_HPP_INCLUDED
