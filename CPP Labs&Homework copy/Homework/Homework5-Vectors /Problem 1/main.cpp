#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> numbers;
    int num, counter;
    int smallest, largest;

    while(true)
    {
        cout << "Enter a number to continue, -1 to exit. " << endl; 
        cin >> num;
        if(num == -1)
        {
            cout << "Ending program" << endl;
            break;
        }
        else
        {
            numbers.push_back(num);
            continue;
        }
    }

    smallest = numbers[0];
    largest = numbers[0];

    for(int i = 1; i < numbers.size(); i++)
    {
        if(numbers[i] > largest)
        {
            largest = numbers[i];
        }
        if(numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}