//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
using namespace std;

struct Weather
{
    int rainfall;
    int hTemp;
    int lTemp;
    float avg;
};

//prototypes (USE ONLY IF YOU WILL USE FUNCTIONS)
void getData(Weather year[]);
int highestTemp(Weather year[], int &index);
int lowestTemp(Weather year[], int &index);
void findAverage(Weather year[], int &totalRain, int &fullAverage, float &sumAvg, int &index);

int main()
{
    //USE THIS DATA ONLY FOR TESTS.
    //THE DATA MUST BE INTRODUCED BY THE USER OR FROM FILE
    /* Weather year[ 12 ] = {  200,  90, 60, 0.0,
                            300,  95, 62, 0.0,
                            200,  99, 65, 0.0,
                            200, 101, 66, 0.0,
                            400, 105, 67, 0.0,
                            600, 108, 70, 0.0,
                            700, 112, 72, 0.0,
                            700, 111, 74, 0.0,
                            400, 108, 72, 0.0,
                            200, 104, 68, 0.0,
                            200,  98, 66, 0.0,
                            100,  92, 64, 0.0 };
    */
    //ifstream ifile;
    int highest, lowest, totalRain=0, fullAverage;
    float sumAvg=0;
    //ADD YOUR CODE FROM HERE

    int index, highIndex, lowIndex;

    // Declare structure array
    Weather year[ 12 ]; // 12 months in a year


    //Function calls for each requirement
    getData(year);

    findAverage(year, totalRain, fullAverage, sumAvg, index);

    highest = highestTemp(year, highIndex);
    lowest = lowestTemp(year, lowIndex);
    

    //Display a list of the values necessary
    cout << "\nTotal Rain: " << totalRain << "\n"
         << "Highest Temp: " << highest << "(Month is " << highIndex + 1 << ")" <<"\n"
         << "Lowest Temp: " << lowest << "(Month is " << lowIndex + 1 << ")" << "\n"
         << "Average Rainfall: " << fullAverage << "\n"
         << "Average Temperature: " << sumAvg / 12 << endl;
    

    
    return 0;

}

// Functions Start Here 

void getData(Weather year[])
{
    for(int i = 0; i < 12;i++)
    {
        //Displays month number 
        cout << "Enter data for month " << i + 1 << ":\n";

        //Rainfall
        cout << "Total Monthly Rainfall, Highest Temp, and Lowest Temp: ";
        cin >> year[i].rainfall >> year[i].hTemp >> year[i].lTemp;

        // Input validation between -100 and 140
        while(year[i].hTemp < -100 || year[i].hTemp > 140 ||
              year[i].lTemp < -100 || year[i].lTemp > 140)
        {
            cout << "Invalid temperature. Please re-enter high and low temp for month #" << i + 1 << ": ";
            cin >> year[i].hTemp >> year[i].lTemp;
        }  
    }
}

//Finds highest temperature
int highestTemp(Weather year[], int &index)
{
    int highest = year[0].hTemp;
    index = 0; // Used for Displaying the highest month number
    for(int i = 0; i < 12; i++)
    {
        if(year[i].hTemp > highest)
        {
            highest = year[i].hTemp;
            index = i;
        }
    }

    return highest;
}

//Find the lowest temperature
int lowestTemp(Weather year[], int &index)
{
    int lowest = year[0].lTemp;
    index = 0;
    for(int i = 0; i < 12; i++)
    {
        if(year[i].lTemp < lowest)
        {
            lowest = year[i].lTemp;
            index = i;
        }
    }
    return lowest;
}

//Averages monthly rainfall
void findAverage(Weather year[], int &totalRain, int &fullAverage, float &sumAvg, int &index)
{
    cout << "Averages of the year:\n";
    for (int i = 0; i < 12; i++)
    {
        index = i;

        // Sum the total rainfall
        totalRain += year[i].rainfall;

         // Calculates the average of the temperatures for each month and stores in the structure avg
         year[i].avg = (year[i].hTemp + year[i].lTemp) / 2.0f;
         cout << "Monthly Average for month" << " " << index + 1 << ": "<< year[i].avg << "\n\n";

         //Sums the avg of each months averages
         sumAvg += year[i].avg;
    }
    // Average the total rainfall
    fullAverage = totalRain / 12;
}
