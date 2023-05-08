#include "NegativeScore.h"
#include "TestScores.h"

TestScores::TestScores(int scoreArray[], int size)
{
	//assign numScores
	numScores = size;

	//allocate memory for the array
	scores = new int[size];

	//copy the array
	for (int index = 0; index < size; index++)
	{
		if (scoreArray[index] < 0)
			throw NegativeScore(scoreArray[index]);
		else
			scores[index] = scoreArray[index];
	}

}

double TestScores::getAverage() const {
	{
		int total = 0;
		for (int index = 0; index < numScores; index++)
		{
			total += scores[index];
		}

		return static_cast<double>(total) / numScores;
	}
}