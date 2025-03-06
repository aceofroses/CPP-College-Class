//
//  main.cpp
//  LabReportProb 1
//
//  Created by Garrett Jackson on 1/21/25.
//

#include <iostream>
using namespace std;

int main()
{
    double payAmount, payPeriods, annualPay;
    
    payAmount = 2200.0; // Paid bi-weekly
    
    payPeriods = 26; // 26 paychecks a year
    
    annualPay = payAmount * payPeriods;
    
    cout << "Your total annual pay is: " << annualPay << endl;
    
    return 0;
}
