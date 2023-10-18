#ifndef RERNA_HPP_INCLUDED
#define RERNA_HPP_INCLUDED

enum StanjeRerne{ ISKLJUCENA , UKLJUCENA , POKVARENA};

class Rerna{

private:

    StanjeRerne trenutnoStanje;
    int temperatura;
public:

    Rerna(){

        trenutnoStanje = ISKLJUCENA;
        temperatura = 0;
    }

    bool ukljuci(){

        if(trenutnoStanje == ISKLJUCENA){
            trenutnoStanje = UKLJUCENA;
            temperatura += 20;
            return true;
        }else{
            return false;
        }
    }

      bool iskljuci(){

        if(trenutnoStanje == UKLJUCENA){
            trenutnoStanje = ISKLJUCENA;
            temperatura = 0;
            return true;
        }else{
            return false;
        }
      }

      bool pokvari(){

        if(trenutnoStanje != POKVARENA){
            trenutnoStanje = POKVARENA;
            temperatura = 0;
            return true;
        }else{
            return false;
        }
      }

      bool popravi(){

        if(trenutnoStanje == POKVARENA){
            trenutnoStanje = ISKLJUCENA;
            temperatura = 0;
            return true;
        }else{
            return false;
        }
      }

      bool pojacajTemperaturu(){

        if((trenutnoStanje == UKLJUCENA) && (temperatura < 220)){
            temperatura += 20;
            return true;
        }else{
            return false;
        }
      }

      bool smaniTemperaturu(){

        if((trenutnoStanje == UKLJUCENA) && (temperatura > 0)){
            temperatura -= 20;
            return true;
        }else{
            return false;
        }
      }

    StanjeRerne getTrenutnoStanje()const{
        return trenutnoStanje;
    }

    int getTemperatura() const{
        return temperatura;
    }



};

#endif // RERNA_HPP_INCLUDED
