// zad 4

#include <iostream>

using namespace std;

bool odrediGodinu(int godina){

    bool prestupna = true;

    if(godina % 4 == 0){
        if((godina % 100 == 0) && (godina % 400 != 0)){
            prestupna = false;
        }
    }else prestupna = false;

    return prestupna;

}

int main()
{
    int godina;

    cout << "Unesite godinu : ";
    cin >> godina;

    cout << endl;

    if(odrediGodinu(godina)){
        cout << godina << " je pretstupna" << endl;
    }else{
        cout << godina << " nije pretstupna" << endl;
    }


    return 0;
}
