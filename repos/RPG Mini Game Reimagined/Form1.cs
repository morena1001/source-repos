using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RPG_Mini_Game_Reimagined
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int HP      = 50;
        int ST      = 30;
        int EHP     = 40;
        int EST     = 25;
        int HealNum = 3;
        int BR;
        int EBR;
        bool block  = false;
        bool Eblock = false;


        // Variables for double clicking options
        int ButtonClick;
        Random random;
        //Random random1;
        Timer timer = new Timer();

        private void Form1_Load(object sender, EventArgs e)
        {
            timer.Interval = 2000;
            timer.Tick += new EventHandler(PlayerComeback);

            HPStat.Text  = "HP: " + HP;
            STStat.Text  = "ST: " + ST;
            EHPStat.Text = "HP: " + EHP;
            ESTStat.Text = "ST: " + EST;

            AButton.Text = "Attack";
            BButton.Text = "Block";
            SButton.Text = "Skip";
            HButton.Text = "Heal " + HealNum;

            if (HP <= 0)
            {
                Callout.Text = "You Lost!";

            }
        }

        private void EButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void AButton_Click(object sender, EventArgs e)
        {
            AButton.Text = "Punch";
            BButton.Text = "Kick";
            SButton.Text = "Sword";
            HButton.Text = "Back";
            ButtonClick++;

            if (ST >= 5 && ButtonClick == 2 && AButton.Text == "Punch")
            {
                ButtonClick = 0;
                Callout.Text = "player used Punch!";
                EHP -= 10;
                ST  -= 5;
                EHPStat.Text = "HP: " + EHP;
                STStat.Text  = "ST: " + ST;
                AButton.Text = "Attack";
                BButton.Text = "Block";
                SButton.Text = "Skip";
                HButton.Text = "Heal " + HealNum;
                PlayerComeback(sender, e);
            }
        }

        private void BButton_Click(object sender, EventArgs e)
        {
            ButtonClick++;

            if (ButtonClick == 1 && BButton.Text == "Block")
            {
                ButtonClick = 0;
                Callout.Text = "Player used Block!";
                ST += 2;
                STStat.Text = "ST: " + ST;
                random = new Random();
                block = true;
            }
            else if (ST >= 6 && ButtonClick == 2 && BButton.Text == "Kick")
            {
                ButtonClick = 0;
                Callout.Text = "Player used Kick!";
                EHP -= 12;
                ST  -=  6;
                EHPStat.Text = "HP: " + EHP;
                STStat.Text = "ST: " + ST;
                AButton.Text = "Attack";
                BButton.Text = "Block";
                SButton.Text = "Skip";
                HButton.Text = "Heal " + HealNum;
            }
        }

        private void SButton_Click(object sender, EventArgs e)
        {
            ButtonClick++;

            if (ButtonClick == 1 && SButton.Text == "Skip")
            {
                ButtonClick = 0;
                Callout.Text = "Player used Skip!";
                ST += 10;
                STStat.Text = "ST: " + ST;
            }
            else if (ST >= 4 && ButtonClick == 2 && SButton.Text == "Sword")
            {
                ButtonClick = 0;
                Callout.Text = "Player used Sword!";
                EHP -= 15;
                ST -= 8;
                EHPStat.Text = "HP: " + EHP;
                STStat.Text = "ST: " + ST;
                AButton.Text = "Attack";
                BButton.Text = "Block";
                SButton.Text = "Skip";
                HButton.Text = "Heal " + HealNum;
            }
        }

        private void HButton_Click(object sender, EventArgs e)
        {
            ButtonClick++;

            if (HealNum > 0 && ButtonClick == 1 && HButton.Text == "Heal " + HealNum)
            {
                ButtonClick = 0;
                Callout.Text = "Player used Heal!";
                HP += 12;
                HealNum--;
                HPStat.Text  = "HP: " + HP;
                HButton.Text = "Heal " + HealNum;
            }
            else if (ButtonClick == 2 && HButton.Text == "Back")
            {
                ButtonClick = 0;
                AButton.Text = "Attack";
                BButton.Text = "Block";
                SButton.Text = "Skip";
                HButton.Text = "Heal " + HealNum;
            }
            else if (HealNum <= 0 && ButtonClick == 1)
            {
                ButtonClick = 0;
                Callout.Text = "No more chances to heal";
            }
        }

        void NewGame()
        {
            HP = 50;
            ST = 30;
            EHP = 40;
            EST = 25;
            HealNum = 3;
            ButtonClick = 0;
            Callout.Text = "";

            HPStat.Text = "HP: " + HP;
            STStat.Text = "ST: " + ST;
            EHPStat.Text = "HP: " + EHP;
            ESTStat.Text = "ST: " + EST;

            AButton.Text = "Attack";
            BButton.Text = "Block";
            SButton.Text = "Skip";
            HButton.Text = "Heal " + HealNum;
        }
        private void NGButton_Click(object sender, EventArgs e)
        {
            NewGame();
        }

        private void AButton_MouseEnter(object sender, EventArgs e)
        {
            if (AButton.Text == "Attack")
            {
                ALabel.Visible = true;
                ALabel.Text = "Attack shows different options of attack: Punch, Kick, Slap and Sword";
            }

            else if (AButton.Text == "Punch")
            {
                ALabel.Visible = true;
                ALabel.Text = "Punch does 10 hp points of damage to the enemy but costs 5 points of stamina";
            }
        }
        private void AButton_MouseLeave(object sender, EventArgs e)
        {
                ALabel.Visible = false;
                ALabel.Text = "";
        }

        private void BButton_MouseEnter(object sender, EventArgs e)
        {
            if (BButton.Text == "Block")
            {
                BLabel.Visible = true;
                BLabel.Text = "Block can deflect from 2 - 8 hp points of damage from the Enemy";
            }

            else if (BButton.Text == "Kick")
            {
                BLabel.Visible = true;
                BLabel.Text = "Kick does 12 hp points of damage to the enemy but costs 6 points of stamina";
            }
        }
        private void BButton_MouseLeave(object sender, EventArgs e)
        {
            BLabel.Visible = false;
            BLabel.Text = "";
        }

        private void SButton_MouseEnter(object sender, EventArgs e)
        {
            if (SButton.Text == "Skip")
            {
                SLabel.Visible = true;
                SLabel.Text = "Skip gives the player a chance to replenesh 10 points of stamina";
            }

            else if (SButton.Text == "Sword")
            {
                SLabel.Visible = true;
                SLabel.Text = "Sword does 15 points of damage to the ennemy but costs 8 points of stamina";
            }
        }
        private void SButton_MouseLeave(object sender, EventArgs e)
        {
            SLabel.Visible = false;
            SLabel.Text = "";
        }

        private void HButton_MouseEnter(object sender, EventArgs e)
        {
            if (HButton.Text == "Heal " + HealNum)
            {
                HLabel.Visible = true;
                HLabel.Text = "Heal regenerates 12 points of hp but you can only do this 3 times";
            }
            else if (HButton.Text == "Back")
            {
                HLabel.Visible = true;
                HLabel.Text = "Back returns the player to the menu with the options: Attack, Block, Skip and Heal";
            }
        }
        private void HButton_MouseLeave(object sender, EventArgs e)
        {
            HLabel.Visible = false;
            HLabel.Text = "";
        }

        public void PlayerComeback(object sender, EventArgs e)
        {
            timer.Start();
            if (timer == sender)
            {
                Random random1 = new Random();
                int PC = random1.Next(1, 7);
                if (PC == 1 && EST >= 5 && EHP > 0) // Punch
                {
                    if (block == true)
                    {
                        BR  = random.Next(2, 8);
                        HP -= BR;
                    }
                    else
                    {
                        HP -= 10;
                    }
                    EST -= 5;
                    Callout.Text = "Enemy used Punch!";
                    HPStat.Text = "HP: " + HP;
                    ESTStat.Text = "ST: " + EST;
                    block = false;
                    timer.Stop();
                }

                if (PC == 2 && EST >= 6 && EHP > 0) // Kick
                {
                    if (block == true)
                    {
                        BR  = random.Next(2, 8);
                        HP -= BR;
                    }
                    else
                    {
                        HP -= 12;
                    }
                    EST -= 6;
                    Callout.Text = "Enemy used Kick";
                    HPStat.Text = "HP: " + HP;
                    ESTStat.Text = "ST: " + EST;
                    block = false;
                    timer.Stop();
                }

                if (PC == 3 && EST >= 4 && EHP > 0) // Slap
                {
                    if (block == true)
                    {
                        BR  = random.Next(2, 5);
                        HP -= BR;
                    }
                    else
                    {
                        HP -= 5;
                    }
                    EST -= 4;
                    Callout.Text = "Enemy used Slap";
                    HPStat.Text = "HP: " + HP;
                    ESTStat.Text = "ST: " + EST;
                    block = false;
                    timer.Stop();
                }

                if (PC == 4 && EST >= 8 && EHP > 0) // Swprd 
                {
                    if (block == true)
                    {
                        BR  = random.Next(2, 8);
                        HP -= BR;
                    }
                    else
                    {
                        HP -= 15;
                    }
                    EST -= 8;
                    Callout.Text = "Enemy used Sword";
                    HPStat.Text = "HP: " + HP;
                    ESTStat.Text = "ST: " + EST;
                    block = false;
                    timer.Stop();
                }

                if (PC == 5 && EHP > 0) // Block
                {
                    block  = false;
                    Eblock = true;
                    Random random2 = new Random();
                    EST += 2;
                    Callout.Text = "Enemy used Block";
                    ESTStat.Text = "ST: " + EST;

                }

                if (PC == 6 && EHP > 0) // Skip
                {

                }

                if (PC == 7 && EHP > 0) // Heal
                {

                }
            }
        } 
    }
}