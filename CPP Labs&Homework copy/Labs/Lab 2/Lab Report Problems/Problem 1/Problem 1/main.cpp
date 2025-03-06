/* The Yukon Widget Company manufactures widgets that weigh 13.5 pounds each. Write a program that calculates how many widgets are stacked on a pallet, based on the total weight of the pallet. The program should ask the user how much the pallet weighs by itself and with the widgets stacked on it. It should then calculate and display the number of widgets stacked on the pallet.
*/
//DO NOT MODIFY THIS SECTION
#include <iostream>
using namespace std;

int main()
{
    double palletWeightItself, palletWithLoad;
//ADD YOUR CODE FROM HERE

    // Widget weight
    const double widgetWeight = 13.5;
    double widgetAmount;
    
    cout << "Enter how much the pallet by itself weighs and then the pallet with a load: ";
    cin >> palletWeightItself >> palletWithLoad;
    
    widgetAmount = (palletWithLoad - palletWeightItself) / widgetWeight;
    
    cout << "Number of widgets: " << widgetAmount << endl;
    
    return 0;
    
}


