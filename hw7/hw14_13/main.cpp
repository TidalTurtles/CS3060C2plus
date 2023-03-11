/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 27 feb 23
 *
 * 14.13: Carpet
 *
 *      Write 2 classes (3 really)
 *
 *          RoomDimensions (needs FeetInches class from 14.11)
 *          RoomCarpet
 *
 *          will describe in class cpp file
 *
 *      then get user to enter dimension of room
 *      enter price per square foot of carpet
 *      calc total price
 *      Display for user
 *
 */

#include <iostream>
#include <iomanip>

#include "FeetInches.h"
#include "FeetInches.cpp"
#include "RoomDimension.h"
#include "RoomDimension.cpp"
#include "RoomCarpet.h"
#include "RoomCarpet.cpp"

using namespace std;

int main() {

    FeetInches dimension1;
    FeetInches dimension2;
    double priceOfCarpet;
    int pickMe;

    cout << "What is the first dimension of the room in feet?: ";
    cin >> pickMe;
    dimension1.setFeet(pickMe);

    cout << "What is the second dimension of the room in feet?: ";
    cin >> pickMe;
    dimension2.setFeet(pickMe);

    cout << "What is the price per square foot of carpet?: ";
    cin >> priceOfCarpet;

    RoomDimension livingRoom(dimension1, dimension2);

    RoomCarpet priceOfLiving(livingRoom, priceOfCarpet);

    cout << "Cost of carpet for your living room is " << setprecision(4) << priceOfLiving.totalCost();

    return 0;

}
