#ifndef GUITAR_H
#define GUITAR_H
#include "Instrument.h"
#include <iostream>

class Guitar : public Instrument
{
    public:
        Guitar() : Instrument("Guitar")
        {};
    
        void playSound() const override{
            std::cout << "Guitar: Strum Strum" << std::endl;
        }

};
#endif