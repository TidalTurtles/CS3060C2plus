#ifndef TEST_SCORES_H
#define TEST_SCORES_H
#include <iostream>
using namespace std;
class TestScores {
private:
	int numScores; //number of scores
	int* scores; //pointer to array of scores
public:
	//default constructor
	TestScores()
	{numScores = 0; scores = nullptr;}

	//constructor
	TestScores(int[], int);

	//getAverage function
	double getAverage()const;

};
#endif
