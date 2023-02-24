/*
 *
 * For each piece of month budget
 *
 * just add to total as you go
 *
 */

#include <iostream>
#include "budgetStruct.h"

using namespace std;
using namespace monthlyBudgetStruct;

#ifndef HW11_11_USERBUDGET_H
#define HW11_11_USERBUDGET_H

namespace userInputBudget
{

    MonthlyBudget userExpenses()
    {

        MonthlyBudget inputExpenses;

        cout << "How much was housing this month? ";
        cin >> inputExpenses.housing;
        inputExpenses.totalBudget = inputExpenses.housing;

        cout << "How much was utilities this month? ";
        cin >> inputExpenses.utilities;
        inputExpenses.totalBudget += inputExpenses.utilities;

        cout << "How much were housing expenses this month? ";
        cin >> inputExpenses.houseExpense;
        inputExpenses.totalBudget += inputExpenses.houseExpense;

        cout << "How much was transportation this month? ";
        cin >> inputExpenses.transport;
        inputExpenses.totalBudget += inputExpenses.transport;

        cout << "How much was food this month? ";
        cin >> inputExpenses.food;
        inputExpenses.totalBudget += inputExpenses.food;

        cout << "How much were medical expenses this month? ";
        cin >> inputExpenses.medical;
        inputExpenses.totalBudget += inputExpenses.medical;

        cout << "How much was insurance this month? ";
        cin >> inputExpenses.insurance;
        inputExpenses.totalBudget += inputExpenses.insurance;

        cout << "How much was entertainment this month? ";
        cin >> inputExpenses.entertainment;
        inputExpenses.totalBudget += inputExpenses.entertainment;

        cout << "How much was clothing this month? ";
        cin >> inputExpenses.clothes;
        inputExpenses.totalBudget += inputExpenses.clothes;

        cout << "How much were miscellaneous purchase this month? ";
        cin >> inputExpenses.misc;
        inputExpenses.totalBudget += inputExpenses.misc;

        return inputExpenses;

    }

}

#endif //HW11_11_USERBUDGET_H
