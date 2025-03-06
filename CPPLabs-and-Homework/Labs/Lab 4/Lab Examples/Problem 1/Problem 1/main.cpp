#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int sum = 0;
    int number;

    // Ask user for input
    cout << "Enter a number: ";
    cin >> number;

    // Validate the input
    if(number < 0)
    {
        cout << "Error: Please enter a postive number." << endl;
        return 1;
    }

    // From number to input, add all the numbers
    do
    {
        sum += number;
        number++;
    }while(number > 0);

    //Display the accumulated sum
    cout << "The sum of all numbers from 1 to " << number << " is " << sum << endl;
    
    return 0;
}

