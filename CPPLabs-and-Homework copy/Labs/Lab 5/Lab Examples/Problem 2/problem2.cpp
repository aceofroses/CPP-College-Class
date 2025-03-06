#include <iostream>
using namespace std;


void getScore( int &s);


void calcAverage( int s1, int s2, int s3, int s4, int s5);

int findLowest(int s1, int s2, int s3, int s4, int s5);


int main()
{
    //1. Define the variables
    int s1, s2, s3, s4, s5;

    //2. Call getScore 5 times
    getScore(s1);
    getScore(s2);
    getScore(s3);
    getScore(s4);
    getScore(s5);

    calcAverage(s1, s2, s3, s4, s5);
    
    return 0;
}

void getScore( int &s)
{
    //1. Ask User for the score
    cout << "Write a score: ";
    cin >> s;
    //2. Write it to the reference
}

void calcAverage( int s1, int s2, int s3, int s4, int s5)
{
    // 1. Define Variables
    int minimum; 
    float avg;

    // 2. Get minimum score
    minimum = findLowest(s1, s2, s3, s4, s5);
    // 3. Calculate the average excluding the minimum
    avg = ((s1 + s2 + s3 + s4 + s5-minimum)/4.0f);
    // 4. Dsiplay the average
    cout << "Average Score: " << avg << endl;
}

int findLowest(int s1, int s2, int s3, int s4, int s5)
{
    s1 = (s1 < s2) ? s1 : s2;
    s3 = (s3 < s4) ? s3 : s4;
    s1 = (s1 < s3) ? s1 : s3;
    s1 = (s1 < s5) ? s1 : s5;

    return s1;
}