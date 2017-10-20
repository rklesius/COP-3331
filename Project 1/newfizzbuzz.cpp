/* Rachel Klesius
	This program is a solution to project 1 problem 1: adding a "woof" option to multiples of 7
	in a normal fizzbuzz program.  For multiples of 3 and 7, "FizzWoof" is printed, for mulitples
	of 5 and 7, "BuzzWoof" is printed.  This also disregards multiples of 3, 5, and 7.   
	*/

#include <iostream>
using namespace std;

//program starts here, creating an iteration to run through numbers 1 through 100
int main()
{
	int i;
	// iterates for numbers 1 through 100 to print result
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			cout << "FizzBuzz\n";
		else if ((i % 3) == 0 && (i % 7) == 0)
			cout << "FizzWoof\n";
		else if ((i % 5) == 0 && (i % 7) == 0)
			cout << "BuzzWoof\n";
		else if ((i % 3) == 0)
			cout << "Fizz\n";
		else if ((i % 5) == 0)
			cout << "Buzz\n";
		else if ((i % 7) == 0)
			cout << "Woof\n";
		else
			cout << i << endl;
	}
	return 0;
}