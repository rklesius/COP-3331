/*	employee.h is a class header for an employee class that contains a name
	and salary as well as a default constructor, normal constructor, 
	accessor functions for the variables, and mutator functions for the 
	variables.  Tested with empDriver.cpp.
	By Rachel Klesius
*/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

//employee class
class employee
{
//variables for employee class
private: 
	string name;
	double salary;

//functions for employee class
public:
	//default constructor, no parameters
	employee()
	{
		name = " ";
		salary = 0;
	}
	//constructor with parameters
	employee(string fullname, double pay)
	{
		name = fullname;
		salary = pay; 
	}

	//accessor for name
	string getName() const { return name; }
	//accessor for salary
	double getSalary() const { return salary; }

	//mutator for name
	void setName(string fullname)
	{
		name = fullname;  
	}
	//mutator for salary
	void setSalary(double pay)
	{
		salary = pay;
	}

};

#endif
