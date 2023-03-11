/*
 *
 * RoomDimension class (for hw 14.13)
 *
 *      only complexity comes from using objects instead of simple var types
 *      wants two "dimension" objects (length and width)
 *
 *      normal getters, setters, and constructors
 *
 *      Area function wanted
 *          takes the two FeetInches objects and calls their multiply function
 *          returns resultant FeetInches object (area of feet and area of inches?)
 *
 */

#ifndef HW14_13_ROOMDIMENSION_H
#define HW14_13_ROOMDIMENSION_H


class RoomDimension {

private:
    FeetInches length;
    FeetInches width;

public:
    //construct
    RoomDimension(FeetInches, FeetInches);

    //getters
    FeetInches getLength();
    FeetInches getWidth();

    //setters
    void setLength(FeetInches);
    void setWidth(FeetInches);

    //other
    FeetInches roomArea();

};


#endif //HW14_13_ROOMDIMENSION_H
