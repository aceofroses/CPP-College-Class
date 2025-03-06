//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
         ofstream ofile;
         ifstream ifile;
         int number;
         cout << "Enter positive integers. When done, enter -1\n";
         ofile.open( "numbers.txt" );
//WRITE YOUR CODE FROM HERE
    
    if (!ofile)
    {
        cout << "Error opening file for writing!\n";
        return 1;
    }
    
    do
    {
        cin >> number;
        if (number != -1)
        {
            ofile << number << endl;
        }

    } while (number != -1);
    
    ofile.close();
    
    cout << "\n-1 Has been entered. File closed.\n";
    
    ifile.open("numbers.txt");
    if (!ifile)
    {
        cout << "Error opening file for reading!\n";
        return 1;
    }

    cout << "\nReading numbers from file:\n";
    while (ifile >> number)
    {
        cout << number << "\n";
    }
    ifile.close();

    return 0;
}
