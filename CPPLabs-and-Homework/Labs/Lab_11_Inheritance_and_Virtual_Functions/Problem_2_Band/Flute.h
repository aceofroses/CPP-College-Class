#ifndef FLUTE_H
#define FLUTE_H
#include "Instrument.h"
#include <iostream>

class Flute : public Instrument
{
    public:
        Flute(): Instrument("Flute")
        {};

        void playSound() const override
        {
            std::cout << "Flute: Whistle" << std::endl;
        }
};
#endif