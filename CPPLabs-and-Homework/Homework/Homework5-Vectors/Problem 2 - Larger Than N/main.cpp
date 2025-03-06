#include <iostream>
#include <vector>
using namespace std;

//Function prototype
void largerThan(vector<int> greaterThan, int n);


int main()
{


    //Vector Array
    vector<int> greaterThan{0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int n;

    cout << "Enter a number, n: ";
    cin >> n; // Example Value

    largerThan(greaterThan, n);

    return 0;
}


void largerThan(vector<int> greaterThan, int n)
{
    // Iterates through the vector
    for(int i = 0; i < greaterThan.size(); i++ )
    {
        if(greaterThan[i] > n) // Checks each number in the vector if it's larger than n
        {   
            
            cout << greaterThan[i] << endl;
        }
    }
}
