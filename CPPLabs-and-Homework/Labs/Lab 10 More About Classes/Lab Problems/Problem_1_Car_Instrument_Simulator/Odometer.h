#ifndef ODOMETER_H
#define ODOMETER_H
#include <iostream>

class FuelGauge;

class Odometer
{
    friend class FuelGauge;
    private:
        int mileage;
        int mileTracker;
    public:

        //Constructor for the mileage tracking and mileage object
        Odometer(int mileage)
        {
            this->mileage = mileage;
            mileTracker = 0;

        }

        Odometer& advance(int mileTracker, FuelGauge &gauge)
        {
            //Check if miles travelled is equal to 999999, if it is, set it back to zero.
            // If not, keep incremeting
            for(int i = 0; i < mileTracker; i++)
            {
              // Continuously increment the mileage
              this->mileage++;

              //Once the mileage hits the cap, reset it back to zero
              if(this->mileage > 999999)
              {
                this->mileage = 0;
              }

              //Continuously increment the tracker
              this->mileTracker++;

              //Checks when the mileage equals 24, then utilizes the useFuel function from the FuelGauge Class
              // Then sets the tracker back to 0
              if(this->mileTracker == 24)
              {
                gauge.useFuel();
                this->mileTracker = 0;
              }
            }
        
            return *this;
        }

        void report()
        {
            std::cout << "Mileage: " << mileage << std::endl;
        }


};


#endif