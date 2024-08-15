#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <cstdlib>
using namespace std;

//////////Declaring variables//////////
bool gameOver;
int OptionsWidth = 10;
int OptionsHeight = 4;
int SelectorX, SelectorY, HP, ST, EnemyHP, EnemyST, HealNumber;
int a;
string Hash, Enemy, CallOut, Selector, Suggestions, STReq;
string Attack, Block, Skip, Heal;
string Punch, Kick, Slap, Stick;
string ZeroHelpHP, ZeroHelpST, ZeroHelpEHP, ZeroHelpEST;
string Anim = "#                *";
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void Setup() {
	gameOver = false;
	dir = STOP;
	HP = 50;
	ST = 30;
	EnemyHP = 40;
	EnemyST = 25;
	SelectorX = OptionsWidth / 11;
	SelectorY = OptionsHeight / 10;
	Selector = ">";
	Attack = "Attack     ";
	Block = "Block      ";
	Skip = "Skip       ";
	Heal = "Heal ";
	HealNumber = 3;
	ZeroHelpHP, ZeroHelpST, ZeroHelpEHP, ZeroHelpEST = "";
}

void Draw() {
	//////////Drawing game//////////
	system("CLS");
	string Hash = "#";
	string Enemy = "*";
	cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << ZeroHelpEHP << EnemyHP << endl << "        ST : " << ZeroHelpST << ST << "          ST : " << ZeroHelpEST << EnemyST << endl << endl << endl << "          " << Anim << endl << endl << endl << "        ";
	
	//////////Making options menu//////////
	for (int i = 0; i < OptionsWidth + 2; i++)
		cout << "O ";
		cout << endl;
	for (int i = 0; i < OptionsHeight; i++) {
		for (int j = 0; j < OptionsWidth; j ++) {
			if (j == 0) {
				cout << "        ";
				cout << "O";
			}
			if (i == SelectorY && j == SelectorX) {
				cout << Selector;
			}
			if (i == OptionsHeight / 5 && j == OptionsWidth / 6) {
				cout << Attack;
			}
			if (i == OptionsHeight / 4 && j == OptionsWidth / 6) {
				cout << Block;
			}
			if (i == OptionsHeight / 2 && j == OptionsWidth / 6) {
				cout << Skip;
			}
			if (i == (OptionsHeight * 3) / 4 && j == OptionsWidth / 6) {
				cout << Heal;
			}
			if (i == (OptionsHeight * 3) / 4 && j == OptionsWidth / 6) {
				if (Heal == "Heal ") {
					cout << HealNumber;
					cout << "      ";
				}
				else {
					cout << " ";
				}
			}
			else {
				bool print = false;
				if (!print)
					cout << " ";
			}
			if (j == OptionsWidth - 1)
				cout << "O";
		}
		cout << endl;
	}
	cout << "        ";
	for (int i = 0; i < OptionsWidth + 2; i++) 
		cout << "O ";

	//////////Suggestions//////////
	if (Attack == "Attack     ") {
		if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 10) {
			Suggestions = "More attack options";
			cout << endl << endl << "        " << Suggestions;
		}
		if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 4) {
			Suggestions = "Gives you 2 stamina and a 2 HP shield";
			cout << endl << endl << "        " << Suggestions;
		}
		if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
			Suggestions = "Gives you 10 stamina";
			cout << endl << endl << "        " << Suggestions;
		}
		if (SelectorX == OptionsWidth / 11 && SelectorY == (OptionsHeight * 3) / 4) {
			Suggestions = "gives you 10 HP";
			cout << endl << endl << "        " << Suggestions;
		}
	}
	else if (Attack == "Punch      ") {
		if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 10) {
			Suggestions = "Deal 10 damage and lose 5 stamina";
			cout << endl << endl << "        " << Suggestions;
		}
		if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 4) {
			Suggestions = "Deal 12 damage and lose 6 stamina";
			cout << endl << endl << "        " << Suggestions;
		}
		if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
			Suggestions = "Deal 4 damage and lose 2 stamina";
			cout << endl << endl << "        " << Suggestions;
		}
		if (SelectorX == OptionsWidth / 11 && SelectorY == (OptionsHeight * 3) / 4) {
			Suggestions = "Deal 15 damage and lose 8 stamina";
			cout << endl << endl << "        " << Suggestions;
		}
	}
}

