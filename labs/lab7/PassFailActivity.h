//
// Created by noah holt on 4/5/23.
//

#ifndef LAB7_PASSFAILACTIVITY_H
#define LAB7_PASSFAILACTIVITY_H

#include "GradedActivity.h"

class PassFailActivity : public GradedActivity{

protected:
    double minPassingScore;

public:
    //default construct
    PassFailActivity() : GradedActivity()
    { minPassingScore = 0.0; }

    //construct
    PassFailActivity(double mps) : GradedActivity()
    { minPassingScore = mps; }

    //mutator
    void setMinPassingScore(double mps)
    { minPassingScore = mps; }

    //accessors
    double getMinPassingScore() const
    { return minPassingScore; }

    char getLetterGrade() const;

};

#endif //LAB7_PASSFAILACTIVITY_H
