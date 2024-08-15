// This file is the first In-class assignment
//Please fill the selection that are marked

// *************To DO***********************
// Josue Flores

#include <iostream> // Used for cin and cout
#include <stdlib.h>   // Used to generate random number using rand method
#include <string> // Used to be able to use string
#include<time.h>  // Used to reset the machine time to generate different random numbers

using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


int main()
{
	/*Seed the random number generator*/
	srand(static_cast<int>(time(NULL)));

	int targetNumber = rand() % 100; // generates a random number from 1 to 100

	cout << "Let's play a Number Guessing Game! What is your name ?" << endl;
	string name;
	cin >> name;
	cout << "Hello, " << name << "! Now let us play the game! " << endl;

	/********************************************************
	This is a Hi-Low game. A random number from 1 to 100 is generate.
	1. Ask the user to guess the number.
	2. If the user guess right, print bingo. The game is over.
	3. If the user's guess is too high or too low, the program informs the user of that fact and asks for another guess.
	4. This repeats until the user gets the number correct.
	**********************************************************/

	// *************To DO***********************
	string correct = "no";
	int guesses[3] = { 0, 0, 0 };
	int i = 0;
	while (correct == "no")
	{
		cout << "Guess a number between 1 and 100: ";
		int guess;
		cin >> guess;

		if (i < 3)
		{
			guesses[i] = guess;
			++i;
		}
		
		
		if (guess == targetNumber)
			correct = "yes";

		else if (guess < targetNumber)
			cout << "Your guess is too low. Try again." << endl;

		else if (guess > targetNumber)
			cout << "Your guess is too high. Try again" << endl;
	}
	
	cout << endl << "Congrats!!!! You got it right :)" << endl;
	cout << "Your first three guesses were: " << guesses[0] << ", " << guesses[1] << ", and " << guesses[2] << endl;



	/********* BONUS POINT*********
	 keep track of the first three numbers that user guessed and
	 print them out at the end
	 Hint: You can use array to store these 3 numbers
	 ******************************/


	system("pause");
	return 0;



}