void Input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT; 
			break;
		case 'w':
			dir = UP; 
			break;
		case 's':
			dir = DOWN;
			break;
		case 'q':
			gameOver = true;
			break;
		case 'v':
			cout << "ABC";
			break;
		case 'm':
			cout << "abc";
			break;
		}
	}
}

void Logic() {
	switch (dir) {
	case LEFT:
		SelectorX--;
		dir = STOP;
		break;
	case RIGHT:
		SelectorX++;
		dir = STOP;
		break;
	case UP:
		SelectorY--;
		dir = STOP;
		break;
	case DOWN:
		SelectorY++;
		dir = STOP;
		break;
	}
	
	//////////Gameplay and animations//////////
	if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
		if (Attack == "Attack     ") {
			Attack = "Punch      ";
			Block = "Kick       ";
			Skip = "Slap       ";
			Heal = "Stick      ";
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 10;
		}	
		else if (Attack == "Punch      " && ST >= 5) {
			a = 1 + (rand() % 5);
			if (a == 1) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #]*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # ]*";
				CallOut = "You used Punch! Enemy took 10 damage";
				EnemyHP -= 10;
				ST -= 5;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #]  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 5) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[ *";
					CallOut = "Enemy used Punch! You took 10 damage";
					HP -= 10;
					EnemyST -= 5;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 5) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				
			}
			if (a == 2) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #]*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # ]*";
				CallOut = "You used Punch! Enemy took 10 damage";
				EnemyHP -= 10;
				ST -= 5;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #]  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 6) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\ *";
					CallOut = "Enemy used Kick! You took 12 damage";
					HP -= 12;
					EnemyST -= 6;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 6) {
				Sleep(500);
				system("cls");
				CallOut = "Enemy used Skip!";
				Anim = "#                *";
				EnemyST += 10;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				SelectorX = OptionsWidth / 11;
				SelectorY = OptionsHeight / 10;
				Attack = "Attack     ";
				Block = "Block      ";
				Skip = "Skip       ";
				Heal = "Heal ";
				a == 0;
				}
			}
			if (a == 3) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #]*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # ]*";
				CallOut = "You used Punch! Enemy took 10 damage";
				EnemyHP -= 10;
				ST -= 5;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #]  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 2) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{ *";
					CallOut = "Enemy used Slap! You took 4 damage";
					HP -= 4;
					EnemyST -= 2;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 2) {
				Sleep(500);
				system("cls");
				CallOut = "Enemy used Skip!";
				Anim = "#                *";
				EnemyST += 10;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				SelectorX = OptionsWidth / 11;
				SelectorY = OptionsHeight / 10;
				Attack = "Attack     ";
				Block = "Block      ";
				Skip = "Skip       ";
				Heal = "Heal ";
				a == 0;
				}
			}
			if (a == 4) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #]*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # ]*";
				CallOut = "You used Punch! Enemy took 10 damage";
				EnemyHP -= 10;
				ST -= 5;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #]  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 8) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#|*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#| *";
					CallOut = "Enemy used Stick! You took 15 damage";
					HP -= 15;
					EnemyST -= 8;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 8) {
				Sleep(500);
				system("cls");
				CallOut = "Enemy used Skip!";
				Anim = "#                *";
				EnemyST += 10;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				SelectorX = OptionsWidth / 11;
				SelectorY = OptionsHeight / 10;
				Attack = "Attack     ";
				Block = "Block      ";
				Skip = "Skip       ";
				Heal = "Heal ";
				a == 0;
				}
			}
			if (a == 5) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #]*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # ]*";
				CallOut = "You used Punch! Enemy took 10 damage";
				EnemyHP -= 10;
				ST -= 5;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #] *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #]  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #]    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #]      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #]        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #]          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #]            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #]              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#]                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#              ((*";
					CallOut = "Enemy used Heal!";
					EnemyHP += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(1000);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
		}
		else if (Attack == "Punch      " && ST < 5) {
			STReq = "Not enough Stamina";
			cout << endl << endl << "        " << STReq;
			Sleep(500);
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 10;
		}
	}
		
	if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
		if (Block == "Block      ") {
			a = 1 + (rand() % 4);
			if (a == 1) {
				if (HP <= 9) {
					ZeroHelpHP = "0";
				}
				if (ST <= 9) {
					ZeroHelpST = "0";
				}


				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << ZeroHelpEHP << EnemyHP << endl << "        ST : " << ZeroHelpST << ST << "          ST : " << ZeroHelpEST << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#)               *";
				CallOut = "You used Block!";
				HP += 2;
				ST += 2;
				if (HP <= 9) {
					Sleep(100);
					system("cls");
					ZeroHelpHP = "0";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
				}
				else if (ST <= 9) {
					Sleep(100);
					system("cls");
					ZeroHelpST = "0";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
				}
				if (EnemyST >= 5) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[ *";
					CallOut = "Enemy used Punch! You took 10 damage";
					HP -= 10;
					EnemyST -= 5;
					if (HP <= 9) {
						Sleep(100);
						system("cls");
						Anim = "# [*";
						ZeroHelpHP = "0";
						cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					}
					else if (EnemyST <= 9) {
						Sleep(100);
						system("cls");
						Anim = "# [*";
						ZeroHelpEST = "0";
						cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					}
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 5) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 2) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#)               *";
				CallOut = "You used Block!";
				HP += 2;
				ST += 2;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 6) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\ *";
					CallOut = "Enemy used Kick! You took 12 damage";
					HP -= 12;
					EnemyST -= 6;
					if (HP <= 9) {
						Sleep(100);
						system("cls");
						Anim = "# \\*";
						ZeroHelpHP = "0";
						cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					}
					else if (EnemyST <= 9) {
						Sleep(100);
						system("cls");
						Anim = "# \\*";
						ZeroHelpEST = "0";
						cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					}
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 6) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 3) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#)               *";
				CallOut = "You used Block!";
				HP += 2;
				ST += 2;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 2) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{ *";
					CallOut = "Enemy used Slap! You took 4 damage";
					HP -= 4;
					EnemyST -= 2;
					if (HP <= 9) {
						Sleep(100);
						system("cls");
						Anim = "# {*";
						ZeroHelpHP = "0";
						cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					}
					else if (EnemyST <= 9) {
						Sleep(100);
						system("cls");
						Anim = "# {*";
						ZeroHelpEST = "0";
						cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					}
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 2) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 4) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#)               *";
				CallOut = "You used Block!";
				HP += 2;
				ST += 2;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 8) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#|*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#| *";
					CallOut = "Enemy used Stick! You took 15 damage";
					HP -= 15;
					EnemyST -= 8;
					if (HP <= 9) {
						Sleep(100);
						system("cls");
						Anim = "# |*";
						ZeroHelpHP = "0";
						cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					}
					else if (EnemyST <= 9) {
						Sleep(100);
						system("cls");
						Anim = "# |*";
						ZeroHelpEST = "0";
						cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					}
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << ZeroHelpHP << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 8) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
		}
		else if (Block == "Kick       " && ST >= 6) {
			a = 1 + (rand() % 5);
			if (a == 1) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;	
				Sleep(100);
				system("cls");
				Anim = "               # \\*";
				CallOut = "You used Kick! Enemy took 12 damage";
				EnemyHP -= 12;
				ST -= 6;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 5) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[ *";
					CallOut = "Enemy used Punch! You took 10 damage";
					HP -= 10;
					EnemyST -= 5;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 5) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 2) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # \\*";
				CallOut = "You used Kick! Enemy took 12 damage";
				EnemyHP -= 12;
				ST -= 6;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 6) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\ *";
					CallOut = "Enemy used Kick! You took 12 damage";
					HP -= 12;
					EnemyST -= 6;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 6) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 3) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # \\*";
				CallOut = "You used Kick! Enemy took 12 damage";
				EnemyHP -= 12;
				ST -= 6;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
					Anim = "              #\\  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 2) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{ *";
					CallOut = "Enemy used Slap! You took 4 damage";
					HP -= 4;
					EnemyST -= 2;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 2) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 4) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # \\*";
				CallOut = "You used Kick! Enemy took 12 damage";
				EnemyHP -= 12;
				ST -= 6;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 8) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#|*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#| *";
					CallOut = "Enemy used Stick! You took 15 damage";
					HP -= 15;
					EnemyST -= 8;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 8) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 5) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\   *";					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # \\*";
				CallOut = "You used Kick! Enemy took 12 damage";
				EnemyHP -= 12;
				ST -= 6;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #\\ *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #\\  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #\\    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #\\      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #\\        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #\\          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #\\            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #\\              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#\\                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#              ((*";
					CallOut = "Enemy used Heal!";
					EnemyHP += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(1000);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
		}
		else if (Block == "Kick       " && ST < 6) {
			STReq = "Not enough Stamina";
			cout << endl << endl << "        " << STReq;
			Sleep(500);
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 4;
		}
	}

	if (SelectorX == OptionsHeight/4 && SelectorY == OptionsWidth/5) {
		if (Skip == "Skip       ") {
			a = 1 + (rand() % 4);
			if (a == 1) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				CallOut = "You used Skip!";
				ST += 10;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 5) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[ *";
					CallOut = "Enemy used Punch! You took 10 damage";
					HP -= 10;
					EnemyST -= 5;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 5) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 2) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				CallOut = "You used Skip!";
				ST += 10;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 6) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\ *";
					CallOut = "Enemy used Kick! You took 12 damage";
					HP -= 12;
					EnemyST -= 6;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 6) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 3) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				CallOut = "You used Skip!";
				ST += 10;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 2) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{ *";
					CallOut = "Enemy used Slap! You took 4 damage";
					HP -= 4;
					EnemyST -= 2;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 2) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 4) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				CallOut = "You used Skip!";
				ST += 10;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 8) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#|*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#| *";
					CallOut = "Enemy used Stick! You took 15 damage";
					HP -= 15;
					EnemyST -= 8;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 8) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
		}
		else if (Skip == "Slap       " && ST >= 2) {
			a = 1 + (rand() % 5);
			if (a == 1) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #}*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # }*";
				CallOut = "You used Slap! Enemy took 4 damage";
				EnemyHP -= 4;
				ST -= 2;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #}  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 5) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;					Sleep(100);
					system("cls");
					Anim = "#[ *";
					CallOut = "Enemy used Punch! You took 10 damage";
					HP -= 10;
					EnemyST -= 5;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 5) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 2) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #}*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # }*";
				CallOut = "You used Slap! Enemy took 4 damage";
				EnemyHP -= 4;
				ST -= 2;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #}  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 6) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\ *";
					CallOut = "Enemy used Kick! You took 12 damage";
					HP -= 12;
					EnemyST -= 6;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 6) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 3) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #}*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # }*";
				CallOut = "You used Slap! Enemy took 4 damage";
				EnemyHP -= 4;
				ST -= 2;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #}  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 2) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{ *";
					CallOut = "Enemy used Slap! You took 4 damage";
					HP -= 4;
					EnemyST -= 2;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 2) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 4) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #}*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # }*";
				CallOut = "You used Slap! Enemy took 4 damage";
				EnemyHP -= 4;
				ST -= 2;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #}  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 8) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#|*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#| *";
					CallOut = "Enemy used Stick! You took 15 damage";
					HP -= 15;
					EnemyST -= 8;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 8) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 5) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #}*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # }*";
				CallOut = "You used Slap! Enemy took 4 damage";
				EnemyHP -= 4;
				ST -= 2;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #} *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #}  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #}    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #}      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #}        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #}          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #}            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #}              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#}                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#              ((*";
					CallOut = "Enemy used Heal!";
					EnemyHP += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(1000);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
		}
		else if (Skip == "Slap       " && ST < 2) {
			STReq = "Not enough Stamina";
			cout << endl << endl << "        " << STReq;
			Sleep(500);
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 2;
		}
	}

	if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 3 && HealNumber > 0) {
		if (Heal == "Heal ") {
			a = 1 + (rand() % 4);
			if (a == 1) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#))              *";
				CallOut = "You used Heal!";
				HP += 10;
				HealNumber--;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 5) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[ *";
					CallOut = "Enemy used Punch! You took 10 damage";
					HP -= 10;
					EnemyST -= 5;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 5) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 2) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#))              *";
				CallOut = "You used Heal!";
				HP += 10;
				HealNumber--;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 6) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\ *";
					CallOut = "Enemy used Kick! You took 12 damage";
					HP -= 12;
					EnemyST -= 6;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 6) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 3) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#))              *";
				CallOut = "You used Heal!";
				HP += 10;
				HealNumber--;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 2) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{ *";
					CallOut = "Enemy used Slap! You took 4 damage";
					HP -= 4;
					EnemyST -= 2;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 2) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 4) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#))              *";
				CallOut = "You used Heal!";
				HP += 10;
				HealNumber--;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyST >= 8) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#|*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#| *";
					CallOut = "Enemy used Stick! You took 15 damage";
					HP -= 15;
					EnemyST -= 8;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 8) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
		}
		else if (Heal == "Stick      " && ST >= 8) {
			a = 1 + (rand() % 5);
			if (a == 1) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 5) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;					Sleep(100);
					system("cls");
					Anim = "#[ *";
					CallOut = "Enemy used Punch! You took 10 damage";
					HP -= 10;
					EnemyST -= 5;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 5) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 2) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 6) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\ *";
					CallOut = "Enemy used Kick! You took 12 damage";
					HP -= 12;
					EnemyST -= 6;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 6) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 3) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 2) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{ *";
					CallOut = "Enemy used Slap! You took 4 damage";
					HP -= 4;
					EnemyST -= 2;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 2) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 4) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 8) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#|*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#| *";
					CallOut = "Enemy used Stick! You took 15 damage";
					HP -= 15;
					EnemyST -= 8;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 8) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 5) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#              ((*";
					CallOut = "Enemy used Heal!";
					EnemyHP += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(1000);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
		}
		else if (Heal == "Stick      " && ST < 8) {
			STReq = "Not enough Stamina";
			cout << endl << endl << "        " << STReq;
			Sleep(500);
			SelectorX = OptionsWidth / 11;
			SelectorY = (OptionsHeight * 3 / 4);
		}
	}

	else if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 3 && HealNumber == 0) {
		if (Heal == "Heal ") {
			HealNumber = 0;
			HP += 0;
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 10;
		}
		else if (Heal == "Stick      " && ST >= 8) {
			a = 1 + (rand() % 5);
			if (a == 1) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 5) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#[*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;					Sleep(100);
					system("cls");
					Anim = "#[ *";
					CallOut = "Enemy used Punch! You took 10 damage";
					HP -= 10;
					EnemyST -= 5;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 [*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 5) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 2) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 6) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#\\ *";
					CallOut = "Enemy used Kick! You took 12 damage";
					HP -= 12;
					EnemyST -= 6;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               \\*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST > 6) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 3) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 2) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#{ *";
					CallOut = "Enemy used Slap! You took 4 damage";
					HP -= 4;
					EnemyST -= 2;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 {*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 2) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
					EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 4) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else if (EnemyST >= 8) {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#|*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#| *";
					CallOut = "Enemy used Stick! You took 15 damage";
					HP -= 15;
					EnemyST -= 8;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "# |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#   |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#     |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#       |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#         |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#           |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#             |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#               |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                 |*";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(100);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
				else if (EnemyST < 8) {
					Sleep(500);
					system("cls");
					CallOut = "Enemy used Skip!";
					Anim = "#                *";
						EnemyST += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
			if (a == 5) {
				Sleep(100);
				system("cls");
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|               *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|             *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|           *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|         *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|       *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|     *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|   *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #|*";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               # |*";
				CallOut = "You used Stick! Enemy took 15 damage";
				EnemyHP -= 15;
				ST -= 8;
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "               #| *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "              #|  *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "            #|    *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "          #|      *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "        #|        *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "      #|          *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "    #|            *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "  #|              *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#|                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				Sleep(100);
				system("cls");
				Anim = "#                *";
				cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "          " << Anim;
				if (EnemyHP <= 0) {
					EnemyHP = 0;
					Sleep(1000);
					system("cls");
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Anim = "#    YOU WON!    *";
					Suggestions = "Good job! :)";
					Attack = "Go Again?  ";
					Block = "Quit game  ";
					Skip = "           ";
					Heal = "           ";

					if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
						SelectorX = OptionsWidth / 11;
						SelectorY = OptionsHeight / 4;
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
						if (Attack == "Go Again?  ") {
							HP = 50;
							ST = 30;
							EnemyHP = 40;
							EnemyST = 25;
							SelectorX = OptionsWidth / 11;
							SelectorY = OptionsHeight / 10;
							Anim = "#                *";
							Attack = "Attack     ";
							Block = "Block      ";
							Skip = "Skip       ";
							Heal = "Heal ";
						}
					}

					if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
						if (Block == "Quit game  ") {
							gameOver = true;
						}
					}
				}
				else {
					Sleep(500);
					system("cls");
					CallOut = "";
					Anim = "#              ((*";
					CallOut = "Enemy used Heal!";
					EnemyHP += 10;
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					Sleep(1000);
					system("cls");
					Anim = "#                *";
					cout << endl << "             " << CallOut << endl << endl << endl << "        HP : " << HP << "          HP : " << EnemyHP << endl << "        ST : " << ST << "          ST : " << EnemyST << endl << endl << endl << "         " << Anim;
					SelectorX = OptionsWidth / 11;
					SelectorY = OptionsHeight / 10;
					Attack = "Attack     ";
					Block = "Block      ";
					Skip = "Skip       ";
					Heal = "Heal ";
					a == 0;
				}
			}
		}
		else if (Heal == "Stick      " && ST < 8) {
			STReq = "Not enough Stamina";
			cout << endl << endl << "        " << STReq;
			Sleep(500);
			SelectorX = OptionsWidth / 11;
			SelectorY = (OptionsHeight * 3 / 4);
		}
	}

	//////////Bottleneck cap for statuses//////////
	if (ST >= 100) {
		ST = 99;
	}
	if (ST <= 0) {
		ST = 0;
	}
	

	if (EnemyST >= 100) {
		EnemyST = 99;
	}
	if (EnemyST <= 0) {
		EnemyST = 0;
	}

	if (HP >= 100) {
		HP = 99;
	}


	if (EnemyHP >= 100) {
		EnemyHP = 99;
	}

	//////////Winning and Losing scenes//////////
	if (EnemyHP <= 0) {
		EnemyHP = 0;
		Anim = "#    YOU WON!    *";
		Suggestions = "Good job! :)";
		Attack = "Go Again?  ";
		Block = "Quit game  ";
		Skip = "           ";
		Heal = "           ";

		if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 4;
		}

		if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
			if (Attack == "Go Again?  ") {
				HP = 50;
				ST = 30;
				EnemyHP = 40;
				EnemyST = 25;
				SelectorX = OptionsWidth / 11;
				SelectorY = OptionsHeight / 10;
				Anim = "#                *";
				Attack = "Attack     ";
				Block = "Block      ";
				Skip = "Skip       ";
				Heal = "Heal ";
			}
		}

		if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
			if (Block == "Quit game  ") {
				gameOver = true;
			}
		}
	}

	if (HP <= 0) {
		HP = 0;
		Anim = "#   YOU LOST!    *";
		Suggestions = "Beter luck next time! :)";
		Attack = "Try Again? ";
		Block = "Quit game  ";
		Skip = "           ";
		Heal = "           ";

		if (SelectorX == OptionsWidth / 11 && SelectorY == OptionsHeight / 2) {
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 4;
		}

		if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 11) {
			if (Attack == "Try Again? ") {
				HP = 50;
				ST = 30;
				EnemyHP = 40;
				EnemyST = 25;
				SelectorX = OptionsWidth / 11;
				SelectorY = OptionsHeight / 10;
				Anim = "#                *";
				Attack = "Attack     ";
				Block = "Block      ";
				Skip = "Skip       ";
				Heal = "Heal ";
			}
		}

		if (SelectorX == OptionsHeight / 4 && SelectorY == OptionsWidth / 6) {
			if (Block == "Quit game  ") {
				gameOver = true;
			}
		}
	}

	//////////Making sure cursor cannot move out of options menu//////////
	if (SelectorX == (OptionsWidth / 11 - 1) && SelectorY == OptionsHeight / 10) {
		if (Attack == "Attack     ") {
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 10;
		}
		if (Attack == "Punch      ") {
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 10;
			Attack = "Attack     ";
			Block = "Block      ";
			Skip = "Skip       ";
			Heal = "Heal ";
		}
	}

	if (SelectorX == (OptionsWidth / 11 - 1) && SelectorY == OptionsHeight / 4) {
		if (Attack == "Attack     ") {
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 4;
		}
		if (Attack == "Punch      ") {
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 4;
			Attack = "Attack     ";
			Block = "Block      ";
			Skip = "Skip       ";
			Heal = "Heal ";
		}
	}

	if (SelectorX == (OptionsWidth / 11 - 1) && SelectorY == OptionsHeight / 2) {
		if (Attack == "Attack     ") {
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 2;
		}
		if (Attack == "Punch      ") {
			SelectorX = OptionsWidth / 11;
			SelectorY = OptionsHeight / 2;
			Attack = "Attack     ";
			Block = "Block      ";
			Skip = "Skip       ";
			Heal = "Heal ";
		}
	}

	if (SelectorX == (OptionsWidth / 11 - 1) && SelectorY == (OptionsHeight * 3) / 4) {
		if (Attack == "Attack     ") {
			SelectorX = OptionsWidth / 11;
			SelectorY = (OptionsHeight * 3 / 4);
		}
		if (Attack == "Punch      ") {
			SelectorX = OptionsWidth / 11;
			SelectorY = (OptionsHeight * 3 / 4);
			Attack = "Attack     ";
			Block = "Block      ";
			Skip = "Skip       ";
			Heal = "Heal ";
		}
	}

	if (SelectorY < 0) {
		SelectorX = OptionsWidth / 11;
		SelectorY = OptionsHeight / 10;
	}

	if (SelectorY == OptionsHeight) {
		SelectorX = OptionsWidth / 11;
		SelectorY = (OptionsHeight * 3 / 4);
	}

	//////////Single Digits with Zero//////////
	if (HP <= 9) {
		ZeroHelpHP = "0";
	}
	else {
		ZeroHelpHP = "";
	}


	if (ST <= 9) {
		ZeroHelpST = "0";
	}
	else {
		ZeroHelpST = "";
	}


	if (EnemyHP <= 9) {
		ZeroHelpEHP = "0";
	}
	else {
		ZeroHelpEHP = "";
	}


	if (EnemyST <= 9) {
		ZeroHelpEST = "0";
	}
	else {
		ZeroHelpEST = "";
	}
}

int main() {
	Setup();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
		Sleep(30);
	}
	return 0;
}