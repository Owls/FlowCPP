#include <iostream>

using std::cout;
using std::cin;


int main()
{
	//Here we declare our variables for later.
	int firstNumber;
	int secondNumber;

	bool keepgoing = true;
	int answer;

	//Checks to see if the User would like to exit the session.
	while (keepgoing)
	{
		//This counts to 10, basically. 
		for (int loop = 0; loop < 10; loop++)
		{
			cout << loop;
			cout << "goobye..."; 
		}

		cout << '\n';
		cout << '\n';

		//Ask the User for input.
		cout << "If you would kindly enter a number for me: ";
		cin >> firstNumber;
		cout << "You entered " << firstNumber << ". If you would so kindly enter one last number for me: ";
		cin >> secondNumber;

		if (firstNumber < secondNumber)
		{
			cout << "The first number: " << firstNumber << " was less than the second number: " << secondNumber << "." << '\n';
		}

		else
		{
			cout << "What you seek may never be found." << '\n';
		}

		if (firstNumber == secondNumber)
		{
			cout << "The first number: " << firstNumber << " was less than the second number: " << secondNumber << "." << '\n';
		}

		if (firstNumber > secondNumber)
		{
			cout << "The first number: " << firstNumber << " was less than the second number: " << secondNumber << "." << '\n';
		}

		//Asks our user for input. 
		cout << "Compare another pair? Type 0 for no, or any other number for yes: ";
		cin >> answer;

		if (answer == 0)
		{
			keepgoing = false;
		}
	}
}
