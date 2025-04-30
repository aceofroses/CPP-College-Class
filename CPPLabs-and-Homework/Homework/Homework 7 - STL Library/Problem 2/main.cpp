#include <iostream>
#include <map> //map library
using namespace std;

int main() { // Step 1: Initialize the employee map
    map<string, int> employees = {{"Alice", 50000},
                                   {"Bob", 45000},
                                   {"Charlie", 60000},
                                   {"David", 55000}};
    cout << "Initial employee map: " << endl;
    // Step 2: Add new employees: New employees can join the company, and their details should be added to the map.


    // Step 3: Update employee salaries: Employee salaries can be updated in the map.


    // Step 4: Remove employees: Employees can leave the company, and their details should be removed from the map.


    // Step 5: Check if an employee exists: The system should be able to check if a specific employee is in the map.



    // Step6: Display all employees and their salaries: Display all employees and their salaries in ascending order of employee names.


    // Step 7: Find the highest and lowest salary: Determine and display the employee with the highest and lowest salary.
    
    
    //Function call to show employees, do not edit
    display_employees(employees);
}