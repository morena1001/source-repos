using System;
using static System.Console;

namespace Lab4_3328
{
    class Lab4_3328
    {
        static void Main()
        {
            double commission;
            double incomeTax;
            double retirement;
            double socialSec;
            double netIncome;

            Employee employee = new Employee();


            Write("What is your name? ");
            employee.SetName(ReadLine());

            Write("What is your sales amount for the week? ");
            employee.SalesAmount = Convert.ToDouble(ReadLine());

            WriteLine("\n");


            commission = employee.CommissionCalculation();
            incomeTax = employee.IncomeTaxCalculation();
            retirement = employee.RetirementCalculation();
            socialSec = employee.SocialSecurityCalculation();
            netIncome = employee.NetIncomeCalculation(commission, incomeTax, retirement, socialSec);

            employee.PrintData(employee.GetName(), employee.SalesAmount, commission, incomeTax, retirement, socialSec, netIncome);
        }
    }


    public class Employee
    {
        const double COMMISSION_RATE = 0.07;
        const double FEDERAL_TAX_RATE = 0.18;
        const double RETIREMENT_CONTRIBUTION = 0.15;
        const double SS_TAX_RATE = 0.09;

        private string name;
        private double salesAmount;
        private double commission;



        public Employee ( )
        {
            name = "";
            salesAmount = 0;
        }

        public Employee (string nameOfWorker)
        {
            name = nameOfWorker;
            salesAmount = 0;
        }

        public Employee (double sales)
        {
            name = "";
            salesAmount = sales;
        }

        public Employee (string nameOfWorker, double sales)
        {
            name = nameOfWorker;
            salesAmount = sales;
        }



        public string GetName()
        {
            return name;
        }
        
        public void SetName(string Name)
        {
            name = Name;
        }

        public double SalesAmount
        {
            get
            {
                return salesAmount;
            }

            set
            {
                salesAmount = value;
            }
        }



        public double CommissionCalculation( )
        {
            commission = salesAmount * COMMISSION_RATE;
            return commission;
        }


        public double IncomeTaxCalculation( )
        {
            return commission * FEDERAL_TAX_RATE;
        }


        public double RetirementCalculation( )
        {
            return commission * RETIREMENT_CONTRIBUTION;
        }


        public double SocialSecurityCalculation( )
        {
            return commission * SS_TAX_RATE;
        }


        public double NetIncomeCalculation(double commission, double incomeTax, double retirement, double socialSec)
        {
            return commission - (incomeTax + retirement + socialSec);
        }


        public void PrintData(string name, double salesAmount, double commission, double incomeTax, double retirement, double socialSec, double netIncome)
        {
            double totalDecutions = incomeTax + retirement + socialSec;

            WriteLine("{0:F0}, your take home pay is: {1:C}", name, netIncome);
            WriteLine("\n");

            WriteLine("Total sales: {0:C}", salesAmount);
            WriteLine("{0:P0} of total sales as commission: {1:C}", COMMISSION_RATE, commission);
            WriteLine("{0:P0} deducted from commission as federal income tax: {1:C}", FEDERAL_TAX_RATE, incomeTax);
            WriteLine("{0:P0} deducted from commission as retirement contribution: {1:C}", RETIREMENT_CONTRIBUTION, retirement);
            WriteLine("{0:P0} deducted from commission as social secutiry tax: {1:C}", SS_TAX_RATE, socialSec);

            WriteLine("\nTotal deductions: {0:C}", totalDecutions);
        }
    }
}