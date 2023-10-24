#include <iostream>

using namespace std;

int main()
{
    int n;
    double S = 0;
    double x;


    cout << "Unesite broj brojeva koji se sabiraju ?" << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "X[" << i << "] = ";
        cin >> x;
        S += x;
    }

    cout << endl;
    cout << "Suma je : " << S << endl;

    return 0;
}

