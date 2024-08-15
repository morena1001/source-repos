#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string translator(string eng);

int main()
{
    string title = "ENGLISH TO LIRBEA TRANSLATOR";
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
        cout << endl << "Lirbea: " << elil << endl;

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
            elil.append("o");
            break;
        case 'A':
            elil.append("O");
            break;


        case 'b':
            elil.append("q");
            break;
        case 'B':
            elil.append("Q");
            break;


        case 'c':
            elil.append("t");
            break;
        case 'C':
            elil.append("T");
            break;


        case 'd':
            elil.append("f");
            break;
        case 'D':
            elil.append("F");
            break;


        case 'e':
            elil.append("a");
            break;
        case 'E':
            elil.append("A");
            break;


        case 'f':
            elil.append("m");
            break;
        case 'F':
            elil.append("M");
            break;


        case 'g':
            elil.append("b");
            break;
        case 'G':
            elil.append("B");
            break;


        case 'h':
            elil.append("g");
            break;
        case 'H':
            elil.append("G");
            break;


        case 'i':
            elil.append("u");
            break;
        case 'I':
            elil.append("U");
            break;


        case 'j':
            elil.append("n");
            break;
        case 'J':
            elil.append("N");
            break;


        case 'k':
            elil.append("s");
            break;
        case 'K':
            elil.append("S");
            break;


        case 'l':
            elil.append("v");
            break;
        case 'L':
            elil.append("V");
            break;


        case 'm':
            elil.append("k");
            break;
        case 'M':
            elil.append("K");
            break;


        case 'n':
            elil.append("r");
            break;
        case 'N':
            elil.append("R");
            break;


        case 'o':
            elil.append("i");
            break;
        case 'O':
            elil.append("I");
            break;


        case 'p':
            elil.append("y");
            break;
        case 'P':
            elil.append("Y");
            break;


        case 'q':
            elil.append("w");
            break;
        case 'Q':
            elil.append("W");
            break;


        case 'r':
            elil.append("z");
            break;
        case 'R':
            elil.append("Z");
            break;


        case 's':
            elil.append("h");
            break;
        case 'S':
            elil.append("H");
            break;


        case 't':
            elil.append("l");
            break;
        case 'T':
            elil.append("L");
            break;


        case 'u':
            elil.append("e");
            break;
        case 'U':
            elil.append("E");
            break;


        case 'v':
            elil.append("d");
            break;
        case 'V':
            elil.append("D");
            break;


        case 'w':
            elil.append("j");
            break;
        case 'W':
            elil.append("J");
            break;


        case 'x':
            elil.append("c");
            break;
        case 'X':
            elil.append("C");
            break;


        case 'y':
            elil.append("p");
            break;
        case 'Y':
            elil.append("P");
            break;


        case 'z':
            elil.append("x");
            break;
        case 'Z':
            elil.append("X");
            break;


        case '0':
            elil.append("Xazi");
            break;


        case '1':
            elil.append("Ira");
            break;


        case '2':
            elil.append("Lji");
            break;


        case '3':
            elil.append("Lgzaa");
            break;


        case '4':
            elil.append("Miez");
            break;


        case '5':
            elil.append("Muda");
            break;


        case '6':
            elil.append("Huc");
            break;


        case '7':
            elil.append("Hadar");
            break;


        case '8':
            elil.append("Aubgl");
            break;


        case '9':
            elil.append("Rura");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}