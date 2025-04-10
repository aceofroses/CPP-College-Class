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
            fuelGallons = startingGallons;
        }

        //Returns the number of gallons in the tank
        int getGallons() const
        {
            return fuelGallons;
        }

        //Allows for fuel to be added back to the tank, back to the max of 15, taking gallons as a parameter
        void addToTank(int gallons)
        {
            //
            for(int i = 0; i < 15; i++)
            {    
                // Checks if the private member plus the parameter is less than 15
                if(fuelGallons + gallons <= 15)
                {
                    // Adds the parameter to the private member
                    fuelGallons += gallons;
                }
                else if(fuelGallons == 0)
                {
                    fuelGallons = 15;
                }
            }
        }

        //Function for fuel to be subtracted from the car's tank
        void useFuel()
        {
            //Decrement by one as long as the fuel is above zero
            if(fuelGallons > 0)
            {
                fuelGallons--;
            }
            // Once the tank reaches zero, state the tank is empty
            if(fuelGallons == 0)
            {
                std::cout << "Tank empty. Please refill" << std::endl;
            }
            
        }
        //Display's the remaining gas when called
        void report()
        {
            std::cout << "Remaining Gas: " << fuelGallons << std::endl;
        }
};

#endif