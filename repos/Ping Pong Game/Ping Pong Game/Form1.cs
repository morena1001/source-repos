namespace Ping_Pong_Game
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_KeyPress(object sender, KeyPressEventArgs e)
        {
            //e.KeyChar = (char)e.KeyChar;
 
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {

            switch (e.KeyCode)
            {
                case Keys.Up:
                    pictureBox1.Location = new Point(pictureBox1.Location.X, pictureBox1.Location.Y - 5);
                    break;
                case Keys.Down:
                    pictureBox1.Location = new Point(pictureBox1.Location.X, pictureBox1.Location.Y + 5);
                    break;
            }
        }
    }
}