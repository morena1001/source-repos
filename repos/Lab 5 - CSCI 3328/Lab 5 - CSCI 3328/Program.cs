using System;
using static System.Console;

namespace Lab5_CSCI3328
{
    class program
    {
        static void Main()
        {
            int    numItems    = 0;
            double shipCharges = 0.0;


            Write("How many items are you purchasing? ");
            numItems = Convert.ToInt32(Console.ReadLine());
            
            if (numItems == 1)
            {
                shipCharges = 2.99;
            }
            else if (numItems >= 2 && numItems <= 5)
            {
                shipCharges = ((numItems - 1) * 1.99) + 2.99;

                
            }
            else if (numItems > 5 && numItems < 15)
            {
                shipCharges = ((numItems - 5) * 1.49) + 10.95;

                
            }
            else if (numItems >= 15)
            {
                shipCharges += ((numItems - 14) * 0.99) + 24.36;
            }

            WriteLine();
            WriteLine("Your total shipping charges is: {0:C}", shipCharges);
        }
    }
}