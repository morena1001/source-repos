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
string ChumofsTusgeotranslator(string eng);
string ChiumaofosiTousigeeotranslator(string eng);
string ChumofosiTusigeotranslator(string eng);


int main()
{
    string title = "ENGLISH TO EVERY LANGUAGE TRANSLATOR";
    string LefxaoTitle = "ENGLISH TO LEFXAO";
    string LirbeaTitle = "ENGLISH TO LIRBEA";
    string MecfauTitle = "ENGLISH TO MECFAU";
    string TisgeoTitle = "ENGLISH TO TISGEO";
    string DbmapyTitle = "ENGLSIH TO DBMAPY";
    string ElilelkailsuTitle = "ENGLSIH TO ELILEKAILSU";
    string HebtaoTitle = "ENGLISH TO HEBTAO";
    string GlmtfvTitle = "ENGLISH TO GLMTFV";
    string RachzboTisgeoTitle = "ENGLISH TO RACHZBO TISGEO";
    string TedgyiTitle = "ENGLISH TO TEGYI";
    string TongueTitle = "ENGLISH TO TONGUE";
    string ChumofsTusgeoTitle = "ENGLISH TO CHUMOFS TUSGEO";
    string ChiumaofosiTousigeeoTitle = "ENGLISH TO CHIUMAOFOSI TOUSIGEEO";
    string ChumofosiTusigeoTitle = "ENGLISH TO CHUMOFOSI TUSIGEO";

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
    string ChumofsTusgeo = "Chumofs Tusgeo";
    string ChiumaofosiTousigeeo = "Chiumaofosi Tousigeeo";
    string ChumofosiTusigeo = "Chumofosi Tusigeo";


    string langSelect;
    string eng;
    string eng2;
    string lang;
    char choice;

    do
    {
        system("CLS");
        cout << title << endl << endl;
        cout << " 1. " << "All languages"      << endl;
        cout << " 2. " << Lefxao               << endl;
        cout << " 3. " << Lirbea               << endl;
        cout << " 4. " << Mecfau               << endl;
        cout << " 5. " << Tisgeo               << endl;
        cout << " 6. " << Dbmapy               << endl;
        cout << " 7. " << Elilekailsu          << endl;
        cout << " 8. " << Hebtao               << endl;
        cout << " 9. " << Glmtfv               << endl;
        cout << "10. " << RachzboTisgeo        << endl;
        cout << "11. " << Tedgyi               << endl;
        cout << "12. " << Tongue               << endl;
        cout << "13. " << ChumofsTusgeo        << endl;
        cout << "14. " << ChiumaofosiTousigeeo << endl;
        cout << "15. " << ChumofosiTusigeo     << endl;
        
        cout << endl << "Which language would you like to translate to: ";
        cin >> langSelect;

        if (langSelect == "All" || langSelect == "1")
        {
            system("CLS");
            cout << title << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);

            lang = Lefxaotranslator(eng);
            cout << endl << "Lefxao: " << lang << endl;

            lang = Lirbeatranslator(eng);
            cout << endl << "Lirbea: " << lang << endl;

            lang = Mecfautranslator(eng);
            cout << endl << "Mecfau: " << lang << endl;

            lang = Tisgeotranslator(eng);
            cout << endl << "Tisgeo: " << lang << endl;

            lang = Dbmapytranslator(eng);
            cout << endl << "Dbmapy: " << lang << endl;

            lang = Elilekailsutranslator(eng);
            cout << endl << "Elilekailsu: " << lang << endl;

            lang = Hebtaotranslator(eng);
            cout << endl << "Hebtao: " << lang << endl;

            lang = Glmtfvtranslator(eng);
            cout << endl << "Glmtfv: " << lang << endl;

            lang = RachzboTisgeotranslator(eng);
            cout << endl << "Rachzbo Tisgeo: " << lang << endl;

            lang = Tedgyitranslator(eng);
            cout << endl << "Tedgyi: " << lang << endl;

            lang = Tonguetranslator(eng);
            cout << endl << "Tongue: " << lang << endl;

            lang = ChumofsTusgeotranslator(eng);
            cout << endl << "Chumofs Tusgeo: " << lang << endl;

            lang = ChiumaofosiTousigeeotranslator(eng);
            cout << endl << "Chiumaofosi Tousigeeo: " << lang << endl;

            lang = ChumofosiTusigeotranslator(eng);
            cout << endl << "ChumofosiTusigeo: " << lang << endl;
        }


        else if (langSelect == Lefxao || langSelect == "2")
        {
            system("CLS");
            cout << LefxaoTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Lefxaotranslator(eng);
            cout << endl << "Lefxao: " << lang << endl;
        }

        else if (langSelect == Lirbea || langSelect == "3")
        {
            system("CLS");
            cout << LirbeaTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Lirbeatranslator(eng);
            cout << endl << "Lirbea: " << lang << endl;
        }

        else if (langSelect == Mecfau || langSelect == "4")
        {
            system("CLS");
            cout << MecfauTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Mecfautranslator(eng);
            cout << endl << "Mecfau: " << lang << endl;
        }

        else if (langSelect == Tisgeo || langSelect == "5")
        {
            system("CLS");
            cout << TisgeoTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Tisgeotranslator(eng);
            cout << endl << "Tisgeo: " << lang << endl;
        }

        else if (langSelect == Dbmapy || langSelect == "6")
        {
            system("CLS");
            cout << DbmapyTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Dbmapytranslator(eng);
            cout << endl << "Dbmapy: " << lang << endl;
        }

        else if (langSelect == Elilekailsu || langSelect == "7")
        {
            system("CLS");
            cout << ElilelkailsuTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Elilekailsutranslator(eng);
            cout << endl << "Elilekailsu: " << lang << endl;
        }

        else if (langSelect == Hebtao || langSelect == "8")
        {
            system("CLS");
            cout << HebtaoTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Hebtaotranslator(eng);
            cout << endl << "Hebtao: " << lang << endl;
        }

        else if (langSelect == Glmtfv || langSelect == "9")
        {
            system("CLS");
            cout << GlmtfvTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Glmtfvtranslator(eng);
            cout << endl << "Glmtfv: " << lang << endl;
        }

        else if (langSelect == RachzboTisgeo || langSelect == "10")
        {
            system("CLS");
            cout << RachzboTisgeoTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = RachzboTisgeotranslator(eng);
            cout << endl << "Rachzbo Tisgeo: " << lang << endl;
        }

        else if (langSelect == Tedgyi || langSelect == "11")
        {
            system("CLS");
            cout << TedgyiTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Tedgyitranslator(eng);
            cout << endl << "Tedgyi: " << lang << endl;
        }  

        else if (langSelect == Tongue || langSelect == "12")
        {
            system("CLS");
            cout << TongueTitle << endl << endl;
            cout << "English: ";
            cin >> eng;
            getline(cin, eng2);
            eng.append(eng2);
            lang = Tonguetranslator(eng);
            cout << endl << "Tongue: " << lang << endl;
        }

        else if (langSelect == ChumofsTusgeo || langSelect == "13")
        {
        system("CLS");
        cout << ChumofsTusgeoTitle << endl << endl;
        cout << "English: ";
        cin >> eng;
        getline(cin, eng2);
        eng.append(eng2);
        lang = ChumofsTusgeotranslator(eng);
        cout << endl << "Chumofs Tusgeo: " << lang << endl;
        }

        else if (langSelect == ChiumaofosiTousigeeo || langSelect == "14")
        {
        system("CLS");
        cout << ChiumaofosiTousigeeoTitle << endl << endl;
        cout << "English: ";
        cin >> eng;
        getline(cin, eng2);
        eng.append(eng2);
        lang = ChiumaofosiTousigeeotranslator(eng);
        cout << endl << "Chiumaofosi Tousigeeo: " << lang << endl;
        }

        else if (langSelect == ChumofosiTusigeo || langSelect == "15")
        {
        system("CLS");
        cout << ChumofosiTusigeoTitle << endl << endl;
        cout << "English: ";
        cin >> eng;
        getline(cin, eng2);
        eng.append(eng2);
        lang = ChumofosiTusigeotranslator(eng);
        cout << endl << "Chumofosi Tusigeo: " << lang << endl;
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


string Lirbeatranslator(string eng)
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


string Mecfautranslator(string eng)
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


string Tisgeotranslator(string eng)
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


string Dbmapytranslator(string eng)
{
    string elil;

    for (int i = 0; i < eng.size(); ++i)
    {
        char letter = eng.at(i);
        switch (letter)
        {
        case 'a':
            elil.append("e");
            break;
        case 'A':
            elil.append("E");
            break;


        case 'b':
            elil.append("t");
            break;
        case 'B':
            elil.append("T");
            break;


        case 'c':
            elil.append("i");
            break;
        case 'C':
            elil.append("I");
            break;


        case 'd':
            elil.append("k");
            break;
        case 'D':
            elil.append("K");
            break;


        case 'e':
            elil.append("y");
            break;
        case 'E':
            elil.append("Y");
            break;


        case 'f':
            elil.append("s");
            break;
        case 'F':
            elil.append("S");
            break;


        case 'g':
            elil.append("a");
            break;
        case 'G':
            elil.append("A");
            break;


        case 'h':
            elil.append("g");
            break;
        case 'H':
            elil.append("G");
            break;


        case 'i':
            elil.append("v");
            break;
        case 'I':
            elil.append("V");
            break;


        case 'j':
            elil.append("c");
            break;
        case 'J':
            elil.append("C");
            break;


        case 'k':
            elil.append("h");
            break;
        case 'K':
            elil.append("H");
            break;


        case 'l':
            elil.append("j");
            break;
        case 'L':
            elil.append("J");
            break;


        case 'm':
            elil.append("z");
            break;
        case 'M':
            elil.append("Z");
            break;


        case 'n':
            elil.append("m");
            break;
        case 'N':
            elil.append("M");
            break;


        case 'o':
            elil.append("b");
            break;
        case 'O':
            elil.append("B");
            break;


        case 'p':
            elil.append("n");
            break;
        case 'P':
            elil.append("N");
            break;


        case 'q':
            elil.append("w");
            break;
        case 'Q':
            elil.append("W");
            break;


        case 'r':
            elil.append("o");
            break;
        case 'R':
            elil.append("O");
            break;


        case 's':
            elil.append("u");
            break;
        case 'S':
            elil.append("U");
            break;


        case 't':
            elil.append("d");
            break;
        case 'T':
            elil.append("D");
            break;


        case 'u':
            elil.append("p");
            break;
        case 'U':
            elil.append("P");
            break;


        case 'v':
            elil.append("r");
            break;
        case 'V':
            elil.append("R");
            break;


        case 'w':
            elil.append("x");
            break;
        case 'W':
            elil.append("X");
            break;


        case 'x':
            elil.append("l");
            break;
        case 'X':
            elil.append("L");
            break;


        case 'y':
            elil.append("q");
            break;
        case 'Y':
            elil.append("Q");
            break;


        case 'z':
            elil.append("f");
            break;
        case 'Z':
            elil.append("F");
            break;


        case '0':
            elil.append("Fyob");
            break;


        case '1':
            elil.append("Bmy");
            break;


        case '2':
            elil.append("Dxb");
            break;


        case '3':
            elil.append("Dgoyy");
            break;


        case '4':
            elil.append("Sbpo");
            break;


        case '5':
            elil.append("Svry");
            break;


        case '6':
            elil.append("Uvl");
            break;


        case '7':
            elil.append("Uyrym");
            break;


        case '8':
            elil.append("Yvagd");
            break;


        case '9':
            elil.append("Mymy");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}


string Elilekailsutranslator(string eng)
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


string Hebtaotranslator(string eng)
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
            elil.append("p");
            break;
        case 'B':
            elil.append("P");
            break;


        case 'c':
            elil.append("q");
            break;
        case 'C':
            elil.append("Q");
            break;


        case 'd':
            elil.append("r");
            break;
        case 'D':
            elil.append("R");
            break;


        case 'e':
            elil.append("o");
            break;
        case 'E':
            elil.append("O");
            break;


        case 'f':
            elil.append("s");
            break;
        case 'F':
            elil.append("S");
            break;


        case 'g':
            elil.append("t");
            break;
        case 'G':
            elil.append("T");
            break;


        case 'h':
            elil.append("v");
            break;
        case 'H':
            elil.append("V");
            break;


        case 'i':
            elil.append("i");
            break;
        case 'I':
            elil.append("I");
            break;


        case 'j':
            elil.append("w");
            break;
        case 'J':
            elil.append("W");
            break;


        case 'k':
            elil.append("x");
            break;
        case 'K':
            elil.append("X");
            break;


        case 'l':
            elil.append("y");
            break;
        case 'L':
            elil.append("Y");
            break;


        case 'm':
            elil.append("z");
            break;
        case 'M':
            elil.append("Z");
            break;


        case 'n':
            elil.append("b");
            break;
        case 'N':
            elil.append("B");
            break;


        case 'o':
            elil.append("e");
            break;
        case 'O':
            elil.append("E");
            break;


        case 'p':
            elil.append("c");
            break;
        case 'P':
            elil.append("C");
            break;


        case 'q':
            elil.append("d");
            break;
        case 'Q':
            elil.append("D");
            break;


        case 'r':
            elil.append("f");
            break;
        case 'R':
            elil.append("F");
            break;


        case 's':
            elil.append("g");
            break;
        case 'S':
            elil.append("G");
            break;


        case 't':
            elil.append("h");
            break;
        case 'T':
            elil.append("H");
            break;


        case 'u':
            elil.append("a");
            break;
        case 'U':
            elil.append("A");
            break;


        case 'v':
            elil.append("j");
            break;
        case 'V':
            elil.append("J");
            break;


        case 'w':
            elil.append("k");
            break;
        case 'W':
            elil.append("K");
            break;


        case 'x':
            elil.append("l");
            break;
        case 'X':
            elil.append("L");
            break;


        case 'y':
            elil.append("m");
            break;
        case 'Y':
            elil.append("M");
            break;


        case 'z':
            elil.append("n");
            break;
        case 'Z':
            elil.append("N");
            break;


        case '0':
            elil.append("Nofe");
            break;


        case '1':
            elil.append("Ebo");
            break;


        case '2':
            elil.append("hke");
            break;


        case '3':
            elil.append("hvfoo");
            break;


        case '4':
            elil.append("seaf");
            break;


        case '5':
            elil.append("sijo");
            break;


        case '6':
            elil.append("gil");
            break;


        case '7':
            elil.append("gojob");
            break;


        case '8':
            elil.append("oitvh");
            break;


        case '9':
            elil.append("bibo");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}


string Glmtfvtranslator(string eng)
{
    string elil;

    for (int i = 0; i < eng.size(); ++i)
    {
        char letter = eng.at(i);
        switch (letter)
        {
        case 'a':
            elil.append("z");
            break;
        case 'A':
            elil.append("Z");
            break;


        case 'b':
            elil.append("y");
            break;
        case 'B':
            elil.append("Y");
            break;


        case 'c':
            elil.append("x");
            break;
        case 'C':
            elil.append("X");
            break;


        case 'd':
            elil.append("w");
            break;
        case 'D':
            elil.append("W");
            break;


        case 'e':
            elil.append("v");
            break;
        case 'E':
            elil.append("V");
            break;


        case 'f':
            elil.append("u");
            break;
        case 'F':
            elil.append("U");
            break;


        case 'g':
            elil.append("t");
            break;
        case 'G':
            elil.append("T");
            break;


        case 'h':
            elil.append("s");
            break;
        case 'H':
            elil.append("S");
            break;


        case 'i':
            elil.append("r");
            break;
        case 'I':
            elil.append("R");
            break;


        case 'j':
            elil.append("q");
            break;
        case 'J':
            elil.append("Q");
            break;


        case 'k':
            elil.append("p");
            break;
        case 'K':
            elil.append("P");
            break;


        case 'l':
            elil.append("o");
            break;
        case 'L':
            elil.append("O");
            break;


        case 'm':
            elil.append("n");
            break;
        case 'M':
            elil.append("N");
            break;


        case 'n':
            elil.append("m");
            break;
        case 'N':
            elil.append("M");
            break;


        case 'o':
            elil.append("l");
            break;
        case 'O':
            elil.append("L");
            break;


        case 'p':
            elil.append("k");
            break;
        case 'P':
            elil.append("K");
            break;


        case 'q':
            elil.append("j");
            break;
        case 'Q':
            elil.append("J");
            break;


        case 'r':
            elil.append("i");
            break;
        case 'R':
            elil.append("I");
            break;


        case 's':
            elil.append("h");
            break;
        case 'S':
            elil.append("H");
            break;


        case 't':
            elil.append("g");
            break;
        case 'T':
            elil.append("G");
            break;


        case 'u':
            elil.append("f");
            break;
        case 'U':
            elil.append("F");
            break;


        case 'v':
            elil.append("e");
            break;
        case 'V':
            elil.append("E");
            break;


        case 'w':
            elil.append("d");
            break;
        case 'W':
            elil.append("D");
            break;


        case 'x':
            elil.append("c");
            break;
        case 'X':
            elil.append("C");
            break;


        case 'y':
            elil.append("b");
            break;
        case 'Y':
            elil.append("B");
            break;


        case 'z':
            elil.append("a");
            break;
        case 'Z':
            elil.append("A");
            break;


        case '0':
            elil.append("Avil");
            break;


        case '1':
            elil.append("Lmv");
            break;


        case '2':
            elil.append("Gdl");
            break;


        case '3':
            elil.append("Gsivv");
            break;


        case '4':
            elil.append("ulfi");
            break;


        case '5':
            elil.append("Urev");
            break;


        case '6':
            elil.append("Hrc");
            break;


        case '7':
            elil.append("Hvevm");
            break;


        case '8':
            elil.append("Vrtsg");
            break;


        case '9':
            elil.append("Mrmv");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}


string RachzboTisgeotranslator(string eng)
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
            elil.append("ñ");
            break;
        case 'B':
            elil.append("Ñ");
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
            elil.append("ch");
            break;
        case 'M':
            elil.append("Ch");
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
            elil.append("sh");
            break;
        case 'X':
            elil.append("SH");
            break;


        case 'y':
            elil.append("ai");
            break;
        case 'Y':
            elil.append("Ai");
            break;


        case 'z':
            elil.append("p");
            break;
        case 'Z':
            elil.append("P");
            break;


        case '0':
            elil.append("Podi");
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
            elil.append("Rash");
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


string Tedgyitranslator(string eng)
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
            elil.append("ñ");
            break;
        case 'B':
            elil.append("Ñ");
            break;


        case 'c':
            elil.append("sh");
            break;
        case 'C':
            elil.append("SH");
            break;


        case 'd':
            elil.append("w");
            break;
        case 'D':
            elil.append("W");
            break;


        case 'e':
            elil.append("i");
            break;
        case 'E':
            elil.append("I");
            break;


        case 'f':
            elil.append("h");
            break;
        case 'F':
            elil.append("H");
            break;


        case 'g':
            elil.append("g");
            break;
        case 'G':
            elil.append("G");
            break;


        case 'h':
            elil.append("r");
            break;
        case 'H':
            elil.append("R");
            break;


        case 'i':
            elil.append("a");
            break;
        case 'I':
            elil.append("A");
            break;


        case 'j':
            elil.append("n");
            break;
        case 'J':
            elil.append("N");
            break;


        case 'k':
            elil.append("b");
            break;
        case 'K':
            elil.append("B");
            break;


        case 'l':
            elil.append("j");
            break;
        case 'L':
            elil.append("J");
            break;


        case 'm':
            elil.append("p");
            break;
        case 'M':
            elil.append("P");
            break;


        case 'n':
            elil.append("d");
            break;
        case 'N':
            elil.append("D");
            break;


        case 'o':
            elil.append("e");
            break;
        case 'O':
            elil.append("E");
            break;


        case 'p':
            elil.append("ch");
            break;
        case 'P':
            elil.append("CH");
            break;


        case 'q':
            elil.append("z");
            break;
        case 'Q':
            elil.append("Z");
            break;


        case 'r':
            elil.append("l");
            break;
        case 'R':
            elil.append("L");
            break;


        case 's':
            elil.append("k");
            break;
        case 'S':
            elil.append("K");
            break;


        case 't':
            elil.append("t");
            break;
        case 'T':
            elil.append("T");
            break;


        case 'u':
            elil.append("y");
            break;
        case 'U':
            elil.append("Y");
            break;


        case 'v':
            elil.append("s");
            break;
        case 'V':
            elil.append("S");
            break;


        case 'w':
            elil.append("m");
            break;
        case 'W':
            elil.append("M");
            break;


        case 'x':
            elil.append("v");
            break;
        case 'X':
            elil.append("V");
            break;


        case 'y':
            elil.append("i");
            break;
        case 'Y':
            elil.append("I");
            break;


        case 'z':
            elil.append("f");
            break;
        case 'Z':
            elil.append("F");
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


string Tonguetranslator(string eng)
{
    string elil;

    for (int i = 0; i < eng.size(); ++i)
    {
        char letter = eng.at(i);
        switch (letter)
        {
        case 'a':
            elil.append("a");
            break;
        case 'A':
            elil.append("A");
            break;


        case 'b':
            elil.append("b");
            break;
        case 'B':
            elil.append("B");
            break;


        case 'c':
            elil.append("ch");
            break;
        case 'C':
            elil.append("CH");
            break;


        case 'd':
            elil.append("d");
            break;
        case 'D':
            elil.append("D");
            break;


        case 'e':
            elil.append("e");
            break;
        case 'E':
            elil.append("E");
            break;


        case 'f':
            elil.append("f");
            break;
        case 'F':
            elil.append("F");
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
            elil.append("i");
            break;
        case 'I':
            elil.append("I");
            break;


        case 'j':
            elil.append("j");
            break;
        case 'J':
            elil.append("J");
            break;


        case 'k':
            elil.append("k");
            break;
        case 'K':
            elil.append("K");
            break;


        case 'l':
            elil.append("l");
            break;
        case 'L':
            elil.append("L");
            break;


        case 'm':
            elil.append("m");
            break;
        case 'M':
            elil.append("M");
            break;


        case 'n':
            elil.append("n");
            break;
        case 'N':
            elil.append("N");
            break;


        case 'o':
            elil.append("o");
            break;
        case 'O':
            elil.append("O");
            break;


        case 'p':
            elil.append("p");
            break;
        case 'P':
            elil.append("P");
            break;


        case 'q':
            elil.append("ñ");
            break;
        case 'Q':
            elil.append("Ñ");
            break;


        case 'r':
            elil.append("r");
            break;
        case 'R':
            elil.append("R");
            break;


        case 's':
            elil.append("s");
            break;
        case 'S':
            elil.append("S");
            break;


        case 't':
            elil.append("t");
            break;
        case 'T':
            elil.append("T");
            break;


        case 'u':
            elil.append("u");
            break;
        case 'U':
            elil.append("U");
            break;


        case 'v':
            elil.append("v");
            break;
        case 'V':
            elil.append("V");
            break;


        case 'w':
            elil.append("w");
            break;
        case 'W':
            elil.append("W");
            break;


        case 'x':
            elil.append("sh");
            break;
        case 'X':
            elil.append("SH");
            break;


        case 'y':
            elil.append("ai");
            break;
        case 'Y':
            elil.append("ai");
            break;


        case 'z':
            elil.append("z");
            break;
        case 'Z':
            elil.append("Z");
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
            elil.append("Sish");
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


string ChumofsTusgeotranslator(string eng)
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
            elil.append("ñ");
            break;
        case 'B':
            elil.append("Ñ");
            break;


        case 'c':
            elil.append("d");
            break;
        case 'C':
            elil.append("D");
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
            elil.append("ch");
            break;
        case 'M':
            elil.append("Ch");
            break;


        case 'n':
            elil.append("s");
            break;
        case 'N':
            elil.append("S");
            break;


        case 'o':
            elil.append("u");
            break;
        case 'O':
            elil.append("U");
            break;


        case 'p':
            elil.append("l");
            break;
        case 'P':
            elil.append("L");
            break;


        case 'q':
            elil.append("w");
            break;
        case 'Q':
            elil.append("W");
            break;


        case 'r':
            elil.append("f");
            break;
        case 'R':
            elil.append("F");
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
            elil.append("z");
            break;
        case 'V':
            elil.append("Z");
            break;


        case 'w':
            elil.append("n");
            break;
        case 'W':
            elil.append("N");
            break;


        case 'x':
            elil.append("sh");
            break;
        case 'X':
            elil.append("Sh");
            break;


        case 'y':
            elil.append("ai");
            break;
        case 'Y':
            elil.append("Ai");
            break;


        case 'z':
            elil.append("p");
            break;
        case 'Z':
            elil.append("P");
            break;


        case '0':
            elil.append("Pofu");
            break;


        case '1':
            elil.append("Uso");
            break;


        case '2':
            elil.append("Tnu");
            break;


        case '3':
            elil.append("Thfoo");
            break;


        case '4':
            elil.append("Kuef");
            break;


        case '5':
            elil.append("Kazo");
            break;


        case '6':
            elil.append("Rash");
            break;


        case '7':
            elil.append("Rozos");
            break;


        case '8':
            elil.append("oaght");
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


string ChiumaofosiTousigeeotranslator(string eng)
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
            elil.append("ña");
            break;
        case 'B':
            elil.append("Ña");
            break;


        case 'c':
            elil.append("da");
            break;
        case 'C':
            elil.append("Da");
            break;


        case 'd':
            elil.append("ma");
            break;
        case 'D':
            elil.append("Ma");
            break;


        case 'e':
            elil.append("o");
            break;
        case 'E':
            elil.append("O");
            break;


        case 'f':
            elil.append("ke");
            break;
        case 'F':
            elil.append("Ke");
            break;


        case 'g':
            elil.append("ge");
            break;
        case 'G':
            elil.append("Ge");
            break;


        case 'h':
            elil.append("he");
            break;
        case 'H':
            elil.append("He");
            break;


        case 'i':
            elil.append("a");
            break;
        case 'I':
            elil.append("A");
            break;


        case 'j':
            elil.append("vi");
            break;
        case 'J':
            elil.append("Vi");
            break;


        case 'k':
            elil.append("ji");
            break;
        case 'K':
            elil.append("Ji");
            break;


        case 'l':
            elil.append("bi");
            break;
        case 'L':
            elil.append("Bi");
            break;


        case 'm':
            elil.append("chi");
            break;
        case 'M':
            elil.append("Chi");
            break;


        case 'n':
            elil.append("si");
            break;
        case 'N':
            elil.append("Si");
            break;


        case 'o':
            elil.append("u");
            break;
        case 'O':
            elil.append("U");
            break;


        case 'p':
            elil.append("lo");
            break;
        case 'P':
            elil.append("Lo");
            break;


        case 'q':
            elil.append("wo");
            break;
        case 'Q':
            elil.append("Wo");
            break;


        case 'r':
            elil.append("fo");
            break;
        case 'R':
            elil.append("Fo");
            break;


        case 's':
            elil.append("ro");
            break;
        case 'S':
            elil.append("Ro");
            break;


        case 't':
            elil.append("to");
            break;
        case 'T':
            elil.append("To");
            break;


        case 'u':
            elil.append("e");
            break;
        case 'U':
            elil.append("E");
            break;


        case 'v':
            elil.append("zu");
            break;
        case 'V':
            elil.append("Zu");
            break;


        case 'w':
            elil.append("nu");
            break;
        case 'W':
            elil.append("Nu");
            break;


        case 'x':
            elil.append("shu");
            break;
        case 'X':
            elil.append("Shu");
            break;


        case 'y':
            elil.append("ai");
            break;
        case 'Y':
            elil.append("Ai");
            break;


        case 'z':
            elil.append("pu");
            break;
        case 'Z':
            elil.append("Pu");
            break;


        case '0':
            elil.append("Puofou");
            break;


        case '1':
            elil.append("Usio");
            break;


        case '2':
            elil.append("Tonuu");
            break;


        case '3':
            elil.append("Tohefooo");
            break;


        case '4':
            elil.append("Keuefo");
            break;


        case '5':
            elil.append("Keazuo");
            break;


        case '6':
            elil.append("Roashu");
            break;


        case '7':
            elil.append("Roozuosi");
            break;


        case '8':
            elil.append("oageheto");
            break;


        case '9':
            elil.append("Siasio");
            break;


        default:
            elil.push_back(letter);
            break;
        }
    }

    return elil;
}


string ChumofosiTusigeotranslator(string eng)
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
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i+1) == 'Y')
                elil.append("ñ");
            else
                elil.append("ña");
            break;
        case 'B':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("Ñ");
            else
                elil.append("Ña");
            break;


        case 'c':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("d");
            else
                elil.append("da");
            break;
        case 'C':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("D");
            else
                elil.append("Da");
            break;


        case 'd':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("m");
            else
                elil.append("ma");
            break;
        case 'D':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("M");
            else
                elil.append("Ma");
            break;


        case 'e':
            elil.append("o");
            break;
        case 'E':
            elil.append("O");
            break;


        case 'f':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("k");
            else
                elil.append("ke");
            break;
        case 'F':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("K");
            else
                elil.append("Ke");
            break;


        case 'g':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("g");
            else
                elil.append("ge");
            break;
        case 'G':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("G");
            else
                elil.append("Ge");
            break;


        case 'h':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("h");
            else
                elil.append("he");
            break;
        case 'H':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("H");
            else
                elil.append("He");
            break;


        case 'i':
            elil.append("a");
            break;
        case 'I':
            elil.append("A");
            break;


        case 'j':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("v");
            else
                elil.append("vi");
            break;
        case 'J':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("V");
            else
                elil.append("Vi");
            break;


        case 'k':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("j");
            else
                elil.append("ji");
            break;
        case 'K':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("J");
            else
                elil.append("Ji");
            break;


        case 'l':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("b");
            else
                elil.append("bi");
            break;
        case 'L':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("B");
            else
                elil.append("Bi");
            break;


        case 'm':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("ch");
            else
                elil.append("chi");
            break;
        case 'M':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("Ch");
            else
                elil.append("Chi");
            break;


        case 'n':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("s");
            else
                elil.append("si");
            break;
        case 'N':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("S");
            else
                elil.append("Si");
            break;


        case 'o':

            elil.append("u");
            break;
        case 'O':
            elil.append("U");
            break;


        case 'p':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("l");
            else
                elil.append("lo");
            break;
        case 'P':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("L");
            else
                elil.append("Lo");
            break;


        case 'q':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("w");
            else
                elil.append("wo");
            break;
        case 'Q':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("W");
            else
                elil.append("Wo");
            break;


        case 'r':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("f");
            else
                elil.append("fo");
            break;
        case 'R':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("F");
            else
                elil.append("Fo");
            break;


        case 's':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("r");
            else
                elil.append("ro");
            break;
        case 'S':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("R");
            else
                elil.append("Ro");
            break;


        case 't':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("t");
            else
                elil.append("to");
            break;
        case 'T':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("T");
            else
                elil.append("To");
            break;


        case 'u':
            elil.append("e");
            break;
        case 'U':
            elil.append("E");
            break;


        case 'v':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("z");
            else
                elil.append("zu");
            break;
        case 'V':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("Z");
            else
                elil.append("Zu");
            break;


        case 'w':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("n");
            else
                elil.append("nu");
            break;
        case 'W':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("N");
            else
                elil.append("Nu");
            break;


        case 'x':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("sh");
            else
                elil.append("shu");
            break;
        case 'X':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("Sh");
            else
                elil.append("Shu");
            break;


        case 'y':
            elil.append("ai");
            break;
        case 'Y':
            elil.append("Ai");
            break;


        case 'z':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("p");
            else
                elil.append("pu");
            break;
        case 'Z':
            if (eng.at(i + 1) == 'a' || eng.at(i + 1) == 'A' || eng.at(i + 1) == 'e' || eng.at(i + 1) == 'E' || eng.at(i + 1) == 'i' || eng.at(i + 1) == 'I' || eng.at(i + 1) == 'o' || eng.at(i + 1) == 'O' || eng.at(i + 1) == 'u' || eng.at(i + 1) == 'U' || eng.at(i + 1) == 'y' || eng.at(i + 1) == 'Y')
                elil.append("P");
            else
                elil.append("Pu");
            break;


        case '0':
            elil.append("Pofu");
            break;


        case '1':
            elil.append("Uso");
            break;


        case '2':
            elil.append("Tonu");
            break;


        case '3':
            elil.append("Tohefoo");
            break;


        case '4':
            elil.append("Kuefo");
            break;


        case '5':
            elil.append("Kazo");
            break;


        case '6':
            elil.append("Rashu");
            break;


        case '7':
            elil.append("Rozosi");
            break;


        case '8':
            elil.append("oageheto");
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