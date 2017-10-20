/*
	GradedActivity.h is the driver program for the GradedActivity.h and Essay classes.  
	This program asks the user for input for the variables in the Essay class and 
	then prints the score and the letter grade from the Essay class definition.  
	By Rachel Klesius
*/

#include <iostream>
#include "GradedActivity.h"
#include "Essay.h"
using namespace std;

int main(void)
{
	int input;
	Essay essay1;
	
	//Get grammar points
	cout << "How many grammar points did the student earn? (0-30): ";
	cin >> input;
	while (input > 30 || input < 0)
	{
		cout << "Invalid.  Enter a number 0 through 30: ";
		cin >> input;
	}
	essay1.setGrammar(input);

	//Get spelling points
	cout << "How many spelling points did the student earn? (0-20): ";
	cin >> input;
	while (input > 20 || input < 0)
	{
		cout << "Invalid.  Enter a number 0 through 20: ";
		cin >> input;
	}
	essay1.setSpelling(input);

	//Get length points
	cout << "How many points for length did the student earn? (0-20): ";
	cin >> input;
	while (input > 20 || input < 0)
	{
		cout << "Invalid.  Enter a number 0 through 20: ";
		cin >> input;
	}
	essay1.setLength(input);

	//Get content points
	cout << "How many points for content did the student earn? (0-30): ";
	cin >> input;
	while (input > 30 || input < 0)
	{
		cout << "Invalid.  Enter a number 0 through 30: ";
		cin >> input;
	}
	essay1.setContent(input);

	cout << "Grammar points: " << essay1.getGrammar() << endl;
	cout << "Spelling points: " << essay1.getSpelling() << endl;
	cout << "Length points: " << essay1.getLength() << endl;
	cout << "Content points: " << essay1.getContent() << endl;
	cout << "Overall Score: " << essay1.getScore() << endl;
	cout << "Grade: " << essay1.getLetterGrade() << endl;

	return 0;
}