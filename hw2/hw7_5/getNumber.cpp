
/*
 * return input number.
 * number must be 0 or more
 */

#include <iostream>
using namespace std;

double getNumber(int day)
{

    double numberGiven;

    cout << "How much food did this monkey eat on day " << day << "? ";
    cin >> numberGiven;

    while (numberGiven < 0 || cin.fail()){

        cout << "Looking for a Positive number or 0.\n";
        //clearing buffer
        cin.clear();
        cin.ignore(100, '\n');

        cout << "Proper amount of food please? ";
        cin >> numberGiven;

    }

    return numberGiven;

}
