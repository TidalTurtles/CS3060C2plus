//
// Created by noah holt on 4/5/23.
//

#include "PassFailActivity.h"
#include <iostream>

using namespace std;

char PassFailActivity::getLetterGrade() const
{

    char letterGrade;

    if (score >= minPassingScore){
        letterGrade = 'P';
    } else {
        letterGrade = 'F';
    }

    return letterGrade

}
