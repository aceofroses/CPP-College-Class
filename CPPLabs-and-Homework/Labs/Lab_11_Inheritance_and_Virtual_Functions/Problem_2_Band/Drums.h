#ifndef DRUMS_H
#define DRUMS_H
#include "Instrument.h"
#include <iostream>

class Drums : public Instrument
{
    public:
        Drums() : Instrument("Drums")
        {};

        void playSound() const override
        {
            std::cout << "Drums: Boom Boom" << std::endl;
        }
};

#endif