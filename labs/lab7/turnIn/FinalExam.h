//
// Created by noah holt on 4/5/23.
//

#ifndef LAB7_FINALEXAM_H
#define LAB7_FINALEXAM_H


class FinalExam : public GradedActivity {

private:
    int numQuestions;
    double pointsEach;
    int numMissed;

public:

    FinalExam()
    {
        numQuestions = 0;
        pointsEach = 0.0;
        numMissed = 0;
    }

};

#endif //LAB7_FINALEXAM_H
