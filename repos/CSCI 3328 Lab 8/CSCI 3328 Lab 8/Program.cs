using System;
using static System.Console;
using static System.Array;

namespace Lab_8
{
    class Lab_8
    {
        static void Main( )
        {
            string[] courseName  = {"CS150", "CS250", "CS270", "CS300", "CS350"};
            int[] currEnrollment = {180, 21, 9, 4, 20};
            int[] maxEnrollment  = {200, 30, 20, 20, 20};

            ClassReport[] report = new ClassReport[5];

            WriteLine("Course        Current      Enrollment" + "\n" +
                      "Name          Enrollment   Left");

            for (int i = 0; i < 5; i++)
            {
                report[i] = new ClassReport();
                report[i].nameOfCourse = courseName[i];
                report[i].currentEnrollment = currEnrollment[i];
                report[i].maximumEnrollment = maxEnrollment[i];
                WriteLine(report[i].ToString());
            }
        }
    }


    public class ClassReport
    {
        public string nameOfCourse = "";
        public int currentEnrollment = 0;
        public int maximumEnrollment = 0;

        public int EnrollmentLeft( )
        {
            return maximumEnrollment - currentEnrollment;
        }

        public override string ToString( )
        {
            return nameOfCourse + "          " + Convert.ToString(currentEnrollment) + "           " + Convert.ToString(EnrollmentLeft( ));
        }
    }
}