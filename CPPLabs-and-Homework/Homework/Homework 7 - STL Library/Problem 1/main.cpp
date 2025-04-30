#include <iostream>
using namespace std;

//Template function
template<class T>
T absolute(T value)
{
    //Checks for 
    if(value < 0)
    {
        return -value;
    }else { 
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