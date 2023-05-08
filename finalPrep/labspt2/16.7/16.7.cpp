// 16.7
// lab 9? or 8

#include <iostream>
#include "TestScores.h"
#include "NegativeScore.h"

using namespace std;
const int NUM_SCORES = 5; 


int main()
{
	try {
		//create an array of valid scores
		int myScores[NUM_SCORES] = { 88, 90, 93, 87, 99 };

		//create a TestScores object
		TestScores myTestScores(myScores, NUM_SCORES);

		//display the average
		cout << "The average score is " << myTestScores.getAverage() << endl;

		//create an array with an invalid scores
		int badScores[NUM_SCORES] = { 88, 90, -99, 87, 99 };

		//create a TestScores object
		TestScores badTestScores(badScores, NUM_SCORES);

		//display the average
		cout << "The average score is " << badTestScores.getAverage() << endl;
	}
	catch (NegativeScore e)
	{
		cout << "An invalid score was found. The invalid score is " << e.getScore() <<endl;
	}
	return 0;
}
