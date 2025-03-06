//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <iomanip>
#include <cmath> // For pow function (if needed in extensions)
using namespace std;
// Function Prototypes
void displayMenu();
double calculateCircleArea(double radius);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);
void displayResult(double area, string shape);
int main() {
int choice;
double radius, length, width, base, height, area;
do {

    displayMenu();
    cout << "Enter your choice: ";
    cin >> choice;
//ADD YOUR CODE FROM HERE, INCLUDE YOUR FUNCTIONS

    if(choice == 1)
    {
        string shape = "Circle";
        cout << "Enter your radius: ";
        cin >> radius;

        area = calculateCircleArea(radius);

        displayResult(area, shape);
    }
    else if(choice == 2)
    {
        string shape = "Rectangle";

        cout << "Enter your length and width: ";
        cin >> length >> width;

        area = calculateRectangleArea(length, width);

        displayResult(area, shape);
    }
    else if(choice == 3)
    {
        string shape = "Triangle";

        cout << "Enter you base and height: ";
        cin >> base >> height;

        area = calculateTriangleArea(base, height);

        displayResult(area, shape);
    }
    else if(choice == 4)
    {
        cout << "Exiting Program" << endl;
        break;
    }

    }while(choice != 4);

    return 0;
}
void displayMenu()
{
    cout << "Geometry Calculator\n" << "1: Circle\n" << "2: Rectangle\n" << "3: Triangle\n" << "4: Exit\n";
}

double calculateCircleArea(double radius)
{
    return M_PI * (radius*radius);
}

double calculateRectangleArea(double length, double width)
{
    return length * width;
}

double calculateTriangleArea(double base, double height)
{
    return ((.5)*(base * height));
}

void displayResult(double area, string shape)
{
    cout << "The area of your " << shape << " is " << setprecision(4) << area << " sqaure units." << endl << endl;
}
