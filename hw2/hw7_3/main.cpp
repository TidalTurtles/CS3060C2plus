/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 30 Jan 23
 *
 * 7.3: Chips and Salsa
 *
 *          make two arrays (one for flavors and one for number sold)
 *          iterate through to get the number sold per flavor
 *          finally print out sales for all && total sales && name of highest and lowest sellers
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

//bonus files
#include "getNumber.cpp";
#include "displayTable.cpp";

//prototypes
int getNumber(string flavorName);
void printTable(string flavorName[], int numSold[]);

//Const
const int ARRAY_LENGTH = 5;

int main()
{

    //arrays and vars
    string flavors[ARRAY_LENGTH] = {"mild", "medium", "sweet", "hot ", "zesty"};
    int sold[ARRAY_LENGTH];

    int lowest, highest, totalJars;

    //get number sold for each
    for(int i = 0; i < ARRAY_LENGTH; i++){

        cout << "\nFlavor: " << flavors[i] << endl;
        sold[i] = getNumber(flavors[i]);

    }

    //calc total, find lowest, find highest
    totalJars = sold[0];
    lowest = 0;
    highest = 0;

    for(int i = 1; i < ARRAY_LENGTH; i++){

        totalJars += sold[i];
        //if lowest
        if(sold[i] < sold[lowest]){
            lowest = i;
        }
        //if highest
        if(sold[i] > sold[highest]){
            highest = i;
        }

    }

    //display needed
    cout << endl;
    printTable(flavors, sold);
    cout << "\nThe Total jars sold was " << totalJars << endl;
    cout << "The lowest seller was " << flavors[lowest] << " with " << sold[lowest] << " sales." << endl;
    cout << "The highest seller was " << flavors[highest] << " with " << sold[highest] << " sales." << endl;

    return 0;

}

