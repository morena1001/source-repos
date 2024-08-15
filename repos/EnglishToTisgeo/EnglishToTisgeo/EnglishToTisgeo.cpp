#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string translator(string eng);

int main()
{
    string title = "ENGLISH TO TISGEO TRANSLATOR";
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
        cout << "TISGEO: " << elil << endl;

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
            elil.append("u");
            break;
        case 'A':
            elil.append("U");
            break;


        case 'b':
            elil.append("q");
            break;
        case 'B':
            elil.append("Q");
            break;


        case 'c':
            elil.append("z");
            break;
        case 'C':
            elil.append("Z");
            break;


        case 'd':
            elil.append("m");
            break;
        case 'D':
            elil.append("M");
            break;


        case 'e':
            elil.append("o");
            break;
        case 'E':
            elil.append("O");
            break;


        case 'f':
            elil.append("k");
            break;
        case 'F':
            elil.append("K");
            break;


        case 'g':
            elil.append("g");
            break;
        case 'G':
            elil.append("G");
            break;


        case 'h':
            elil.append("h");
            break;
        case 'H':
            elil.append("H");
            break;


        case 'i':
            elil.append("a");
            break;
        case 'I':
            elil.append("A");
            break;


        case 'j':
            elil.append("v");
            break;
        case 'J':
            elil.append("V");
            break;


        case 'k':
            elil.append("j");
            break;
        case 'K':
            elil.append("J");
            break;


        case 'l':
            elil.append("b");
            break;
        case 'L':
            elil.append("B");
            break;


        case 'm':
            elil.append("c");
            break;
        case 'M':
            elil.append("C");
            break;


        case 'n':
            elil.append("s");
            break;
        case 'N':
            elil.append("S");
            break;


        case 'o':
            elil.append("i");
            break;
        case 'O':
            elil.append("I");
            break;


        case 'p':
            elil.append("l");
            break;
        case 'P':
            elil.append("L");
            break;


        case 'q':
            elil.append("n");
            break;
        case 'Q':
            elil.append("N");
            break;


        case 'r':
            elil.append("d");
            break;
        case 'R':
            elil.append("D");
            break;


        case 's':
            elil.append("r");
            break;
        case 'S':
            elil.append("R");
            break;


        case 't':
            elil.append("t");
            break;
        case 'T':
            elil.append("T");
            break;


        case 'u':
            elil.append("e");
            break;
        case 'U':
            elil.append("E");
            break;


        case 'v':
            elil.append("w");
            break;
        case 'V':
            elil.append("W");
            break;


        case 'w':
            elil.append("f");
            break;
        case 'W':
            elil.append("F");
            break;


        case 'x':
            elil.append("x");
            break;
        case 'X':
            elil.append("X");
            break;


        case 'y':
            elil.append("p");
            break;
        case 'Y':
            elil.append("P");
            break;


        case 'z':
            elil.append("y");
            break;
        case 'Z':
            elil.append("Y");
            break;


        case '0':
            elil.append("Yodi");
            break;


        case '1':
            elil.append("Iso");
            break;


        case '2':
            elil.append("Tfi");
            break;


        case '3':
            elil.append("Thdoo");
            break;


        case '4':
            elil.append("Kied");
            break;


        case '5':
            elil.append("Kawo");
            break;


        case '6':
            elil.append("Rax");
            break;


        case '7':
            elil.append("Rowos");
            break;


        case '8':
            elil.append("Oaght");
            break;


        case '9':
            elil.append("Saso");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}