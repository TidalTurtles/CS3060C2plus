
/*
 * Display format
 * info needed to print:
 *      Flavor: name    Num Sold: num
 */

#include <iostream>
using namespace std;

void printTable(string flavorName[], int numSold[])
{

    for(int i = 0; i < flavorName->length() + 1; i++){

        cout << "Flavor: " << flavorName[i] << "\t" << "Number Sold: " << numSold[i] << endl;

    }

}
