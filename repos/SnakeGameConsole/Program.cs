using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SnakeGameConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            int xPosition = 35;
            int yPosition = 20;
            int applexDim = 10;
            int appleyDim = 10;
            int appleseaten = 0;

            int gameSpeed = 150;

            bool isGameOn = true;
            bool isWallHit = false;
            bool isAppleEaten = false;

            Random random = new Random();


            //Get snake to appear on screen
            Console.SetCursorPosition(xPosition, yPosition);
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.WriteLine((char)214); //player character

            //Set apple
            setApplePosition(random, out applexDim, out appleyDim);
            paintApple(applexDim, appleyDim);


            //Build boundary
            buildwall();


            //Get snake to move
            ConsoleKey command = Console.ReadKey().Key;

            do
            {
                switch (command)
                {
                    case ConsoleKey.LeftArrow:
                        Console.SetCursorPosition(xPosition, yPosition);
                        Console.Write(" ");
                        xPosition--;
                        break;

                    case ConsoleKey.UpArrow:
                        Console.SetCursorPosition(xPosition, yPosition);
                        Console.Write(" ");
                        yPosition--;
                        break;

                    case ConsoleKey.RightArrow:
                        Console.SetCursorPosition(xPosition, yPosition);
                        Console.Write(" ");
                        xPosition++;
                        break;

                    case ConsoleKey.DownArrow:
                        Console.SetCursorPosition(xPosition, yPosition);
                        Console.Write(" ");
                        yPosition++;
                        break;
                }

                Console.SetCursorPosition(xPosition, yPosition);
                Console.ForegroundColor = ConsoleColor.Yellow;
                Console.WriteLine((char)214);

                //Detect when snake hits boundary
                isWallHit = DidSnakeHitWall(xPosition, yPosition);

                if (isWallHit)
                {
                    isGameOn = false;
                    Console.SetCursorPosition(28, 20);
                    Console.WriteLine("The snake hit the wall and died");
                }

                //Slow game down
                if (Console.KeyAvailable) command = Console.ReadKey().Key;
                System.Threading.Thread.Sleep(gameSpeed);

                //Place apple on board randomly
                if(isAppleEaten)
                {
                    setApplePosition(random, out applexDim, out appleyDim);
                    paintApple(applexDim, appleyDim);
                }

                //Detect when apple was eaten
                isAppleEaten = determineIfAppleWasEaten(xPosition, yPosition, applexDim, appleyDim);
            } while (isGameOn);


            //Detect when apple was eaten
                //Make snake faster
                //Make snake longer
                //Keep track of how many apples eaten


            //Build welcome screen
            

            //Give player option to read directions


            //show score


            //Give player option to replay the game
        }

        private static bool determineIfAppleWasEaten(int xPosition, int yPosition, int applexDim, int appleyDim)
        {
            if (xPosition == applexDim && yPosition == appleyDim) return true; return false;
        }

        private static void paintApple(int applexDim, int appleyDim)
        {
            Console.SetCursorPosition(applexDim, appleyDim);
            Console.ForegroundColor = ConsoleColor.Red;
            Console.Write((char)64);
        }

        private static void setApplePosition(Random random, out int applexDim, out int appleyDim)
        {
            applexDim = random.Next(0 + 2, 70 - 2);
            appleyDim = random.Next(0 + 2, 40 - 2);
        }

        private static bool DidSnakeHitWall(int xPosition, int yPosition)
        {
            if (xPosition == 1 || xPosition == 70 || yPosition == 1 || yPosition == 40) return true; return false;
        }

        private static void buildwall()
        {
            for(int i = 1; i < 41; i++)
            {
                Console.ForegroundColor = ConsoleColor.White;
                Console.SetCursorPosition(1, i);
                Console.Write("#");
                Console.SetCursorPosition(70, i);
                Console.Write("#");
            }
            for(int i = 1; i < 71; i++)
            {
                Console.ForegroundColor = ConsoleColor.White;
                Console.SetCursorPosition(i, 1);
                Console.Write("#");
                Console.SetCursorPosition(i, 40);
                Console.Write("#");
            }
        }
    }
}
