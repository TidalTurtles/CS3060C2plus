/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 13 feb 23
 *
 * 11.11: Monthly Budget
 *
 *          need Budget struct:
 *              housing, utilities, housing expenses
 *              transport, food, medical, insurance
 *              entertainment, clothes, misc.
 *
 *          pass struct to func asking user for amounts (each cat above)
 *
 *          then,
 *          pass to func displaying report over/under for each and over/under budget
 *
 *          summary display:
 *              over/under per cat
 *              over under total budget
 *
 */

#include <iostream>
#include "budgetStruct.h"
#include "userBudget.h"
#include "displayOverUnder.h"

using namespace std;
using namespace monthlyBudgetStruct;
using namespace userInputBudget;
using namespace overUnder;

//prototypes
MonthlyBudget userExpenses();
void displayDifferences(MonthlyBudget, MonthlyBudget);


int main()
{

    //
    //define goal budget values
    //
    MonthlyBudget expectations = {500.00, 150.00, 65.00, 50.00, 250.00,
                                  30.00, 100.00, 150.00, 75.00, 50.00};

    //this is a little big but not sure how else to do it so yeah...
    expectations.totalBudget = expectations.housing + expectations.utilities +expectations.houseExpense +
                                expectations.transport + expectations.food + expectations.medical + expectations.insurance
                                + expectations.entertainment + expectations.clothes + expectations.misc;

    //func to ask for users monthly spending
    MonthlyBudget userInput = userInputBudget::userExpenses();

    //display differences
    overUnder::displayDifferences(expectations, userInput);

    return 0;

}
