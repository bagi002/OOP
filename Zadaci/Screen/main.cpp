#include <iostream>

using namespace std;

#include "monitor.hpp"

void printInfo(const Monitor& m1)
{
    cout << "Monitor info:" << endl;
    cout << "\t Monitor state: ";
    switch(m1.state)
    {
    case sON:
        cout << "On";
        break;
    case sOFF:
        cout << "Off";
        break;
    case sOUT:
        cout << "Out";
        break;
    case sTEST:
        cout << "Test";
        break;
    case sSTANDBY:
        cout << "Standby";
        break;
    }

    cout << endl;

    cout << "\t Screen state: ";
    if(m1.screen.getState() == ssOFF)
    {
        cout << "Off";
    }
    else
    {
        cout << "On";
    }

    cout << endl;
    cout << "\t Brightness: "<< m1.screen.getBrightness() << endl;
    cout << "---------------------------------------" << endl;
}


int main()
{
    Monitor m1;
    printInfo(m1);
    m1.turnOn();
    m1.incB();
    m1.incB();
    printInfo(m1);
    m1.turnTest();
    printInfo(m1);
    m1.turnOut();
    printInfo(m1);

    // Dodat po potrebi jos testova , testirane samo kriticne funkcionalnosti ne bi valjalo da je na klk

    return 0;

}
