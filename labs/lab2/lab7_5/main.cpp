//lab: day 2
//monkey business

// KEY NOTES
//     If want to pass a single dimension array to function
//     you need to declare func in one of three ways:
//      1) myFunc(int *param)
//      2) myFunc(int param[10]) ** doc likes this one **
//      3) myFunc(int param[])

//look up difference between header and source file
// and which to use for these extra files.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//const
const int MONKEY = 3;
const int DAYS = 5;

//prototypes
void getFoodEaten(double[][DAYS]);
void displayAverage(double[][DAYS]);
void displayLeast(double[][DAYS]);
void displayMost(double[][DAYS]);

int main() {

    //array
    double monkeyIntake[MONKEY][DAYS];

    //get amounts
    getFoodEaten(monkeyIntake); //nested for loops, print monkey, day ask for food;

    //display
    displayAverage(monkeyIntake); // add all up then, divide by numMonkeys
    displayLeast(monkeyIntake); // find least monkey and day least was eaten
    displayMost(monkeyIntake); // find most monkey and day most eaten


    return 0;

}
