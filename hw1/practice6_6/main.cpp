/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date:
 * Practice for tests
 *
 * 6.6 Kinetic Energy
 *      function with 2 inputs returns KE
 *      test by getting userInput
 *
 */

#include <iostream>
using namespace std;

double kineticEnergy(double mass, double velocity);
double getDouble();

int main() {

    cout << "Mass: " << std::endl;
    double objectMass = getDouble();
    cout << "Velocity:" << std::endl;
    double objectVelocity = getDouble();

    double kinetic = kineticEnergy(objectMass, objectVelocity);

    cout << "\nThe objects Kinetic Energy was " << kinetic;

} //main

double kineticEnergy(double mass, double velocity)
{

    double kE = .5 * mass * velocity *velocity;
    return kE;

} //KE

//borrowed from hw6_18
double getDouble()
{
    double readIn = -1;

    while(readIn < 0){
        cout << "Please provide a positive double: ";
        cin >> readIn;

        if(cin.fail()){
            cout << "That wasn't even a number.\n";
            cin.clear();
            cin.ignore(100, '\n');
            readIn = -1;
        } // if failed
    } //while too small

    return readIn;

} //get double
