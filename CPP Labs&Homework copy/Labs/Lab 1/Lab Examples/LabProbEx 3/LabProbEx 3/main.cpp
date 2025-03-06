//
//  main.cpp
//  LabProbEx 3
//
//  Created by Garrett Jackson on 1/21/25.
//

#include <iostream>
using namespace std;

int main()
{
    // Generated sales percentage
    double sales_percent;
    sales_percent = .58;
    
    // Projected sales in dollars
    
    double company_sales;
    company_sales = 8600000.0;
    
    // Profit from the East Coast
    
    double profits;
    
    profits = company_sales * sales_percent;
    
    // Print the result
    
    cout << "The profits from the East Coast are " << profits << endl;
    
    return 0;
    
}
