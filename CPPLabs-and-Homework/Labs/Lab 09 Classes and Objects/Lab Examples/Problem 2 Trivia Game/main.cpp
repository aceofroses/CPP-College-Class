#include <iostream>
#include "Question.h"
using namespace std;

int main()
{

    const int NQUEST = 4;
    int option, points[2] = {0, 0};


    Question questionSet[NQUEST] = {
        Question( "Capital of Spain", "Lisboa", "Madrid", 2),
        Question( "5 * 6 = __", "30", "15", 1),
        Question( "Can Superman fly?", "Yes", "Only when drunk", 1),
        Question("Secret Identity of Spiderman", "Bruce Wayne", "Peter Parker", 2 )
    };

    
    for (int i = 0; i < 4; i++ )
    {
        cout << "Question for player " << (i % 2) + 1 << endl;
        questionSet[i].displayFullQuestion();
        cout << "Option 1 or 2: ";
        cin >> option;
        if(option == questionSet[i].getCorrect() )
        {
            cout << "Correct!" << endl;
            points[i % 2]++;
        }else
            cout << "Incorrect!" << endl;
    }
    for(int i = 0; i < 2; i++)
        cout << "Player " << i + 1<< "have " << points[i] << " points." << endl;

    cout << "The winner is " << (points[0] > points[1]?1:2);
    
    return 0;

}