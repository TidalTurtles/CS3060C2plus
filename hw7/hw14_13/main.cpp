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

#include "FeetInches.h"
#include "FeetInches.cpp"
#include "RoomDimension.h"
#include "RoomDimension.cpp"



using namespace std;

int main() {

    FeetInches test1(1, 2);
    FeetInches test2(3, 4);

    RoomDimension livingRoom(test1, test2);

    FeetInches livingArea = livingRoom.roomArea();

    cout << livingArea.getInches();

    return 0;

}
