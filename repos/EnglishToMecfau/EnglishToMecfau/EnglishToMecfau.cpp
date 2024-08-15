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
            elil.append("d");
            break;
        case 'B':
            elil.append("D");
            break;


        case 'c':
            elil.append("k");
            break;
        case 'C':
            elil.append("K");
            break;


        case 'd':
            elil.append("q");
            break;
        case 'D':
            elil.append("Q");
            break;


        case 'e':
            elil.append("u");
            break;
        case 'E':
            elil.append("U");
            break;


        case 'f':
            elil.append("l");
            break;
        case 'F':
            elil.append("L");
            break;


        case 'g':
            elil.append("f");
            break;
        case 'G':
            elil.append("F");
            break;


        case 'h':
            elil.append("p");
            break;
        case 'H':
            elil.append("P");
            break;


        case 'i':
            elil.append("o");
            break;
        case 'I':
            elil.append("O");
            break;


        case 'j':
            elil.append("r");
            break;
        case 'J':
            elil.append("R");
            break;


        case 'k':
            elil.append("s");
            break;
        case 'K':
            elil.append("S");
            break;


        case 'l':
            elil.append("b");
            break;
        case 'L':
            elil.append("B");
            break;


        case 'm':
            elil.append("g");
            break;
        case 'M':
            elil.append("G");
            break;


        case 'n':
            elil.append("c");
            break;
        case 'N':
            elil.append("C");
            break;


        case 'o':
            elil.append("e");
            break;
        case 'O':
            elil.append("E");
            break;


        case 'p':
            elil.append("j");
            break;
        case 'P':
            elil.append("J");
            break;


        case 'q':
            elil.append("w");
            break;
        case 'Q':
            elil.append("W");
            break;


        case 'r':
            elil.append("h");
            break;
        case 'R':
            elil.append("H");
            break;


        case 's':
            elil.append("n");
            break;
        case 'S':
            elil.append("N");
            break;


        case 't':
            elil.append("m");
            break;
        case 'T':
            elil.append("M");
            break;


        case 'u':
            elil.append("a");
            break;
        case 'U':
            elil.append("A");
            break;


        case 'v':
            elil.append("y");
            break;
        case 'V':
            elil.append("Y");
            break;


        case 'w':
            elil.append("v");
            break;
        case 'W':
            elil.append("V");
            break;


        case 'x':
            elil.append("z");
            break;
        case 'X':
            elil.append("Z");
            break;


        case 'y':
            elil.append("t");
            break;
        case 'Y':
            elil.append("T");
            break;


        case 'z':
            elil.append("x");
            break;
        case 'Z':
            elil.append("X");
            break;


        case '0':
            elil.append("Xuhe");
            break;


        case '1':
            elil.append("Ecu");
            break;


        case '2':
            elil.append("Mve");
            break;


        case '3':
            elil.append("Mphuu");
            break;


        case '4':
            elil.append("Leah");
            break;


        case '5':
            elil.append("Loyu");
            break;


        case '6':
            elil.append("Noz");
            break;


        case '7':
            elil.append("Nuyuc");
            break;


        case '8':
            elil.append("Uofpm");
            break;


        case '9':
            elil.append("Cocu");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}