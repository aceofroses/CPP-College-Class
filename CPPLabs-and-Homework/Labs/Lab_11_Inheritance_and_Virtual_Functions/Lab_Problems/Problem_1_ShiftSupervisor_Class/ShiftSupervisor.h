#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"
#include <iostream>

class ShiftSupervisor : public Employee
{
    private:
        int salary;
        int bonus;
    public:
        ShiftSupervisor(std::string s, int n, std::string h, int sal, int b) : salary(sal), bonus(b), Employee(s, n, h)
        {};

        void print() const
        {
            Employee::print();
            std::cout << "Salary: " << salary << std::endl 
                      << "  Bonus:  " << bonus << std::endl;
        }
};

#endif