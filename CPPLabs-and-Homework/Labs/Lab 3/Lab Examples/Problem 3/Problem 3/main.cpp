#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Define constants and variables
    
    char package;
    float packageBill = 0.0, minutes, maxMinutes;
    cout << "Select package A, B, or C" << endl;
    cout << "Package A: $39.99 per month 450 minutes provided. Additional minutes are $0.45 per minute" << "\n" <<
    "Package B: $59.99 per month 900 minutes provided. Additional minutes are $0.40 per minute" << "\n" <<
    "Package C: $69.99 per month unlimited minuted provided." << "\n\n" << "What package did you purchase? ";
    cin >> package;
    
    
    switch(package)
    {
        case 'A':
            packageBill = 39.99f;
            maxMinutes = 450;
            cout << "How many minutes did you use? ";
            cin >> minutes;
            if ( minutes > maxMinutes)
            {
                packageBill += (minutes - maxMinutes) * 0.45f;
            }
            break;
        case 'B':
            packageBill = 59.99f;
            maxMinutes = 900;
            cout << "How many minutes did you use? ";
            cin >> minutes;
            if ( minutes > maxMinutes)
            {
                packageBill += ( minutes - maxMinutes ) * 0.40f;
            }
            break;
            
        case 'C':
            packageBill = 69.99;
            break;
            
    }
    
    cout << "The total amount for your bill is $" << packageBill << endl;
    // If package A
    //      Set cost to be the base for A
    //      If minutes is more than the limit for A
    //          Add to cost, the differenec of minutes times the cost of extra
    
    
}
