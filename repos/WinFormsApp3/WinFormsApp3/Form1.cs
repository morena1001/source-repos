using System;
using System.IO;

namespace WinFormsApp3
{
    public partial class ClubForm : Form
    {
        string file = @"C:\Users\josue\Desktop\Homework\Test1.txt";

        public ClubForm()
        {
            InitializeComponent();
        }

        private void txtBxResult_TextChanged(object sender, EventArgs e)
        {

        }

        private void lstBxEvents_SelectedIndexChanged(object sender, EventArgs e)
        {
            string result = " ";
            foreach (string activity in lstBxEvents.SelectedItems)
                result += activity + " ";
            txtBxResult.Text = result;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            lstBxEvents.Items.Add(textBox1.Text);
        }

        private void ClubForm_Load(object sender, EventArgs e)
        {
            if (File.Exists(file))
            {
                string[] lines = File.ReadAllLines(file);
                foreach (string ln in lines)
                {
                    if (ln != "")
                        lstBxEvents.Items.Add(ln);
                }   
            }
        }

        private void ClubForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            string line = "";
            foreach (string activity in lstBxEvents.Items)
                line += activity + "_";

            string[] lines = line.Split('_');
            File.WriteAllLines(file, lines);
        }
    }
}