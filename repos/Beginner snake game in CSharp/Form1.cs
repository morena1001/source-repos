using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Beginner_snake_game_in_CSharp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        Timer timer;
        int sizeMatrix;
        int[,] Matrix;
        SnakeDirection Snakedirection;
        Point HeadPosition;
        int LastSegment;
        Random random;

        enum MatrixObject
        {
            Food = -1,
            Spike = -2
        }

        enum SnakeDirection
        {Up, Right, Down, Left}

        private void Form1_Load(object sender, EventArgs e)
        {
            random = new Random();
            timer = new Timer();
            timer.Interval = 100;
            timer.Start();
            timer.Tick += Timer_Tick;
            sizeMatrix = 20;
            Matrix = new int[sizeMatrix, sizeMatrix];

            Initialize();
        }

        private void Initialize()
        {
            for (int i = 0; i < sizeMatrix; i++)
            {
                for (int j = 0; j < sizeMatrix; j++)
                {
                    Matrix[i, j] = 0;
                }
            }
            GenerateFood();
            HeadPosition = new Point(5, 5);
            Matrix[5, 5] = 1;
            Matrix[6, 5] = 2;
            Matrix[7, 5] = 3;
            LastSegment = 3;
            Snakedirection = SnakeDirection.Left;
        }

        private void Timer_Tick(object sender, EventArgs e)
        {
            GameLogic();
            Draw();
        }

        private void Draw()
        {
            Bitmap bitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            Graphics graphics = Graphics.FromImage(bitmap);

            graphics.FillRectangle(Brushes.Gray, 0, 0, pictureBox1.Width, pictureBox1.Height);

            SizeF sizeCell = new SizeF((float)pictureBox1.Width / sizeMatrix, (float)pictureBox1.Height / sizeMatrix);

            for(int i = 0; i < sizeMatrix; i++)
            {
                for (int j = 0; j < sizeMatrix; j++)
                {
                    if (Matrix[i, j] == 0)
                    {
                        graphics.FillRectangle(Brushes.White, i * sizeCell.Width + 1, j * sizeCell.Height + 1, sizeCell.Width - 2, sizeCell.Height - 2);
                    }
                    else if (Matrix[ i , j] == (int)MatrixObject.Food)
                    {
                        graphics.FillRectangle(Brushes.Red, i * sizeCell.Width + 1, j * sizeCell.Height + 1, sizeCell.Width - 2, sizeCell.Height - 2);

                    }
                    else
                    {
                        graphics.FillRectangle(Brushes.Blue, i * sizeCell.Width + 1, j * sizeCell.Height + 1, sizeCell.Width - 2, sizeCell.Height - 2);
                    }
                }
            }

            pictureBox1.BackgroundImage = bitmap;
        }

        private void GameLogic()
        {

            Point WalkPosition;
            switch (Snakedirection)
            {
                case SnakeDirection.Up:
                    WalkPosition = new Point(HeadPosition.X, HeadPosition.Y - 1);
                    break;
                case SnakeDirection.Right:
                    WalkPosition = new Point(HeadPosition.X + 1, HeadPosition.Y);
                    break;
                case SnakeDirection.Down:
                    WalkPosition = new Point(HeadPosition.X, HeadPosition.Y + 1);
                    break;
                case SnakeDirection.Left:
                    WalkPosition = new Point(HeadPosition.X - 1, HeadPosition.Y);
                    break;
                default:
                    throw new Exception("it is not possile for the snake to not have a direction");
            }

            if (WalkPosition.X < 0 || WalkPosition.Y < 0 || WalkPosition.X == sizeMatrix || WalkPosition.Y == sizeMatrix || Matrix[WalkPosition.X, WalkPosition.Y] > 0 )
            {
                Initialize();
                return;
            }
            if (Matrix[WalkPosition.X, WalkPosition.Y] == (int)MatrixObject.Food)
            {
                LastSegment++;
                GenerateFood();
            }

            Matrix[WalkPosition.X, WalkPosition.Y] = 1;
            Matrix[HeadPosition.X, HeadPosition.Y]++;
            HeadPosition = WalkPosition;

            for (int i = 0; i < sizeMatrix; i++)
            {
                for (int j = 0; j < sizeMatrix; j++)
                {
                    if (Matrix[i, j] == LastSegment)
                    {
                        Matrix[i, j] = 0;

                    }
                    else if (Matrix[i, j] > 1)
                    {
                        Matrix[i, j]++;
                    }
                }
            }
        }

        private void Form1_KeyPress(object sender, KeyPressEventArgs e)
        {
            switch(e.KeyChar)
            {
                case 'w':
                    if(Snakedirection != SnakeDirection.Down)
                    Snakedirection = SnakeDirection.Up;
                    break;
                case 'a':
                    if (Snakedirection != SnakeDirection.Right)
                        Snakedirection = SnakeDirection.Left;
                    break;
                case 's':
                    if (Snakedirection != SnakeDirection.Up)
                        Snakedirection = SnakeDirection.Down;
                    break;
                case 'd':
                    if (Snakedirection != SnakeDirection.Left)
                        Snakedirection = SnakeDirection.Right;
                    break;
            }
        }

        private void GenerateFood()
        {
            Point FoodPosition;

            do
            {
                FoodPosition = new Point(random.Next() % sizeMatrix, random.Next() % sizeMatrix);
            } while (Matrix[FoodPosition.X, FoodPosition.Y] != 0);

            Matrix[FoodPosition.X, FoodPosition.Y] = (int)MatrixObject.Food;
        }
    }
}
