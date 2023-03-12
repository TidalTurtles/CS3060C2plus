/*
 *
 * From 14.11 in text book
 *      simple class
 *
 *      two private vars
 *      normal getters, setters, and constructor
 *
 *      wants a multiply function
 *          gets passed another FeetInches object
 *          multiplies feet and inches (stores in new object)
 *          returns said new object.
 *
 */

#ifndef HW14_13_FEETINCHES_H
#define HW14_13_FEETINCHES_H


class FeetInches {

private:
    int feet;
    int inches;

public:
    //construct
    FeetInches(int, int);
    FeetInches();

    //getters
    int getFeet();
    int getInches();

    //setters
    void setFeet(int);
    void setInches(int);

    //other
    FeetInches multiply(FeetInches);

};


#endif //HW14_13_FEETINCHES_H
