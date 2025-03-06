/* Kathryn bought N shares of stock for $M per share. She must pay her stockbroker a 2 percent commission for the transaction. Write a program that calculates and displays the following:
 
 The amount paid for the stock alone (without the commission)
 The amount of the commission
 The total amount paid (for the stock plus the commission)

The program will ask the user the values of N and M (remember to use lowercase variable names).*/

// 2 percent = .02

//DO NOT MODIFY THIS SECTION
#include <iostream>
using namespace std;
const double BROKER_COMM=0.02; // Changed the OG value after asking professor
int main()
{
    double shares, pricePerShare;
    double amountPaid, amountComm, totalPaid;
//ADD YOUR CODE FROM HERE
    
    cout << "Input the cost of the share: $";
    cin >> pricePerShare;

    cout << "Input the amount of shares to buy: ";
    cin >> shares;
    
    amountPaid = shares*pricePerShare;
    amountComm = amountPaid*BROKER_COMM;
    totalPaid = amountPaid+amountComm;
    
    cout << "The amount paid for the stock alone is: $" << amountPaid << endl;
    
    cout << "The amount of commission paid is: $" << amountComm << endl;
    
    cout << "The total paid for the transaction is: $" << totalPaid << endl << endl;
    
    return 0;
}

