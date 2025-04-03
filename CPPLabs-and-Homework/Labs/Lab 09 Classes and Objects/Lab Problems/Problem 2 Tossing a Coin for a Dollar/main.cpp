#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Coin.h"
using namespace std;

int main()
{
    // Represent the instances of the class
    Coin quarter;
    Coin nickel;
    Coin dime;
    double balance = 0.0;
    int round = 1;

    //Generate a random seed
    srand(time(0));

    // Loop for tossing the coin and counting the amount of rounds played.
    do{
        cout << "\n--- Round " << round << " ---" << endl;

        //Declare the 3 instances for the 3 required coins
        quarter.toss();
        nickel.toss();
        dime.toss();

        // Detect that quarter tossed is a head or tails, if heads add it's value 
        if(quarter.getSideUp() == "heads")
        {
            //Add coin value to the balance
            balance += 0.25;
            cout << "Quarter: Heads. 25 cents earned" << endl;
        }else{
            cout << "Quarter: Tails. No money earned." << endl;
        }

        // Detect that nickel tossed is a heads or tails, if heads add it's value
        if(nickel.getSideUp() == "heads")
        {
            //Add coin value to the balance
            balance += 0.05;
            cout << "Nickel: Heads. 5 cents earned" << endl;
        }else{
            cout << "Nickel: Tails. No money earned." << endl;
        }

        // Detect that dime tossed is heads or tails, if heads add it's value
        if(dime.getSideUp() == "heads")
        {
            //Add the coin value to the balance
            balance += 0.10;
            cout << "Dime: Heads. 10 cents earned" << endl;
        }else{
            cout << "Dime: Tails. No money earned" << endl;
        }

        //Display current balance
        cout << "Current balance: $" << balance << endl;

        round++;

    }while( balance < 1.0);

    //Display a message based on the balance total
    if(balance == 1.0)
    {
        cout << "Balance is exactly $1.00.\n\nYou win!" << endl;
    }else{
        cout << "Balance is over $1.00.\n\n Your balance is $" << balance << endl;
    }

    return 0;
}