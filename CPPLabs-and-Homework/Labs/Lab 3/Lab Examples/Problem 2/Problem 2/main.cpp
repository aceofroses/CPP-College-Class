#include <iostream>
using namespace std;

int main()
{
    // Define variables and constants
    int month;
    int year;
    
    // Ask for month and year
    cout << "Enter a month 1 through 12 (January to December) followed by a year : ";
    cin >> month >> year;
    
    // If month is not february
    if(month != 2)
    {
       // if month is 4 or 6
        if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            //Display 30
            cout << "30 days" << endl;
        }
        else
        {
            // Display 31
            cout << "31 days" << endl;
        }
    }
    else if( year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "29 days" << endl;
            }
            else
            {
                cout << "28 days" << endl;
            }
        }
    else
    {
        if(year % 4 == 0)
        {
            cout << "29 days" << endl;
        }
        else
        {
            cout << "28 days" << endl;
        }
    }
    return 0;
}
