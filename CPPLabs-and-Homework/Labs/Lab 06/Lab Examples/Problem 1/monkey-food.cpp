#include <iostream>
using namespace std;

const int MONKEYS = 3; // Number of monkeys
const int DAYS = 5;     // Number of days

void getFoodData(int food[MONKEYS][DAYS]);
double calculateAverage(const int food[MONKEYS][DAYS]);
int findMinFood(const int food[MONKEYS][DAYS]);
int findMaxFood(const int food[MONKEYS][DAYS]);

int main() {
    int food[MONKEYS][DAYS]; // Array to store food intake
    
    // Get user input
    getFoodData(food);
    
    // Compute and display results
    cout << "\nAverage food eaten per day by the monkey family: " 
         << calculateAverage(food) << " pounds\n";
    
    cout << "Least amount of food eaten by any monkey: " 
         << findMinFood(food) << " pounds\n";
    
    cout << "Greatest amount of food eaten by any monkey: " 
         << findMaxFood(food) << " pounds\n";

    return 0;
}

// Function to get input from user
void getFoodData(int food[MONKEYS][DAYS]) {
    for (int i = 0; i < MONKEYS; i++) {
        for (int j = 0; j < DAYS; j++) {
            int input;
            do {
                cout << "Enter food eaten by monkey " << (i + 1) 
                     << " on day " << (j + 1) << " (in pounds): ";
                cin >> input;

                if (input < 0)
                    cout << "Invalid input. Food eaten cannot be negative.\n";

            } while (input < 0); // Ensure non-negative input
            
            food[i][j] = input;
        }
    }
}

// Function to calculate the average food consumption
double calculateAverage(const int food[MONKEYS][DAYS]) {
    int total = 0;
    for (int i = 0; i < MONKEYS; i++)
        for (int j = 0; j < DAYS; j++)
            total += food[i][j];

    return static_cast<double>(total) / (MONKEYS * DAYS);
}

// Function to find the minimum food consumption
int findMinFood(const int food[MONKEYS][DAYS]) {
    int minFood = food[0][0]; // Start with the first value
    for (int i = 0; i < MONKEYS; i++)
        for (int j = 0; j < DAYS; j++)
            if (food[i][j] < minFood)
                minFood = food[i][j];

    return minFood;
}

// Function to find the maximum food consumption
int findMaxFood(const int food[MONKEYS][DAYS]) {
    int maxFood = food[0][0]; // Start with the first value
    for (int i = 0; i < MONKEYS; i++)
        for (int j = 0; j < DAYS; j++)
            if (food[i][j] > maxFood)
                maxFood = food[i][j];

    return maxFood;
}