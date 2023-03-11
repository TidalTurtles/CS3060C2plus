//
// For notes see header file
//
#include <iostream>

#include "RoomDimension.h"

#pragma region ConstructGetSet

//construct
RoomDimension::RoomDimension(FeetInches l, FeetInches w) {
    length = l;
    width = w;
}

//getters
FeetInches RoomDimension::getLength()
{
    return length;
}

FeetInches RoomDimension::getWidth()
{
    return width;
}

//setters
void RoomDimension::setLength(FeetInches l)
{
    length = l;
}

void RoomDimension::setWidth(FeetInches w)
{
    width = w;
}

#pragma endregion

FeetInches RoomDimension::roomArea()
{

    FeetInches result(0, 0);

    result = length.multiply(width);

    return result;

}
