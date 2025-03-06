//
//  main.cpp
//  LabProbEx 2
//

#include <iostream>
using namespace std;

int main()
{
    
    int a, b;
    int area;
    
    // Take length of a rectangle
    cout << "Enter the length: ";
    cin >> a;
    
    // Take width of a rectangle
    cout << "Enter the width: ";
    cin >> b;
    
    // Calculate the area
    area = a*b;
    
    // Print the result
    cout << "The area of your rectangle is " << area << endl;
    
    return 0;
}
