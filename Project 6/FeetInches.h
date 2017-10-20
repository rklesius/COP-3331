/*
	FeetInches.h is a modified class header file for a in class example.  The +/- operators have been replaced with
	< and > operators and the << and >> operators have also been overloaded.  
	By Rachel Klesius
*/

#ifndef FEETINCHES_H
#define FEETINCHES_H
#include <iostream>
using namespace std;

// The FeetInches class holds distances or measurements 
// expressed in feet and inches.

class FeetInches
{
private:
	int feet;        // To hold a number of feet
	int inches;      // To hold a number of inches
public:
	// Constructor
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
	}

	// Mutator functions
	void setFeet(int f)
	{
		feet = f;
	}

	void setInches(int i)
	{
		inches = i;

	}

	// Accessor functions
	int getFeet() const
	{
		return feet;
	}

	int getInches() const
	{
		return inches;
	}

	// Overloaded operator functions
	bool operator > (const FeetInches &); // Overloaded <
	bool operator < (const FeetInches &); // Overloaded >
	friend ostream& operator<< (ostream&, const FeetInches&); //overloaded <<
	friend istream& operator>> (istream&, FeetInches&); //overloaded >>

};

// Overloaded binary > operator. 

bool FeetInches::operator > (const FeetInches &right)
{
	if (inches > right.inches) { return true; }
	if (inches == right.inches) { return true; }
	else { return false; }
}

// Overloaded binary < operator.               

bool FeetInches::operator < (const FeetInches &right)
{
	if (inches < right.inches) { return true; }
	if (inches == right.inches) { return true; }
	else { return false; }
}

// Overloaded output stream operator <<

ostream& operator<< (ostream& os, const FeetInches& length)
{
	os << length.feet << " feet, " << length.inches << "inches ";
	return os;
}

// Overloaded input stream operator >>

istream& operator>> (istream& is, FeetInches& length)
{
	char ch;

	is >> length.feet;
	is >> ch;  //read and discard ","
	is >> length.inches;

	return is;
}


#endif


