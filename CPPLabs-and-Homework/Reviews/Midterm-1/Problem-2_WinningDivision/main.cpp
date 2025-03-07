#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
double getSales(string division);
void findHighest(const vector<string> &divNames, const vector<double> &sales);

int main() {
    vector<string> divisions = {"Northeast", "Southeast", "Northwest", "Southwest"};
    vector<double> sales(4);
    double tempSales;

    // Get sales data for each division
    for (int i = 0; i < divisions.size(); i++) {
        tempSales = getSales(divisions[i]);
        sales.push_back(tempSales);
    }

    // Determine and display the highest sales division
    findHighest(divisions, sales);

    return 0;
}

// Function to get sales with input validation
double getSales(string division) {
    double sales;
    do {
        cout << "Enter sales for " << division << " division: $";
        cin >> sales;
        if (sales < 0) {
            cout << "Error: Sales cannot be negative. Please re-enter.\n";
        }
    } while (sales < 0);

    return sales;
}

// Function to find and display the division with the highest sales
void findHighest(const vector<string> &divNames, const vector<double> &sales) {
    int highestIndex = 0;

    for (int i = 1; i < sales.size(); i++) {
        if (sales[i] > sales[highestIndex]) {
            highestIndex = i;
        }
    }

    cout << "\nThe highest grossing division is " << divNames[highestIndex]
         << " with sales of $" << sales[highestIndex] << endl;
}