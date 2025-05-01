#include <iostream>
#include <map> //map library
using namespace std;

void display_employees(const map<string, int>& employees);

int main() { // Step 1: Initialize the employee map
    map<string, int> employees = {{"Alice", 50000},
                                   {"Bob", 45000},
                                   {"Charlie", 60000},
                                   {"David", 55000}};
    cout << "Initial employee map: " << endl;
    display_employees(employees);

    // Step 2: Add new employees: New employees can join the company, and their details should be added to the map.
    employees.emplace("Eve", 52000);
    employees.emplace("Frank", 48000);

    // Step 3: Update employee salaries: Employee salaries can be updated in the map.
    employees["Alice"] = 51000; 

    // Step 4: Remove employees: Employees can leave the company, and their details should be removed from the map.
    employees.erase("Charlie");

    // Step 5: Check if an employee exists: The system should be able to check if a specific employee is in the map

    //Using Charlie as the example since we removed them first
    string nameCheck = "Bob";
    if (employees.find(nameCheck) != employees.end()) {
        cout << "\n" << nameCheck << " exists with salary: $" << employees[nameCheck] << endl;
    } else {
        cout << "\n" << nameCheck << " does not exist in the records.\n";
    }

    // Step6: Display all employees and their salaries: Display all employees and their salaries in ascending order of employee names.

        //Function call to show employees, do not edit
    display_employees(employees);

     // Step 7: Find the highest and lowest salary: Determine and display the employee with the highest and lowest salary.

    //Variables for iterating through the map, setting pair as the iterator as the beginning of the map
    auto pair = employees.begin();

    //Use the iterator to point to the first map value
    string highestEmp, lowestEmp;
    highestEmp = lowestEmp = pair->first;

    //Use the itertator to point to the second map value
    int highestPay, lowestPay;
    highestPay = lowestPay = pair->second;

     //For loop that iterates through the map, checking the second value for the highest and lowest salary
    for(const auto& pair : employees)
     {
        //Checks 
        if(pair.second > highestPay)
        {
            highestEmp = pair.first;
            highestPay = pair.second;
        }

        if(pair.second < lowestPay)
        {
            lowestEmp = pair.first;
            lowestPay = pair.second;
        }
     }

    //Display the results
    cout << "Highest Paid Employee and Salary: " << highestEmp << ", " << highestPay << "\n"
          << "Lowest Paid Employee and Salary: " << lowestEmp << ", " << lowestPay << endl;

    
    return 0;

     
}

//Function declaration for display_employees
void display_employees(const map<string, int>& employees)
{

    cout << "All Employees and Salaries: " << endl;
    //For loop that will iterate through all current employees
    for(const auto& pair : employees)
    {
        cout << pair.first << ": $" << pair.second << endl << endl;
    }
}