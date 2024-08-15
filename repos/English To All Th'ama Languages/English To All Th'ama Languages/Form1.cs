namespace English_To_All_Th_ama_Languages
{
    public partial class Form1 : Form
    {
        string english = "";
        int menu = 0;

        public Form1()
        {
            InitializeComponent();
        }

        public string LefxaoTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
                switch (letter)
                {
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

            return elil;

        }

        public string LirbeaTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string MecfauTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string TisgeoTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string DbmapyTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string ElilekailsuTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string HebtaoTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string GlmtfvTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string RachzboTisgeoTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string TedgyiTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string TongueTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string ChumofsTusgeoTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string ChiumaofosiTousigeeoTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }

        public string ChumofosiTusigeoTranslator(string eng)
        {
            string elil = "";

            for (int i = 0; i < eng.Length; ++i)
            {
                char letter = eng[i];
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

            return elil;

        }




        private void titleBox_TextChanged(object sender, EventArgs e)
        {

        }

        private void translateButton_Click(object sender, EventArgs e)
        {
            english = englishString.Text;

            if (menu == 1)
                translatedString.Text = LefxaoTranslator(english);

            else if (menu == 2)
                translatedString.Text = LirbeaTranslator(english);

            else if (menu == 3)
                translatedString.Text = MecfauTranslator(english);

            else if (menu == 4)
                translatedString.Text = TisgeoTranslator(english);

            else if (menu == 5)
                translatedString.Text = DbmapyTranslator(english);

            else if (menu == 6)
                translatedString.Text = ElilekailsuTranslator(english);

            else if (menu == 7)
                translatedString.Text = HebtaoTranslator(english);

            else if (menu == 8)
                translatedString.Text = GlmtfvTranslator(english);

            else if (menu == 9)
                translatedString.Text = RachzboTisgeoTranslator(english);

            else if (menu == 10)
                translatedString.Text = TedgyiTranslator(english);

            else if (menu == 11)
                translatedString.Text = TongueTranslator(english);

            else if (menu == 12)
                translatedString.Text = ChumofsTusgeoTranslator(english);

            else if (menu == 13)
                translatedString.Text = ChiumaofosiTousigeeoTranslator(english);

            else if (menu == 14)
                translatedString.Text = ChumofosiTusigeoTranslator(english);
        }

        private void menuButton_Click(object sender, EventArgs e)
        {
            menu = 0;

            titleBox.Text = "English To All Th'ama Languages";
            button1.Visible = true;
            button2.Visible = true;
            button3.Visible = true;
            button4.Visible = true;
            button5.Visible = true;
            button6.Visible = true;
            button7.Visible = true;
            button8.Visible = true;
            button9.Visible = true;
            button10.Visible = true;
            button11.Visible = true;
            button12.Visible = true;
            button13.Visible = true;
            button14.Visible = true;
            button15.Visible = true;

            menuButton.Visible = false;
            englishLabel.Visible = false;
            englishString.Visible = false;
            translateButton.Visible = false;

            LanguageTranslate.Text = "";
            translatedString.Text = "";
            englishString.Text = "";
            LanguageTranslate.Visible = false;
            translatedString.Visible = false;
        }




        private void button1_Click(object sender, EventArgs e)
        {
            menu = 1;

            titleBox.Text = "English to Lefxao";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Lefxao:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            menu = 2;

            titleBox.Text = "English to lirbea";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Lirbea:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            menu = 3;

            titleBox.Text = "English to Mecfau";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Mecfau:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            menu = 4;

            titleBox.Text = "English to Tisgeo";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Tisgeo:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            menu = 5;

            titleBox.Text = "English to Dbmapy";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Dbmapy:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            menu = 6;

            titleBox.Text = "English to Elilekailsu";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Elilekailsu:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            menu = 7;

            titleBox.Text = "English to Hebtao";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Hebtao:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            menu = 8;

            titleBox.Text = "English to Glmtfv";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Glmtfv:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            menu = 9;

            titleBox.Text = "English to Rachzbo Tisgeo";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Rachzbo Tisgeo:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            menu = 10;

            titleBox.Text = "English to Tedgyi";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Tedgyi:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button11_Click(object sender, EventArgs e)
        {
            menu = 11;

            titleBox.Text = "English to Tongue";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Tongue:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button12_Click(object sender, EventArgs e)
        {
            menu = 12;

            titleBox.Text = "English to Chumofs Tusgeo";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Chumofs Tusgeo:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button13_Click(object sender, EventArgs e)
        {
            menu = 13;

            titleBox.Text = "English to Chiumaofosi Tousigeeo";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Chiumaofosi Tousigeeo:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            menu = 14;

            titleBox.Text = "English to Chumofosi Tusigeo";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "Chumofosi Tusigeo:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void button15_Click(object sender, EventArgs e)
        {
            menu = 15;

            titleBox.Text = "English to All";
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;
            button10.Visible = false;
            button11.Visible = false;
            button12.Visible = false;
            button13.Visible = false;
            button14.Visible = false;
            button15.Visible = false;

            menuButton.Visible = true;
            englishLabel.Visible = true;
            englishString.Visible = true;
            translateButton.Visible = true;

            LanguageTranslate.Text = "All:";
            LanguageTranslate.Visible = true;
            translatedString.Visible = true;
        }

        private void Form1_Leave(object sender, EventArgs e)
        {
        
        }
    }
}