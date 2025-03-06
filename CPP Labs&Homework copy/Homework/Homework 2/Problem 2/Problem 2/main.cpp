/*
 Write a program that asks for the number of calories and fat grams in a food. The program should display the percentage of calories that come from fat. If the calories from fat are less than 18% of the total calories of the food, it should also display a message indicating that the food is low in fat.
 One gram of fat has 9 calories, so
 Calories from fat = fat grams * 9
 The percentage of calories from fat can be calculated as
 Calories from fat ÷ total calories
 Input Validation: Make sure the number of calories and fat grams are not less than 0. Also, the number of calories from fat cannot be greater than the total number of calories. If that happens, display an error message indicating that either the calories or fat grams were incorrectly entered.
 */

// DO NOT MODIFY
#include <iostream>
using namespace std;
int main()
{
    int cals, fatGrams, fatCalories;
    float fatPercent;
    //1. Input data
    cout << "How many calories and fat grams? ";
    cin >> cals >> fatGrams;
    //2. Validate input
    //ADD YOUR CODE FROM HERE
    // Calculates  Fat calories from the fatGrams entered.
    fatCalories = fatGrams * 9;
    
    // Calories from the fat divided by total calories
    fatPercent = static_cast<double>((fatCalories) / static_cast<double>(cals) * 100);
    
    // Checks if calories entered is correctly, else it ends the program
    if( cals < 0)
    {
        cout << "Error: Enter a number larger than 0" << endl;
    }
    else if( fatGrams < 0) //Checks if grams of fat grams was also entered correctly, else it ends the program and displays an error.
    {
        cout << "Error: Fat Grams cannot be less than 0" << endl;
    }
    
    // Checks if the calories from fat is greater thhan the total
    if(fatCalories > cals)
    {
        // If the fat calories is larger, shows an error and ends the program.
        cout << "Error: Fat calories cannot be more than total number of calories." << endl;
    }
    
    cout << "Fat Percentage: " << fatPercent << endl;
    if(fatPercent < 18)
    {
        cout << "This food is low in fat." << endl;
    }
    
    return 0;
    
}
