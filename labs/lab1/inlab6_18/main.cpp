/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 *
 * 6.18 In lab
 *
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//prototypes
int getNumberOfRooms();
double getPaintPrice();
double getWallArea();
int numGallons(double);
double laborHours(double);
void displayCosts(int, double, double);

//constants
const int AREA_PER_GALLON = 110;
const double LABOR_RATE = 25.0;

int main() {

    //vars
    int numRooms;
    double paintPrice;
    int totalWallArea = 0;
    int gallons;
    double hours;

    //get num rooms
    numRooms = getNumberOfRooms();

    //get price of paint
    paintPrice = getPaintPrice();

    //get total area
    for(int i = 0; i < numRooms; i++){
        int wallArea;
        cout << "Room " << i+1 << ":";
        wallArea = getWallArea();
        totalWallArea += wallArea;
    }

    //calc num gallons
    gallons = numRooms(totalWallArea);

    //calc labor hours

    //display charges

    return 0;
}

