#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include <iostream>

class Instrument 
{
    private:
        std::string name;
    public:
        Instrument(std::string n) : name(n)
        {};

        virtual void playSound() const = 0; // Pure Virtual function creation
        virtual ~Instrument() {}; // Virtual Destructor

};
#endif