#include <iostream>
using namespace std;

//Template function
template<class T>
T absolute(T value)
{
    //Checks if value is negative, then returns the absolute value
    if(value < 0)
    {
        return -value;

    }else { 
        //Then if it's positive, returns the positive/absolute value
        return value;
    }
};


//Main function template, don't edit
int main()
{
    double d = -1.1;
    int i = -6;
    cout << absolute( d ) << endl;
    cout << absolute( i ) << endl;
    return 0;
}