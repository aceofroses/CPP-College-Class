#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 5;
string salsa_names[SIZE] = { "mild", "medium", "sweet", "hot", "zesty" };
int salsa_sales[SIZE] = {0};  // Initialize sales array to 0

// Prototypes
void salsaNumbers(string a[], int b[]);
int totalSales(int b[]);

int main()
{
    // Get user input
    salsaNumbers(salsa_names, salsa_sales);

    // Display salsa sales
    cout << "\nSalsa Sales Report:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << salsa_names[i] << ": " << salsa_sales[i] << " jars sold.\n";
    }

    // Call totalSales and display the result
    int sales_total = totalSales(salsa_sales);
    cout << "Total Salsa Sales: " << sales_total << " jars.\n";

    return 0;
}

// Function to input sales numbers
void salsaNumbers(string a[], int b[])
{
    for (int i = 0; i < SIZE; i++)
    {
        do {
            cout << "Enter the sales for " << a[i] << ": ";
            cin >> b[i];

            if (b[i] < 0)
            {
                cout << "Error: Sales cannot be negative. Try again.\n";
            }
        } while (b[i] < 0);
    }
}

// Function to calculate total sales
int totalSales(int b[])
{
    int sales_total = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sales_total += b[i];
    }
    return sales_total;
}