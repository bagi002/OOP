#ifndef KOCKA_HPP_INCLUDED
#define KOCKA_HPP_INCLUDED

class Kocka{
private:
    int vrednost;
public:
    Kocka();
    Kocka(int V);
    Kocka(Kocka&);
    int getVrednost();
};

#endif // KOCKA_HPP_INCLUDED
