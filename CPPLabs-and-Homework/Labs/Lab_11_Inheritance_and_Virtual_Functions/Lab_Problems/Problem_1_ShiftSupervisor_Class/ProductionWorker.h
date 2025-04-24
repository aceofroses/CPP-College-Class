#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
#include <iostream>
//Derived class of Employee

class ProductionWorker : public Employee
{
    private:
        int shift;
        double payRate;

    public:
        ProductionWorker( std::string s, int n, std::string h, int sh, double pr): shift(sh), payRate(pr), Employee(s, n, h)
        {};

        void print() const
        {
            //Calling method in the Employee class
            Employee::print();
            std::cout << "   Position:      Production Worker" << std::endl
                      << "   Shift:     " << shift << std::endl
                      << "   Hourly Pay Rate:   " <<  payRate << std::endl;
        }
};


#endif