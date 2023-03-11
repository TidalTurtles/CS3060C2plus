/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 *
 * 6.6: In Lab test trial
 */

#include <iostream>
#include <cmath>
using namespace std;

//prototypes
double kineticEnergy(double, double);

int main()
{

    //vars
    double mass;
    double velocity;
    double kinetic;

    //get mass
    cout << "Enter the mass of the object: ";
    cin >> mass;
    cout << endl;

    //get velocity
    cout << "Enter the objects velocity: ";
    cin >> velocity;
    cout << endl;

    //get Kinetic
    kinetic = kineticEnergy(mass, velocity);

    //display kinetic
    cout << "The Objects Kinetic Energy is " << kinetic << " joules.\n";

    return 0;

}

//kinetic energy function
// KE = 1/2 mv^2
double kineticEnergy(double mass, double velocity)
{

    double ke;

    ke = .5 * mass * velocity * velocity;
    // in class was return equation above

    return ke;

}
