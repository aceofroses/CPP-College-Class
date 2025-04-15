#include <iostream>
#include <string>
#include "Number.h"
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    Number myNumber(number);

    myNumber.print();
    
    return 0;
}