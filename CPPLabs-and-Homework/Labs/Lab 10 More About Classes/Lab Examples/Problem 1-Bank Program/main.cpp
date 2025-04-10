#include <iostream>
#include "Bank.h"
#include "Account.h"
using namespace std;

void printAll( const Bank &b, Account acs[], int s );

int main()
{
    Bank myBank( "Chase Bank", COMMERCIAL, "Granbury, Texas");
    Account theAcc[5] = {Account( 1001, "Donald Duck", SAVING, 1001.00 ),
                         Account( 1002, "Scrooge McDuck", CHECKING, 1000000000.00),
                         Account( 1003, "Daisy Duck", SAVING, 100000.00),
                         Account( 1004, "Daffy Duck", CHECKING, 10000.00),
                         Account( 1005, "Foghorn Leghorn", SAVING, 100.0) };

    printAll(myBank, theAcc, 5);

    return 0;
}

void printAll( const Bank &b, Account acs[], int s )
{
    cout << "Bank: " << b.name << endl;
    for(int i = 0; i < s; i++)
    {
        cout << "\nAccount: " << acs[i].owner
             << "\nAccount type: " << acs[i].type
             << "\nBalance: " << acs[i].balance << endl;
    }
}