#include <iostream>
using namespace std;

int main()
{
    double item1, item2, item3, item4;
    
    double subTotal, salesTax, taxAmount, totalAfterTax;
    
    item1 = 15.95;
    
    item2 = 24.95;
    
    item3 = 6.95;
    
    item4 = 12.95;
    
    salesTax = .07;
    
    subTotal = item1 + item2 + item3 + item4;
    
    taxAmount = subTotal * salesTax;
    
    totalAfterTax = subTotal + taxAmount;
    
    cout << "Item 1's Price: $" << item1 << "\n" << "Item 2's Price: $" << item2 << "\n" << "Item 3's Price: $" << item3 << "\n" << "Item 4's Price: $" << item4 << endl;
    cout << "Your subtotal is: " << subTotal << endl;
    cout << "Taxes Paid: " << taxAmount << endl;
    cout << "Your total today is: " << totalAfterTax << endl;
    
    return 0;
}
