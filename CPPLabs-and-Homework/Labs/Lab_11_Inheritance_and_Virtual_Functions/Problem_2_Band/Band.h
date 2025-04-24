#ifndef BAND_H
#define BAND_H
#include <iostream>
#include <vector>
#include "Instrument.h"

class Band
{
    private:
        std::vector<Instrument*> instruments;

    public:
        void addInstrument(Instrument* instr)
        {
            instruments.push_back(instr);
        };

        void perform() const
        {
            for(auto instr : instruments)
            {
                instr->playSound();
            }
        }
        ~Band()
        {
            for(auto instr : instruments)
            {
                delete instr;
            }
        }
};

#endif