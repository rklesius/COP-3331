/*
	GradedActivity.h hold the class definition and function definitions for the 
	GradedActivity class, a class with a private score variable, a default constructor,
	a normal constructor, a mutator, and an accessor function.  
	Provided by instructor and edited by Rachel Klesius
*/

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H


// GradedActivity class declaration

class GradedActivity
{
protected:
	double score;   // To hold the numeric score
public:
	// Default constructor
	GradedActivity()
	{
		score = 0.0;
	}

	// Constructor
	GradedActivity(double s)
	{
		score = s;
	}

	// Mutator function
	void setScore(double s)
	{
		score = s;
	}

	// Accessor functions
	virtual double getScore() const
	{
		return score;
	}

	//virtual member function getLetterGrade
	virtual char getLetterGrade() const
	{
			char letterGrade; // To hold the letter grade

			if (score > 89)
				letterGrade = 'A';
			else if (score > 79)
				letterGrade = 'B';
			else if (score > 69)
				letterGrade = 'C';
			else if (score > 59)
				letterGrade = 'D';
			else
				letterGrade = 'F';

			return letterGrade;
	}
};

#endif
