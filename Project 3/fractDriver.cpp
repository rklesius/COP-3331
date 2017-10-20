/* 
	fractDriver.cpp is the driver program for the fraction.h class header file
	and the fractImp.cpp implementation file.  This program includes main which takes
	in two fraction objects, and performs all the arithmetic operations on the two fractions,
	printing the results.  
	By Rachel Klesius
*/

#include <iostream>
#include "fraction.h"
using namespace std;

int main(void)
{
	Fraction fract1;
	Fraction fract2;
	bool tryAgain = true;

	//input the first fraction, checking for exceptions
	cout << "Enter the first fraction in the form a / b: ";
	while (tryAgain)
	{
		try
		{
			cin >> fract1;
			//if no exception was thrown, then the next statement will execute
			tryAgain = false;
		}
		catch (Fraction::zeroDenom)
		{
			cout << "Please enter a fraction without a denominator of zero: ";
		}
	}
	
	//input the second fraction, checking for exceptions
	tryAgain = true;
	cout << "Enter the second fraction in the form a / b: ";
	while (tryAgain)
	{
		try
		{
			cin >> fract2;
			//if no exception was thrown, then the next statement will execute
			tryAgain = false;
		}
		catch (Fraction::zeroDenom)
		{
			cout << "Please enter a fraction without a denominator of zero: ";
		}
	}

	cout << "Fraction 1: " << fract1 << endl;
	cout << "Fraction 2: " << fract2 << endl;
	cout << fract1 << " + " << fract2 << " = " << fract1 + fract2 << endl;
	cout << fract1 << " - " << fract2 << " = " << fract1 - fract2 << endl;
	cout << fract1 << " * " << fract2 << " = " << fract1 * fract2 << endl;
	cout << "(" << fract1 << ") / (" << fract2 << ") = " << fract1 / fract2 << endl;

	return 0;
}