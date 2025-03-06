/* A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
 
 Hint: Use the following formula to calculate miles per gallon (MPG):

 MPG = Miles_Driven/Gallons_of_Gas_Used

 (Must start variables with lower case, and use proper indentation).*/

//DO NOT MODIFY THIS SECTION
#include <iostream>
using namespace std;
int main()
{
    double carHold, carTravel, milesPerGalon;
//ADD YOUR CODE FROM HERE

    carTravel = 375;
    carHold = 15;
    
    milesPerGalon = carTravel/carHold;
    
    cout << "The car's MPG is: " << milesPerGalon << endl;
    
    return 0;

}
