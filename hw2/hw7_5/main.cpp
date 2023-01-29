/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 30 Jan 23
 *
 * 7.5: Monkey Business
 *
 *      Make 3x5 array to track monkey food consumption
 *      (ie monkey 1, monkey 2, monkey 3)
 *      then print the following:
 *          average food per day by all monkeys
 *          smallest amount eaten (by single monkey during the week)
 *          largest amount eaten (by single monkey in during the week)
 *
 */

#include <iostream>
#include <cmath>
#include "getNumber.cpp";
using namespace std;



//prototypes
double getNumber(int day);

//constants
const int NUM_MONKEY = 3;
const int WORK_DAYS = 5;


int main() {

    //array and vars
    double monkeyFoodIntake[NUM_MONKEY][WORK_DAYS];
    double monkey0Total = 0;
    double monkey1Total = 0;
    double monkey2Total = 0;
    double totalAllMonkey;
    double averageDay;
    double lowestIntake;
    double highestIntake;


    // fill array
    for(int i = 0; i < NUM_MONKEY; i++){

        cout << "Monkey " << i << ":" <<endl;

        for(int j = 0; j < WORK_DAYS; j++){

            monkeyFoodIntake[i][j] = getNumber(j+1);

        } // for j
    } // for i

    //calc total food and per monkey
    for(int i = 0; i < WORK_DAYS; i++){

        monkey0Total += monkeyFoodIntake[0][i];
        monkey1Total += monkeyFoodIntake[1][i];
        monkey2Total += monkeyFoodIntake[2][i];

    }

    totalAllMonkey = monkey0Total + monkey1Total + monkey2Total;
    averageDay = totalAllMonkey / WORK_DAYS;

    lowestIntake = monkey0Total;
    highestIntake = monkey0Total;

    //find low
    if (lowestIntake > monkey1Total){
        if(monkey1Total > monkey2Total){
            lowestIntake = monkey2Total;
        } else {
            lowestIntake = monkey1Total;
        }
    }

    //find high
    if (highestIntake < monkey1Total){
        if(monkey1Total < monkey2Total){
            highestIntake = monkey2Total;
        } else {
            highestIntake = monkey1Total;
        }
    }

    //display output
    cout << "\nAverage consumption per day by ALL monkeys is " << averageDay << " kgs of food!" << endl;
    cout << "Highest amount of food eaten by one monkey was " << highestIntake << " kgs of food!" << endl;
    cout << "Lowest amount of food eaten by one monkey was " << lowestIntake << " kgs of food!" << endl;


    return 0;

}
