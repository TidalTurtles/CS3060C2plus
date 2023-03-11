/*
 *
 * Room Carpet Class
 *
 *      Wants a RoomDimension object
 *      a price attribute
 *
 *      normal getters and setters and constructors
 *
 *      one func to return total cost of carpet
 *
 */

#ifndef HW14_13_ROOMCARPET_H
#define HW14_13_ROOMCARPET_H


class RoomCarpet {

private:
    RoomDimension gatherArea;
    double pricePerSqrFoot;

public:
    //construct
    RoomCarpet(RoomDimension, double);
    RoomCarpet();

    //getters
    RoomDimension getRoom();
    double pricePer();

    //setters
    void setRoom(RoomDimension);
    void setPrice(double);

    //other
    double totalCost();

};


#endif //HW14_13_ROOMCARPET_H
