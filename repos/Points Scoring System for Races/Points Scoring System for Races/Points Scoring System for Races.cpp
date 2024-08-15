#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

// Function Prototypes
void option1(ifstream & inFile);
void option2();
void option3();
void option4();
void option5();
void option6();
void option7();
void option8();
void option9();
void option0();

// Global Variables
string title = "RALLY WORLD CHAMPIONSHIP DATABASE";


int main()
{
	// Variables
	int option;


	ifstream inFile;
	inFile.open("RallyInfo.txt");

	// Print Screen
	cout << title << endl << endl;
	cout << "1. Input race results" << endl;
	cout << "2. See Driver Standings" << endl;
	cout << "3. See Team Standings" << endl;
	cout << "4. See Calendar" << endl;
	cout << "5. See Race Results" << endl;
	cout << "6. See Driver Info" << endl;
	cout << "7. See Team Info" << endl;
	cout << "0. Quit" << endl << endl;
	
	// User Input
	cout << "Which option do you want to access: ";
	cin >> option;


	switch (option)
	{
	case 1:
		option1(inFile);
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 0:
		option0();
		break;
	}
}


void option1(ifstream& inFile)
{
	string find;
	string name;
	int option;
	int size;
	system("CLS");
	cout << title << endl << endl;
	inFile >> find;
	while (!inFile.eof())
	{
		if (find == "CALENDAR")
		{
			inFile >> size;
			getline(inFile, name);
			for (int i = 0; i < size; i++)
			{
				getline(inFile, name);
				cout << i + 1 << ". " << name << endl;
			}
			break;
		}
		else
			inFile >> find;
	}

	cout << endl << "Choose a track to input score: ";
	cin >> option;

	if (option == 1)
	{

	}

	else if (option == 2)
	{

	}

	else if (option == 3)
	{

	}

	else if (option == 4)
	{

	}

	else if (option == 5)
	{

	}

	else if (option == 6)
	{

	}
}

void option2()
{

}

void option3()
{

}

void option4()
{

}

void option5()
{

}

void option6()
{

}

void option7()
{

}

void option8()
{

}

void option9()
{

}

void option0()
{
	system("CLS");
	cout << "Thank you for your time" << endl;
	cout << "Property of RWC" << endl;
	cout << "Ending Program .";
	Sleep(500);

	system("CLS");
	cout << "Thank you for your time" << endl;
	cout << "Property of RWC" << endl;
	cout << "Ending Program . .";
	Sleep(500);

	system("CLS");
	cout << "Thank you for your time" << endl;
	cout << "Property of RWC" << endl;
	cout << "Ending Program . . .";
	Sleep(500);
}