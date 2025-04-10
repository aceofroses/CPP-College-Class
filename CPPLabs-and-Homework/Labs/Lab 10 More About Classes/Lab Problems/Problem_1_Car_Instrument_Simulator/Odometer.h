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

        Odometer(int mileage)
        {
            

        }

        void advance(int mileTracker, FuelGauge &gauge)
        {
            for(int i = 0; i < 999999; i++)
            {
                if(mileage < 999999)
                {
                    mileage += 1;
                }
                else if(mileage >= 999999)
                {
                    mileage = 0;
                }
            }
        
        }

        void report()
        {
            cout << "Mileage: " << mileage << endl;
        }


};


#endif