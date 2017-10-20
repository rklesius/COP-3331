/*	movie.cpp allows the user to enter movie information that is stored in a vector and then
	prints the stored vector.  
	By Rachel Klesius		*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct movie {
	string title;
	string director;
	int year;
	int runtime;
};

void makeMovie(movie *input);
void print(vector<movie> & list, int size);

int main(void)
{	
	char input;
	movie temp;
	vector<movie> movieList;
	
	//loops using makeMovie to make vector movieList while input is not y/Y 
	do
	{	
		makeMovie(&temp);
		movieList.push_back(temp);

		//ask if more movies to be inputted
		cout << "\nDo you have more movie info to enter?\n"
			 << "Enter y/Y for yes or n/N for no: ";
		cin >> input;
		cout << "\n";

		cin.ignore();  //ignores input until makeMovie is called again

	} while (input == 'Y' || input == 'y');

	//call of print function using size()
	print(movieList, movieList.size());
	movieList.clear(); 
	return 0;
}

//makeMovie allows the for loop in main to obtain data about
//the movie struct.  Alters the movie pointer input.
void makeMovie(movie *input)
{
	cout << "Enter the title of the movie: ";
	getline(cin, input->title);
	cout << "Enter the director's name: ";
	getline(cin, input->director);
	cout << "Enter the year the movie was created: ";
	cin >> input->year;
	cout << "Enter the movie length (in minutes): ";
	cin >> input->runtime;
	return;
}

//prints the movieList struct 
void print(vector<movie> & movieList, int size)
{
	int i;
	cout << "Here is the info that you entered: \n";
	for (i = 0; i < size; i++)
	{	
		cout << "Movie Title: " << movieList[i].title << endl;
		cout << "Movie Director: " << movieList[i].director << endl;
		cout << "Movie Year: " << movieList[i].year << endl;
		cout << "Movie Length: " << movieList[i].runtime << endl;
		cout << "\n";
	}
	return;
}