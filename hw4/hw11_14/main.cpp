/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 20 feb 23
 *
 * 11.14: search function
 *
 *         create a bin struct that is:
 *              string called description
 *              int called num parts
 *
 *         make array of 10 bins with given data
 *
 *         2 funcs included:
 *               AddPart:
 *                  increase num parts in a bin
 *                  intake number
 *                  find part
 *                  add number to numParts
 *
 *               removePart:
 *                  decrease num parts
 *                  intake number
 *                  find part
 *                  subtract number from numPart
 *
 *
 *        Use case:
 *             print bins
 *
 *             user picks a bin OR quits program
 *
 *             if pick bin:
 *
 *                  add or remove parts (see above func outlines)
 *
 *             then loop back
 *
 */

#include <iostream>
#include "binStruct.h"

using namespace std;
using namespace productBinStruct;


int main() {
    
    //initialize vars
    productBin initialStart[10];
    bool looping = true;
    
    //create array
    //Funny story: I had to help jump my sisters car before this lol.
    initialStart[0] = {"Valve", 10};
    initialStart[1] = {"Bearing", 5};
    initialStart[2] = {"Bushing", 15};
    initialStart[3] = {"Coupling", 21};
    initialStart[4] = {"Flange", 7};
    initialStart[5] = {"Gear", 5};
    initialStart[6] = {"Gear Housing", 5};
    initialStart[7] = {"Vacuum Gripper", 25};
    initialStart[8] = {"Cable", 18};
    initialStart[9] = {"Rod", 12};
    
    //print array (adding this to the loop
    //Ask user to add, delete, or exit (loop till exit)
    while(looping){
        
        //print
        cout << "----------------------------------";
        cout << "Part Description\t\tNumber of Parts in the Bin";
        cout << "----------------------------------";
        cout << initialStart[0].itemName << "\t\t" << initialStart[0].numberInHouse;
        cout << initialStart[1].itemName << "\t\t" << initialStart[1].numberInHouse;
        cout << initialStart[2].itemName << "\t\t" << initialStart[2].numberInHouse;
        cout << initialStart[3].itemName << "\t\t" << initialStart[3].numberInHouse;
        cout << initialStart[4].itemName << "\t\t" << initialStart[4].numberInHouse;
        cout << initialStart[5].itemName << "\t\t" << initialStart[5].numberInHouse;
        cout << initialStart[6].itemName << "\t\t" << initialStart[6].numberInHouse;
        cout << initialStart[7].itemName << "\t\t" << initialStart[7].numberInHouse;
        cout << initialStart[8].itemName << "\t\t" << initialStart[8].numberInHouse;
        cout << initialStart[9].itemName << "\t\t" << initialStart[9].numberInHouse;
        cout << "----------------------------------\n\n";

        //ask what doing
        //just gonna get numbers 
            //0 = exit
            //1 = add
            //2 = subtract
        int optionChoice = -1;    
        while(optionChoice > 2 || optionChoice < 0) {
            cout << "Would you like to add(1) or subtract(2) from a bin? (to leave press 0 now)";
            cin >> optionChoice;

            //got help here: https://cplusplus.com/forum/beginner/182128/
            if (cin.fail()) {
                cout << "That wasn't even an integer\n";
                cin.clear();
                cin.ignore(100, '\n');
                optionChoice = -1;
            } // if failed
        } //while getting user input

        switch (optionChoice) {

            case 0:
                looping = false;
                break;

            case 1:
                //add
                break;

            case 2:
                //subtract
                break;

        } // switch for users choice
        
    } // while looping
    
    return 0;
    
}
