#ifndef FUELGAUGE_H
#define FUELGAUGE_H
#include <iostream>



class FuelGauge
{
    private:
        int fuelGallons;
    public:

        //Set the starting value of the gallons in the tank
        FuelGauge(int startingGallons)
        {
            fuelGallons = 0;
        }

        //Returns the number of gallons
        FuelGauge getGallons() const
        {
            return fuelGallons;
        }

        //Allows for fuel to be added back to the tank, back to the max of 15
        void addToTank(int gallons)
        {
            fuelGallons += gallons;
            cout << "Test";
        }

        //Function for fuel to be subtracted from the car's tank
        void useFuel()
        {
            if(fuelGallons > 0)
                fuelGallons--;
            if(fuelGallons == 0)
                cout << "Tank empty. Please refill" << endl;
        }

        //Display's the remaining gas when called
        void report()
        {
            cout << "Remaining Gas: " << fuelGallons << endl;
        }





};

#endif