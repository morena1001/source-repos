using System;
using static System.Console;

namespace Lab3_3328
{
    class Program
    {
        const double commissionRate = 0.07;
        const double federaltaxRate = 0.18;
        const double retirementContribution = 0.15;
        const double sSTaxate = 0.09;

        static void Main( )
        {
            string name;
            double salesAmount;
            double commission;
            double incomeTax;
            double retirement;
            double socialSec;
            double netIncome;


            NameAndSales(out name, out salesAmount);
            commission = CommissionCalculation(salesAmount);
            incomeTax = IncomeTaxCalculation(commission);
            retirement = RetirementCalculation(commission);
            socialSec = SocialSecurityCalculation(commission);
            netIncome = NetIncomeCalculation(commission, incomeTax, retirement, socialSec);
            PrintData(name, salesAmount, commission, incomeTax, retirement, socialSec, netIncome);
        }

        static void NameAndSales(out string name, out double salesAmount)
        {
            Write("What is your name? ");
            name = ReadLine( );

            Write("What is your sales amount for the week? ");
            salesAmount = Convert.ToDouble(ReadLine( ));

            WriteLine("\n");
        }

        static double CommissionCalculation(double salesAmount)
        {
            return salesAmount * commissionRate;
        }

        static double IncomeTaxCalculation(double commission)
        {
            return commission * federaltaxRate;
        }

        static double RetirementCalculation(double commission)
        {
            return commission * retirementContribution;
        }

        static double SocialSecurityCalculation(double commission)
        {
            return commission * sSTaxate;
        }

        static double NetIncomeCalculation(double commission, double incomeTax, double retirement, double socialSec)
        {
            return commission - (incomeTax + retirement + socialSec);
        }

        static void PrintData(string name, double salesAmount, double commission, double incomeTax, double retirement, double socialSec, double netIncome)
        {
            double totalDecutions = incomeTax + retirement + socialSec;

            WriteLine("{0:F0}, your take home pay is: {1:C}", name, netIncome);
            WriteLine("\n");

            WriteLine("Total sales: {0:C}", salesAmount);
            WriteLine("{0:P0} of total sales as commission: {1:C}", commissionRate, commission);

            WriteLine("{0:P0} deducted from commission as federal income tax: {1:C}", federaltaxRate, incomeTax);
            WriteLine("{0:P0} deducted from commission as retirement contribution: {1:C}", retirementContribution, retirement);
            WriteLine("{0:P0} deducted from commission as social secutiry tax: {1:C}", sSTaxate, socialSec);

            WriteLine("\nTotal deductions: {0:C}", totalDecutions);

        }
    }
}
