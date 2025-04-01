#include "Question.h"
#include <iostream>

using namespace std;

void Question::displayFullQuestion() const 
{
    cout << question << endl
         << "1) " << ans1 << endl
         << "2) " << ans2 << endl;
}