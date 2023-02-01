//
// Created by noah holt on 2/1/23.
// return higest position
//
#include <iostream>
using namespace std;

int posOfLargest(int sold[], int size)
{

    int pos = 0;

    for (int i = 1; i < size; i++){

        if (size[i] > size[pos]){
            pos = i;
        }

    }

    return pos;

}
