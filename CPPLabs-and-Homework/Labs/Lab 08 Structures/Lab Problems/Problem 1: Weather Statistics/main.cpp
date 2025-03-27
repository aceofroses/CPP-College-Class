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
int highestTemp(Weather year[]);
int lowestTemp(Weather year[]);
int averageRain(Weather year[], int &totalRain);
double averageTemp(const Weather year[]);

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
    
    ifstream ifile;
    int highest, lowest, totalRain=0, fullAverage;
    float sumAvg=0;
    //ADD YOUR CODE FROM HERE

    // Declare structure array
    Weather year[ 12 ]; // 12 months in a year

    ifile.open("weather.txt");

    // Open and read the file with the data
    if (!ifile)
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    for(int i = 0; i < 12; i++ )
    {
        ifile >> year[i].rainfall >> year[i].hTemp
              >> year[i].lTemp;

        //Sum the total rainfall
        totalRain += year[i].rainfall;

        //Calculates the average of the temperatures for each month and stores in the structure avg
        year[i].avg += (year[i].hTemp + year[i].lTemp) / 2;

    }

    //Function calls for each requirement
    highest = highestTemp(year);
    lowest = lowestTemp(year);
    fullAverage = averageRain(year, totalRain);
    sumAvg = averageTemp(year);

    //Display a list of the values necessary
    cout << "Total Rain: " << totalRain << "\n"
         << "Highest Temp: " << highest << "\n"
         << "Lowest Temp: " << lowest << "\n"
         << "Average Rainfall: " << fullAverage << "\n"
         << "Average Temperature: " << sumAvg << endl;
    
    ifile.close();
    return 0;

}

//Finds highest temperature
int highestTemp(Weather year[])
{
    int highest = year[0].hTemp;
    int index = 0; // Used for Displaying the highest month number
    for(int i = 0; i < 12; i++)
    {
        if(year[i].hTemp > highest)
        {
            highest = year[i].hTemp;

        }
    }

    return highest;
}

int lowestTemp(Weather year[])
{
    int lowest = year[0].lTemp;
    int index = 0;
    for(int i = 0; i < 12; i++)
    {
        if(year[i].lTemp < lowest)
        {
            lowest = year[i].lTemp;
            index = i;
        }
    }
    cout << "The lowest temperature is " << lowest << "in the " << index + 1 << "th month";
    return lowest;
}

//Averages monthly rainfall
int averageRain(Weather year[], int &totalRain)
{
   double average = totalRain / 12;
   return average;
}

//Averages monthly values of temperatures
double averageTemp(Weather year[])
{
    double totalTemp = 0.0;
    

    for(int i = 0;i < 12;i++)
    {
         totalTemp += year[i].avg;
    }

    return totalTemp / 24;
}