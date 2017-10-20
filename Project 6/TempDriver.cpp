/*
	TempDriver demonstrates the use of templates to compare two values of any type, and is experimented upon
	using the FeetInches class (FeetInches.h), with overloaded > and < operator as well as overloaded io 
	operators to make this program more simple.  
	By Rachel Klesius
*/

#include <iostream>
#include <string>
#include "FeetInches.h"
using namespace std;

//template for finding the smallest 
template <class T1> 
T1 minimum (T1 i1, T1 i2)
{
	if (i1 < i2)
		return i1;
	else return i2;
}

//template for finding the largest
template <class T2>
T2 maximum(T2 i1, T2 i2)
{
	if (i1 > i2)
		return i1;
	else return i2;
}

//asks for user inputs for int, double, string and FeetInches data types
int main(void)
{
	int int1, int2;
	double float1, float2;
	string str1, str2;
	FeetInches length1, length2;

	cout << "Enter two integers: ";
	cin >> int1 >> int2;
	cout << "The minimum of " << int1 << " and " << int2 << " is " << minimum(int1, int2) << endl;
	cout << "The maximum of " << int1 << " and " << int2 << " is " << maximum(int1, int2) << endl;

	cout << "Enter two floating point numbers: ";
	cin >> float1 >> float2;
	cout << "The minimum of " << float1 << " and " << float2 << " is " << minimum(float1, float2) << endl;
	cout << "The maxiumum of " << float1 << " and " << float2 << " is " << maximum(float1, float2) << endl;

	cin.ignore();  //clear input for cin
	cout << "Enter the first string: ";
	getline(cin, str1);
	cout << "Enter the second string: ";
	getline(cin, str2);
	cout << "The minimum of " << str1 << " and " << str2 << " is " << minimum(str2, str2) << endl;
	cout << "The maximum of " << str1 << " and " << str2 << " is " << maximum(str2, str2) << endl;

	cout << "Enter the first distance (in feet, inches format): ";
	cin >> length1;
	cout << "Enter the second distance (in feet, inches format): ";
	cin >> length2;
	cout << "The minimum of " << length1 << " and " << length2 << " is " << minimum(length1, length2) << endl;
	cout << "The maximum of " << length1 << " and " << length2 << " is " << maximum(length1, length2) << endl;

	return 0;
}