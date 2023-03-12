//
// For notes see header file
//
#include <iostream>

#include "RoomCarpet.h"

#pragma region ConstructGetSet

//construct
RoomCarpet::RoomCarpet(RoomDimension room, double price)
{
    gatherArea = room;
    pricePerSqrFoot = price;
}

RoomCarpet::RoomCarpet() {}

//getters
RoomDimension RoomCarpet::getRoom()
{
    return gatherArea;
}

double RoomCarpet::pricePer()
{
    return pricePerSqrFoot;
}

//setters
void RoomCarpet::setRoom(RoomDimension room)
{
    gatherArea = room;
}

void RoomCarpet::setPrice(double price)
{
    pricePerSqrFoot = price;
}

#pragma endregion

double RoomCarpet::totalCost()
{

    FeetInches area = gatherArea.roomArea();
    int inchesToFeet = area.getInches() / 12;
    double value;

    if((area.getInches()%12) != 0){
        inchesToFeet++; //round up if remaining inches
    }

    value = pricePerSqrFoot * (area.getFeet() + inchesToFeet);

    return value;

}
