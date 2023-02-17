
//
// Created by noah holt on 2/17/23.
//

#include <iostream>
#include "binStruct.h"

using namespace std;
using namespace productBinStruct;

#ifndef HW11_14_ADDNUMBERS_H
#define HW11_14_ADDNUMBERS_H

namespace addingParts
{

    void addParts(productBin *risingUp){

        //declare vars
        int placeToFind;
        int inAddition = 0;
        string thisOne;
        bool finding = true;

        cout << "\nWhich Part would you like to add to? ";
        cin >> thisOne;

        while (finding) {
            for (int i = 0; i < 10; i++) {
                if (thisOne.compare(risingUp[i].itemName) == 0) {
                    placeToFind = i;
                    finding = false;
                    break;
                }
            }
            if(finding){
                cout << "\nYour product did not have a bin.\nPlease list a product with a bin. (list found above)\n";
            }

        } //while finding the bin

        while(inAddition < 1) {
            cout << "\nHow many are you adding to the bin? (1 or more please) ";
            cin >> inAddition;

            //got help here: https://cplusplus.com/forum/beginner/182128/
            if (cin.fail()) {
                cout << "That wasn't even an integer\n";
                cin.clear();
                cin.ignore(100, '\n');
                inAddition = -1;
            } // if failed
        } //while getting user input number

        risingUp[placeToFind].numberInHouse = risingUp[placeToFind].numberInHouse + inAddition;

        return;

    }

}

#endif //HW11_14_ADDNUMBERS_H
