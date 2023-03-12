//
// for notes see header file
//

#include <iostream>

#include "FeetInches.h"

#pragma region ConstructGetSet

//construct
FeetInches::FeetInches(int f, int i)
{
    feet = f;
    inches = i;
}

FeetInches::FeetInches() {

}

//getters
int FeetInches::getFeet()
{
    return feet;
}

int FeetInches::getInches()
{
    return inches;
}

//setters
void FeetInches::setFeet(int f)
{
    feet = f;
}

void FeetInches::setInches(int i)
{
    inches = i;
}

#pragma endregion

FeetInches FeetInches::multiply(FeetInches change)
{
    FeetInches result(0, 0);
    int storage;

    storage = feet * change.getFeet();
    result.setFeet(storage);

    storage = inches * change.getInches();
    result.setInches(storage);

    return result;

}




