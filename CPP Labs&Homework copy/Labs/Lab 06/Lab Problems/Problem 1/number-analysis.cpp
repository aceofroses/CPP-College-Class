//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
using namespace std;
const int SIZE=50;
//prototypes (INSERT HERE IF YOU USE FUNCTIONS)

//end prototypes
int main()
{
    ifstream ifile;
    string fileName;
    int lowest, highest, total=0, counter=0;
    int numbers[SIZE];
    double average;
    cout << "Name of file: ";
    cin >> fileName;
    ifile.open( fileName );
    if( ifile.fail() )
    {
        cout << "Error" << endl;
        return 1;
    }
//ADD YOUR CODE FROM HERE

   // Counter is used to track the number of elements read
    while (counter < SIZE && ifile >> numbers[counter])
    {
        counter++;
    }

    highest = numbers[0];
    lowest = numbers[0];

    for (int i = 0; i < counter; i++) 
    {
        //Find the lowest integer         
        if(numbers[i] < lowest)
        {
            lowest = numbers[i];
        
        }
        // Find the highest integer
        if(numbers[i] > highest)
        {
            highest = numbers[i];
        }
        // Adds the total off all the numbers        
        if(numbers[i] > 0)
        {
            total += numbers[i];
        }
    }
    
    average = static_cast<double>(total) / static_cast <double>(counter);

   


    cout << "The lowest number is " << lowest << "\n" 
         << "The highest number is " << highest << "\n"
         << "The total of the array is " << total << "\n"
         << "The average of the array is " << average << endl;
    cout << endl;

    ifile.close();

    return 0;
}

