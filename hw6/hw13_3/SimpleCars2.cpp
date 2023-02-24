//
// Created by noah holt on 2/24/23.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "SimpleCars2.h"

using namespace std;

//Constructor
SimpleCars2::SimpleCars2(int year, string name)
{

    yearModel = year;
    modelName = name;
    speed = 0;

}

//accessors
int SimpleCars2::getYear()
{
    return yearModel;
}

string SimpleCars2::getModel()
{
    return modelName;
}

int SimpleCars2::getSpeed()
{
    return speed;
}

//specialty functions
//accelerate speed += 5
//brake speed -= 5
void SimpleCars2::accelerate()
{
    speed += 5;
}

void SimpleCars2::brake()
{
    if(speed > 0){
        speed -= 5;
    } else {
        cout << "\nYou are fully stopped!\n";
    }
}

