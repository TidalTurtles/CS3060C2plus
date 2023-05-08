// 15.1
// lab 6?
//

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

void displayInfo(ProductionWorker);


int main()
{
    ProductionWorker pw("John Jones", "123", "10/12/2010", "Yes", 2, 22.00);
    displayInfo(pw);
    return 0;
}

///the displayInfo function displays a 
//production workers employment information

void displayInfo(ProductionWorker e)
{
    cout << setprecision(2) << fixed << showpoint;
    cout << "Name: " << e.getName() << endl;
    cout << "Number: " << e.getNumber() << endl;
    cout << "Hire Date: " << e.getHireDate() << endl;
    cout << "Disability: " << e.getDisability() << endl;
    cout << "Shift: " << e.getShiftName() << endl;
    cout << "Shift Number: " << e.getShiftNumber() << endl;
    cout << "Pay Rate: " << e.getPayRate() << endl;
}
