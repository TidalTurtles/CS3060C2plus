/*
 *
 * Trying something new
 *
 * Never tried header files
 *
 *  in 11.8 struggled passing structs back and fourth so trying to define
 *  in header file for this one.
 *
 */

#include <iostream>

using namespace std;

#ifndef HW11_11_BUDGETSTRUCT_H //pre included when creating header with IDE
#define HW11_11_BUDGETSTRUCT_H //pre included when creating header with IDE

namespace monthlyBudgetStruct
{

    struct MonthlyBudget{

        double housing;
        double utilities;
        double houseExpense;
        double transport;
        double food;
        double medical;
        double insurance;
        double entertainment;
        double clothes;
        double misc;
        double totalBudget;

    };



}

#endif //HW11_11_BUDGETSTRUCT_H //pre included when creating header with IDE
