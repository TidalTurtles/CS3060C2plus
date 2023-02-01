//
// Created by noah holt on 2/1/23.
// return total sales
//
#include <iostream>
using namespace std;

int getTotal(int sold[] , int size)
{

    int total = 0;

    for(int i = 0; i < size; i++){
        total += sold[i];
    }

    return total;

}
