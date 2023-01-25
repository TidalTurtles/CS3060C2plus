/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 23 Jan 23
 *
 * 6.18: Paint Job Estimator
 *      User input needed:
 *          num rooms
 *          sqrft per room
 *          price per gallon of paint
 *
 *      display:
 *          num gallons paint required
 *          hours of labor
 *          cost of paint (total)
 *          labor total
 *          over all cost of job
 */

#include <iostream>
#include <cmath>
using namespace std;

//constants
#define LABOR 25
#define SQRFT_PER_GALLON 110
#define TIME_PER_GALLON 8

#define MIN_ROOM 1
#define MIN_PRICE 10.00

//prototypes
int getRooms();
double getPrice();
int squareFoot(int roomNumber);

int main()
{

    //get inputs
    int numRooms = getRooms();
    double pricePerGallon = getPrice();
    int totalSquareFeet = 0;

    for(int i = 0; i < numRooms; i++){
        totalSquareFeet += squareFoot(i+1);
    }

    //calculations
    double paintCost;
    double laborCost;
    double numGallons;
    double laborHours;

    numGallons = totalSquareFeet / SQRFT_PER_GALLON;
    paintCost = round(numGallons + 0.5) * pricePerGallon;//round up since you cant leave patches unpainted
    laborHours = numGallons * 8;
    laborCost = LABOR * laborHours;
    double totalCost = paintCost + laborCost;

    //output (couldn't find how to print 2 decimal places so sorry about that
    cout << "\nThe number of gallons of paint needed is " << round(numGallons + 0.5) << std::endl;
    cout << "The hours of labor will be " << setprecision(2) << laborHours << std::endl; //can leave as double
    cout << "Total cost for just paint at $" << pricePerGallon << " is " << setprecision(2) << paintCost << std::endl;
    cout << "Total labor cost at $" << LABOR << " an hour is $" << setprecision(2) << laborCost << std::endl;
    cout << "That brings the total cost to $" << setprecision(2) << totalCost << std::endl;

    return 0;
}

int getRooms()
{

    int intake = 0;

    while(intake < MIN_ROOM){
        cout << "How many rooms need paint? ";
        cin >> intake;

        //got help here: https://cplusplus.com/forum/beginner/182128/
        if(cin.fail()){
            cout << "That wasn't even a number.\n";
            cin.clear();
            cin.ignore(100, '\n');
            intake = 0;
        } // if failed
    } //while too small

    return intake;

} //get rooms

double getPrice()
{
    double readIn = 0;

    while(readIn < MIN_PRICE){
        cout << "What is the price of the paint you would like? ";
        cin >> readIn;

        if(cin.fail()){
            cout << "That wasn't even a number.\n";
            cin.clear();
            cin.ignore(100, '\n');
            readIn = 0;
        } // if failed
    } //while too small

    return readIn;

} //get price

int squareFoot(int roomNumber)
{

    int roomArea = -5;

    while(roomArea < 0) {
        cout << "How many square feet is room number " << roomNumber << ": ";
        cin >> roomArea;

        if(cin.fail()){
            cout << "That wasn't even a number.\n";
            cin.clear();
            cin.ignore(100, '\n');
            roomArea = -5;
        } // if failed
    } //while too small

    return roomArea;

} //get square footage
