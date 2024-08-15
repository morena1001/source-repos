using System;
using static System.Console;

namespace question22and23
{
    class Program
    {
        static void Main( )
        {
            DisplayAsterisks();

            string name = "Josue";
            DisplayName(name);

            float num12 = 138.285f, num22 = 452.456f;
            DisplayValue(num12, num22);

            int num1 = 5, num2 = 10, num3 = 13, sum;
            sum = SumOfNums(num1, num2, num3);
        }

        static void DisplayAsterisks()
        {
            WriteLine("***************************");
            WriteLine("***************************");
            WriteLine("***************************");
        }

        static void DisplayName(string name)
        {
            WriteLine("Your name: {0}", name);
        }

        static void DisplayValue(float num1, float num2)
        {
            WriteLine("{0:F3}   {1:F3}", num1, num2);
        }

        static int SumOfNums(int num1, int num2, int num3)
        {
            return num1 + num2 + num3;
        }
    }
}
