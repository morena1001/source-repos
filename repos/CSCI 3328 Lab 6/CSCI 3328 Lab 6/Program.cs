using System;
using static System.Console;

namespace Program
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Hello, user! This program calculates your GPA!");
            Console.WriteLine("Here is how it works:");
            Console.WriteLine("In this program, you will be able to:\n1. input grade for course\n2. and number of credit hours\nrecieved for each course");
            Console.WriteLine("\nREMEMBER: Only letter grades are accpeted as grades for each course (AKA: \'A\', \'B\', \'C\', \'D\', and \'F\')");
            Console.WriteLine("Lastly, once you have inputed the last grade, input \'Z\' as the letter grade to stop\n\n");

            char letterGrade = 'A';
            int creditHours;
            double GPA = 0;
            double totalHours = 0;
            int totalGradePoints = 0;

            while (letterGrade != 'Z')
            {
                Write("Letter Grade: ");
                letterGrade = Convert.ToChar(ReadLine());
                if (letterGrade != 'Z')
                {
                    Write("\nCredit Hours: ");
                    creditHours = Convert.ToInt32(ReadLine());

                    if (letterGrade == 'A')
                        totalGradePoints += 4 * creditHours;
                    else if (letterGrade == 'B')
                        totalGradePoints += 3 * creditHours;
                    else if (letterGrade == 'C')
                        totalGradePoints += 2 * creditHours;
                    else if (letterGrade == 'D')
                        totalGradePoints += 1 * creditHours;
                    else
                        totalGradePoints += 0;

                    totalHours += creditHours;

                    WriteLine("\nGrade: {0}\tHours: {1}", letterGrade, creditHours);
                    WriteLine("\n");
                }
            }
            GPA = totalGradePoints / totalHours;
            WriteLine("Thank you for inputing your grades and hours. Here are your total hours and GPA:\nHours: {0}\nGPA  : {1}", totalHours, GPA);
        }
    }
}