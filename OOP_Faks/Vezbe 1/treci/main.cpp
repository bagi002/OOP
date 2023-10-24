// ZADATAK 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double rez = 0;
    string ispis;

    cout << "Unesite broj n " << endl;
    cin >> n;

    for(int i = 1 ; i <= n; i++){
        rez += sqrt(i);
    }

    rez = rez * 100;
    rez = round(rez);
    rez = rez / 100;

    cout << "Rezultat je: "<< rez << endl;
    return 0;
}
