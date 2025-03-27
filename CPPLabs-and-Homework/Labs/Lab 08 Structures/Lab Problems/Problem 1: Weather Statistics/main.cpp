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
void findAverage(Weather year[], int &totalRain, int &fullAverage, float &sumAvg);

int main()
{
    
    int highest, lowest, totalRain=0, fullAverage;
    float sumAvg=0;
    //ADD YOUR CODE FROM HERE
    int highIndex, lowIndex;

    // Declare structure array
    Weather year[ 12 ]; // 12 months in a year


    //Function calls for each requirement
    getData(year);

    findAverage(year, totalRain, fullAverage, sumAvg);

    highest = highestTemp(year, highIndex);
    lowest = lowestTemp(year, lowIndex);
    

    //Display a list of the values necessary
    cout << "Total Rain: " << totalRain << "\n"
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
        //Calculates the average of the temperatures for each month and stores in the structure avg
        year[i].avg = (year[i].hTemp + year[i].lTemp) / 2.0f;
        cout << "Monthly Averages: " << year[i].avg << endl;
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
void findAverage(Weather year[], int &totalRain, int &fullAverage, float &sumAvg)

{
    for(int i = 0; i < 12; i++)
    {
        //Sum the total rainfall
        totalRain += year[i].rainfall;

        //Average the temperatures
        sumAvg += year[i].avg;
    }
    
    //Average the total rainfall
    fullAverage = totalRain / 12;
   
}

