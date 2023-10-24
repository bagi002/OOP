#ifndef TELEVIZOR_HPP_INCLUDED
#define TELEVIZOR_HPP_INCLUDED

enum StanjeTelevizora{UKLJUCEN, ISKLJUCEN, POKVAREN};

class Televizor{

private:

    StanjeTelevizora stanje;
    int kanal;
    int zvuk;

public:

    Televizor(){

        stanje = ISKLJUCEN;
        kanal = 1;
        zvuk = 0;
    }

    Televizor(Televizor &kopija){

        stanje = kopija.stanje;
        zvuk = kopija.zvuk;
        kanal = kopija.kanal;
    }

    bool ukljuci(){
        if(stanje == ISKLJUCEN){
            stanje = UKLJUCEN;
            return true;
        }
        return false;
    }

    bool iskljuci(){
        if(stanje == UKLJUCEN){
            stanje = ISKLJUCEN;
            return true;
        }
        return false;
    }

    bool pokvari(){
        if(stanje != POKVAREN){
            stanje = POKVAREN;
            zvuk = 0;
            kanal = 1;
            return true;
        }
        return false;
    }

     bool popravi(){
        if(stanje == POKVAREN){
            stanje = ISKLJUCEN;
            zvuk = 0;
            kanal = 1;
            return true;
        }
        return false;
    }

    bool pojacajZvuk(){
        if((zvuk < 20)&&(stanje == UKLJUCEN)){
            zvuk += 1;
            return true;
        }
        return false;
    }

    bool smanjiZvuk(){
        if((zvuk > 0)&&(stanje == UKLJUCEN)){
            zvuk -= 1;
            return true;
        }
        return false;
    }

    bool sledeciKanal(){
        if((stanje == UKLJUCEN)&&(kanal < 5)){
            kanal += 1;
            return true;
        }
        return false;
    }

      bool prethodniKanal(){
        if((stanje == UKLJUCEN)&&(kanal > 0)){
            kanal -= 1;
            return true;
        }
        return false;
    }

    StanjeTelevizora getStanje() const{
        return stanje;
    }

    int getKanal() const{
        return kanal;
    }

    int getZvuk() const{
        return zvuk;
    }
};

#endif // TELEVIZOR_HPP_INCLUDED
