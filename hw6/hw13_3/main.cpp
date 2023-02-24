/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 27 feb 23
 *
 * 13.3: Car Class
 *
 *          write class with given vars and funcs
 *
 *          afterwards do some testing
 *
 *          call accelerate 5 times
 *          after each call, display speed
 *
 *          brake 5 times
 *          after each, display speed
 *
 */

#include <iostream>
#include "SimpleCars2.h"
#include "SimpleCars2.cpp"

using namespace std;


int main() {

    SimpleCars2 jett(1997, "Jetta");

    //Test Accelerate 5 times
    cout << "\nAccelerating!\n" <<jett.getSpeed() << endl;
    jett.accelerate();
    cout << jett.getSpeed() << endl;
    jett.accelerate();
    cout << jett.getSpeed() << endl;
    jett.accelerate();
    cout << jett.getSpeed() << endl;
    jett.accelerate();
    cout << jett.getSpeed() << endl;
    jett.accelerate();
    cout << jett.getSpeed() << endl;

    //test brake 5 times
    cout << "\nBraking!\n";
    jett.brake();
    cout << jett.getSpeed() << endl;
    jett.brake();
    cout << jett.getSpeed() << endl;
    jett.brake();
    cout << jett.getSpeed() << endl;
    jett.brake();
    cout << jett.getSpeed() << endl;
    jett.brake();
    cout << jett.getSpeed() << endl;
    jett.brake();

    return 0;

}
