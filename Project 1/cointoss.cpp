/* Rachel Klesius
This is a solution to problem 2 on project one, in which the program flips a coin
an amount of times entered by the user (at least 10).  It calculates the total
number of head and tails and tells if the simulation is realistic because each side
of the coin should appear approximately half the time (45% to 55%).
*/

#include <iostream> 
#include <cstdlib>  //for random operations
#include <ctime>    //for time needed for random operations
using namespace std;

int flip(void);

/*	main takes in the amount of coin tosses and keeps track of the number of heads,
tales, and total number of flips.
*/
int main(void)
{
	int flipCount, i, flipResult;
	int headCount{ 0 }, tailCount{ 0 };
	double percentage;

	cout << "Enter the number of times you want to toss the coin: ";
	cin >> flipCount;

	while (flipCount < 10)
	{
		cout << "The number of tosses must be greater than 10.  Re-enter: ";
		cin >> flipCount;
	}

	srand(time(NULL));  //makes the results different every time the program is run
	for (i = 1; i <= flipCount; i++)  //starts at 1 to make dividing by 10 a line easier
	{
		flipResult = flip();

		if (flipResult)
		{
			tailCount++;
			cout << "Tails ";
		}
		else
		{
			headCount++;
			cout << "Heads ";
		}

		//line spacing
		if ((i % 10) == 0)
			cout << "\n";
	}

	percentage = (double) tailCount / flipCount;

	if ((percentage >= 0.45) && (percentage <= 0.55))
		cout << "This simulation is realistic\n";
	else cout << "This simulation is not realistic\n";

	return 0;
}

//	returns either 1 or 0 depending on whether the int is even (0) and odd (1).  
int flip(void)
{
	return (rand()) % 2;  

}