#include <iostream>


using namespace std;

#include "dijamant.hpp"
#include "trezor.hpp"

int main()
{
    Trezor<Dijamant, 10> sefovi;

    Dijamant d1(10,5);
    Dijamant d2(20,8);

    sefovi.ubaciSadrzaj(d1);
     sefovi.ubaciSadrzaj(d2);
      sefovi.ubaciSadrzaj(d1);
       sefovi.ubaciSadrzaj(d2);
        sefovi.ubaciSadrzaj(d1);
    sefovi.izbaciSadrzaj(2);
    cout<<sefovi.getBrojPopunjenihSefova()<<endl;
    cout<<d1;

    cout << "Hello world!" << endl;
    return 0;
}
