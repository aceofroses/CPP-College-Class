#include <iostream>
using namespace std;

int main()
{
    //1. Define Variables and constants
    int number;
    //2. Ask for number
    cout << "Write a number to convert: ";
    cin >> number;
    //3. Something to convert
    switch( number )
    {
        case 3:
            cout << "I";
        case 2:
            cout << "I";
        case 1:
            cout << "I" << endl;
            break;
        case 4:
            cout << "IV" << endl;
            break;
        case 5:
            cout << "V";
        case 6:
            cout << "I";
        case 7:
            cout << "I";
        case 8:
            cout << "I";
            break;
        case 9:
            cout << "IX" << endl;
            break;
        case 10:
            cout << "X" << endl;
            break;
            
        default:
            cout << "Wrong number!" << endl;
            break;
        }
    return 0;
}
