//
// Created by noah holt on 4/5/23.
//

#include "FinalExam.h"
#include <iostream>

using namespace std;

void set(int questions, int missed)
{

    double numericScore;

    numQuestions = questions;
    numMissed = missed;

    pointsEach = 100.0 / numQuestions;

    numericScore = 100.0 - (missed * pointsEach);

    setScore(numericScore);

    adjustScore();

}

void adjustScore()
{

    double fraction = score - static_cast<int>(score);

    if(fraction >= 0.5)
    {
        score += (1.0 - fraction);
    }

}

