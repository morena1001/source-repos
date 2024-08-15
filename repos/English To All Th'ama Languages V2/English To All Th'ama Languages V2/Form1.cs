using System;
using System.IO;

namespace English_To_All_Th_ama_Languages_V2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        string file = @"C:\Users\josue\source\repos\English To All Th'ama Languages V2\Language Names.txt";

        bool bracketCounter = false;

        // Translators
        public string LefxaoTranslator(string eng)
        {
            bracketCounter = false; 
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter= false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case '[':
                                bracketCounter = true;
                                break;
                            case ']':
                                bracketCounter = false;
                                break;


                            case 'a':
                                elil += "i";
                                break;
                            case 'A':
                                elil += "I";
                                break;


                            case 'b':
                                elil += "s";
                                break;
                            case 'B':
                                elil += "S";
                                break;


                            case 'c':
                                elil += "t";
                                break;
                            case 'C':
                                elil += "T";
                                break;


                            case 'd':
                                elil += "v";
                                break;
                            case 'D':
                                elil += "V";
                                break;


                            case 'e':
                                elil += "o";
                                break;
                            case 'E':
                                elil += "O";
                                break;


                            case 'f':
                                elil += "w";
                                break;
                            case 'F':
                                elil += "W";
                                break;


                            case 'g':
                                elil += "x";
                                break;
                            case 'G':
                                elil += "X";
                                break;


                            case 'h':
                                elil += "y";
                                break;
                            case 'H':
                                elil += "Y";
                                break;


                            case 'i':
                                elil += "u";
                                break;
                            case 'I':
                                elil += "U";
                                break;


                            case 'j':
                                elil += "z";
                                break;
                            case 'J':
                                elil += "Z";
                                break;


                            case 'k':
                                elil += "b";
                                break;
                            case 'K':
                                elil += "B";
                                break;


                            case 'l':
                                elil += "c";
                                break;
                            case 'L':
                                elil += "C";
                                break;


                            case 'm':
                                elil += "d";
                                break;
                            case 'M':
                                elil += "D";
                                break;


                            case 'n':
                                elil += "f";
                                break;
                            case 'N':
                                elil += "F";
                                break;


                            case 'o':
                                elil += "e";
                                break;
                            case 'O':
                                elil += "E";
                                break;


                            case 'p':
                                elil += "g";
                                break;
                            case 'P':
                                elil += "G";
                                break;


                            case 'q':
                                elil += "h";
                                break;
                            case 'Q':
                                elil += "H";
                                break;


                            case 'r':
                                elil += "j";
                                break;
                            case 'R':
                                elil += "J";
                                break;


                            case 's':
                                elil += "k";
                                break;
                            case 'S':
                                elil += "K";
                                break;


                            case 't':
                                elil += "l";
                                break;
                            case 'T':
                                elil += "L";
                                break;


                            case 'u':
                                elil += "a";
                                break;
                            case 'U':
                                elil += "A";
                                break;


                            case 'v':
                                elil += "m";
                                break;
                            case 'V':
                                elil += "M";
                                break;


                            case 'w':
                                elil += "n";
                                break;
                            case 'W':
                                elil += "N";
                                break;


                            case 'x':
                                elil += "p";
                                break;
                            case 'X':
                                elil += "P";
                                break;


                            case 'y':
                                elil += "q";
                                break;
                            case 'Y':
                                elil += "Q";
                                break;


                            case 'z':
                                elil += "r";
                                break;
                            case 'Z':
                                elil += "R";
                                break;


                            case '0':
                                elil += "Roje";
                                break;


                            case '1':
                                elil += "Efo";
                                break;


                            case '2':
                                elil += "Lne";
                                break;


                            case '3':
                                elil += "lyjoo";
                                break;


                            case '4':
                                elil += "weaj";
                                break;


                            case '5':
                                elil += "Wumo";
                                break;


                            case '6':
                                elil += "Kup";
                                break;


                            case '7':
                                elil += "komof";
                                break;


                            case '8':
                                elil += "Ouxyl";
                                break;


                            case '9':
                                elil += "Fufo";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string LirbeaTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "o";
                                break;
                            case 'A':
                                elil += "O";
                                break;


                            case 'b':
                                elil += "q";
                                break;
                            case 'B':
                                elil += "Q";
                                break;


                            case 'c':
                                elil += "t";
                                break;
                            case 'C':
                                elil += "T";
                                break;


                            case 'd':
                                elil += "f";
                                break;
                            case 'D':
                                elil += "F";
                                break;


                            case 'e':
                                elil += "a";
                                break;
                            case 'E':
                                elil += "A";
                                break;


                            case 'f':
                                elil += "m";
                                break;
                            case 'F':
                                elil += "M";
                                break;


                            case 'g':
                                elil += "b";
                                break;
                            case 'G':
                                elil += "B";
                                break;


                            case 'h':
                                elil += "g";
                                break;
                            case 'H':
                                elil += "G";
                                break;


                            case 'i':
                                elil += "u";
                                break;
                            case 'I':
                                elil += "U";
                                break;


                            case 'j':
                                elil += "n";
                                break;
                            case 'J':
                                elil += "N";
                                break;


                            case 'k':
                                elil += "s";
                                break;
                            case 'K':
                                elil += "S";
                                break;


                            case 'l':
                                elil += "v";
                                break;
                            case 'L':
                                elil += "V";
                                break;


                            case 'm':
                                elil += "k";
                                break;
                            case 'M':
                                elil += "K";
                                break;


                            case 'n':
                                elil += "r";
                                break;
                            case 'N':
                                elil += "R";
                                break;


                            case 'o':
                                elil += "i";
                                break;
                            case 'O':
                                elil += "I";
                                break;


                            case 'p':
                                elil += "y";
                                break;
                            case 'P':
                                elil += "Y";
                                break;


                            case 'q':
                                elil += "w";
                                break;
                            case 'Q':
                                elil += "W";
                                break;


                            case 'r':
                                elil += "z";
                                break;
                            case 'R':
                                elil += "Z";
                                break;


                            case 's':
                                elil += "h";
                                break;
                            case 'S':
                                elil += "H";
                                break;


                            case 't':
                                elil += "l";
                                break;
                            case 'T':
                                elil += "L";
                                break;


                            case 'u':
                                elil += "e";
                                break;
                            case 'U':
                                elil += "E";
                                break;


                            case 'v':
                                elil += "d";
                                break;
                            case 'V':
                                elil += "D";
                                break;


                            case 'w':
                                elil += "j";
                                break;
                            case 'W':
                                elil += "J";
                                break;


                            case 'x':
                                elil += "c";
                                break;
                            case 'X':
                                elil += "C";
                                break;


                            case 'y':
                                elil += "p";
                                break;
                            case 'Y':
                                elil += "P";
                                break;


                            case 'z':
                                elil += "x";
                                break;
                            case 'Z':
                                elil += "X";
                                break;


                            case '0':
                                elil += "Xazi";
                                break;


                            case '1':
                                elil += "Ira";
                                break;


                            case '2':
                                elil += "Lji";
                                break;


                            case '3':
                                elil += "Lgzaa";
                                break;


                            case '4':
                                elil += "Miez";
                                break;


                            case '5':
                                elil += "Muda";
                                break;


                            case '6':
                                elil += "Huc";
                                break;


                            case '7':
                                elil += "Hadar";
                                break;


                            case '8':
                                elil += "Aubgl";
                                break;


                            case '9':
                                elil += "Rura";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string MecfauTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "i";
                                break;
                            case 'A':
                                elil += "I";
                                break;


                            case 'b':
                                elil += "d";
                                break;
                            case 'B':
                                elil += "D";
                                break;


                            case 'c':
                                elil += "k";
                                break;
                            case 'C':
                                elil += "K";
                                break;


                            case 'd':
                                elil += "q";
                                break;
                            case 'D':
                                elil += "Q";
                                break;


                            case 'e':
                                elil += "u";
                                break;
                            case 'E':
                                elil += "U";
                                break;


                            case 'f':
                                elil += "l";
                                break;
                            case 'F':
                                elil += "L";
                                break;


                            case 'g':
                                elil += "f";
                                break;
                            case 'G':
                                elil += "F";
                                break;


                            case 'h':
                                elil += "p";
                                break;
                            case 'H':
                                elil += "P";
                                break;


                            case 'i':
                                elil += "o";
                                break;
                            case 'I':
                                elil += "O";
                                break;


                            case 'j':
                                elil += "r";
                                break;
                            case 'J':
                                elil += "R";
                                break;


                            case 'k':
                                elil += "s";
                                break;
                            case 'K':
                                elil += "S";
                                break;


                            case 'l':
                                elil += "b";
                                break;
                            case 'L':
                                elil += "B";
                                break;


                            case 'm':
                                elil += "g";
                                break;
                            case 'M':
                                elil += "G";
                                break;


                            case 'n':
                                elil += "c";
                                break;
                            case 'N':
                                elil += "C";
                                break;


                            case 'o':
                                elil += "e";
                                break;
                            case 'O':
                                elil += "E";
                                break;


                            case 'p':
                                elil += "j";
                                break;
                            case 'P':
                                elil += "J";
                                break;


                            case 'q':
                                elil += "w";
                                break;
                            case 'Q':
                                elil += "W";
                                break;


                            case 'r':
                                elil += "h";
                                break;
                            case 'R':
                                elil += "H";
                                break;


                            case 's':
                                elil += "n";
                                break;
                            case 'S':
                                elil += "N";
                                break;


                            case 't':
                                elil += "m";
                                break;
                            case 'T':
                                elil += "M";
                                break;


                            case 'u':
                                elil += "a";
                                break;
                            case 'U':
                                elil += "A";
                                break;


                            case 'v':
                                elil += "y";
                                break;
                            case 'V':
                                elil += "Y";
                                break;


                            case 'w':
                                elil += "v";
                                break;
                            case 'W':
                                elil += "V";
                                break;


                            case 'x':
                                elil += "z";
                                break;
                            case 'X':
                                elil += "Z";
                                break;


                            case 'y':
                                elil += "t";
                                break;
                            case 'Y':
                                elil += "T";
                                break;


                            case 'z':
                                elil += "x";
                                break;
                            case 'Z':
                                elil += "X";
                                break;


                            case '0':
                                elil += "Xuhe";
                                break;


                            case '1':
                                elil += "Ecu";
                                break;


                            case '2':
                                elil += "Mve";
                                break;


                            case '3':
                                elil += "Mphuu";
                                break;


                            case '4':
                                elil += "Leah";
                                break;


                            case '5':
                                elil += "Loyu";
                                break;


                            case '6':
                                elil += "Noz";
                                break;


                            case '7':
                                elil += "Nuyuc";
                                break;


                            case '8':
                                elil += "Uofpm";
                                break;


                            case '9':
                                elil += "Cocu";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string TisgeoTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "u";
                                break;
                            case 'A':
                                elil += "U";
                                break;


                            case 'b':
                                elil += "q";
                                break;
                            case 'B':
                                elil += "Q";
                                break;


                            case 'c':
                                elil += "z";
                                break;
                            case 'C':
                                elil += "Z";
                                break;


                            case 'd':
                                elil += "m";
                                break;
                            case 'D':
                                elil += "M";
                                break;


                            case 'e':
                                elil += "o";
                                break;
                            case 'E':
                                elil += "O";
                                break;


                            case 'f':
                                elil += "k";
                                break;
                            case 'F':
                                elil += "K";
                                break;


                            case 'g':
                                elil += "g";
                                break;
                            case 'G':
                                elil += "G";
                                break;


                            case 'h':
                                elil += "h";
                                break;
                            case 'H':
                                elil += "H";
                                break;


                            case 'i':
                                elil += "a";
                                break;
                            case 'I':
                                elil += "A";
                                break;


                            case 'j':
                                elil += "v";
                                break;
                            case 'J':
                                elil += "V";
                                break;


                            case 'k':
                                elil += "j";
                                break;
                            case 'K':
                                elil += "J";
                                break;


                            case 'l':
                                elil += "b";
                                break;
                            case 'L':
                                elil += "B";
                                break;


                            case 'm':
                                elil += "c";
                                break;
                            case 'M':
                                elil += "C";
                                break;


                            case 'n':
                                elil += "s";
                                break;
                            case 'N':
                                elil += "S";
                                break;


                            case 'o':
                                elil += "i";
                                break;
                            case 'O':
                                elil += "I";
                                break;


                            case 'p':
                                elil += "l";
                                break;
                            case 'P':
                                elil += "L";
                                break;


                            case 'q':
                                elil += "n";
                                break;
                            case 'Q':
                                elil += "N";
                                break;


                            case 'r':
                                elil += "d";
                                break;
                            case 'R':
                                elil += "D";
                                break;


                            case 's':
                                elil += "r";
                                break;
                            case 'S':
                                elil += "R";
                                break;


                            case 't':
                                elil += "t";
                                break;
                            case 'T':
                                elil += "T";
                                break;


                            case 'u':
                                elil += "e";
                                break;
                            case 'U':
                                elil += "E";
                                break;


                            case 'v':
                                elil += "w";
                                break;
                            case 'V':
                                elil += "W";
                                break;


                            case 'w':
                                elil += "f";
                                break;
                            case 'W':
                                elil += "F";
                                break;


                            case 'x':
                                elil += "x";
                                break;
                            case 'X':
                                elil += "X";
                                break;


                            case 'y':
                                elil += "p";
                                break;
                            case 'Y':
                                elil += "P";
                                break;


                            case 'z':
                                elil += "y";
                                break;
                            case 'Z':
                                elil += "Y";
                                break;


                            case '0':
                                elil += "Yodi";
                                break;


                            case '1':
                                elil += "Iso";
                                break;


                            case '2':
                                elil += "Tfi";
                                break;


                            case '3':
                                elil += "Thdoo";
                                break;


                            case '4':
                                elil += "Kied";
                                break;


                            case '5':
                                elil += "Kawo";
                                break;


                            case '6':
                                elil += "Rax";
                                break;


                            case '7':
                                elil += "Rowos";
                                break;


                            case '8':
                                elil += "Oaght";
                                break;


                            case '9':
                                elil += "Saso";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string DbmapyTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "e";
                                break;
                            case 'A':
                                elil += "E";
                                break;


                            case 'b':
                                elil += "t";
                                break;
                            case 'B':
                                elil += "T";
                                break;


                            case 'c':
                                elil += "i";
                                break;
                            case 'C':
                                elil += "I";
                                break;


                            case 'd':
                                elil += "k";
                                break;
                            case 'D':
                                elil += "K";
                                break;


                            case 'e':
                                elil += "y";
                                break;
                            case 'E':
                                elil += "Y";
                                break;


                            case 'f':
                                elil += "s";
                                break;
                            case 'F':
                                elil += "S";
                                break;


                            case 'g':
                                elil += "a";
                                break;
                            case 'G':
                                elil += "A";
                                break;


                            case 'h':
                                elil += "g";
                                break;
                            case 'H':
                                elil += "G";
                                break;


                            case 'i':
                                elil += "v";
                                break;
                            case 'I':
                                elil += "V";
                                break;


                            case 'j':
                                elil += "c";
                                break;
                            case 'J':
                                elil += "C";
                                break;


                            case 'k':
                                elil += "h";
                                break;
                            case 'K':
                                elil += "H";
                                break;


                            case 'l':
                                elil += "j";
                                break;
                            case 'L':
                                elil += "J";
                                break;


                            case 'm':
                                elil += "z";
                                break;
                            case 'M':
                                elil += "Z";
                                break;


                            case 'n':
                                elil += "m";
                                break;
                            case 'N':
                                elil += "M";
                                break;


                            case 'o':
                                elil += "b";
                                break;
                            case 'O':
                                elil += "B";
                                break;


                            case 'p':
                                elil += "n";
                                break;
                            case 'P':
                                elil += "N";
                                break;


                            case 'q':
                                elil += "w";
                                break;
                            case 'Q':
                                elil += "W";
                                break;


                            case 'r':
                                elil += "o";
                                break;
                            case 'R':
                                elil += "O";
                                break;


                            case 's':
                                elil += "u";
                                break;
                            case 'S':
                                elil += "U";
                                break;


                            case 't':
                                elil += "d";
                                break;
                            case 'T':
                                elil += "D";
                                break;


                            case 'u':
                                elil += "p";
                                break;
                            case 'U':
                                elil += "P";
                                break;


                            case 'v':
                                elil += "r";
                                break;
                            case 'V':
                                elil += "R";
                                break;


                            case 'w':
                                elil += "x";
                                break;
                            case 'W':
                                elil += "X";
                                break;


                            case 'x':
                                elil += "l";
                                break;
                            case 'X':
                                elil += "L";
                                break;


                            case 'y':
                                elil += "q";
                                break;
                            case 'Y':
                                elil += "Q";
                                break;


                            case 'z':
                                elil += "f";
                                break;
                            case 'Z':
                                elil += "F";
                                break;


                            case '0':
                                elil += "Fyob";
                                break;


                            case '1':
                                elil += "Bmy";
                                break;


                            case '2':
                                elil += "Dxb";
                                break;


                            case '3':
                                elil += "Dgoyy";
                                break;


                            case '4':
                                elil += "Sbpo";
                                break;


                            case '5':
                                elil += "Svry";
                                break;


                            case '6':
                                elil += "Uvl";
                                break;


                            case '7':
                                elil += "Uyrym";
                                break;


                            case '8':
                                elil += "Yvagd";
                                break;


                            case '9':
                                elil += "mvmy";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string EllilekailsuTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "sa";
                                break;
                            case 'A':
                                elil += "Sa";
                                break;


                            case 'b':
                                elil += "se";
                                break;
                            case 'B':
                                elil += "Se";
                                break;


                            case 'c':
                                elil += "si";
                                break;
                            case 'C':
                                elil += "Si";
                                break;


                            case 'd':
                                elil += "so";
                                break;
                            case 'D':
                                elil += "So";
                                break;


                            case 'e':
                                elil += "su";
                                break;
                            case 'E':
                                elil += "Su";
                                break;


                            case 'f':
                                elil += "sy";
                                break;
                            case 'F':
                                elil += "Sy";
                                break;


                            case 'g':
                                elil += "ka";
                                break;
                            case 'G':
                                elil += "Ka";
                                break;


                            case 'h':
                                elil += "ke";
                                break;
                            case 'H':
                                elil += "Ke";
                                break;


                            case 'i':
                                elil += "ki";
                                break;
                            case 'I':
                                elil += "Ki";
                                break;


                            case 'j':
                                elil += "ko";
                                break;
                            case 'J':
                                elil += "Ko";
                                break;


                            case 'k':
                                elil += "ku";
                                break;
                            case 'K':
                                elil += "Ku";
                                break;


                            case 'l':
                                elil += "ky";
                                break;
                            case 'L':
                                elil += "Ky";
                                break;


                            case 'm':
                                elil += "la";
                                break;
                            case 'M':
                                elil += "La";
                                break;


                            case 'n':
                                elil += "le";
                                break;
                            case 'N':
                                elil += "Le";
                                break;


                            case 'o':
                                elil += "li";
                                break;
                            case 'O':
                                elil += "Li";
                                break;


                            case 'p':
                                elil += "lo";
                                break;
                            case 'P':
                                elil += "Lo";
                                break;


                            case 'q':
                                elil += "lu";
                                break;
                            case 'Q':
                                elil += "Lu";
                                break;


                            case 'r':
                                elil += "ly";
                                break;
                            case 'R':
                                elil += "Ly";
                                break;


                            case 's':
                                elil += "al";
                                break;
                            case 'S':
                                elil += "Al";
                                break;


                            case 't':
                                elil += "el";
                                break;
                            case 'T':
                                elil += "El";
                                break;


                            case 'u':
                                elil += "il";
                                break;
                            case 'U':
                                elil += "Il";
                                break;


                            case 'v':
                                elil += "ol";
                                break;
                            case 'V':
                                elil += "Ol";
                                break;


                            case 'w':
                                elil += "ul";
                                break;
                            case 'W':
                                elil += "Ul";
                                break;


                            case 'x':
                                elil += "yl";
                                break;
                            case 'X':
                                elil += "Yl";
                                break;


                            case 'y':
                                elil += "ak";
                                break;
                            case 'Y':
                                elil += "Ak";
                                break;


                            case 'z':
                                elil += "ek";
                                break;
                            case 'Z':
                                elil += "Ek";
                                break;


                            case '0':
                                elil += "Ik";
                                break;


                            case '1':
                                elil += "Ok";
                                break;


                            case '2':
                                elil += "Uk";
                                break;


                            case '3':
                                elil += "Yk";
                                break;


                            case '4':
                                elil += "As";
                                break;


                            case '5':
                                elil += "Es";
                                break;


                            case '6':
                                elil += "Is";
                                break;


                            case '7':
                                elil += "Os";
                                break;


                            case '8':
                                elil += "Us";
                                break;


                            case '9':
                                elil += "Ys";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string HebtaoTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "u";
                                break;
                            case 'A':
                                elil += "U";
                                break;


                            case 'b':
                                elil += "p";
                                break;
                            case 'B':
                                elil += "P";
                                break;


                            case 'c':
                                elil += "q";
                                break;
                            case 'C':
                                elil += "Q";
                                break;


                            case 'd':
                                elil += "r";
                                break;
                            case 'D':
                                elil += "R";
                                break;


                            case 'e':
                                elil += "o";
                                break;
                            case 'E':
                                elil += "O";
                                break;


                            case 'f':
                                elil += "s";
                                break;
                            case 'F':
                                elil += "S";
                                break;


                            case 'g':
                                elil += "t";
                                break;
                            case 'G':
                                elil += "T";
                                break;


                            case 'h':
                                elil += "v";
                                break;
                            case 'H':
                                elil += "V";
                                break;


                            case 'i':
                                elil += "i";
                                break;
                            case 'I':
                                elil += "I";
                                break;


                            case 'j':
                                elil += "w";
                                break;
                            case 'J':
                                elil += "W";
                                break;


                            case 'k':
                                elil += "x";
                                break;
                            case 'K':
                                elil += "X";
                                break;


                            case 'l':
                                elil += "y";
                                break;
                            case 'L':
                                elil += "Y";
                                break;


                            case 'm':
                                elil += "z";
                                break;
                            case 'M':
                                elil += "Z";
                                break;


                            case 'n':
                                elil += "b";
                                break;
                            case 'N':
                                elil += "B";
                                break;


                            case 'o':
                                elil += "e";
                                break;
                            case 'O':
                                elil += "E";
                                break;


                            case 'p':
                                elil += "c";
                                break;
                            case 'P':
                                elil += "C";
                                break;


                            case 'q':
                                elil += "d";
                                break;
                            case 'Q':
                                elil += "D";
                                break;


                            case 'r':
                                elil += "f";
                                break;
                            case 'R':
                                elil += "F";
                                break;


                            case 's':
                                elil += "g";
                                break;
                            case 'S':
                                elil += "G";
                                break;


                            case 't':
                                elil += "h";
                                break;
                            case 'T':
                                elil += "H";
                                break;


                            case 'u':
                                elil += "a";
                                break;
                            case 'U':
                                elil += "A";
                                break;


                            case 'v':
                                elil += "j";
                                break;
                            case 'V':
                                elil += "J";
                                break;


                            case 'w':
                                elil += "k";
                                break;
                            case 'W':
                                elil += "K";
                                break;


                            case 'x':
                                elil += "l";
                                break;
                            case 'X':
                                elil += "L";
                                break;


                            case 'y':
                                elil += "m";
                                break;
                            case 'Y':
                                elil += "M";
                                break;


                            case 'z':
                                elil += "n";
                                break;
                            case 'Z':
                                elil += "N";
                                break;


                            case '0':
                                elil += "Nofe";
                                break;


                            case '1':
                                elil += "Ebo";
                                break;


                            case '2':
                                elil += "Hke";
                                break;


                            case '3':
                                elil += "Hvfoo";
                                break;


                            case '4':
                                elil += "Seaf";
                                break;


                            case '5':
                                elil += "Sijo";
                                break;


                            case '6':
                                elil += "Gil";
                                break;


                            case '7':
                                elil += "Gojob";
                                break;


                            case '8':
                                elil += "Oitvh";
                                break;


                            case '9':
                                elil += "Bibo";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string GlmtfvTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "z";
                                break;
                            case 'A':
                                elil += "Z";
                                break;


                            case 'b':
                                elil += "y";
                                break;
                            case 'B':
                                elil += "Y";
                                break;


                            case 'c':
                                elil += "x";
                                break;
                            case 'C':
                                elil += "X";
                                break;


                            case 'd':
                                elil += "w";
                                break;
                            case 'D':
                                elil += "W";
                                break;


                            case 'e':
                                elil += "v";
                                break;
                            case 'E':
                                elil += "V";
                                break;


                            case 'f':
                                elil += "u";
                                break;
                            case 'F':
                                elil += "U";
                                break;


                            case 'g':
                                elil += "t";
                                break;
                            case 'G':
                                elil += "T";
                                break;


                            case 'h':
                                elil += "s";
                                break;
                            case 'H':
                                elil += "S";
                                break;


                            case 'i':
                                elil += "r";
                                break;
                            case 'I':
                                elil += "R";
                                break;


                            case 'j':
                                elil += "q";
                                break;
                            case 'J':
                                elil += "Q";
                                break;


                            case 'k':
                                elil += "p";
                                break;
                            case 'K':
                                elil += "P";
                                break;


                            case 'l':
                                elil += "o";
                                break;
                            case 'L':
                                elil += "O";
                                break;


                            case 'm':
                                elil += "n";
                                break;
                            case 'M':
                                elil += "N";
                                break;


                            case 'n':
                                elil += "m";
                                break;
                            case 'N':
                                elil += "M";
                                break;


                            case 'o':
                                elil += "l";
                                break;
                            case 'O':
                                elil += "L";
                                break;


                            case 'p':
                                elil += "k";
                                break;
                            case 'P':
                                elil += "K";
                                break;


                            case 'q':
                                elil += "j";
                                break;
                            case 'Q':
                                elil += "J";
                                break;


                            case 'r':
                                elil += "i";
                                break;
                            case 'R':
                                elil += "I";
                                break;


                            case 's':
                                elil += "h";
                                break;
                            case 'S':
                                elil += "H";
                                break;


                            case 't':
                                elil += "g";
                                break;
                            case 'T':
                                elil += "G";
                                break;


                            case 'u':
                                elil += "f";
                                break;
                            case 'U':
                                elil += "F";
                                break;


                            case 'v':
                                elil += "e";
                                break;
                            case 'V':
                                elil += "E";
                                break;


                            case 'w':
                                elil += "d";
                                break;
                            case 'W':
                                elil += "D";
                                break;


                            case 'x':
                                elil += "c";
                                break;
                            case 'X':
                                elil += "C";
                                break;


                            case 'y':
                                elil += "b";
                                break;
                            case 'Y':
                                elil += "B";
                                break;


                            case 'z':
                                elil += "a";
                                break;
                            case 'Z':
                                elil += "A";
                                break;


                            case '0':
                                elil += "Avil";
                                break;


                            case '1':
                                elil += "Lmv";
                                break;


                            case '2':
                                elil += "Gdl";
                                break;


                            case '3':
                                elil += "Gsivv";
                                break;


                            case '4':
                                elil += "Ulfi";
                                break;


                            case '5':
                                elil += "Urev";
                                break;


                            case '6':
                                elil += "Hrc";
                                break;


                            case '7':
                                elil += "Hvevm";
                                break;


                            case '8':
                                elil += "Vrtsg";
                                break;


                            case '9':
                                elil += "Mrmv";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string RachzboTisgeoTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "u";
                                break;
                            case 'A':
                                elil += "U";
                                break;


                            case 'b':
                                elil += "ñ";
                                break;
                            case 'B':
                                elil += "Ñ";
                                break;


                            case 'c':
                                elil += "z";
                                break;
                            case 'C':
                                elil += "Z";
                                break;


                            case 'd':
                                elil += "m";
                                break;
                            case 'D':
                                elil += "M";
                                break;


                            case 'e':
                                elil += "o";
                                break;
                            case 'E':
                                elil += "O";
                                break;


                            case 'f':
                                elil += "k";
                                break;
                            case 'F':
                                elil += "K";
                                break;


                            case 'g':
                                elil += "g";
                                break;
                            case 'G':
                                elil += "G";
                                break;


                            case 'h':
                                elil += "h";
                                break;
                            case 'H':
                                elil += "H";
                                break;


                            case 'i':
                                elil += "a";
                                break;
                            case 'I':
                                elil += "A";
                                break;


                            case 'j':
                                elil += "v";
                                break;
                            case 'J':
                                elil += "V";
                                break;


                            case 'k':
                                elil += "j";
                                break;
                            case 'K':
                                elil += "J";
                                break;


                            case 'l':
                                elil += "b";
                                break;
                            case 'L':
                                elil += "B";
                                break;


                            case 'm':
                                elil += "ch";
                                break;
                            case 'M':
                                elil += "Ch";
                                break;


                            case 'n':
                                elil += "s";
                                break;
                            case 'N':
                                elil += "S";
                                break;


                            case 'o':
                                elil += "i";
                                break;
                            case 'O':
                                elil += "I";
                                break;


                            case 'p':
                                elil += "l";
                                break;
                            case 'P':
                                elil += "L";
                                break;


                            case 'q':
                                elil += "n";
                                break;
                            case 'Q':
                                elil += "N";
                                break;


                            case 'r':
                                elil += "d";
                                break;
                            case 'R':
                                elil += "D";
                                break;


                            case 's':
                                elil += "r";
                                break;
                            case 'S':
                                elil += "R";
                                break;


                            case 't':
                                elil += "t";
                                break;
                            case 'T':
                                elil += "T";
                                break;


                            case 'u':
                                elil += "e";
                                break;
                            case 'U':
                                elil += "E";
                                break;


                            case 'v':
                                elil += "w";
                                break;
                            case 'V':
                                elil += "W";
                                break;


                            case 'w':
                                elil += "f";
                                break;
                            case 'W':
                                elil += "F";
                                break;


                            case 'x':
                                elil += "sh";
                                break;
                            case 'X':
                                elil += "Sh";
                                break;


                            case 'y':
                                elil += "y";
                                break;
                            case 'Y':
                                elil += "Y";
                                break;


                            case 'z':
                                elil += "p";
                                break;
                            case 'Z':
                                elil += "P";
                                break;


                            case '0':
                                elil += "Podi";
                                break;


                            case '1':
                                elil += "Iso";
                                break;


                            case '2':
                                elil += "Tfi";
                                break;


                            case '3':
                                elil += "Thdoo";
                                break;


                            case '4':
                                elil += "Kied";
                                break;


                            case '5':
                                elil += "Kawo";
                                break;


                            case '6':
                                elil += "Rash";
                                break;


                            case '7':
                                elil += "Rowos";
                                break;


                            case '8':
                                elil += "Oaght";
                                break;


                            case '9':
                                elil += "Saso";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string TedgyiTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "u";
                                break;
                            case 'A':
                                elil += "U";
                                break;


                            case 'b':
                                elil += "ñ";
                                break;
                            case 'B':
                                elil += "Ñ";
                                break;


                            case 'c':
                                elil += "sh";
                                break;
                            case 'C':
                                elil += "Sh";
                                break;


                            case 'd':
                                elil += "w";
                                break;
                            case 'D':
                                elil += "W";
                                break;


                            case 'e':
                                elil += "i";
                                break;
                            case 'E':
                                elil += "I";
                                break;


                            case 'f':
                                elil += "h";
                                break;
                            case 'F':
                                elil += "H";
                                break;


                            case 'g':
                                elil += "g";
                                break;
                            case 'G':
                                elil += "G";
                                break;


                            case 'h':
                                elil += "r";
                                break;
                            case 'H':
                                elil += "R";
                                break;


                            case 'i':
                                elil += "a";
                                break;
                            case 'I':
                                elil += "A";
                                break;


                            case 'j':
                                elil += "n";
                                break;
                            case 'J':
                                elil += "N";
                                break;


                            case 'k':
                                elil += "b";
                                break;
                            case 'K':
                                elil += "B";
                                break;


                            case 'l':
                                elil += "j";
                                break;
                            case 'L':
                                elil += "J";
                                break;


                            case 'm':
                                elil += "p";
                                break;
                            case 'M':
                                elil += "P";
                                break;


                            case 'n':
                                elil += "d";
                                break;
                            case 'N':
                                elil += "D";
                                break;


                            case 'o':
                                elil += "e";
                                break;
                            case 'O':
                                elil += "E";
                                break;


                            case 'p':
                                elil += "ch";
                                break;
                            case 'P':
                                elil += "Ch";
                                break;


                            case 'q':
                                elil += "z";
                                break;
                            case 'Q':
                                elil += "Z";
                                break;


                            case 'r':
                                elil += "l";
                                break;
                            case 'R':
                                elil += "L";
                                break;


                            case 's':
                                elil += "k";
                                break;
                            case 'S':
                                elil += "K";
                                break;


                            case 't':
                                elil += "t";
                                break;
                            case 'T':
                                elil += "T";
                                break;


                            case 'u':
                                elil += "y";
                                break;
                            case 'U':
                                elil += "Y";
                                break;


                            case 'v':
                                elil += "s";
                                break;
                            case 'V':
                                elil += "S";
                                break;


                            case 'w':
                                elil += "m";
                                break;
                            case 'W':
                                elil += "M";
                                break;


                            case 'x':
                                elil += "v";
                                break;
                            case 'X':
                                elil += "V";
                                break;


                            case 'y':
                                elil += "i";
                                break;
                            case 'Y':
                                elil += "I";
                                break;


                            case 'z':
                                elil += "f";
                                break;
                            case 'Z':
                                elil += "F";
                                break;


                            case '0':
                                elil += "File";
                                break;


                            case '1':
                                elil += "Edi";
                                break;


                            case '2':
                                elil += "Tme";
                                break;


                            case '3':
                                elil += "Trlii";
                                break;


                            case '4':
                                elil += "Heyl";
                                break;


                            case '5':
                                elil += "Hasi";
                                break;


                            case '6':
                                elil += "Kav";
                                break;


                            case '7':
                                elil += "Kisid";
                                break;


                            case '8':
                                elil += "Iagrt";
                                break;


                            case '9':
                                elil += "dadi";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string TongueTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "a";
                                break;
                            case 'A':
                                elil += "A";
                                break;


                            case 'b':
                                elil += "b";
                                break;
                            case 'B':
                                elil += "B";
                                break;


                            case 'c':
                                elil += "ch";
                                break;
                            case 'C':
                                elil += "Ch";
                                break;


                            case 'd':
                                elil += "wd";
                                break;
                            case 'D':
                                elil += "D";
                                break;


                            case 'e':
                                elil += "e";
                                break;
                            case 'E':
                                elil += "E";
                                break;


                            case 'f':
                                elil += "f";
                                break;
                            case 'F':
                                elil += "F";
                                break;


                            case 'g':
                                elil += "g";
                                break;
                            case 'G':
                                elil += "G";
                                break;


                            case 'h':
                                elil += "h";
                                break;
                            case 'H':
                                elil += "H";
                                break;


                            case 'i':
                                elil += "i";
                                break;
                            case 'I':
                                elil += "I";
                                break;


                            case 'j':
                                elil += "j";
                                break;
                            case 'J':
                                elil += "J";
                                break;


                            case 'k':
                                elil += "k";
                                break;
                            case 'K':
                                elil += "K";
                                break;


                            case 'l':
                                elil += "l";
                                break;
                            case 'L':
                                elil += "L";
                                break;


                            case 'm':
                                elil += "m";
                                break;
                            case 'M':
                                elil += "M";
                                break;


                            case 'n':
                                elil += "n";
                                break;
                            case 'N':
                                elil += "N";
                                break;


                            case 'o':
                                elil += "o";
                                break;
                            case 'O':
                                elil += "O";
                                break;


                            case 'p':
                                elil += "p";
                                break;
                            case 'P':
                                elil += "P";
                                break;


                            case 'q':
                                elil += "ñ";
                                break;
                            case 'Q':
                                elil += "Ñ";
                                break;


                            case 'r':
                                elil += "r";
                                break;
                            case 'R':
                                elil += "R";
                                break;


                            case 's':
                                elil += "s";
                                break;
                            case 'S':
                                elil += "S";
                                break;


                            case 't':
                                elil += "t";
                                break;
                            case 'T':
                                elil += "T";
                                break;


                            case 'u':
                                elil += "u";
                                break;
                            case 'U':
                                elil += "U";
                                break;


                            case 'v':
                                elil += "v";
                                break;
                            case 'V':
                                elil += "V";
                                break;


                            case 'w':
                                elil += "w";
                                break;
                            case 'W':
                                elil += "W";
                                break;


                            case 'x':
                                elil += "sh";
                                break;
                            case 'X':
                                elil += "Sh";
                                break;


                            case 'y':
                                elil += "y";
                                break;
                            case 'Y':
                                elil += "Y";
                                break;


                            case 'z':
                                elil += "z";
                                break;
                            case 'Z':
                                elil += "Z";
                                break;


                            case '0':
                                elil += "Zero";
                                break;


                            case '1':
                                elil += "One";
                                break;


                            case '2':
                                elil += "Two";
                                break;


                            case '3':
                                elil += "Three";
                                break;


                            case '4':
                                elil += "Four";
                                break;


                            case '5':
                                elil += "Five";
                                break;


                            case '6':
                                elil += "Sish";
                                break;


                            case '7':
                                elil += "Seven";
                                break;


                            case '8':
                                elil += "Eight";
                                break;


                            case '9':
                                elil += "Nine";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
                
            }

            return elil;

        }

        public string ChumofsTusgeoTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "i";
                                break;
                            case 'A':
                                elil += "I";
                                break;


                            case 'b':
                                elil += "ñ";
                                break;
                            case 'B':
                                elil += "Ñ";
                                break;


                            case 'c':
                                elil += "d";
                                break;
                            case 'C':
                                elil += "D";
                                break;


                            case 'd':
                                elil += "m";
                                break;
                            case 'D':
                                elil += "M";
                                break;


                            case 'e':
                                elil += "o";
                                break;
                            case 'E':
                                elil += "O";
                                break;


                            case 'f':
                                elil += "k";
                                break;
                            case 'F':
                                elil += "K";
                                break;


                            case 'g':
                                elil += "g";
                                break;
                            case 'G':
                                elil += "G";
                                break;


                            case 'h':
                                elil += "h";
                                break;
                            case 'H':
                                elil += "H";
                                break;


                            case 'i':
                                elil += "a";
                                break;
                            case 'I':
                                elil += "A";
                                break;


                            case 'j':
                                elil += "v";
                                break;
                            case 'J':
                                elil += "V";
                                break;


                            case 'k':
                                elil += "j";
                                break;
                            case 'K':
                                elil += "J";
                                break;


                            case 'l':
                                elil += "b";
                                break;
                            case 'L':
                                elil += "B";
                                break;


                            case 'm':
                                elil += "ch";
                                break;
                            case 'M':
                                elil += "Ch";
                                break;


                            case 'n':
                                elil += "s";
                                break;
                            case 'N':
                                elil += "S";
                                break;


                            case 'o':
                                elil += "u";
                                break;
                            case 'O':
                                elil += "U";
                                break;


                            case 'p':
                                elil += "l";
                                break;
                            case 'P':
                                elil += "L";
                                break;


                            case 'q':
                                elil += "w";
                                break;
                            case 'Q':
                                elil += "W";
                                break;


                            case 'r':
                                elil += "f";
                                break;
                            case 'R':
                                elil += "F";
                                break;


                            case 's':
                                elil += "r";
                                break;
                            case 'S':
                                elil += "R";
                                break;


                            case 't':
                                elil += "t";
                                break;
                            case 'T':
                                elil += "T";
                                break;


                            case 'u':
                                elil += "e";
                                break;
                            case 'U':
                                elil += "E";
                                break;


                            case 'v':
                                elil += "z";
                                break;
                            case 'V':
                                elil += "Z";
                                break;


                            case 'w':
                                elil += "n";
                                break;
                            case 'W':
                                elil += "N";
                                break;


                            case 'x':
                                elil += "sh";
                                break;
                            case 'X':
                                elil += "Sh";
                                break;


                            case 'y':
                                elil += "ai";
                                break;
                            case 'Y':
                                elil += "Ai";
                                break;


                            case 'z':
                                elil += "p";
                                break;
                            case 'Z':
                                elil += "P";
                                break;


                            case '0':
                                elil += "Pofu";
                                break;


                            case '1':
                                elil += "Uso";
                                break;


                            case '2':
                                elil += "Tnu";
                                break;


                            case '3':
                                elil += "Thfoo";
                                break;


                            case '4':
                                elil += "Kuef";
                                break;


                            case '5':
                                elil += "Kazo";
                                break;


                            case '6':
                                elil += "Rash";
                                break;


                            case '7':
                                elil += "Rozos";
                                break;


                            case '8':
                                elil += "Oaght";
                                break;


                            case '9':
                                elil += "Saso";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string ChiumaofosiTousigeeoTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "i";
                                break;
                            case 'A':
                                elil += "I";
                                break;


                            case 'b':
                                elil += "ña";
                                break;
                            case 'B':
                                elil += "Ña";
                                break;


                            case 'c':
                                elil += "da";
                                break;
                            case 'C':
                                elil += "Da";
                                break;


                            case 'd':
                                elil += "ma";
                                break;
                            case 'D':
                                elil += "Ma";
                                break;


                            case 'e':
                                elil += "o";
                                break;
                            case 'E':
                                elil += "O";
                                break;


                            case 'f':
                                elil += "ke";
                                break;
                            case 'F':
                                elil += "Ke";
                                break;


                            case 'g':
                                elil += "ge";
                                break;
                            case 'G':
                                elil += "Ge";
                                break;


                            case 'h':
                                elil += "he";
                                break;
                            case 'H':
                                elil += "He";
                                break;


                            case 'i':
                                elil += "a";
                                break;
                            case 'I':
                                elil += "A";
                                break;


                            case 'j':
                                elil += "vi";
                                break;
                            case 'J':
                                elil += "Vi";
                                break;


                            case 'k':
                                elil += "ji";
                                break;
                            case 'K':
                                elil += "Ji";
                                break;


                            case 'l':
                                elil += "bi";
                                break;
                            case 'L':
                                elil += "Bi";
                                break;


                            case 'm':
                                elil += "chi";
                                break;
                            case 'M':
                                elil += "Chi";
                                break;


                            case 'n':
                                elil += "si";
                                break;
                            case 'N':
                                elil += "Si";
                                break;


                            case 'o':
                                elil += "u";
                                break;
                            case 'O':
                                elil += "U";
                                break;


                            case 'p':
                                elil += "lo";
                                break;
                            case 'P':
                                elil += "Lo";
                                break;


                            case 'q':
                                elil += "wo";
                                break;
                            case 'Q':
                                elil += "Wo";
                                break;


                            case 'r':
                                elil += "fo";
                                break;
                            case 'R':
                                elil += "Fo";
                                break;


                            case 's':
                                elil += "ro";
                                break;
                            case 'S':
                                elil += "Ro";
                                break;


                            case 't':
                                elil += "to";
                                break;
                            case 'T':
                                elil += "To";
                                break;


                            case 'u':
                                elil += "e";
                                break;
                            case 'U':
                                elil += "E";
                                break;


                            case 'v':
                                elil += "zu";
                                break;
                            case 'V':
                                elil += "Zu";
                                break;


                            case 'w':
                                elil += "nu";
                                break;
                            case 'W':
                                elil += "Nu";
                                break;


                            case 'x':
                                elil += "shu";
                                break;
                            case 'X':
                                elil += "Shu";
                                break;


                            case 'y':
                                elil += "ai";
                                break;
                            case 'Y':
                                elil += "Ai";
                                break;


                            case 'z':
                                elil += "pu";
                                break;
                            case 'Z':
                                elil += "Pu";
                                break;


                            case '0':
                                elil += "Puofou";
                                break;


                            case '1':
                                elil += "Usio";
                                break;


                            case '2':
                                elil += "Tonuu";
                                break;


                            case '3':
                                elil += "Tohefooo";
                                break;


                            case '4':
                                elil += "Keuefo";
                                break;


                            case '5':
                                elil += "Keazuo";
                                break;


                            case '6':
                                elil += "Roashu";
                                break;


                            case '7':
                                elil += "Roozuosi";
                                break;


                            case '8':
                                elil += "Oageheto";
                                break;


                            case '9':
                                elil += "Siasio";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string ChumofosiTusigeoTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "i";
                                break;
                            case 'A':
                                elil += "I";
                                break;


                            case 'b':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "ñ";
                                else
                                    elil += "ña";
                                break;
                            case 'B':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Ñ";
                                else
                                    elil += "Ña";
                                break;


                            case 'c':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "d";
                                else
                                    elil += "da";
                                break;
                            case 'C':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "D";
                                else
                                    elil += "Da";
                                break;


                            case 'd':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "m";
                                else
                                    elil += "ma";
                                break;
                            case 'D':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "M";
                                else
                                    elil += "Ma";
                                break;


                            case 'e':
                                elil += "o";
                                break;
                            case 'E':
                                elil += "O";
                                break;


                            case 'f':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "k";
                                else
                                    elil += "ke";
                                break;
                            case 'F':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "K";
                                else
                                    elil += "Ke";
                                break;


                            case 'g':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "g";
                                else
                                    elil += "ge";
                                break;
                            case 'G':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "G";
                                else
                                    elil += "Ge";
                                break;


                            case 'h':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "h";
                                else
                                    elil += "he";
                                break;
                            case 'H':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "H";
                                else
                                    elil += "He";
                                break;


                            case 'i':
                                elil += "a";
                                break;
                            case 'I':
                                elil += "A";
                                break;


                            case 'j':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "v";
                                else
                                    elil += "vi";
                                break;
                            case 'J':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "V";
                                else
                                    elil += "Vi";
                                break;


                            case 'k':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "j";
                                else
                                    elil += "ji";
                                break;
                            case 'K':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "J";
                                else
                                    elil += "Ji";
                                break;


                            case 'l':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "b";
                                else
                                    elil += "bi";
                                break;
                            case 'L':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "B";
                                else
                                    elil += "Bi";
                                break;


                            case 'm':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "ch";
                                else
                                    elil += "chi";
                                break;
                            case 'M':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Ch";
                                else
                                    elil += "Chi";
                                break;


                            case 'n':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "s";
                                else
                                    elil += "si";
                                break;
                            case 'N':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "S";
                                else
                                    elil += "Si";
                                break;


                            case 'o':
                                elil += "u";
                                break;
                            case 'O':
                                elil += "U";
                                break;


                            case 'p':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "l";
                                else
                                    elil += "lo";
                                break;
                            case 'P':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "L";
                                else
                                    elil += "Lo";
                                break;


                            case 'q':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "w";
                                else
                                    elil += "wo";
                                break;
                            case 'Q':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "W";
                                else
                                    elil += "Wo";
                                break;


                            case 'r':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "f";
                                else
                                    elil += "fo";
                                break;
                            case 'R':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "F";
                                else
                                    elil += "Fo";
                                break;


                            case 's':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "r";
                                else
                                    elil += "ro";
                                break;
                            case 'S':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "R";
                                else
                                    elil += "Ro";
                                break;


                            case 't':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "t";
                                else
                                    elil += "to";
                                break;
                            case 'T':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "T";
                                else
                                    elil += "To";
                                break;


                            case 'u':
                                elil += "e";
                                break;
                            case 'U':
                                elil += "E";
                                break;


                            case 'v':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "z";
                                else
                                    elil += "zu";
                                break;
                            case 'V':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Z";
                                else
                                    elil += "Zu";
                                break;


                            case 'w':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "n";
                                else
                                    elil += "nu";
                                break;
                            case 'W':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "N";
                                else
                                    elil += "Nu";
                                break;


                            case 'x':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "sh";
                                else
                                    elil += "shu";
                                break;
                            case 'X':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Sh";
                                else
                                    elil += "Shu";
                                break;


                            case 'y':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "y";
                                else
                                    elil += "yu";
                                break;
                            case 'Y':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Y";
                                else
                                    elil += "Yu";
                                break;


                            case 'z':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "p";
                                else
                                    elil += "pu";
                                break;
                            case 'Z':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "P";
                                else
                                    elil += "Pu";
                                break;


                            case '0':
                                elil += "pofu";
                                break;


                            case '1':
                                elil += "Uso";
                                break;


                            case '2':
                                elil += "Tonu";
                                break;


                            case '3':
                                elil += "Tohefoo";
                                break;


                            case '4':
                                elil += "Kuefo";
                                break;


                            case '5':
                                elil += "Kazo";
                                break;


                            case '6':
                                elil += "Rashu";
                                break;


                            case '7':
                                elil += "Rozosi";
                                break;


                            case '8':
                                elil += "Oageheto";
                                break;


                            case '9':
                                elil += "saso";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string KopodnsuwTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "ña";
                                break;
                            case 'A':
                                elil += "Ña";
                                break;


                            case 'b':
                                elil += "ñ";
                                break;
                            case 'B':
                                elil += "Ñ";
                                break;


                            case 'c':
                                elil += "ch";
                                break;
                            case 'C':
                                elil += "Ch";
                                break;


                            case 'd':
                                elil += "cha";
                                break;
                            case 'D':
                                elil += "Cha";
                                break;


                            case 'e':
                                elil += "w";
                                break;
                            case 'E':
                                elil += "W";
                                break;


                            case 'f':
                                elil += "we";
                                break;
                            case 'F':
                                elil += "We";
                                break;


                            case 'g':
                                elil += "n";
                                break;
                            case 'G':
                                elil += "N";
                                break;


                            case 'h':
                                elil += "g";
                                break;
                            case 'H':
                                elil += "G";
                                break;


                            case 'i':
                                elil += "ni";
                                break;
                            case 'I':
                                elil += "Ni";
                                break;


                            case 'j':
                                elil += "gi";
                                break;
                            case 'J':
                                elil += "Gi";
                                break;


                            case 'k':
                                elil += "ji";
                                break;
                            case 'K':
                                elil += "Ji";
                                break;


                            case 'l':
                                elil += "j";
                                break;
                            case 'L':
                                elil += "J";
                                break;


                            case 'm':
                                elil += "p";
                                break;
                            case 'M':
                                elil += "P";
                                break;


                            case 'n':
                                elil += "d";
                                break;
                            case 'N':
                                elil += "D";
                                break;


                            case 'o':
                                elil += "po";
                                break;
                            case 'O':
                                elil += "Po";
                                break;


                            case 'p':
                                elil += "do";
                                break;
                            case 'P':
                                elil += "Do";
                                break;


                            case 'q':
                                elil += "y";
                                break;
                            case 'Q':
                                elil += "Y";
                                break;


                            case 'r':
                                elil += "yo";
                                break;
                            case 'R':
                                elil += "Yo";
                                break;


                            case 's':
                                elil += "k";
                                break;
                            case 'S':
                                elil += "K";
                                break;


                            case 't':
                                elil += "ko";
                                break;
                            case 'T':
                                elil += "Ko";
                                break;


                            case 'u':
                                elil += "su";
                                break;
                            case 'U':
                                elil += "Su";
                                break;


                            case 'v':
                                elil += "s";
                                break;
                            case 'V':
                                elil += "S";
                                break;


                            case 'w':
                                elil += "shu";
                                break;
                            case 'W':
                                elil += "Shu";
                                break;


                            case 'x':
                                elil += "sh";
                                break;
                            case 'X':
                                elil += "Sh";
                                break;


                            case 'y':
                                elil += "ru";
                                break;
                            case 'Y':
                                elil += "Ru";
                                break;


                            case 'z':
                                elil += "r";
                                break;
                            case 'Z':
                                elil += "R";
                                break;


                            case '0':
                                elil += "Rwyopo";
                                break;


                            case '1':
                                elil += "Podw";
                                break;


                            case '2':
                                elil += "Koshupo";
                                break;


                            case '3':
                                elil += "Kogyoww";
                                break;


                            case '4':
                                elil += "Weposuyo";
                                break;


                            case '5':
                                elil += "Wenisw";
                                break;


                            case '6':
                                elil += "Knish";
                                break;


                            case '7':
                                elil += "Kwswd";
                                break;


                            case '8':
                                elil += "Wningko";
                                break;


                            case '9':
                                elil += "Dnidw";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;

        }

        public string ReverseTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";
            string word = "";
            char letter;

            for (int i = 0; i < eng.Length; ++i)
            {
                letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;

                else if (letter == ']')
                    bracketCounter = false;

                else if (bracketCounter)
                    elil += letter;

                else if (Char.IsLetter(letter))
                    word += eng[i];

                else
                {
                    elil += ReverseWord(word) + letter;
                    word = "";
                }
            }

            return elil;
        }

        public string ReverseWord(string word)
        {
            if (word.Length == 0)
                return "";

            else if (word.Length == 1)
                return word;

            else
                return word[word.Length - 1] + ReverseWord(word.Substring(1, word.Length - 2)) + word[0];
        }

        public string GlmtfvCVCTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "za";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "za";

                                else
                                    elil += "z";                                
                                break;
                            case 'A':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Za";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Za";

                                else
                                    elil += "Z";
                                break;


                            case 'b':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "ya";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "ya";

                                else
                                    elil += "y";
                                break;
                            case 'B':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Ya";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Ya";

                                else
                                    elil += "Y";
                                break;


                            case 'c':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "xa";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "xa";

                                else
                                    elil += "x";
                                break;
                            case 'C':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Xa";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Xa";

                                else
                                    elil += "X";
                                break;


                            case 'd':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "wa";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "wa";

                                else
                                    elil += "w";
                                break;
                            case 'D':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Wa";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Wa";

                                else
                                    elil += "W";
                                break;


                            case 'e':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "ve";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "ve";

                                else
                                    elil += "v";
                                break;
                            case 'E':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Ve";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Ve";

                                else
                                    elil += "V";
                                break;


                            case 'f':
                                elil += "u";
                                break;
                            case 'F':
                                elil += "U";
                                break;


                            case 'g':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "te";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "te";

                                else
                                    elil += "t";
                                break;
                            case 'G':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Te";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Te";

                                else
                                    elil += "T";
                                break;


                            case 'h':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "se";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "se";

                                else
                                    elil += "s";
                                break;
                            case 'H':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Se";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Se";

                                else
                                    elil += "S";
                                break;


                            case 'i':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "ri";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "ri";

                                else
                                    elil += "r";
                                break;
                            case 'I':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Ri";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Ri";

                                else
                                    elil += "R";
                                break;


                            case 'j':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "qi";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "qi";

                                else
                                    elil += "q";
                                break;
                            case 'J':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Qi";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Qi";

                                else
                                    elil += "Q";
                                break;


                            case 'k':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "pi";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "pi";

                                else
                                    elil += "p";
                                break;
                            case 'K':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Pi";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Pi";

                                else
                                    elil += "P";
                                break;


                            case 'l':
                                elil += "o";
                                break;
                            case 'L':
                                elil += "O";
                                break;


                            case 'm':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "ni";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "ni";

                                else
                                    elil += "n";
                                break;
                            case 'M':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Ni";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Ni";

                                else
                                    elil += "N";
                                break;


                            case 'n':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "mi";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "mi";

                                else
                                    elil += "m";
                                break;
                            case 'N':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Mi";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Mi";

                                else
                                    elil += "M";
                                break;


                            case 'o':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "lo";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "lo";

                                else
                                    elil += "l";
                                break;
                            case 'O':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Lo";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Lo";

                                else
                                    elil += "L";
                                break;


                            case 'p':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "ko";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "ko";

                                else
                                    elil += "k";
                                break;
                            case 'P':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Ko";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Ko";

                                else
                                    elil += "K";
                                break;


                            case 'q':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "jo";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "jo";

                                else
                                    elil += "j";
                                break;
                            case 'Q':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Jo";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Jo";

                                else
                                    elil += "J";
                                break;


                            case 'r':
                                elil += "i";
                                break;
                            case 'R':
                                elil += "I";
                                break;


                            case 's':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "ho";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "ho";

                                else
                                    elil += "h";
                                break;
                            case 'S':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Ho";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Ho";

                                else
                                    elil += "H";
                                break;


                            case 't':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "go";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "go";

                                else
                                    elil += "g";
                                break;
                            case 'T':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Go";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Go";

                                else
                                    elil += "G";
                                break;


                            case 'u':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "fu";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "fu";

                                else
                                    elil += "f";
                                break;
                            case 'U':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Fu";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Fu";

                                else
                                    elil += "F";
                                break;


                            case 'v':
                                elil += "e";
                                break;
                            case 'V':
                                elil += "E";
                                break;


                            case 'w':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "du";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "du";

                                else
                                    elil += "d";
                                break;
                            case 'W':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Du";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Du";

                                else
                                    elil += "D";
                                break;


                            case 'x':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "cu";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "cu";

                                else
                                    elil += "c";
                                break;
                            case 'X':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Cu";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Cu";

                                else
                                    elil += "C";
                                break;


                            case 'y':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "bu";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "bu";

                                else
                                    elil += "b";
                                break;
                            case 'Y':
                                if (i == 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]))
                                    elil += "Bu";

                                else if (i != 0 && (eng.ToLower()[i + 1] != 'z' && eng.ToLower()[i + 1] != 'v' && eng.ToLower()[i + 1] != 'r' && eng.ToLower()[i + 1] != 'l' && eng.ToLower()[i + 1] != 'f') && Char.IsLetter(eng[i + 1]) && (eng.ToLower()[i - 1] != 'a' && eng.ToLower()[i - 1] != 'e' && eng.ToLower()[i - 1] != 'i' && eng.ToLower()[i - 1] != 'o' && eng.ToLower()[i - 1] != 'u') && Char.IsLetter(eng[i - 1]))
                                    elil += "Bu";

                                else
                                    elil += "B";
                                break;


                            case 'z':
                                elil += "a";
                                break;
                            case 'Z':
                                elil += "A";
                                break;


                            case '0':
                                elil += "Avil";
                                break;


                            case '1':
                                elil += "Limv";
                                break;


                            case '2':
                                elil += "Gedl";
                                break;


                            case '3':
                                elil += "Gesivv";
                                break;


                            case '4':
                                elil += "Ulfi";
                                break;


                            case '5':
                                elil += "Urev";
                                break;


                            case '6':
                                elil += "Herc";
                                break;


                            case '7':
                                elil += "Hevevm";
                                break;


                            case '8':
                                elil += "Vurtosg";
                                break;


                            case '9':
                                elil += "Mirmiv";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;
        }

        public string DbmapyCVCTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "e";
                                break;
                            case 'A':
                                elil += "E";
                                break;


                            case 'b':
                                elil += "t";
                                break;
                            case 'B':
                                elil += "T";
                                break;


                            case 'c':
                                elil += "i";
                                break;
                            case 'C':
                                elil += "I";
                                break;


                            case 'd':
                                elil += "k";
                                break;
                            case 'D':
                                elil += "K";
                                break;


                            case 'e':
                                elil += "y";
                                break;
                            case 'E':
                                elil += "Y";
                                break;


                            case 'f':
                                elil += "s";
                                break;
                            case 'F':
                                elil += "S";
                                break;


                            case 'g':
                                elil += "a";
                                break;
                            case 'G':
                                elil += "A";
                                break;


                            case 'h':
                                elil += "g";
                                break;
                            case 'H':
                                elil += "G";
                                break;


                            case 'i':
                                elil += "v";
                                break;
                            case 'I':
                                elil += "V";
                                break;


                            case 'j':
                                elil += "c";
                                break;
                            case 'J':
                                elil += "C";
                                break;


                            case 'k':
                                elil += "h";
                                break;
                            case 'K':
                                elil += "H";
                                break;


                            case 'l':
                                elil += "j";
                                break;
                            case 'L':
                                elil += "J";
                                break;


                            case 'm':
                                elil += "z";
                                break;
                            case 'M':
                                elil += "Z";
                                break;


                            case 'n':
                                elil += "m";
                                break;
                            case 'N':
                                elil += "M";
                                break;


                            case 'o':
                                elil += "b";
                                break;
                            case 'O':
                                elil += "B";
                                break;


                            case 'p':
                                elil += "n";
                                break;
                            case 'P':
                                elil += "N";
                                break;


                            case 'q':
                                elil += "w";
                                break;
                            case 'Q':
                                elil += "W";
                                break;


                            case 'r':
                                elil += "o";
                                break;
                            case 'R':
                                elil += "O";
                                break;


                            case 's':
                                elil += "u";
                                break;
                            case 'S':
                                elil += "U";
                                break;


                            case 't':
                                elil += "d";
                                break;
                            case 'T':
                                elil += "D";
                                break;


                            case 'u':
                                elil += "p";
                                break;
                            case 'U':
                                elil += "P";
                                break;


                            case 'v':
                                elil += "r";
                                break;
                            case 'V':
                                elil += "R";
                                break;


                            case 'w':
                                elil += "x";
                                break;
                            case 'W':
                                elil += "X";
                                break;


                            case 'x':
                                elil += "l";
                                break;
                            case 'X':
                                elil += "L";
                                break;


                            case 'y':
                                elil += "q";
                                break;
                            case 'Y':
                                elil += "Q";
                                break;


                            case 'z':
                                elil += "f";
                                break;
                            case 'Z':
                                elil += "F";
                                break;


                            case '0':
                                elil += "Fyob";
                                break;


                            case '1':
                                elil += "Bmy";
                                break;


                            case '2':
                                elil += "Dxb";
                                break;


                            case '3':
                                elil += "Dgoyy";
                                break;


                            case '4':
                                elil += "Sbpo";
                                break;


                            case '5':
                                elil += "Svry";
                                break;


                            case '6':
                                elil += "Uvl";
                                break;


                            case '7':
                                elil += "Uyrym";
                                break;


                            case '8':
                                elil += "Yvagd";
                                break;


                            case '9':
                                elil += "mvmy";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;
        }

        public string MobollerukeTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "ch";
                                break;
                            case 'A':
                                elil += "Ch";
                                break;


                            case 'b':
                                elil += "ya";
                                break;
                            case 'B':
                                elil += "Ya";
                                break;


                            case 'c':
                                elil += "m";
                                break;
                            case 'C':
                                elil += "M";
                                break;


                            case 'd':
                                elil += "ta";
                                break;
                            case 'D':
                                elil += "Ta";
                                break;


                            case 'e':
                                elil += "ke";
                                break;
                            case 'E':
                                elil += "Ke";
                                break;


                            case 'f':
                                elil += "n";
                                break;
                            case 'F':
                                elil += "N";
                                break;


                            case 'g':
                                elil += "le";
                                break;
                            case 'G':
                                elil += "Le";
                                break;


                            case 'h':
                                elil += "se";
                                break;
                            case 'H':
                                elil += "Se";
                                break;


                            case 'i':
                                elil += "t";
                                break;
                            case 'I':
                                elil += "T";
                                break;


                            case 'j':
                                elil += "fi";
                                break;
                            case 'J':
                                elil += "Fi";
                                break;


                            case 'k':
                                elil += "y";
                                break;
                            case 'K':
                                elil += "Y";
                                break;


                            case 'l':
                                elil += "hi";
                                break;
                            case 'L':
                                elil += "Hi";
                                break;


                            case 'm':
                                elil += "f";
                                break;
                            case 'M':
                                elil += "F";
                                break;


                            case 'n':
                                elil += "l";
                                break;
                            case 'N':
                                elil += "L";
                                break;


                            case 'o':
                                elil += "bo";
                                break;
                            case 'O':
                                elil += "Bo";
                                break;


                            case 'p':
                                elil += "wo";
                                break;
                            case 'P':
                                elil += "Wo";
                                break;


                            case 'q':
                                elil += "no";
                                break;
                            case 'Q':
                                elil += "No";
                                break;


                            case 'r':
                                elil += "h";
                                break;
                            case 'R':
                                elil += "H";
                                break;


                            case 's':
                                elil += "b";
                                break;
                            case 'S':
                                elil += "B";
                                break;


                            case 't':
                                elil += "mo";
                                break;
                            case 'T':
                                elil += "Mo";
                                break;


                            case 'u':
                                elil += "ru";
                                break;
                            case 'U':
                                elil += "Ru";
                                break;


                            case 'v':
                                elil += "chu";
                                break;
                            case 'V':
                                elil += "Chu";
                                break;


                            case 'w':
                                elil += "s";
                                break;
                            case 'W':
                                elil += "S";
                                break;


                            case 'x':
                                elil += "w";
                                break;
                            case 'X':
                                elil += "W";
                                break;


                            case 'y':
                                elil += "k";
                                break;
                            case 'Y':
                                elil += "K";
                                break;


                            case 'z':
                                elil += "r";
                                break;
                            case 'Z':
                                elil += "R";
                                break;


                            case '0':
                                elil += "Rkehbo";
                                break;


                            case '1':
                                elil += "Bolke";
                                break;


                            case '2':
                                elil += "Mosbo";
                                break;


                            case '3':
                                elil += "Mosehkeke";
                                break;


                            case '4':
                                elil += "Nboruh";
                                break;


                            case '5':
                                elil += "Ntchuke";
                                break;


                            case '6':
                                elil += "Btw";
                                break;


                            case '7':
                                elil += "Bkechukel";
                                break;


                            case '8':
                                elil += "Ketlesemo";
                                break;


                            case '9':
                                elil += "ltlke";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;
        }

        public string HtenbaxuTranslator(string eng)
        {
            bracketCounter = false;
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];

                if (letter == '[')
                    bracketCounter = true;
                else if (letter == ']')
                    bracketCounter = false;
                else
                {
                    if (bracketCounter)
                        elil += letter;
                    else
                    {
                        switch (letter)
                        {
                            case 'a':
                                elil += "e";
                                break;
                            case 'A':
                                elil += "e";
                                break;


                            case 'b':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "ch";
                                else
                                    elil += "cha";
                                break;
                            case 'B':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Ch";
                                else
                                    elil += "Cha";
                                break;


                            case 'c':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "vr";
                                else
                                    elil += "vra";
                                break;
                            case 'C':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Vr";
                                else
                                    elil += "Vra";
                                break;


                            case 'd':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "y";
                                else
                                    elil += "ya";
                                break;
                            case 'D':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Y";
                                else
                                    elil += "Ya";
                                break;


                            case 'e':
                                elil += "u";
                                break;
                            case 'E':
                                elil += "U";
                                break;


                            case 'f':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "ht";
                                else
                                    elil += "hte";
                                break;
                            case 'F':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Ht";
                                else
                                    elil += "Hte";
                                break;


                            case 'g':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "th";
                                else
                                    elil += "the";
                                break;
                            case 'G':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Th";
                                else
                                    elil += "The";
                                break;


                            case 'h':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "s";
                                else
                                    elil += "se";
                                break;
                            case 'H':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "S";
                                else
                                    elil += "Se";
                                break;


                            case 'i':
                                elil += "a";
                                break;
                            case 'I':
                                elil += "A";
                                break;


                            case 'j':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "sh";
                                else
                                    elil += "shi";
                                break;
                            case 'J':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Sh";
                                else
                                    elil += "Shi";
                                break;


                            case 'k':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "nb";
                                else
                                    elil += "nbi";
                                break;
                            case 'K':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Nb";
                                else
                                    elil += "Nbi";
                                break;


                            case 'l':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "t";
                                else
                                    elil += "ti";
                                break;
                            case 'L':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "T";
                                else
                                    elil += "Ti";
                                break;


                            case 'm':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "f";
                                else
                                    elil += "fi";
                                break;
                            case 'M':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "F";
                                else
                                    elil += "Fi";
                                break;


                            case 'n':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "p";
                                else
                                    elil += "pi";
                                break;
                            case 'N':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "P";
                                else
                                    elil += "Pi";
                                break;


                            case 'o':
                                elil += "i";
                                break;
                            case 'O':
                                elil += "I";
                                break;


                            case 'p':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "tr";
                                else
                                    elil += "tro";
                                break;
                            case 'P':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Tr";
                                else
                                    elil += "Tro";
                                break;


                            case 'q':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "k";
                                else
                                    elil += "ko";
                                break;
                            case 'Q':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "K";
                                else
                                    elil += "Ko";
                                break;


                            case 'r':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "g";
                                else
                                    elil += "go";
                                break;
                            case 'R':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "G";
                                else
                                    elil += "Go";
                                break;


                            case 's':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "m";
                                else
                                    elil += "mo";
                                break;
                            case 'S':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "M";
                                else
                                    elil += "Mo";
                                break;


                            case 't':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "n";
                                else
                                    elil += "no";
                                break;
                            case 'T':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "N";
                                else
                                    elil += "No";
                                break;


                            case 'u':
                                elil += "o";
                                break;
                            case 'U':
                                elil += "O";
                                break;


                            case 'v':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "j";
                                else
                                    elil += "ju";
                                break;
                            case 'V':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "J";
                                else
                                    elil += "Ju";
                                break;


                            case 'w':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "l";
                                else
                                    elil += "lu";
                                break;
                            case 'W':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "L";
                                else
                                    elil += "Lu";
                                break;


                            case 'x':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "r";
                                else
                                    elil += "ru";
                                break;
                            case 'X':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "R";
                                else
                                    elil += "Ru";
                                break;


                            case 'y':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "h";
                                else
                                    elil += "hu";
                                break;
                            case 'Y':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "H";
                                else
                                    elil += "Hu";
                                break;


                            case 'z':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "ks";
                                else
                                    elil += "ksu";
                                break;
                            case 'Z':
                                if (eng[i] == eng[i + 1] || eng[i + 1] == 'a' || eng[i + 1] == 'A' || eng[i + 1] == 'e' || eng[i + 1] == 'E' || eng[i + 1] == 'i' || eng[i + 1] == 'I' || eng[i + 1] == 'o' || eng[i + 1] == 'O' || eng[i + 1] == 'u' || eng[i + 1] == 'U')
                                    elil += "Ks";
                                else
                                    elil += "Ksu";
                                break;


                            case '0':
                                elil += "Ksugi";
                                break;


                            case '1':
                                elil += "Ipu";
                                break;


                            case '2':
                                elil += "Noli";
                                break;


                            case '3':
                                elil += "Noseguu";
                                break;


                            case '4':
                                elil += "Htiogo";
                                break;


                            case '5':
                                elil += "Htaju";
                                break;


                            case '6':
                                elil += "Maru";
                                break;


                            case '7':
                                elil += "Mujupi";
                                break;


                            case '8':
                                elil += "Uatheseno";
                                break;


                            case '9':
                                elil += "Papu";
                                break;


                            default:
                                elil += letter;
                                break;
                        }
                    }
                }
            }

            return elil;
        }




        private void Form1_Load(object sender, EventArgs e)
        {
            if (File.Exists(file))
            {
                string[] langs = File.ReadAllLines(file);
                foreach (string lan in langs)
                    if (lan != "")
                        ChoLang.Items.Add(lan);
            }
        }


        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            string line = "";
            foreach (string activity in ChoLang.Items)
                line += activity + "_";

            string[] lines = line.Split('_');
            File.WriteAllLines(file, lines);
        }

        private void tabPages_Click(object sender, EventArgs e)
        {
            if (tabPages.SelectedTab.Name == "")
                tabPages.SelectedTab.Name = tabPages.SelectedTab.Text;

            // Settings for Home page
            if (tabPages.SelectedIndex == 0)
            {
                ChooseBtn.Visible = true;
                TranslateBtn.Visible = false;
                English.Visible = false;
                Language.Visible = false;


                LefxaoEnglishText.Visible = false;
                LefxaoTranslatedText.Visible = false;

                LirbeaEnglishText.Visible = false;
                LirbeaTranslatedText.Visible = false;

                MecfauEnglishText.Visible = false;
                MecfauTranslatedText.Visible = false;

                TisgeoEnglishText.Visible = false;
                TisgeoTranslatedText.Visible = false;

                DbmapyEnglishText.Visible = false;
                DbmapyTranslatedText.Visible = false;

                EllilekailsuEnglishText.Visible = false;
                EllilekailsuTranslatedText.Visible = false;

                HebtaoEnglishText.Visible = false;
                HebtaoTranslatedText.Visible = false;

                GlmtfvEnglishText.Visible = false;
                GlmtfvTranslatedText.Visible = false;

                RachzboTisgeoEnglishText.Visible = false;
                RachzboTisgeoTranslatedText.Visible = false;

                TedgyiEnglishText.Visible = false;
                TedgyiTranslatedText.Visible = false;
                
                TongueEnglishText.Visible = false;
                TongueTranslatedText.Visible = false;

                ChumofsTusgeoEnglishText.Visible = false;
                ChumofsTusgeoTranslatedText.Visible = false;

                ChiumaofosiTousigeeoEnglishText.Visible = false;
                ChiumaofosiTousigeeoTranslatedText.Visible = false;

                ChumofosiTusigeoEnglishText.Visible = false;
                ChumofosiTusigeoTranslatedText.Visible = false;

                KopodnsuwEnglishText.Visible = false;  
                KopodnsuwTranslatedText.Visible = false;

                ReverseInput.Visible = false;
                ReverseOutput.Visible = false;

                DbmapyCVCInput.Visible = false;
                DbmapyCVCOutput.Visible = false;

                GlmtfvCVCInput.Visible = false;
                GlmtfvCVCOutput.Visible = false;

                MobollerukeIn.Visible = false;
                MobollerukeOut.Visible = false;

                HtenbaxuIn.Visible = false;
                HtenbaxuOut.Visible = false;
            }

            else
            {
                TranslateBtn.Visible = true;
                ChooseBtn.Visible = false;
                Language.Text = tabPages.SelectedTab.Name;
                English.Visible = true;
                Language.Visible = true;
                tabPages.SelectedTab.Controls.Add(English);
                tabPages.SelectedTab.Controls.Add(Language);
                tabPages.SelectedTab.Controls.Add(TranslateBtn);

                // Make all text boxes false
                {
                    LefxaoEnglishText.Visible = false;
                    LefxaoTranslatedText.Visible = false;

                    LirbeaEnglishText.Visible = false;
                    LirbeaTranslatedText.Visible = false;

                    MecfauEnglishText.Visible = false;
                    MecfauTranslatedText.Visible = false;

                    TisgeoEnglishText.Visible = false;
                    TisgeoTranslatedText.Visible = false;

                    DbmapyEnglishText.Visible = false;
                    DbmapyTranslatedText.Visible = false;

                    EllilekailsuEnglishText.Visible = false;
                    EllilekailsuTranslatedText.Visible = false;

                    HebtaoEnglishText.Visible = false;
                    HebtaoTranslatedText.Visible = false;

                    GlmtfvEnglishText.Visible = false;
                    GlmtfvTranslatedText.Visible = false;

                    RachzboTisgeoEnglishText.Visible = false;
                    RachzboTisgeoTranslatedText.Visible = false;

                    TedgyiEnglishText.Visible = false;
                    TedgyiTranslatedText.Visible = false;

                    TongueEnglishText.Visible = false;
                    TongueTranslatedText.Visible = false;

                    ChumofsTusgeoEnglishText.Visible = false;
                    ChumofsTusgeoTranslatedText.Visible = false;

                    ChiumaofosiTousigeeoEnglishText.Visible = false;
                    ChiumaofosiTousigeeoTranslatedText.Visible = false;

                    ChumofosiTusigeoEnglishText.Visible = false;
                    ChumofosiTusigeoTranslatedText.Visible = false;

                    KopodnsuwEnglishText.Visible = false;
                    KopodnsuwTranslatedText.Visible = false;

                    ReverseInput.Visible = false;
                    ReverseOutput.Visible = false;

                    DbmapyCVCInput.Visible = false;
                    DbmapyCVCOutput.Visible = false;

                    GlmtfvCVCInput.Visible = false;
                    GlmtfvCVCOutput.Visible = false;

                    MobollerukeIn.Visible = false;
                    MobollerukeOut.Visible = false;

                    HtenbaxuIn.Visible = false;
                    HtenbaxuOut.Visible = false;
                }


                // Specific Page settings
                {
                    if (tabPages.SelectedTab.Name == "Lefxao")
                    {
                        LefxaoEnglishText.Visible = true;
                        LefxaoTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(LefxaoTranslatedText);
                        tabPages.SelectedTab.Controls.Add(LefxaoEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Lirbea")
                    {
                        LirbeaEnglishText.Visible = true;
                        LirbeaTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(LirbeaTranslatedText);
                        tabPages.SelectedTab.Controls.Add(LirbeaEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Mecfau")
                    {
                        MecfauEnglishText.Visible = true;
                        MecfauTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(MecfauTranslatedText);
                        tabPages.SelectedTab.Controls.Add(MecfauEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Tisgeo")
                    {
                        TisgeoEnglishText.Visible = true;
                        TisgeoTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(TisgeoTranslatedText);
                        tabPages.SelectedTab.Controls.Add(TisgeoEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Dbmapy")
                    {
                        DbmapyEnglishText.Visible = true;
                        DbmapyTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(DbmapyTranslatedText);
                        tabPages.SelectedTab.Controls.Add(DbmapyEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Ellilekailsu")
                    {
                        EllilekailsuEnglishText.Visible = true;
                        EllilekailsuTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(EllilekailsuTranslatedText);
                        tabPages.SelectedTab.Controls.Add(EllilekailsuEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Hebtao")
                    {
                        HebtaoEnglishText.Visible = true;
                        HebtaoTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(HebtaoTranslatedText);
                        tabPages.SelectedTab.Controls.Add(HebtaoEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Glmtfv")
                    {
                        GlmtfvEnglishText.Visible = true;
                        GlmtfvTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(GlmtfvTranslatedText);
                        tabPages.SelectedTab.Controls.Add(GlmtfvEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Rachzbo Tisgeo")
                    {
                        RachzboTisgeoEnglishText.Visible = true;
                        RachzboTisgeoTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(RachzboTisgeoTranslatedText);
                        tabPages.SelectedTab.Controls.Add(RachzboTisgeoEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Tedgyi")
                    {
                        TedgyiEnglishText.Visible = true;
                        TedgyiTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(TedgyiTranslatedText);
                        tabPages.SelectedTab.Controls.Add(TedgyiEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Tongue")
                    {
                        TongueEnglishText.Visible = true;
                        TongueTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(TongueTranslatedText);
                        tabPages.SelectedTab.Controls.Add(TongueEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Chumofs Tusgeo")
                    {
                        ChumofsTusgeoEnglishText.Visible = true;
                        ChumofsTusgeoTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(ChumofsTusgeoTranslatedText);
                        tabPages.SelectedTab.Controls.Add(ChumofsTusgeoEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Chiumaofosi Tousigeeo")
                    {
                        ChiumaofosiTousigeeoEnglishText.Visible = true;
                        ChiumaofosiTousigeeoTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(ChiumaofosiTousigeeoTranslatedText);
                        tabPages.SelectedTab.Controls.Add(ChiumaofosiTousigeeoEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Chumofosi Tusigeo")
                    {
                        ChumofosiTusigeoEnglishText.Visible = true;
                        ChumofosiTusigeoTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(ChumofosiTusigeoTranslatedText);
                        tabPages.SelectedTab.Controls.Add(ChumofosiTusigeoEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Kopodnsuw")
                    {
                        KopodnsuwEnglishText.Visible = true;
                        KopodnsuwTranslatedText.Visible = true;
                        tabPages.SelectedTab.Controls.Add(KopodnsuwTranslatedText);
                        tabPages.SelectedTab.Controls.Add(KopodnsuwEnglishText);
                    }

                    else if (tabPages.SelectedTab.Name == "Reverse")
                    {
                        ReverseInput.Visible = true;
                        ReverseOutput.Visible = true;
                        tabPages.SelectedTab.Controls.Add(ReverseOutput);
                        tabPages.SelectedTab.Controls.Add(ReverseInput);
                    }

                    else if (tabPages.SelectedTab.Name == "DbmapyCVC")
                    {
                        DbmapyCVCInput.Visible = true;
                        DbmapyCVCOutput.Visible = true;
                        tabPages.SelectedTab.Controls.Add(DbmapyCVCOutput);
                        tabPages.SelectedTab.Controls.Add(DbmapyCVCInput);
                    }

                    else if (tabPages.SelectedTab.Name == "GlmtfvCVC")
                    {
                        GlmtfvCVCInput.Visible = true;
                        GlmtfvCVCOutput.Visible = true;
                        tabPages.SelectedTab.Controls.Add(GlmtfvCVCOutput);
                        tabPages.SelectedTab.Controls.Add(GlmtfvCVCInput);
                    }

                    else if (tabPages.SelectedTab.Name == "Mobol'leruke")
                    {
                        MobollerukeIn.Visible = true;
                        MobollerukeOut.Visible = true;
                        tabPages.SelectedTab.Controls.Add(MobollerukeOut);
                        tabPages.SelectedTab.Controls.Add(MobollerukeIn);
                    }

                    else if (tabPages.SelectedTab.Name == "Htenbaxu")
                    {
                        HtenbaxuIn.Visible = true;
                        HtenbaxuOut.Visible = true;
                        tabPages.SelectedTab.Controls.Add(HtenbaxuOut);
                        tabPages.SelectedTab.Controls.Add(HtenbaxuIn);
                    }
                }
            }
        }


        private void ChooseBtn_Click(object sender, EventArgs e)
        {
            if (ChoLang.Text == "")
                MessageBox.Show("No Option Chosen");

            else
                tabPages.Controls.Add(new TabPage(ChoLang.Text));     
        }

        private void Translatebtn1_Click(object sender, EventArgs e)
        {
            // Translation Event
            {
                if (tabPages.SelectedTab.Name == "Lefxao")
                    LefxaoTranslatedText.Text = LefxaoTranslator(LefxaoEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Lirbea")
                    LirbeaTranslatedText.Text = LirbeaTranslator(LirbeaEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Mecfau")
                    MecfauTranslatedText.Text = MecfauTranslator(MecfauEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Tisgeo")
                    TisgeoTranslatedText.Text = TisgeoTranslator(TisgeoEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Dbmapy")
                    DbmapyTranslatedText.Text = DbmapyTranslator(DbmapyEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Ellilekailsu")
                    EllilekailsuTranslatedText.Text = EllilekailsuTranslator(EllilekailsuEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Hebtao")
                    HebtaoTranslatedText.Text = HebtaoTranslator(HebtaoEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Glmtfv")
                    GlmtfvTranslatedText.Text = GlmtfvTranslator(GlmtfvEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Rachzbo Tisgeo")
                    RachzboTisgeoTranslatedText.Text = RachzboTisgeoTranslator(RachzboTisgeoEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Tedgyi")
                    TedgyiTranslatedText.Text = TedgyiTranslator(TedgyiEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Tongue")
                    TongueTranslatedText.Text = TongueTranslator(TongueEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Chumofs Tusgeo")
                    ChumofsTusgeoTranslatedText.Text = ChumofsTusgeoTranslator(ChumofsTusgeoEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Chiumaofosi Tousigeeo")
                    ChiumaofosiTousigeeoTranslatedText.Text = ChiumaofosiTousigeeoTranslator(ChiumaofosiTousigeeoEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Chumofosi Tusigeo")
                    ChumofosiTusigeoTranslatedText.Text = ChumofosiTusigeoTranslator(ChumofosiTusigeoEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Kopodnsuw")
                    KopodnsuwTranslatedText.Text = KopodnsuwTranslator(KopodnsuwEnglishText.Text);

                else if (tabPages.SelectedTab.Name == "Reverse")
                    ReverseOutput.Text = ReverseTranslator(ReverseInput.Text);

                else if (tabPages.SelectedTab.Name == "DbmapyCVC")
                    DbmapyCVCOutput.Text = DbmapyCVCTranslator(DbmapyCVCInput.Text);

                else if (tabPages.SelectedTab.Name == "GlmtfvCVC")
                    GlmtfvCVCOutput.Text = GlmtfvCVCTranslator(GlmtfvCVCInput.Text);

                else if (tabPages.SelectedTab.Name == "Mobol'leruke")
                    MobollerukeOut.Text = MobollerukeTranslator(MobollerukeIn.Text);

                else if (tabPages.SelectedTab.Name == "Htenbaxu")
                    HtenbaxuOut.Text = HtenbaxuTranslator(HtenbaxuIn.Text);
            }
        }

        private void MobollerukeIn_TextChanged(object sender, EventArgs e)
        {

        }
    }
}