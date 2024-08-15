#include <iostream>
#include <string>

using namespace std;



string Lefxaotranslator(string eng);
string Lirbeatranslator(string eng);
string Mecfautranslator(string eng);
string Tisgeotranslator(string eng);
string Dbmapytranslator(string eng);
string Elilekailsutranslator(string eng);
string Hebtaotranslator(string eng);
string Glmtfvtranslator(string eng);
string RachzboTisgeotranslator(string eng);
string Tedgyitranslator(string eng);
string Tonguetranslator(string eng);


int main()
{
    string title = "LEFXAO, MECFAU, LIRBEA, TISGEO, DBMAPY, ELILEKAILSU, HEBTAO, GLMTFV, RACHZBO TISGEO, TEGYI, AND TONGUE TO ENGLISH TRANSLATOR";
    string LefxaoTitle = "LEFXAO TO ENGLISH";
    string LirbeaTitle = "LIRBEA TO ENGLISH";
    string MecfauTitle = "MECFAU TO ENGLISH";
    string TisgeoTitle = "TISGEO TO ENGLISH";
    string DbmapyTitle = "DBMAPY TO ENGLSIH";
    string ElilelkailsuTitle = "ELILELKAILSU TO ENGLISH";
    string HebtaoTitle = "HEBTAO TO ENGLISH";
    string GlmtfvTitle = "GLMTFV TO ENGLISH";
    string RachzboTisgeoTitle = "RACHZBO TISGEO TO ENGLISH";
    string TedgyiTitle = "TEGYI TO ENGLISH";
    string TongueTitle = "TONGUE TO ENGLISH";

    string Lefxao = "Lefxao";
    string Lirbea = "Lirbea";
    string Mecfau = "Mecfau";
    string Tisgeo = "Tisgeo";
    string Dbmapy = "Dbmapy";
    string Elilekailsu = "Elilelkailsu";
    string Hebtao = "Hebtao";
    string Glmtfv = "Glmtfv";
    string RachzboTisgeo = "Rachzbo Tisgeo";
    string Tedgyi = "Tedgyi";
    string Tongue = "Tongue";

    string langSelect;
    string eng;
    string eng2;
    string lang;
    char choice;


    do
    {
        system("CLS");
        cout << title  << endl          << endl;
        cout << " 1. " << Lefxao        << endl;
        cout << " 2. " << Lirbea        << endl;
        cout << " 3. " << Mecfau        << endl;
        cout << " 4. " << Tisgeo        << endl;
        cout << " 5. " << Dbmapy        << endl;
        cout << " 6. " << Elilekailsu   << endl;
        cout << " 7. " << Hebtao        << endl;
        cout << " 8. " << Glmtfv        << endl;
        cout << " 9. " << RachzboTisgeo << endl;
        cout << "10. " << Tedgyi        << endl;
        cout << "11. " << Tongue        << endl;

        cout << endl << "Which language would you like to translate from: ";
        cin >> langSelect;

        if (langSelect == Lefxao || langSelect == "1")
        {
            system("CLS");
            cout << LefxaoTitle << endl << endl;
            cout << "Lefxao: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Lefxaotranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Lirbea || langSelect == "2")
        {
            system("CLS");
            cout << LirbeaTitle << endl << endl;
            cout << "Lirbea: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Lirbeatranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Mecfau || langSelect == "3")
        {
            system("CLS");
            cout << MecfauTitle << endl << endl;
            cout << "Mecfau: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Mecfautranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Tisgeo || langSelect == "4")
        {
            system("CLS");
            cout << TisgeoTitle << endl << endl;
            cout << "Tisgeo: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Tisgeotranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Dbmapy || langSelect == "5")
        {
            system("CLS");
            cout << DbmapyTitle << endl << endl;
            cout << "Dbmapy: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Dbmapytranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Elilekailsu || langSelect == "6")
        {
            system("CLS");
            cout << ElilelkailsuTitle << endl << endl;
            cout << "Elilelkailsu: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Elilekailsutranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Hebtao || langSelect == "7")
        {
            system("CLS");
            cout << HebtaoTitle << endl << endl;
            cout << "Hebtao: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Hebtaotranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Glmtfv || langSelect == "8")
        {
            system("CLS");
            cout << GlmtfvTitle << endl << endl;
            cout << "Glmtfv: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Glmtfvtranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == RachzboTisgeo || langSelect == "9")
        {
            system("CLS");
            cout << RachzboTisgeoTitle << endl << endl;
            cout << "Rachzbo Tisgeo: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = RachzboTisgeotranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Tedgyi || langSelect == "10")
        {
            system("CLS");
            cout << TedgyiTitle << endl << endl;
            cout << "Tegyi: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Tedgyitranslator(eng);
            cout << endl << "English: " << lang << endl;
        }

        else if (langSelect == Tongue || langSelect == "11")
        {
            system("CLS");
            cout << TongueTitle << endl << endl;
            cout << "Tongue: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Tonguetranslator(eng);
            cout << endl << "English: " << lang << endl;
        }



        cout << endl << "Would you like to translate something else? ('y' / 'n'): ";
        cin >> choice;
    } while (choice == 'y');
	
	return 0;
}




string Lefxaotranslator(string eng)
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
            elil.append("k");
            break;
        case 'B':
            elil.append("K");
            break;


        case 'c':
            elil.append("l");
            break;
        case 'C':
            elil.append("L");
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
            elil.append("n");
            break;
        case 'F':
            elil.append("N");
            break;


        case 'g':
            elil.append("p");
            break;
        case 'G':
            elil.append("P");
            break;


        case 'h':
            elil.append("q");
            break;
        case 'H':
            elil.append("Q");
            break;


        case 'i':
            elil.append("a");
            break;
        case 'I':
            elil.append("A");
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
            elil.append("t");
            break;
        case 'L':
            elil.append("T");
            break;


        case 'm':
            elil.append("v");
            break;
        case 'M':
            elil.append("V");
            break;


        case 'n':
            elil.append("w");
            break;
        case 'N':
            elil.append("W");
            break;


        case 'o':
            elil.append("e");
            break;
        case 'O':
            elil.append("E");
            break;


        case 'p':
            elil.append("x");
            break;
        case 'P':
            elil.append("X");
            break;


        case 'q':
            elil.append("y");
            break;
        case 'Q':
            elil.append("Y");
            break;


        case 'r':
            elil.append("z");
            break;
        case 'R':
            elil.append("Z");
            break;


        case 's':
            elil.append("b");
            break;
        case 'S':
            elil.append("B");
            break;


        case 't':
            elil.append("c");
            break;
        case 'T':
            elil.append("C");
            break;


        case 'u':
            elil.append("i");
            break;
        case 'U':
            elil.append("I");
            break;


        case 'v':
            elil.append("d");
            break;
        case 'V':
            elil.append("D");
            break;


        case 'w':
            elil.append("f");
            break;
        case 'W':
            elil.append("F");
            break;


        case 'x':
            elil.append("g");
            break;
        case 'X':
            elil.append("G");
            break;


        case 'y':
            elil.append("h");
            break;
        case 'Y':
            elil.append("H");
            break;


        case 'z':
            elil.append("j");
            break;
        case 'Z':
            elil.append("J");
            break;


        case '0':
            elil.append("Zero");
            break;


        case '1':
            elil.append("One");
            break;


        case '2':
            elil.append("Two");
            break;


        case '3':
            elil.append("Three");
            break;


        case '4':
            elil.append("Four");
            break;


        case '5':
            elil.append("Five");
            break;


        case '6':
            elil.append("Six");
            break;


        case '7':
            elil.append("Seven");
            break;


        case '8':
            elil.append("Eight");
            break;


        case '9':
            elil.append("Nine");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}


string Lirbeatranslator(string eng)

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
            elil.append("k");
            break;
        case 'B':
            elil.append("K");
            break;


        case 'c':
            elil.append("l");
            break;
        case 'C':
            elil.append("L");
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
            elil.append("n");
            break;
        case 'F':
            elil.append("N");
            break;


        case 'g':
            elil.append("p");
            break;
        case 'G':
            elil.append("P");
            break;


        case 'h':
            elil.append("q");
            break;
        case 'H':
            elil.append("Q");
            break;


        case 'i':
            elil.append("a");
            break;
        case 'I':
            elil.append("A");
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
            elil.append("t");
            break;
        case 'L':
            elil.append("T");
            break;


        case 'm':
            elil.append("v");
            break;
        case 'M':
            elil.append("V");
            break;


        case 'n':
            elil.append("w");
            break;
        case 'N':
            elil.append("W");
            break;


        case 'o':
            elil.append("e");
            break;
        case 'O':
            elil.append("E");
            break;


        case 'p':
            elil.append("x");
            break;
        case 'P':
            elil.append("X");
            break;


        case 'q':
            elil.append("y");
            break;
        case 'Q':
            elil.append("Y");
            break;


        case 'r':
            elil.append("z");
            break;
        case 'R':
            elil.append("Z");
            break;


        case 's':
            elil.append("b");
            break;
        case 'S':
            elil.append("B");
            break;


        case 't':
            elil.append("c");
            break;
        case 'T':
            elil.append("C");
            break;


        case 'u':
            elil.append("i");
            break;
        case 'U':
            elil.append("I");
            break;


        case 'v':
            elil.append("d");
            break;
        case 'V':
            elil.append("D");
            break;


        case 'w':
            elil.append("f");
            break;
        case 'W':
            elil.append("F");
            break;


        case 'x':
            elil.append("g");
            break;
        case 'X':
            elil.append("G");
            break;


        case 'y':
            elil.append("h");
            break;
        case 'Y':
            elil.append("H");
            break;


        case 'z':
            elil.append("j");
            break;
        case 'Z':
            elil.append("J");
            break;


        case '0':
            elil.append("Zero");
            break;


        case '1':
            elil.append("One");
            break;


        case '2':
            elil.append("Two");
            break;


        case '3':
            elil.append("Three");
            break;


        case '4':
            elil.append("Four");
            break;


        case '5':
            elil.append("Five");
            break;


        case '6':
            elil.append("Six");
            break;


        case '7':
            elil.append("Seven");
            break;


        case '8':
            elil.append("Eight");
            break;


        case '9':
            elil.append("Nine");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}


string Mecfautranslator(string eng)
{
    string elil;
    return elil;
}


string Tisgeotranslator(string eng)
{
    string elil;
    return elil;
}


string Dbmapytranslator(string eng)
{
    string elil;
    return elil;
}


string Elilekailsutranslator(string eng)
{
    string elil;
    return elil;
}


string Hebtaotranslator(string eng)
{
    string elil;
    return elil;
}


string Glmtfvtranslator(string eng)
{
    string elil;
    return elil;
}


string RachzboTisgeotranslator(string eng)
{
    string elil;
    return elil;
}


string Tedgyitranslator(string eng)
{
    string elil;
    return elil;
}


string Tonguetranslator(string eng)
{
    string elil;
    return elil;
}