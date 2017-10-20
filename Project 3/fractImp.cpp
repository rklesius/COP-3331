/*
	fractImp.cpp is the implimentation file for a fraction.h class header.  
	This includes the function definitions for the constructor, mutators, and
	operator overloading for addition, subtraction, multiplication, and division.
	It also includes the function definition for overloading the << and >> operators,
	which the professor provided to me and I did not write.  Simplify function added
	for extra credit.  
	By Rachel Klesius
*/

#include <iostream>
#include "fraction.h"

//simplify function definition
void Fraction::simplify()
{
	int i;
	//go from 1 to the lowest number, num or denom
	for (i = 1; (i <= num) && (i <= denom); i++)
	{	
		//find a common factor
		if (((num % i) == 0) && ((denom % i) == 0))
		{
			num = num / i;
			denom = denom / i;
		}
	}
	return;
}

//constructor definition
Fraction::Fraction(int n, int d)
{
	num = n;
	denom = d;
	simplify();
}

//mutator definition for numerator
void Fraction::setNum(int n)
{
	num = n;
	simplify();
}

//mutator definition for denominator
void Fraction::setDenom(int d)
{
	denom = d;
	simplify();
}

//operator overloading definition for addition
Fraction Fraction::operator+ (const Fraction &input)
{
	Fraction temp;
	//denominators are different
	if (denom != input.denom)
	{
		temp.num = (num * input.denom) + (input.num * denom);
		temp.denom = denom * input.denom;
	}
	//denominators are the same
	else
	{
		temp.num = num + input.num;
		temp.denom = denom;
	}
	temp.simplify();
	return temp;
}

//operator overloading definition for subtraction
Fraction Fraction::operator- (const Fraction &input)
{
	Fraction temp;
	//denominators are different
	if (denom != input.denom)
	{
		temp.num = (num * input.denom) - (input.num * denom);
		temp.denom = denom * input.denom;
	}
	//denominators are the same
	else
	{
		temp.num = num - input.num;
		temp.denom = denom;
	}
	temp.simplify();
	return temp;
}

//operator overloading definition for multiplication
Fraction Fraction::operator* (const Fraction &input)
{
	Fraction temp;
	temp.num = num * input.num;
	temp.denom = denom * input.denom;
	temp.simplify();
	return temp;
}

//operator overloading definition for division
Fraction Fraction::operator/ (const Fraction &input)
{
	Fraction temp;
	temp.num = num * input.denom;
	temp.denom = denom * input.num;
	temp.simplify();
	return temp;
}

//overload the operator <<
ostream& operator << (ostream& os, const Fraction& fraction)
{
 //note that we print out a / as it is simply easier to do so!
 os << fraction.num << " / " << fraction.denom;
 return os;
}
//overload the operator >>
istream& operator>> (istream& is, Fraction& fraction)
{
 char ch;
 int tempDenom;

 is >> fraction.num; //get the numerator
 is >> ch; //read and discard the '/'
 is >> tempDenom; //temporarily read in denominator to check
 if (tempDenom != 0)
	 fraction.denom = tempDenom; //get the denominator
 else
	 throw Fraction::zeroDenom();  //throw exception if denominator is zero

 return is;
}
