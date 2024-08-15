#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string translator(string eng);

int main()
{
    string title = "ENGLISH TO ELILEKAILSU TRANSLATOR";
    string eng;
    string eng2;
    string elil;
    char choice;
    ofstream outFile;
    ofstream outFile2;

    outFile.open("Elilekailsu_Characters.txt");
    outFile2.open("Pronounciation.txt");

    do
    {
        system("CLS");
        cout << title << endl << endl;
        cout << "English: ";
        cin >> eng;
        getline(cin, eng2);
        eng.append(eng2);
        elil = translator(eng);
        cout << "Elilekailsu: " << elil << endl;
        outFile2 << elil;

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
            elil.append("sa");
            break;
        case 'A':
            elil.append("Sa");
            break;


        case 'b':
            elil.append("se");
            break;
        case 'B':
            elil.append("Se");
            break;


        case 'c':
            elil.append("si");
            break;
        case 'C':
            elil.append("Si");
            break;


        case 'd':
            elil.append("so");
            break;
        case 'D':
            elil.append("So");
            break;


        case 'e':
            elil.append("su");
            break;
        case 'E':
            elil.append("Su");
            break;


        case 'f':
            elil.append("sy");
            break;
        case 'F':
            elil.append("Sy");
            break;


        case 'g':
            elil.append("ka");
            break;
        case 'G':
            elil.append("Ka");
            break;


        case 'h':
            elil.append("ke");
            break;
        case 'H':
            elil.append("Ke");
            break;


        case 'i':
            elil.append("ki");
            break;
        case 'I':
            elil.append("Ki");
            break;


        case 'j':
            elil.append("ko");
            break;
        case 'J':
            elil.append("Ko");
            break;


        case 'k':
            elil.append("ku");
            break;
        case 'K':
            elil.append("Ku");
            break;


        case 'l':
            elil.append("ky");
            break;
        case 'L':
            elil.append("Ky");
            break;


        case 'm':
            elil.append("la");
            break;
        case 'M':
            elil.append("La");
            break;


        case 'n':
            elil.append("le");
            break;
        case 'N':
            elil.append("Le");
            break;


        case 'o':
            elil.append("li");
            break;
        case 'O':
            elil.append("Li");
            break;


        case 'p':
            elil.append("lo");
            break;
        case 'P':
            elil.append("Lo");
            break;


        case 'q':
            elil.append("lu");
            break;
        case 'Q':
            elil.append("Lu");
            break;


        case 'r':
            elil.append("ly");
            break;
        case 'R':
            elil.append("Ly");
            break;


        case 's':
            elil.append("al");
            break;
        case 'S':
            elil.append("Al");
            break;


        case 't':
            elil.append("el");
            break;
        case 'T':
            elil.append("El");
            break;


        case 'u':
            elil.append("il");
            break;
        case 'U':
            elil.append("Il");
            break;


        case 'v':
            elil.append("ol");
            break;
        case 'V':
            elil.append("Ol");
            break;


        case 'w':
            elil.append("ul");
            break;
        case 'W':
            elil.append("Ul");
            break;


        case 'x':
            elil.append("yl");
            break;
        case 'X':
            elil.append("Yl");
            break;
        
        
        case 'y':
            elil.append("ak");
            break;
        case 'Y':
            elil.append("Ak");
            break;


        case 'z':
            elil.append("ek");
            break;
        case 'Z':
            elil.append("Ek");
            break;


        case '0':
            elil.append("Ik");
            break;


        case '1':
            elil.append("Ok");
            break;


        case '2':
            elil.append("Uk");
            break;


        case '3':
            elil.append("Yk");
            break;
        
        
        case '4':
            elil.append("As");
            break;


        case '5':
            elil.append("Es");
            break;


        case '6':
            elil.append("Is");
            break;


        case '7':
            elil.append("Os");
            break;


        case '8':
            elil.append("Us");
            break;


        case '9':
            elil.append("Ys");
            break;
        
        
        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}