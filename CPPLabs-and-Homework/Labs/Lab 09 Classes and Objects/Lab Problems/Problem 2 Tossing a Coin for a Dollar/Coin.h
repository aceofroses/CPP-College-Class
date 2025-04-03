//Coin.h
//DO NOT MODIFY THIS SECTION
#ifndef CLASSNAME_H
#define CLASSNAME_H
#include <iostream>

class Coin{
private:
    std::string sideup;
public:
    Coin() //constructor
    { toss(); }
    std::string getSideUp() //accesor
    { return sideup; }
    void toss();
};
#endif // CLASSNAME_H
