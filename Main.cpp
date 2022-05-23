#include <iostream> // Read and write from the console.
#include <string>
#include "choose your own adventure.h"

using namespace std; // Makes it where we don't have to type STD in front of everything.

//The // symbol begins a C++ single-line comment, which tells the compiler to ignore everything from the // symbol to the end of the line.
//The /* and */ pair of symbols denotes a C - style multi - line comment.Everything in between the symbols is ignored.

//Warning
//Don’t use multi - line comments inside other multi - line comments.Wrapping single - line comments inside a multi - line comment is okay.

//Rule
//Every C++ program must have a special function named main(all lower case letters).When the program is run,
//the statements inside of main are executed in sequential order.

//clearcin(): Clears the cin buffer
//Arguments:void | Returns: void
void clearcin()
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

void Basiscs()
{
	cout << "Hello World!" << endl;
	cout << "Hello World!\n"; // \n means new line

	string Words = "Hello World!"; // Text
	string NumberString = "5";
	int WholeNumbers = 5; // 7 8 -5
	double DecimalNumbers = 3.1415; //5.56 3.57 7.62 5.0

	cout << "NumberString + 5:  " << NumberString + "5" << endl;
	cout << "WholeNumbers + 5:  " << WholeNumbers + 5 << endl;
	cout << "0.1 + 0.2:  " << +0.2 << endl;

	cout << "What is your name?   ";
	string userName = ""; // Cleans Boxes
	getline(cin, userName);
	cout << "Hello " << userName << " nice to meet you?\n";

	int userAge = 0;
	do
	{
		cout << "How old are you?: ";
		cin >> userAge;
		/*
		//Not ideal because would not detect a loop because of negative number.
		if (cin.fail())
		{
		cout << "Age must be a Postive Number\n";
		}
		*/

		clearcin();
		if (!(userAge > 0))
		{
			cout << "Age must be a Postive Number\n";
		}
	} while (!(userAge > 0) /* or userAge <= 0*/);

	cout << "userAge is: " << userAge << endl;

	int BankBalance = 0;
	bool CinHasFail = false;

	do
	{
		CinHasFail = false;
		cout << "What is your Bank Balance?: ";
		cin >> BankBalance;
		if (cin.fail())
		{
			cout << "Must be a Number\n";
			CinHasFail = true;
		}
		//Can also work, but introduces additional branching.
		/*
		else
		{
		CinHasFail = false;
		}
		*/

		clearcin(); // Remember to do this!!!!
	} while (CinHasFail);

	//Bang ! opposite of
	//Less Then <
	//Greater Then >
	//Less Then or equal <=
	//Greater Then or equal >=
	//equal ==

	// and &&
	// or ||

	if (userAge < 18 and BankBalance < 100)
	{
		cout << "Fuck Off\n";
	}
	else if (userAge == 69 or BankBalance == 69)
	{
		cout << "Nice\n";
	}
	else if (false)
	{
		cout << "Nice\n";
	}
	else if (false)
	{
		cout << "Nice\n";
	}
	else
	{
		cout << "Welcome!\n";
	}
}

void ToLower(string& userChoice)
{
	for (size_t i = 0; i < userChoice.length(); i++)
	{
		// H -> h
		userChoice[i] = tolower(userChoice[i]);
	}
}

bool isYes(string userChoice)
{
	ToLower(userChoice);

	if (userChoice == "yes")
	{
		return true;
	}
	else if (userChoice == "y")
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	cout << "GAAAAAAAAAAAAAAAMMMMMMMMMME" << endl;
	return 0;
}
