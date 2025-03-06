/* Write a program that asks for the names of three runners and the time it took each of them to finish a race. The program should display who came in first, second, and third place.*/

//DO NOT MODIFY THIS SECTION
#include <iostream>
using namespace std;
int main()
{
    int t1, t2, t3;
    
    //ADD YOUR CODE FROM HERE
    
    string runner1, runner2, runner3;
   
    cout << "Runner 1, enter your name: ";
    getline(cin, runner1);
    cout << "Enter " << runner1 << "'s time: ";
    cin >> t1;
    cin.ignore();
    
    cout << "Runner 2, enter your name: ";
    getline(cin, runner2);
    cout << "Enter " << runner2 << "'s time: ";
    cin >> t2;
    cin.ignore();
    
    cout << "Runner 3, enter your name: ";
    getline(cin, runner3);
    cout << "Enter " << runner3 << "'s time: ";
    cin >> t3;
    cin.ignore();
    
    if (t1 <= 0 || t2 <=0 || t3 <= 0)
    {
        cout << "Error: Time entered must be higher than zero.";
    }

    if( t1 < t2 && t1 < t3)
    {
        cout << runner1 << " is in First Place with a time of " << t1 << " seconds." << endl;
        if ( t2 < t3) {
            cout << runner2 << " is in Second Place with a time of " << t2 << " seconds." << endl;
            cout << runner3 << " is in Third Place with a time of " << t3 << " seconds." << endl;
        }   else {
            cout << runner3 << " is in Second Place with a time of " << t3 << " seconds." << endl;
            cout << runner2 << " is in Third Place with a time of " << t2 << " seconds." << endl;
        }
    }
    else if (t2 < t1 && t2 < t3)
    {
        cout << runner2 << " is in First Place with a time of " << t2 << " seconds." << endl;
        if ( t1 < t3){
            cout << runner1 << " is in Second Place with a time of " << t1 << " seconds." << endl;
            cout << runner3 << " is in Third Place with a time of " << t3 << " seconds." << endl;
        }   else {
            cout << runner3 << " is in Second Place with a time of " << t3 << " seconds." << endl;
            cout << runner2 << " is in Third Place with a time of " << t2 << " seconds." << endl;
        }
    }
   else if (t3 < t2 && t3 < t1){
        cout << runner3 << " is in First Place with a time of " << t3 << " seconds." << endl;
        if ( t2 < t1)
        {
            cout << runner2 << " is in Second Place with a time of " << t2 << " seconds." << endl;
            cout << runner1 << " is in Third Place with a time of " << t1 << " seconds." << endl;
        }
       else
       {
           cout << runner1 << " is in Second PLace with a time of " << t1 << " seconds." << endl;
           cout << runner2 << " in in Third Place with a timne of " << t2 << " seconds." << endl;
       }
    }
        
    return 0;
}
