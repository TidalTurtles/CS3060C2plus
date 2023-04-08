//
// Created by noah holt on 4/5/23.
//

#ifndef LAB7_COURSEGRADES_H
#define LAB7_COURSEGRADES_H

#include <iostream>
#include "Essay.h"
#include "FinalExam.h"
#include "GradedActivity.h"
#include "PassFailActivity.h"
#include "PassFailExam.h"

using namespace std;

//const for num grades
const int NUM_GRADES = 4;

//const for subscripts in array
const int LAB = 0;
const int PASS_FAIL_EXAM = 1;
const int ESSAY = 2;
const int FINAL_EXAM = 3;


class CourseGrades
{

private:
    //Array of GradedActivity pointers
    GradedActivity *grades[NUM_GRADES];

public:

    //default construct
    CourseGrades()
    {
        for(int i = 0; i < NUM_GRADES; i++) grades[i] = nullptr;
    }

    //Mutators
    void setLab(GradedActivity *activity)
    { grades[LAB] = activity; }

    void setPassFailExam(GradedActivity *pfexam)
    { grades[PASS_FAIL_EXAM] = pfexam; }

    void setEssay(GradedActivity *essay)
    { grades[ESSAY] = essay; }

    void setFinalExam(GradedActivity *finalExam)
    { grades[FINAL_EXAM] = finalExam; }

    //Print
    void print() const;

};

#endif //LAB7_COURSEGRADES_H


