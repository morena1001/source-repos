namespace RandomSquares
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void startButton_Click(object sender, EventArgs e)
        {
            startButton.Visible = false;

            int count = 10;
            Random random = new Random();

            //while (count > 0)
            {
                TextBox textBox = new TextBox();
                textBox.Text = "HI";
                textBox.Location = new Point(100, 100);
                textBox.Size = new Size(150, 150);

                PictureBox pictureBox1 = new PictureBox();
                pictureBox1.Visible = true;
                pictureBox1.Width = random.Next(25, 150);
                pictureBox1.Height = random.Next(25, 150);
                pictureBox1.Location = new Point(100, 100);//random.Next(12, 85), random.Next(12, 492));
                //pictureBox1.Size = new Size(pictureBox1.Width, pictureBox1.Height);
                pictureBox1.BackColor = Color.Blue;
                //pictureBox1.Name = "pBox" + count;
            }
        }
    }
}