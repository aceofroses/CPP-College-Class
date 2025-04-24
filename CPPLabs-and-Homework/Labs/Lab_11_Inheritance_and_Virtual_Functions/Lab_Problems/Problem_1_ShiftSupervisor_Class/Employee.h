#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class Employee
{
    private:
        std::string name; //Worker name
        int number; //Employee ID number
        std::string hire; //Hire Date

    public:
    
    //Constructor for assigning values to the private members
    Employee( std::string s, int n, std::string h) : name(s), number(n), hire(h)
    {};

    //Basic method function for printing
    void print() const
    {
        std::cout << "Name:     " << name << std::endl
                  << "Number:   " << number << std::endl
                  << "Hire Date: " << hire << std::endl;
    }

};
#endif