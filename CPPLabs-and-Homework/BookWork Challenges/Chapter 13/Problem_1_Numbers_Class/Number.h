#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>
#include <string>


class Number
{
    private:
    // Single member variable
        int number;
        static const std::string lessThan20[20];
        static const std::string tens[10];
        static const std::string hundred;
        static const std::string thousands;
    public:
        //Constructor that assigns the private variable number to num
                          //Member initializer list, initializes number equal to num
        Number(int num) : number(num) 
        { 
            if( num < 0)
            {
                std::cout << "Invalid Entry: Enter a positive number." << std::endl;
            }
        } 
    
        //Initialize member function
        void print() const;


    
};


/*
Numbers Class Design a class Numbers that can be used to translate whole dollar amounts in the range 0 through 9999 into an English description of the number. 
For example, the number 713 would be translated into the string seven hundred thirteen, and 8203 would be translated into eight thousand two hundred three. 

The class should have a single integer member variable: int number; and a static array 
of string objects that specify how to translate key dollar amounts into the desired format. 

For example, you might use static strings such as 
string lessThan20[20] = {"zero", "one", ..., "eighteen", "nineteen"}; 
string hundred = "hundred"; string thousand = "thousand"; 
The class should have a constructor that accepts a nonnegative integer and uses it to initialize the Numbers object. 
It should have a member function print() that prints the English description of the Numbers object. 
Demonstrate the class by writing a main program that asks the user to enter a number in the proper range and then prints out its English description
*/

#endif 