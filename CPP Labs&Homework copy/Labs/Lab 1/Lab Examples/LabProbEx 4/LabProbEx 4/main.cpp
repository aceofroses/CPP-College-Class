//
//  main.cpp
//  LabProbEx 4
//
//  Created by Garrett Jackson on 1/21/25.
//

#include <iostream>
using namespace std;

int main()
{
    // Meal charge, tip, and tax variables
    float meal, tip, tax, total_bill;
    
    meal = 88.67f;
    tip = .20f; // 20 percent increase
    tax = .0675f; // .675 percent increase
    total_bill = meal + (meal*tax) + (meal*tip);
    
    cout << "Your meal before taxes and tip: " << meal << endl;
    
    cout << "Taxes paid: " << meal * tax << endl;
    
    cout << "Tip Amount: " << (meal * tax) + (meal * tip) << endl;
    
    cout << "Your total bill is: " << total_bill << endl;
    
    return 0;
    
    
    
}
