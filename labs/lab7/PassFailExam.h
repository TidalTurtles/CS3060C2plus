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
    PassFailExam() : PassFailActivity(){
        numQuestions = 0;
        numMissed = 0;
        pointsEach = 0.0;
    }

    PassFailExam(int questions, int missed, double mps) : PassFailActivity(){


    }

};

#endif //LAB7_PASSFAILEXAM_H
