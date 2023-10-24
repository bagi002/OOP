// 1.1 zad

#include <iostream>

using namespace std;

int main()
{
    int x;
    int maximum = 0;
    int i = 0;

    while(x != 0){
        cout << "X[" << i << "] = ";
        cin >> x;
        i++;

        if (maximum < x) {
                maximum = x;
        }
    }

    cout << "Najveci broj medju pozitivnim brojevima je " << maximum << endl;

}
