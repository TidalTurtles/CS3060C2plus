//
// Created by noah holt on 4/5/23.
//

#include <iostream>
#include "Essay.h"

using namespace std;

void Essay::setGrammarPoints(double p)
{

    //validate
    if(p < 0 || p > 30){
        cout << "Invalid Number of grammar points.\n";
        exit(EXIT_FAILURE);
    }

    //assign
    grammarPoints = p;

}

void Essay::setSpellingPoints(double p)
{

    //validate
    if(p < 0 || p > 30){
        cout << "Invalid Number of spelling points.\n";
        exit(EXIT_FAILURE);
    }

    //assign
    spellingPoints = p;

}

void Essay::setLengthPoints(double p)
{

    //validate
    if(p < 0 || p > 30){
        cout << "Invalid Number of Length points.\n";
        exit(EXIT_FAILURE);
    }

    //assign
    lengthPoints = p;

}

void Essay::setContentPoints(double p)
{

    //validate
    if(p < 0 || p > 30){
        cout << "Invalid Number of content points.\n";
        exit(EXIT_FAILURE);
    }

    //assign
    contentPoints = p;

}

double Essay::getScore()
{

    double score = contentPoints + spellingPoints + lengthPoints + grammarPoints;
    return score;

}

char Essay::getLetterGrade()
{

    double score = getScore();

    if (score > 89){
        return 'A';
    } else if (score > 79){
        return 'B';
    } else if (score > 69){
        return 'C';
    } else if (score > 59){
        return 'D';
    } else {
        return 'F';
    }

}
