#ifndef TREZOR_HPP_INCLUDED
#define TREZOR_HPP_INCLUDED

template<class SADRZAJ, int KAPACITET>
class Trezor{
private:

    SADRZAJ sefovi[KAPACITET];
    bool popunjenost[KAPACITET];
    int brPopunjenih;

public:

    Trezor(){
        brPopunjenih = 0;
        for(int i = 0; i < KAPACITET; i++){
            popunjenost[i] = false;
        }
    }

    int getBrojPopunjenihSefova(){
        return brPopunjenih;
    }

    int ubaciSadrzaj(const SADRZAJ& predmet){
        int x = -1;
        for(int i = 0; i < KAPACITET; i++){
            if(popunjenost[i] == false){
                popunjenost[i] = true;
                x = i;
                sefovi[i] = predmet;
                brPopunjenih++;
                return x;
            }
        }

    }

    bool izbaciSadrzaj(int sef){
        if(sef < KAPACITET){
            popunjenost[sef] = false;
            brPopunjenih--;

            return true;
        }
        return false;
    }




};

#endif // TREZOR_HPP_INCLUDED
