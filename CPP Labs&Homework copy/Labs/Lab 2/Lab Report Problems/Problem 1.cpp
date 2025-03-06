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
    
    cout << "Enter how much the pallet by itself weighs: " << palletWeightItself << endl;
    cin >> palletWeightItself;
    
    cout << "Enter the weight of the pallet with the widget's loaded: " << palletWithLoad << endl;
    cin >> palletWithLoad;
    

}


/*
 Example of execution:
 Enter pallet weight and weight with load: 5.3 72.8
 Number of widgets: 5
 */

