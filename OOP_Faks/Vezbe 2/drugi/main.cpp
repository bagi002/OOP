#include <iostream>

using namespace std;

#include "rerna.hpp"

void ispisiRernu(const Rerna& rerna){

     switch(rerna.getTrenutnoStanje()){
            case UKLJUCENA:
                cout << "Trenutno stanje: UKLJUCENA"<< endl;
                break;
            case ISKLJUCENA:
                cout << "Trenutno stanje: ISKLJUCENA"<< endl;
                break;
            case POKVARENA:
                cout << "Trenutno stanje: POKVARENA"<< endl;
                break;
            default:
                break;
        }

    cout << "Temperatura: " << rerna.getTemperatura() << endl;
}

int meni(){
    cout << "Izaberite operaciju" << endl;
    cout << "1. Ukljuci rernu" << endl;
    cout << "2. Iskljuci rernu" << endl;
    cout << "3. Popravi rernu" << endl;
    cout << "4. Pokvari rernu" << endl;
    cout << "5. Povecaj temperaturu" << endl;
    cout << "6. Smanji temperaturu" << endl;
    cout << "7. Ispisi stanje" << endl;
    cout << "8. Prekini unos" << endl;
    cout << "Operacija-> ";
    int n;
    cin >> n;
    cout<<"---------------------------------------------"<< endl;
    return n;
}

int main()
{
    // poziv kbp
    Rerna r;
    int x=0;

    do {
        x = meni();
        switch(x){
        case 1:
            if(r.ukljuci()){
                    cout << "Uspesno izvrseno ukljucivanje" << endl;
            }else{
                    cout << "Neuspesno izvrsavanje" << endl;
            }
            break;
        case 2:
            if(r.iskljuci()){
                    cout << "Uspesno izvrseno iskljucivanje" << endl;
            }else{
                    cout << "Neuspesno izvrsavanje" << endl;
            }
            break;
        case 3:
            if(r.popravi()){
                    cout << "Uspesno izvrseno popravljanje" << endl;
            }else{
                    cout << "Neuspesno izvrsavanje" << endl;
            }
            break;
        case 4:
            if(r.pokvari()){
                    cout << "Uspesno izvrseno kvarenje" << endl;
            }else{
                    cout << "Neuspesno izvrsavanje" << endl;
            }
            break;
         case 5:
            if(r.pojacajTemperaturu()){
                    cout << "Uspesno izvrseno povecavanje temperature" << endl;
            }else{
                    cout << "Neuspesno izvrsavanje" << endl;
            }
            break;
         case 6:
            if(r.smanjiTemperaturu()){
                    cout << "Uspesno izvrseno smanjivanje temperature" << endl;
            }else{
                    cout << "Neuspesno izvrsavanje" << endl;
            }
            break;
        case 7:
            ispisiRernu(r);
            break;
        default:
            break;
        }
        cout << endl << endl;
    }while(x != 8);

    return 0;
}
