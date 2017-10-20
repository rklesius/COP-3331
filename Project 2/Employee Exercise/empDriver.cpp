/*	empDriver.cpp is a program that tests the employee class employee.h
	By Rachel Klesius
*/

#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

int main(void)
{
	string tempName;
	double mSalary;  //monthly salary
	employee employee1("Dick Dickerson", 42000);  //use of normal constructor
	employee employee2;  //use of default constructor
	
	cout << "Enter an employee name: ";
	getline(cin, tempName);
	cout << "Enter the employee's monthly salary: ";
	cin >> mSalary;

	employee2.setName(tempName);
	employee2.setSalary(mSalary * 12);

	cout << "Here are the employees and their yearly salaries\n"
		<< employee1.getName() << ": $" << employee1.getSalary()
		<< "\n" << employee2.getName() << ": $" << employee2.getSalary() << "\n";

	//give 10% raise
	employee1.setSalary((employee1.getSalary() * 0.10) + employee1.getSalary());
	employee2.setSalary((employee2.getSalary() * 0.10) + employee2.getSalary());

	cout << "Here are the employees and their yearly salaries with a 10% raise\n"
		<< employee1.getName() << ": $" << employee1.getSalary()
		<< "\n" << employee2.getName() << ": $" << employee2.getSalary() << "\n";


}