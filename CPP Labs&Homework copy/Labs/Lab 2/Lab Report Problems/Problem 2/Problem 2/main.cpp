//
//  main.cpp
//  Problem 2
//
//  Created by Garrett Jackson on 1/28/25.
//

/*A bag of cookies holds 30 cookies. The calorie information on the bag claims that there are 10 “servings” in the bag and that a serving equals 300 calories. Write a program that asks the user to input how many cookies he or she actually ate and then reports how many total calories were consumed.
USE THE NEXT TEMPLATE (MANDATORY)*/
//DO NOT MODIFY THIS SECTION
#include <iostream>
using namespace std;
int main()
{
   int bagCapacity=30, servings=10, servingCalories=300;
   int nCookies, consumedCalories;
//ADD YOUR CODE FROM HERE
    
    //User input of cookies eaten
    cout << "Enter how many cookies you ate: ";
    cin >> nCookies;
    
    //Find the calories per cookie
    //Cookies serving size is 3 cookies per serving, serving calories is 300
    consumedCalories = nCookies * ( servingCalories / (bagCapacity / servings));
    
    cout << "You ate " << consumedCalories << " calories" << endl;
    
    return 0;
    

}

/*Example of execution:
How many cookies did you eat? 5
You consumed 500 calories.*/
