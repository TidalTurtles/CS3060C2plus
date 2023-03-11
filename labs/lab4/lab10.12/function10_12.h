//
// Created by noah holt on 2/22/23.
//

#include <iostream>
using namespace std;

#ifndef LAB10_12_FUNCTION10_12_H
#define LAB10_12_FUNCTION10_12_H

namespace funcs
{

    bool hasLength(char[], int minimum)
    {

        //while *str != '\0'

    }

    bool hasUpper(char[])
    {

    }

    bool hasLower(char[])
    {

    }

    bool hasDigit(char[])
    {

    }

    //could be char* str[], char* str, char str[],
    //first two are pointers
    // if just array last char does not need to be \0
    bool isValid(char str[])
    {

        bool status = false;

        if (hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str)){
            status = true;
        }

        return status;

    }

    void displayResults(char[])
    {



    }

}

#endif //LAB10_12_FUNCTION10_12_H
