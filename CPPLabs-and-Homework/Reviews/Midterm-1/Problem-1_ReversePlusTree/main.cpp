#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Declare Variables
    int num, row, col;
    // Ask user for input
    cout << "Enter a number: " ;
    cin >> num;

    //Nested loop to display "+" on n number of lines
    for(int row = 0; row < num; row++ )
    {
        cout << num - row << ": ";
        for(int col = 0; col < num - row; col++)
        {
            cout << "+";
        }
        cout << endl;
    }
    return 0;
}