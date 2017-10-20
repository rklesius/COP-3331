/*
	Essay.h contains the class definition for Essay and is a child class of GradedActivity.
	This contains the private variables grammar, spelling, length, and content that are used
	to determine the score of the assignment.  This also includes a redefinition of the getScore
	and getLetterGrade functions from the parent class.  The essay class is a child class of the
	parent class GradedActivity.  
	By Rachel Klesius
*/

#ifndef ESSAY_H
#define ESSAY_H

#include "GradedActivity.h"

class Essay : public GradedActivity
{
private:
	int grammar;
	int spelling;
	int length;
	int content;

public:
	//mutators
	void setGrammar(int g)
	{
		grammar = g;
	}
	void setSpelling(int s)
	{
		spelling = s;
	}
	void setLength(int l)
	{
		length = l;
	}
	void setContent(int c)
	{
		content = c;
	}
	//accessors
	int getGrammar() { return grammar; }
	int getSpelling() { return spelling; }
	int getLength() { return length; }
	int getContent() { return content; }

	//virtual function for getScore redefined from parent class
	virtual double getScore() const
	{
		return grammar + spelling + length + content;
	}

	//virtual function for getLetterGrade redefined from parent class
	virtual char getLetterGrade()
	{
		GradedActivity::setScore(getScore());
		return GradedActivity::getLetterGrade();
	}


};


#endif
