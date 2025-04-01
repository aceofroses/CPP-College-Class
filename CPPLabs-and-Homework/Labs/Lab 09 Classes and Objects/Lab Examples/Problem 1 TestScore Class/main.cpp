#include <iostream>
#include "TestScore.h"
using namespace std;

int main()
{
   int score1, score2, score3;
   float avg;

   cout << "Write three scores: ";
   cin >> score1 >> score2 >> score3;

   TestScores theScores(score1, score2, score3);
   avg = theScores.average();

   cout << "The average is is " << avg << endl;

   
   return 0;
}
