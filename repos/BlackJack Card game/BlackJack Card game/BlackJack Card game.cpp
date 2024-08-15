#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    string Title = "BlackJack Card Game";
    string CardsArray[52][2] = { {"Hearts", "Ace"}  , {"Hearts", "2"}  , {"Hearts",  "3"}  , {"Hearts", "4"}  , {"Hearts", "5"}  , {"Hearts", "6"}  , {"Hearts","7"}  , {"Hearts", "8"}  , {"Hearts", "9"}  , {"Hearts", "10"}  , {"Hearts", "Jack"}  , {"Hearts", "Queen"}  , {"Hearts", "King"},
                                 {"Clubs", "Ace"}   , {"Clubs", "2"}   , {"Clubs",  "3"}   , {"Clubs", "4"}   , {"Clubs", "5"}   , {"Clubs", "6"}   , {"Clubs","7"}   , {"Clubs", "8"}   , {"Clubs", "9"}   , {"Clubs", "10"}   , {"Clubs", "Jack"}   , {"Clubs", "Queen"}   , {"Clubs", "King"},
                                 {"Spades", "Ace"}  , {"Spades", "2"}  , {"Spades",  "3"}  , {"Spades", "4"}  , {"Spades", "5"}  , {"Spades", "6"}  , {"Spades","7"}  , {"Spades", "8"}  , {"Spades", "9"}  , {"Spades", "10"}  , {"Spades", "Jack"}  , {"Spades", "Queen"}  , {"Spades", "King"},
                                 {"Diamonds", "Ace"}, {"Diamonds", "2"}, {"Diamonds",  "3"}, {"Diamonds", "4"}, {"Diamonds", "5"}, {"Diamonds", "6"}, {"Diamonds","7"}, {"Diamonds", "8"}, {"Diamonds", "9"}, {"Diamonds", "10"}, {"Diamonds", "Jack"}, {"Diamonds", "Queen"}, {"Diamonds", "King"} };

    // Seed random number generator //
    srand(static_cast<int>(time(NULL)));

    int cardPick = rand() % 52;




    cout << Title << endl << endl << endl << "Welcome to BlackJack" << endl;
    cout << endl << "1. Pick ";

    return 0;
}

