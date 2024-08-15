using System;
using static System.Console;

namespace Lab2_3328
{
    class Program
    {
        static void Main()
        {
            double HW = 0.10, HS = 97;
            double PW = 0.35, PS = 82;
            double QW = 0.10, QS = 60;
            double EW = 0.30, ES = 75;
            double FW = 0.15, FS = 80;

            double OwnH, OwnP, OwnQ, OwnE, OwnF;

            double WA = (HW * (HS / 100)) + (PW * (PS / 100)) + (QW * (QS / 100)) + (EW * (ES / 100)) + (FW * (FS / 100));

            WriteLine("{0, -18:F0} {1, -10:F0} {2:F0}", "Assignments", "Weight", "Score\n");
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Homework"  , HW, HS);
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Projects"  , PW, PS);
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Quizzes"   , QW, QS); 
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Exams"     , EW, ES);
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Final Exam", FW, FS);
            WriteLine("\nWeighted Average: {0:P}", WA);


            WriteLine("\n\n\nTime to input your own variables");

            Write("\nWhat is your grade for homework? ");
            OwnH = Convert.ToDouble(ReadLine());

            Write("\nWhat is your grade for Projects? ");
            OwnP = Convert.ToDouble(ReadLine());

            Write("\nWhat is your grade for Quizzes? ");
            OwnQ = Convert.ToDouble(ReadLine());

            Write("\nWhat is your grade for Exams? ");
            OwnE = Convert.ToDouble(ReadLine());

            Write("\nWhat is your grade for Final Exam? ");
            OwnF = Convert.ToDouble(ReadLine());

            double OwnA = (HW * (OwnH / 100)) + (PW * (OwnP / 100)) + (QW * (OwnQ / 100)) + (EW * (OwnE / 100)) + (FW * (OwnF / 100));

            WriteLine( );
            WriteLine("{0, -18:F0} {1, -10:F0} {2:F0}", "Assignments", "Weight", "Score\n");
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Homework", HW, OwnH);
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Projects", PW, OwnP);
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Quizzes", QW, OwnQ);
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Exams", EW, OwnE);
            WriteLine("{0, -21:F0} {1, -9:P0}  {2:F0}", "Final Exam", FW, OwnF);
            WriteLine("\nWeighted Average: {0:P}", OwnA);
        } 
    }
}
