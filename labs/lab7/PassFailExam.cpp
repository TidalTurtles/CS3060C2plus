//
// Created by noah holt on 4/5/23.
//

#include "PassFailExam.h"
#include <iostream>

using namespace std;

void PassFailExam::set(int questions, int missed)
{

    double numericScore;

    //set both
    numQuestions = questions;
    numMissed = missed;

    //calc points per
    pointsEach = 100.0 / numQuestions;

    //calc score
    numericScore = 100.0 - (missed * pointsEach);

    //call inherited
    setScore(numericScore);

}
