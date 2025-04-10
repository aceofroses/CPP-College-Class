//DO NOT MODIFY THIS SECTION
#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"
using namespace std;
int main()
{
//ifstream ifile;
Odometer odom( 999990 ); //Create and initialize
FuelGauge gauge( 0 ); //Create and initialize to zero
odom.report(); //Display info from odom
gauge.report(); //Display info from gauge
gauge.addToTank( 1 ); //Add one gallon
gauge.report(); //Display new info from gauge
while( gauge.getGallons() > 0 ) //Repeat while we still have fuel
{
    odom.advance( 1, gauge ); //Advance one mile. Include reference to gauge
    odom.report(); //Report info from odom
    gauge.report(); //Report info from gauge
}
return 0;
}