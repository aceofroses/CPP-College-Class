//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n1, n2, sum;
    srand( time( nullptr ) );
    rand(); rand(); rand();
//ADD YOUR CODE FROM HERE

    n1 = (rand() % 900) + 100;
    n2 = (rand() % 900) + 100;
    
    cout << "Solve the following problem: " << endl;
    cout << n1 << endl;
    cout << n2 << "  +" << endl;
    cout << "------" << endl;
    
    cout << "\n\nPress enter to see the correct answer.";
    cin.get();
    
    sum = n1 + n2;
    cout << "The correct answer is:" << endl;
    cout << sum << endl;
    
    
    return 0;

}

