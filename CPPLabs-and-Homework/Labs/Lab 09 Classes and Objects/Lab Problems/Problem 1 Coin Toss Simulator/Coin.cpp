#include "Coin.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void Coin::toss()
{
    int result = rand() % 2;
    sideup = (result == 0) ? "heads" : "tails";
}