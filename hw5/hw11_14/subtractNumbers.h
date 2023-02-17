//
// Created by noah holt on 2/17/23.
//

#include <iostream>
#include "binStruct.h"

using namespace std;
using namespace productBinStruct;

#ifndef HW11_14_SUBTRACTNUMBERS_H
#define HW11_14_SUBTRACTNUMBERS_H

namespace deletingParts
{

    void removeParts(productBin *droppingDown){

        //declare vars
        int placeToFind;
        int inMinus = 0;
        string thisOne;
        bool finding = true;

        cout << "\nWhich Part would you like to remove from? ";
        cin >> thisOne;

        while (finding) {
            for (int i = 0; i < 10; i++) {
                if (thisOne.compare(droppingDown[i].itemName) == 0) {
                    placeToFind = i;
                    finding = false;
                    break;
                }
            }
            if(finding){
                cout << "\nYour product did not have a bin.\nPlease list a product with a bin. (list found above)\n";
            }

        } //while finding the bin

        while(inMinus < 1) {
            cout << "\nHow many are you removing from the bin? (1 or more please) ";
            cin >> inMinus;

            //got help here: https://cplusplus.com/forum/beginner/182128/
            if (cin.fail()) {
                cout << "That wasn't even an integer\n";
                cin.clear();
                cin.ignore(100, '\n');
                inMinus = -1;
            } // if failed
        } //while getting user input number

        droppingDown[placeToFind].numberInHouse = droppingDown[placeToFind].numberInHouse - inMinus;

        return;

    }

}

#endif //HW11_14_SUBTRACTNUMBERS_H
