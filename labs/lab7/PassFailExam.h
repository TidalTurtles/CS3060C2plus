//
// Created by noah holt on 4/5/23.
//

#ifndef LAB7_PASSFAILEXAM_H
#define LAB7_PASSFAILEXAM_H

#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity{

private:
    int numQuestions;
    double pointsEach;
    int numMissed;

public:
    //default construct
    PassFailExam() : PassFailActivity(){
        numQuestions = 0;
        numMissed = 0;
        pointsEach = 0.0;
    }

    //mutator
    void set(int q, int m);

    //construct
    PassFailExam(int questions, int missed, double mps) : PassFailActivity(mps)
    { set(questions, missed); }

    //accessors
    int getNumQuestions() const
    { return numQuestions; }

    double getPointsEach() const
    { return pointsEach; }

    int getNumMissed() const
    { return numMissed; }

};

#endif //LAB7_PASSFAILEXAM_H
