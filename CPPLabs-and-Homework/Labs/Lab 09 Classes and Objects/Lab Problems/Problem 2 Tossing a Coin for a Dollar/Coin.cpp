#include "Coin.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void Coin::toss()
{
    //Allow the function to generate a random number
    int result = rand() % 2;
    //When the modulus of the number is 0 or 1, make the sideup Heads or Tails
    sideup = (result == 0) ? "heads" : "tails";
    
}

