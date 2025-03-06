#include <iostream>
#include <iomanip>

using namespace std;

double celsius(double f);

int main()
{
    //1. Define Variables
    double f, c;

    //2. Display Table Header
    cout << "F       C\n----------------\n";

    //3. For each value from 0 to 20, repeat
    for( f = 0.0; f <= 20; f++)
    {
        // 3.1 Calculate celsius (function)
        c = celsius(f);
        // 3.2 Display on table
        cout << setw(2) << f << "      " << setw(6) << c << endl;
    }



    return 0;
}

double celsius( double f)
{
    //1. Define Variables
    double c;

    //2. Calculate Celsius
    c = (5.0/9.0)*(f-32.0);
    //3. Return result

    return c;
}