#include <iostream>

using namespace std;

#include "machine.hpp"

void printInfo(const Machine& masina){
    cout << "Current state: ";
    switch(masina.getCurrentState()){
    case sA:
        cout << "sA" << endl;
        break;
    case sB:
        cout << "sB" << endl;
        break;
    case sC:
        cout << "sC" << endl;
        break;
    case sD:
        cout << "sD" << endl;
        break;
    }

    cout << "Value: " << masina.getValue() << endl << endl;
}

int meni(){
    cout << "Meni" << endl << "---------------------" <<endl;
    cout << "1. MetodaX" << endl;
    cout << "2. MetodaY" << endl;
    cout << "3. MetodaW" << endl;
    cout << "4. MetodaZ" << endl;
    cout << "5. Plus" << endl;
    cout << "6. Minus" << endl;
    cout << "7. Print info" << endl;
    cout << "8. Exit" << endl;
    cout << "    Action =>";
    int x;
    cin >> x;
    cout << endl;
    return x;
}


int main()
{
    Machine masina;
    int x=0;

    do{
        x = meni();
        switch(x){
        case 1:
            if(masina.metodaX()){
                cout << "method successfully executed! "<<endl;
            }else{
                cout << "execution error !!"<<endl;
            }
            break;
        case 2:
            if(masina.metodaY()){
                cout << "method successfully executed! "<<endl;
            }else{
                cout << "execution error !!"<<endl;
            }
            break;
        case 3:
            if(masina.metodaW()){
                cout << "method successfully executed! "<<endl;
            }else{
                cout << "execution error !!"<<endl;
            }
            break;
        case 4:
            if(masina.metodaZ()){
                cout << "method successfully executed! "<<endl;
            }else{
                cout << "execution error !!"<<endl;
            }
            break;
        case 5:
            if(masina.plus()){
                cout << "method successfully executed! "<<endl;
            }else{
                cout << "execution error !!"<<endl;
            }
            break;
        case 6:
            if(masina.minus()){
                cout << "method successfully executed! "<<endl;
            }else{
                cout << "execution error !!"<<endl;
            }
            break;
        case 7:
            printInfo(masina);
            break;
        }
        cout << endl << endl;
    }while(x != 8);

    return 0;
}
