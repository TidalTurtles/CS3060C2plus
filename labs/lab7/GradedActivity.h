//
// Created by noah holt on 4/5/23.
//

#ifndef LAB7_GRADEDACTIVITY_H_H
#define LAB7_GRADEDACTIVITY_H_H

class GradedActivity{

protected:
    double score;

public:
    // default construct
    GradedActivity()
    {
        score = 0.0;
    }
    //construct
    GradedActivity(double s)
    {
        score = s;
    }

    //mutator
    void setScore(double s)
    { score = s; }

    //accessor
    double getScore() const
    { return score; }

    char getLetterGrade() const;

};

#endif //LAB7_GRADEDACTIVITY_H_H
