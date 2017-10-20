/*
	fileIOmain.cpp is a program that demonstrates file IO in C++. This program asks the
	user for the filename (in this case, Random.txt), counts the number of random values
	in the file, and returns the sum and average of the numbers in the file.  The average
	value should have two digits after the decimal point.  
	By Rachel Klesius
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(void)
{
	string fileName;
	ifstream infile;
	int numCount = 0;
	double input;
	double totalSum = 0;

	//get the filename, check for opening errors
	for (;;) 
	{
		cout << "Enter the filename: ";
		getline(cin, fileName);
		infile.open(fileName);
		if (infile.fail())
			cout << "Error opening file, reinput filename." << endl;
		break;
	}

	//process the information in file using template function
	while (infile >> input)
	{
		numCount++;
		totalSum = totalSum + input;
	}
	
	//print results
	cout << "Number of numbers: " << numCount << endl;
	cout << "Sum of the numbers: " << totalSum << endl;
	cout << "Average of the numbers: " << fixed << setprecision(2) << totalSum / numCount << endl;
	return 0;

}