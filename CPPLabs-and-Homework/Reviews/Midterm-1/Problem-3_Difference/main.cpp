#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

// Create vector with no initial size
vector<int> randomNum;
void maxValue(const vector<int> &randomNum, int &maxValue);
void minValue(const vector<int> &randomNum, int &minValue);
int differenceValue(int a, int b);
int main()
{
    srand(time(0));
    rand(), rand(), rand();
    // Declare Variables, constants, indexes, etc
    int enterNum, maxIndex, minIndex;

    // Ask user for number input
    cout << "Enter a number: ";
    cin >> enterNum;
    //Add random numbers dynamically based on input number
    for( int i = 0; i < enterNum; i++)
    {
        randomNum.push_back(rand() % 1000); // Add random numbers to the vector
        cout << randomNum[i] << " ";
    }
    cout << endl;
    maxValue(randomNum, maxIndex);
    minValue(randomNum, minIndex);

    cout << "Minimum Value: " << minIndex << endl;

    cout << "Maximum Value: " << maxIndex << endl;

    // Find the difference between the minimum and maximum values
   cout << "Difference Value: " << differenceValue(maxIndex, minIndex) << endl;


}

// Function for maximum and minimum values
void maxValue(const vector<int> &randomNum, int &maxValue)
{
    maxValue = randomNum[0];
    for(int i = 0; i < randomNum.size(); i++)
    {
        if(randomNum[i] > maxValue)
        {
            maxValue = randomNum[i];
        }

    }

}

void minValue(const vector<int> &randomNum, int &minValue)
{
    minValue = randomNum[0];
    for(int i = 0; i < randomNum.size(); i++)
    {
        if(randomNum[i] < minValue)
        {
            minValue = randomNum[i];
        }
    }
}

// Function for finding the difference of the 2 values
int differenceValue(int a, int b)
{
    return a - b;
}
