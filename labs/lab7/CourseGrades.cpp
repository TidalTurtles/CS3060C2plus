//
// Created by noah holt on 4/5/23.
//

#include "CourseGrades.h"

#include <iostream>
#include "CourseGrades.h"

using namespace std;
void CourseGrades::print() const
{

    //display lab
    cout << "Lab score: " << grades[LAB]->getScore() << "\tGrade: " << grades[LAB]->getLetterGrade() << endl;

    //display p/f exam
    cout << "Pass/Fail Exam score: " << grades[PASS_FAIL_EXAM]->getScore() << "\tGrade: " << grades[PASS_FAIL_EXAM]->getLetterGrade() << endl;

    //display essay
    cout << "Essay score: " << grades[ESSAY]->getScore() << "\tGrade: " << grades[ESSAY]->getLetterGrade() << endl;

    //display final
    cout << "Final Exam score: " << grades[FINAL_EXAM]->getScore() << "\tGrade: " << grades[FINAL_EXAM]->getLetterGrade() << endl;

}
