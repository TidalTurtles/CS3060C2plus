//
// Created by noah holt on 4/5/23.
//

#ifndef LAB7_GRADEDACTIVITY_H_H
#define LAB7_GRADEDACTIVITY_H_H

class GradedActivity{

protected:
    double score;

public:
    GradedActivity()
    {
        score = 0.0;
    }

    GradedActivity(double s)
    {
        score = s;
    }

};

#endif //LAB7_GRADEDACTIVITY_H_H
