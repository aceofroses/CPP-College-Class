//Template code for main, from the document
#include <iostream>
#include "Band.h"
#include "Guitar.h"
#include "Drums.h"
#include "Instrument.h"
#include "Flute.h"

int main() {
    Band myBand;

    Guitar guitar1;
    myBand.addInstrument( &guitar1 );
    Drums drums1;
    myBand.addInstrument( &drums1 );
    Flute flute1;
    myBand.addInstrument( &flute1 );
    Guitar guitar2;
    myBand.addInstrument( &guitar2 );
    Drums drums2;
    myBand.addInstrument( &drums2 );
    //myBand.addInstrument( new Flute );
    myBand.perform();  // All instruments perform their sounds

    return 0;
}
