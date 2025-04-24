#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;

int main()
{
    Employee pete( "Peter", 101, "March 2021");
    pete.print();

    cout << endl;

    ProductionWorker paul("Paul", 102, "September 2023", 1, 17.50);
    paul.print();

    return 0;
}