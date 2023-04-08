//
// Created by noah holt on 4/5/23.
//

#include "GradedActivity.h"
#include <iostream>

using namespace std;

char getLetterGrade() const
{

    char letterGrade;

    if(score > 89){
        letterGrade = 'A';
    }

    return letterGrade

}
