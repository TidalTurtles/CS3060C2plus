/*
 *
 * lab 7
 * 15.11
 *
 */

#include <iostream>
//just include .h all need a cpp
//Note: .h files are the declaration/structure and .cpp is the interface/implementation
#include "CourseGrades.h"
#include "Essay.h"
#include "FinalExam.h"
#include "GradedActivity.h"
#include "PassFailActivity.h"
#include "PassFailExam.h"

//maybe also a spc15-11.cpp??

using namespace std;

int main() {

    //create GradedActivity object
    GradedActivity lab(80);

    //Pass Fail Exam object. 50 questions, 5 missed w/ min score 70
    PassFailExam pfexam(50, 5, 70.0);

    //essay object, set point categories
    Essay essay;
    essay.setGrammarPoints(25);
    essay.setSpellingPoints(15);
    essay.setLengthPoints(20);
    essay.setContentPoints(30);

    //FinalExam object
    FinalExam finalExam;

    //courseGrades object
    CourseGrades myGrades;

    //Store grades in CourseGrades
    myGrades.setLab(&lab);
    myGrades.setPassFailExam(&pfexam);
    myGrades.setEssay(&essay);
    myGrades.setFinalExam(&finalExam);

    //print grade info.
    myGrades.print();

    return 0;

}
