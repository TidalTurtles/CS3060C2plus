//lab: Day 2 7.12 Grade Book

//test a few years ago:
//  make new funcs
//  rename vars
//  leave

#include <iostream>
#include <string>
using namespace std;

//const
const int NUM_STUDENTS = 5;
const int SCORES = 4;

//prototypes
void inputData(string&, double[]);
void calcGrade(double[], char&, double&);
void displayData(string, double[], double, char);

int main() {

    //def arrays
    string names[NUM_STUDENTS];
    char grades[NUM_STUDENTS];
    double averages[NUM_STUDENTS];
    double testScores1[SCORES];
    double testScores2[SCORES];
    double testScores3[SCORES];
    double testScores4[SCORES];
    double testScores5[SCORES];

    //Get student 1
    cout << "Enter data for student 1.\n";
    inputData(names[0], testScores1);
    calcGrade(testScores1, grades[0], averages[0]);

    //Get student 2
    cout << "\nEnter data for student 2.\n";
    cin.ignore(); //removes extras
    inputData(names[1], testScores2);
    calcGrade(testScores2, grades[1], averages[1]);

    //Get student 3
    cout << "Enter data for student 3.\n";
    cin.ignore(); //removes extras
    inputData(names[2], testScores3);
    calcGrade(testScores3, grades[2], averages[2]);

    //Get student 4
    cout << "Enter data for student 4.\n";
    cin.ignore(); //removes extras
    inputData(names[3], testScores4);
    calcGrade(testScores4, grades[3], averages[3]);

    //Get student 5
    cout << "Enter data for student 5.\n";
    cin.ignore(); //removes extras
    inputData(names[4], testScores5);
    calcGrade(testScores5, grades[4], averages[4]);

    //display student 1
    displayData(names[0], testScores1, averages[0], grades[0]);

    //display student 2
    displayData(names[1], testScores2, averages[1], grades[1]);

    //display student 3
    displayData(names[2], testScores3, averages[2], grades[2]);

    //display student 4
    displayData(names[3], testScores4, averages[3], grades[3]);

    //display student 5
    displayData(names[4], testScores5, averages[4], grades[4]);

    return 0;

}

void inputData(string& name, double testScores[])
{

    //get name
    cout << "Student Name: ";
    getline(cin, name);

    //get scores
    for(int score = 0; score < SCORES; score++){

        cout << "Test Score " << (score + 1) << ": ";
        cin >> testScores[score];

    }

}

void calcGrade(double testScores[], char& grade, double& average)
{

    double sum = 0.0;

    //calc sum
    for(int i = 0; i < SCORES; i++){
        sum += testScores[i];
    }

    //calc average
    average = sum/SCORES;

    if(average >= 90){
        grade = 'A';
    } else if(average >= 80){
        grade = 'B';
    } else if(average >= 70){
        grade = 'C';
    } else if(average >= 60){
        grade = 'D';
    } else {
        grade = 'F';
    }

}

void displayData(string name, double testScores[], double average, char grade)
{

    //display name
    cout << "\nName: " << name << endl;

    //display scores
    for(int i = 0; i < SCORES; i++){
        cout << "Test " << (i + 1) << ": " << testScores[i] << endl;
    }

    //display average
    cout << "Average: " << average << endl;

    //display letter
    cout << "Grade: " << grade << endl;

}
