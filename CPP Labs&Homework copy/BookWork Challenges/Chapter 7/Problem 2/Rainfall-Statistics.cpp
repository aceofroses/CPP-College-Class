#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

const vector<string> MONTH_NAMES = {"January", "February", "March", "April",
                                    "May", "June", "July", "August", "September", 
                                    "October", "November", "December"};

const int MONTHS = 12;

int main()
{
    vector<double> months(MONTHS); // Stores rainfall data
    double rainfall, avgRainfall, highMonth, lowMonth;
    int highIndex = 0, lowIndex = 0;


    // Input loop
    for(int i = 0; i < MONTHS; i++)
    {
        cout << "Enter the rainfall for " << MONTH_NAMES[i] << " (in inches): ";
        cin >> rainfall;
        if(rainfall < 0)
        {
            cout << "Value cannot be negative." << endl;
            break;
        }
        months[i] = rainfall; // Store in vector
    }

    // Output loop
    cout << "\nMonthly Rainfall Data:\n";
    for(int i = 0; i < MONTHS; i++)
    {
        cout << MONTH_NAMES[i] << ": " << months[i] << " inches" << endl;
        avgRainfall += months[i]/MONTHS;
   
        highMonth = months[0];
        lowMonth = months[0];
        // Highest rainfall month
        if(months[i] > highMonth)
        {
           highMonth = months[i];
           highIndex = i;
        }
        // Lowest rainfall month
        if(months[i] < lowMonth)
        {
            lowMonth = months[i];
            lowIndex = i;
        }
    }

    cout << "Avgerage Rainfall: " << avgRainfall << "\n" 
         << "Highest Rainfall Month: " << MONTH_NAMES[highIndex] << "\n" 
         << "Lowest Rainfall Month: " << MONTH_NAMES[lowIndex] << endl;
    

    return 0;
}