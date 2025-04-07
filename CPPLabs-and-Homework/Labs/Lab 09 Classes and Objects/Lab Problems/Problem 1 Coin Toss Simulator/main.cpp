#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Coin.h"
using namespace std;

int main()
{
    srand((time(0)));

    Coin flipCoin;

    cout << "Initial Side facing up: " << flipCoin.getSideUp() << endl;

    int headsCount = 0;
    int tailsCount = 0;

    for(int i = 0; i < 10; i++)
    {
        flipCoin.toss();
        string result = flipCoin.getSideUp();
        cout << "Toss: " << i + 1 << ": " << result << endl;

        if(result == "heads")
            headsCount++;
        else
            tailsCount++;
    }


    cout << "\nTotal Heads: " << headsCount << endl
         << "\nTotal Tails: " << tailsCount << endl;

    return 0;
}

void Coin::toss()
{
    int result = rand() % 2;
    sideup = (result == 0) ? "heads" : "tails";
}
