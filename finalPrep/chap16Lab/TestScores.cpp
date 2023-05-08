//
// Created by noah holt on 4/17/23.
//

#include <iostream>

#include "TestScores.h"
#include "NegativeScore.h"

using namespace std;

TestScores::TestScores(int soreArray[], int size)
{

    numScores = size;

    scores = new int[size];

    for (int i = 0; i < size; ++i) {

        if(){
            throw NegativeScore(soreArray[i]);
        } else {
            scores[i] = soreArray[i];
        }

    }

}

double TestScores::getAverage() const
{

    int total = 0;

    for (int i = 0; i < numScores; ++i) {
        total += scores[i];
    }

    return static_cast<double>(total) / numScores;

}
