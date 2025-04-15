#include "Number.h"
#include <iostream>
#include <string>

//All numbers between 0 and 19 as string names
const std::string Number::lessThan20[] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine", "ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen", 
    "sixteen", "seventeen", "eighteen", "nineteen"
};

//10 spaces allocated, but only positions 2-9 should be used, if 0 and 1 are shown, there's an error in the logic
const std::string Number::tens[10] = {
    "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy",
    "eigthy", "ninety"
};

//Strings for hundred and thousand
const std::string Number::hundred = "hundred";
const std::string Number::thousands = "thousand";

void Number::print() const {

    //Input error message
    if (number < 0 || number > 9999) {
        std::cout << "Number out of range" << std::endl;
        return;
    }

    //Specific check for when number is zero
    if (number == 0) {
        std::cout << lessThan20[0] << std::endl;
        return;
    }

    //If statements for rotating the number through the proper checks to output the correct string
    //Essentially, breaking the number down into sections
    int n = number;

    //If number is greater or equal to 1000
    if (n >= 1000) {
        //Displays the nth-index in the array
        std::cout << lessThan20[n / 1000] << " " << thousands << " ";
        //Sets n equal to remainder, and displays thousand
        n %= 1000;
    }

    //
    if (n >= 100) {
        ///Displays the nth-index in the array
        std::cout << lessThan20[n / 100] << " " << hundred << " ";
        n %= 100;
    }

    //Checks if number is greater than or equal to 20, then prints the appropriate sentence string
    if (n >= 20) {
        //Outputs the nth-index in the array
        std::cout << tens[n / 10] << " ";
        n %= 10;
    }

    //Checks if the number is less than 0
    if (n > 0) {
        //Displays the nth-index in the array
        std::cout << lessThan20[n] << " ";
    }

    std::cout << std::endl;
}
