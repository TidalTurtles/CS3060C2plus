//
// Created by noah holt on 2/24/23.
//

#include <iostream>

using namespace std;

#ifndef HW13_3_SIMPLECARS2_H
#define HW13_3_SIMPLECARS2_H


class SimpleCars2 {

private:
    int yearModel;
    string modelName;
    int speed;

public:
    SimpleCars2(int, string);

    int getYear();
    string getModel();
    int getSpeed();

    void accelerate();
    void brake();

};


#endif //HW13_3_SIMPLECARS2_H
