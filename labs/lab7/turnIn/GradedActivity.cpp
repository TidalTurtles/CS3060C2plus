//
// Created by noah holt on 4/5/23.
//

#include "GradedActivity.h"
#include <iostream>

using namespace std;

char GradedActivity::getLetterGrade() const
{

    char letterGrade;

    if(score > 89){
        letterGrade = 'A';
    } else if(score > 79){
        letterGrade = 'B';
    } else if(score > 69){
        letterGrade = 'C';
    } else if(score > 59){
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }

    return letterGrade

}
