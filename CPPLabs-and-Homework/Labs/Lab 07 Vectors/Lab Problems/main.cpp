//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
using namespace std;
const int SIZE=50;
//prototypes (INSERT HERE IF YOU USE FUNCTIONS)
void findAverage(double &average, const vector<float> &numbers);
//end prototypes
int main()
{
    ifstream ifile;
    string fileName;
    float lowest, total=0;
    vector<float> numbers;
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

    float num;
    while (ifile >> num) 
    { 
        if (num >= 10.0) {
            numbers.push_back(num);
        }
    }
    ifile.close();

    float highest = numbers[0]; 
    lowest = numbers[0];

    //Find highest and lowest number
    for(int i = 0; i < numbers.size(); i++)
    {
        if(highest > numbers[i])
        {
            highest = numbers[i];
        }
    }

    for(int i = 1; i < numbers.size(); i++)
    {
        if(numbers[i] < lowest)
        {
            lowest = numbers[i];
        }
    }

    // Find the average
   findAverage(average, numbers);


    cout  << "Lowest number: " << lowest << endl;
    cout << "Total Sum: " << total << endl;
    cout << "Average " << average << endl;

    return 0;
}

void findAverage(double &average, const vector<float> &numbers)
{
    float total = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        total += numbers[i];
    }
    average = total / numbers.size();
    
}