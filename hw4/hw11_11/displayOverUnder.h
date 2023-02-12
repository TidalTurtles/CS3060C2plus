/*
 *
 * Display func needed
 *
 * can either print difference
 *            or make struct of differences
 *
 */

#include <iostream>
#include "budgetStruct.h"

using namespace std;
using namespace monthlyBudgetStruct;

#ifndef HW11_11_DISPLAYOVERUNDER_H
#define HW11_11_DISPLAYOVERUNDER_H

namespace overUnder {

    void displayDifferences(MonthlyBudget desired, MonthlyBudget whatHadHappenedWas) {

        cout << "\n\nFor housing this much you were $" << desired.housing - whatHadHappenedWas.housing
             << " compared to your goal." << endl;
        cout << "For utilities this much you were $" << desired.utilities - whatHadHappenedWas.utilities
             << " compared to your goal." << endl;
        cout << "For housing expenses this much you were $" << desired.houseExpense - whatHadHappenedWas.houseExpense
             << " compared to your goal." << endl;
        cout << "For transportation this much you were $" << desired.transport - whatHadHappenedWas.transport
             << " compared to your goal." << endl;
        cout << "For food this much you were $" << desired.food - whatHadHappenedWas.food << " compared to your goal."
             << endl;
        cout << "For medical expenses this much you were $" << desired.medical - whatHadHappenedWas.medical
             << " compared to your goal." << endl;
        cout << "For insurance this much you were $" << desired.insurance - whatHadHappenedWas.insurance
             << " compared to your goal." << endl;
        cout << "For entertainment this much you were $" << desired.entertainment - whatHadHappenedWas.entertainment
             << " compared to your goal." << endl;
        cout << "For clothing this much you were $" << desired.clothes - whatHadHappenedWas.clothes
             << " compared to your goal." << endl;
        cout << "For miscellaneous expenses this much you were $" << desired.misc - whatHadHappenedWas.misc
             << " compared to your goal." << endl;

        cout << "\nIn total, compared to your overall budget, the difference was $"
             << desired.totalBudget - whatHadHappenedWas.totalBudget << endl;
        if ((desired.totalBudget - whatHadHappenedWas.totalBudget) < 0) {
            cout << "You over spent and gotta do better with your money friendo... :(\n";
        } else {
            cout << "You saved and did good this month, well done! :)\n";
        }

    }

}

#endif //HW11_11_DISPLAYOVERUNDER_H
