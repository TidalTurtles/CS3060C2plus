
/*
 * return input number.
 * number must be 0 or more
 */

#include <iostream>
using namespace std;

int getNumber(string flavorName)
{

    int numberGiven;

    cout << "How many jars of " << flavorName <<" were sold? ";
    cin >> numberGiven;

    while (numberGiven < 0 || cin.fail()){

        cout << "Looking for a Positive number or 0.\n";
        //clearing buffer
        cin.clear();
        cin.ignore(100, '\n');

        cout << "Proper number of jars please? ";
        cin >> numberGiven;

    }

    return numberGiven;

}
