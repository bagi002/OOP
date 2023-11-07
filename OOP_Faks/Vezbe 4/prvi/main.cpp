#include <iostream>
using namespace std;

#include "JSTrougao.hpp"

void ispis(const Trougao &t){
    cout << endl << "------------------------------"<<endl;
    cout << "a: " << t.getA() << endl;
    cout << "b: " << t.getB() << endl;
    cout << "c: " << t.getC() << endl<< endl;

    cout << "Povrsina: " << t.getP() << endl;
    cout << "Obim :" << t.getO() << endl;
}

int main(){
    Trougao t1(1,4,4);
    JKTrougao jk1(2,3);
    JSTrougao js1(5);

    ispis(t1);
    ispis(jk1);
    ispis(js1);


    return 0;
}
