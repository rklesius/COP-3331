/*
	fraction.h includes the class definition for a fraction class.  This includes a
	constructor, mutator, and function prototypes for overloading addition, subtraction, 
	multiplication and division.  This also includes function prototypes for << and >> 
	that the professor provided.  Simplify function added for extra credit.
	By Rachel Klesius
*/

#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction
{
private:
	int num;		//numerator
	int denom;		//denominator
	void simplify();

public:
	//exception handling if denominator is zero
	class zeroDenom
	{ };

	//constructor prototype for a fraction object
	Fraction(int n = 0, int d = 1);

	//mutator prototype for numerator
	void setNum(int n);

	//mutator prototype for denominator
	void setDenom(int d);

	//prototypes for overloading arithmetic operators
	Fraction operator + (const Fraction &);
	Fraction operator - (const Fraction &);
	Fraction operator * (const Fraction &);
	Fraction operator / (const Fraction &);

	//prototypes for overloading << and >>
	friend ostream& operator<< (ostream&, const Fraction&);
	friend istream& operator>> (istream&, Fraction&);

	
};

#endif
