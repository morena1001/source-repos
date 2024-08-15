#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string translator(string eng);

int main()
{
    string title = "ENGLISH TO LEFXAO TRANSLATOR";
    string eng;
    string eng2;
    string elil;
    char choice;

    do
    {
        system("CLS");
        cout << title << endl << endl;
        cout << "English: ";
        cin >> eng;
        getline(cin, eng2);
        eng.append(eng2);
        elil = translator(eng);
        cout << "Lefxao: " << elil << endl;

        cout << "Would you like to translate something else? ('y' / 'n'): ";
        cin >> choice;
    } while (choice == 'y');
}

string translator(string eng)
{
    string elil;

    for (int i = 0; i < eng.size(); ++i)
    {
        char letter = eng.at(i);
        switch (letter)
        {
        case 'a':
            elil.append("i");
            break;
        case 'A':
            elil.append("I");
            break;


        case 'b':
            elil.append("s");
            break;
        case 'B':
            elil.append("S");
            break;


        case 'c':
            elil.append("t");
            break;
        case 'C':
            elil.append("T");
            break;


        case 'd':
            elil.append("v");
            break;
        case 'D':
            elil.append("V");
            break;


        case 'e':
            elil.append("o");
            break;
        case 'E':
            elil.append("O");
            break;


        case 'f':
            elil.append("w");
            break;
        case 'F':
            elil.append("W");
            break;


        case 'g':
            elil.append("x");
            break;
        case 'G':
            elil.append("X");
            break;


        case 'h':
            elil.append("y");
            break;
        case 'H':
            elil.append("Y");
            break;


        case 'i':
            elil.append("u");
            break;
        case 'I':
            elil.append("U");
            break;


        case 'j':
            elil.append("z");
            break;
        case 'J':
            elil.append("Z");
            break;


        case 'k':
            elil.append("b");
            break;
        case 'K':
            elil.append("B");
            break;


        case 'l':
            elil.append("c");
            break;
        case 'L':
            elil.append("C");
            break;


        case 'm':
            elil.append("d");
            break;
        case 'M':
            elil.append("D");
            break;


        case 'n':
            elil.append("f");
            break;
        case 'N':
            elil.append("F");
            break;


        case 'o':
            elil.append("e");
            break;
        case 'O':
            elil.append("E");
            break;


        case 'p':
            elil.append("g");
            break;
        case 'P':
            elil.append("G");
            break;


        case 'q':
            elil.append("h");
            break;
        case 'Q':
            elil.append("H");
            break;


        case 'r':
            elil.append("j");
            break;
        case 'R':
            elil.append("J");
            break;


        case 's':
            elil.append("k");
            break;
        case 'S':
            elil.append("K");
            break;


        case 't':
            elil.append("l");
            break;
        case 'T':
            elil.append("L");
            break;


        case 'u':
            elil.append("a");
            break;
        case 'U':
            elil.append("A");
            break;


        case 'v':
            elil.append("m");
            break;
        case 'V':
            elil.append("M");
            break;


        case 'w':
            elil.append("n");
            break;
        case 'W':
            elil.append("N");
            break;


        case 'x':
            elil.append("p");
            break;
        case 'X':
            elil.append("P");
            break;


        case 'y':
            elil.append("q");
            break;
        case 'Y':
            elil.append("Q");
            break;


        case 'z':
            elil.append("r");
            break;
        case 'Z':
            elil.append("R");
            break;


        case '0':
            elil.append("Roje");
            break;


        case '1':
            elil.append("Efo");
            break;


        case '2':
            elil.append("Lne");
            break;


        case '3':
            elil.append("lyjoo");
            break;


        case '4':
            elil.append("weaj");
            break;


        case '5':
            elil.append("Wumo");
            break;


        case '6':
            elil.append("Kup");
            break;


        case '7':
            elil.append("komof");
            break;


        case '8':
            elil.append("Ouxyl");
            break;


        case '9':
            elil.append("Fufo");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}