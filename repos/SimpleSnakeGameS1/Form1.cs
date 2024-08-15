using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Printing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SimpleSnakeGameS1
{
    public partial class Form1 : Form
    {
        private List<Circle> Snake = new List<Circle>();
        private Circle food = new Circle();
        public Form1()
        {
            InitializeComponent();

            //Set settings to default
            new Settings();

            //Set game speed and start timer
            GameTimer.Interval = 1000 / Settings.Speed;
            GameTimer.Tick += UpdateScreen;
            GameTimer.Start();

            //Start new game
            StartGame();
        }

        private void StartGame()
        {
            lbGameOver.Visible = false;
            
            //Set settings to default
            new Settings();

            //Create new player object
            Snake.Clear();
            Circle head = new Circle();
            head.X = 10;
            head.Y =  5;
            Snake.Add(head);

            lbScore.Text = Settings.Score.ToString();
            GenerateFood();

        }

        //Place random food game
        private void GenerateFood()
        {
            int MaxXPos = pbCanvas.Size.Width / Settings.Width;
            int MaxYPos = pbCanvas.Size.Height / Settings.Height;

            Random random = new Random();
            food = new Circle();
            food.X = random.Next(0, MaxXPos);
            food.Y = random.Next(0, MaxYPos);
        }

        private void UpdateScreen(object Sender, EventArgs e)
        {
            //Check for Game Over
            if(Settings.GameOver == true)
            {
                //Check if Enter is pressed
                if (Input.KeyPressed(Keys.Enter))
                {
                    StartGame();
                }
            }
            else
            {
                if (Input.KeyPressed(Keys.D) && Settings.direction != Direction.Left)
                    Settings.direction = Direction.Right;
                else if (Input.KeyPressed(Keys.A) && Settings.direction != Direction.Right)
                    Settings.direction = Direction.Left;
                else if (Input.KeyPressed(Keys.W) && Settings.direction != Direction.Down)
                    Settings.direction = Direction.Up;
                else if (Input.KeyPressed(Keys.S) && Settings.direction != Direction.Up)
                    Settings.direction = Direction.Down;

                MovePlayer();
            }

            pbCanvas.Invalidate();
        }

        private void pbCanvas_Paint(object sender, PaintEventArgs e)
        {
            Graphics canvas = e.Graphics;

            if(Settings.GameOver != true)
            {
                //Set color of snake
                Brush snakeColor;

                //Draw snake
                for(int i = 0; i < Snake.Count; i ++)
                {
                    if (i == 0)
                        snakeColor = Brushes.Black; //Draw head
                    else
                        snakeColor = Brushes.Green; //Rest of body

                    //Draw snake
                    canvas.FillEllipse(snakeColor, new Rectangle(Snake[i].X * Settings.Width, Snake[i].Y * Settings.Height, Settings.Width, Settings.Height));

                    //Draw food
                    canvas.FillEllipse(Brushes.Red, new Rectangle(food.X * Settings.Width, food.Y * Settings.Height, Settings.Width, Settings.Height));
                }
            }
            else
            {
                string GameOver = "Game Over \nYour final score is:" + Settings.Score + "\nPress Enter to Try again";
                lbGameOver.Text = GameOver;
                lbGameOver.Visible = true;
            }
        }

        private void MovePlayer()
        {
            for(int i = Snake.Count - 1; i >= 0; i--)
            {
                //Move head
                if(i == 0)
                {
                    switch(Settings.direction)
                    {
                        case Direction.Right:
                            Snake[i].X++;
                            break;
                        case Direction.Left:
                            Snake[i].X--;
                            break;
                        case Direction.Up:
                            Snake[i].Y--;
                            break;
                        case Direction.Down:
                            Snake[i].Y++;
                            break;
                    }

                }
                else
                {
                    //Move body
                    Snake[i].X = Snake[i - 1].X;
                    Snake[i].Y = Snake[i - 1].Y;
                }
            }
        }



        private void timer1_Tick(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
