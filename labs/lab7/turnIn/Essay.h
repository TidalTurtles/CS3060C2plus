//
// Created by noah holt on 4/5/23.
//

#ifndef LAB7_ESSAY_H
#define LAB7_ESSAY_H

#include "GradedActivity.h"

class Essay : public GradedActivity{

private:
    double grammarPoints;
    double spellingPoints;
    double lengthPoints;
    double contentPoints;

public:
    Essay()
    {
        grammarPoints = 0.0;
        spellingPoints = 0.0;
        lengthPoints = 0.0;
        contentPoints = 0.0;
    }

    // mutator
    void setGrammarPoints(double);
    void setSpellingPoints(double);
    void setLengthPoints(double);
    void setContentPoints(double);

    // Accessors
    double getGrammerPoints() const
    { return grammarPoints; }

    double getSpellingPoints() const
    { return spellingPoints; }

    double getLengthPoints() const
    { return lengthPoints; }

    double getContenPoints() const
    { return contentPoints; }

    double getScore();
    char getLetterGrade();

};

#endif //LAB7_ESSAY_H
