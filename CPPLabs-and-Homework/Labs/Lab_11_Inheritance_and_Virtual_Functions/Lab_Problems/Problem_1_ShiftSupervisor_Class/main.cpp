#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
using namespace std;

int main()
{
    ProductionWorker pw( "Pete", 171, "Oct 2022", 1, 20.5 );
    pw.print();
    cout << "---------" << endl;
    ShiftSupervisor ss( "Micky", 112, "Feb 2018", 30000, 4000 );
    ss.print();

    return 0;
}