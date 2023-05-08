#ifndef NEGATIVE_SCORE_H
#define NEGATIVE_SCORE_H

class NegativeScore {
private:
	int score; //the bad score
public:
	//constructor
	NegativeScore(int s)
	{score = s;}

	//getScore function
	int getScore() const { return score; }
};

#endif
