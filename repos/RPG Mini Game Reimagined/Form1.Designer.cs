namespace RPG_Mini_Game_Reimagined
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Callout = new System.Windows.Forms.Label();
            this.HPStat = new System.Windows.Forms.Label();
            this.STStat = new System.Windows.Forms.Label();
            this.EHPStat = new System.Windows.Forms.Label();
            this.ESTStat = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.AButton = new System.Windows.Forms.Button();
            this.BButton = new System.Windows.Forms.Button();
            this.SButton = new System.Windows.Forms.Button();
            this.HButton = new System.Windows.Forms.Button();
            this.NGButton = new System.Windows.Forms.Button();
            this.EButton = new System.Windows.Forms.Button();
            this.ALabel = new System.Windows.Forms.Label();
            this.HLabel = new System.Windows.Forms.Label();
            this.SLabel = new System.Windows.Forms.Label();
            this.BLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // Callout
            // 
            this.Callout.Location = new System.Drawing.Point(13, 13);
            this.Callout.Name = "Callout";
            this.Callout.Size = new System.Drawing.Size(775, 40);
            this.Callout.TabIndex = 0;
            this.Callout.Text = "Callout";
            this.Callout.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // HPStat
            // 
            this.HPStat.AutoSize = true;
            this.HPStat.Location = new System.Drawing.Point(67, 81);
            this.HPStat.Name = "HPStat";
            this.HPStat.Size = new System.Drawing.Size(31, 20);
            this.HPStat.TabIndex = 1;
            this.HPStat.Text = "HP";
            // 
            // STStat
            // 
            this.STStat.AutoSize = true;
            this.STStat.Location = new System.Drawing.Point(67, 101);
            this.STStat.Name = "STStat";
            this.STStat.Size = new System.Drawing.Size(29, 20);
            this.STStat.TabIndex = 2;
            this.STStat.Text = "ST";
            // 
            // EHPStat
            // 
            this.EHPStat.AutoSize = true;
            this.EHPStat.Location = new System.Drawing.Point(590, 81);
            this.EHPStat.Name = "EHPStat";
            this.EHPStat.Size = new System.Drawing.Size(31, 20);
            this.EHPStat.TabIndex = 3;
            this.EHPStat.Text = "HP";
            // 
            // ESTStat
            // 
            this.ESTStat.AutoSize = true;
            this.ESTStat.Location = new System.Drawing.Point(590, 101);
            this.ESTStat.Name = "ESTStat";
            this.ESTStat.Size = new System.Drawing.Size(29, 20);
            this.ESTStat.TabIndex = 4;
            this.ESTStat.Text = "ST";
            // 
            // pictureBox1
            // 
            this.pictureBox1.Location = new System.Drawing.Point(71, 138);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(604, 157);
            this.pictureBox1.TabIndex = 5;
            this.pictureBox1.TabStop = false;
            // 
            // AButton
            // 
            this.AButton.Location = new System.Drawing.Point(71, 364);
            this.AButton.Name = "AButton";
            this.AButton.Size = new System.Drawing.Size(110, 39);
            this.AButton.TabIndex = 6;
            this.AButton.Text = "Attack";
            this.AButton.UseVisualStyleBackColor = true;
            this.AButton.Click += new System.EventHandler(this.AButton_Click);
            this.AButton.MouseEnter += new System.EventHandler(this.AButton_MouseEnter);
            this.AButton.MouseLeave += new System.EventHandler(this.AButton_MouseLeave);
            // 
            // BButton
            // 
            this.BButton.Location = new System.Drawing.Point(71, 409);
            this.BButton.Name = "BButton";
            this.BButton.Size = new System.Drawing.Size(110, 39);
            this.BButton.TabIndex = 7;
            this.BButton.Text = "Block";
            this.BButton.UseVisualStyleBackColor = true;
            this.BButton.Click += new System.EventHandler(this.BButton_Click);
            this.BButton.MouseEnter += new System.EventHandler(this.BButton_MouseEnter);
            this.BButton.MouseLeave += new System.EventHandler(this.BButton_MouseLeave);
            // 
            // SButton
            // 
            this.SButton.Location = new System.Drawing.Point(71, 454);
            this.SButton.Name = "SButton";
            this.SButton.Size = new System.Drawing.Size(110, 39);
            this.SButton.TabIndex = 8;
            this.SButton.Text = "Skip";
            this.SButton.UseVisualStyleBackColor = true;
            this.SButton.Click += new System.EventHandler(this.SButton_Click);
            this.SButton.MouseEnter += new System.EventHandler(this.SButton_MouseEnter);
            this.SButton.MouseLeave += new System.EventHandler(this.SButton_MouseLeave);
            // 
            // HButton
            // 
            this.HButton.Location = new System.Drawing.Point(71, 499);
            this.HButton.Name = "HButton";
            this.HButton.Size = new System.Drawing.Size(110, 39);
            this.HButton.TabIndex = 9;
            this.HButton.Text = "Heal";
            this.HButton.UseVisualStyleBackColor = true;
            this.HButton.Click += new System.EventHandler(this.HButton_Click);
            this.HButton.MouseEnter += new System.EventHandler(this.HButton_MouseEnter);
            this.HButton.MouseLeave += new System.EventHandler(this.HButton_MouseLeave);
            // 
            // NGButton
            // 
            this.NGButton.Location = new System.Drawing.Point(546, 364);
            this.NGButton.Name = "NGButton";
            this.NGButton.Size = new System.Drawing.Size(129, 60);
            this.NGButton.TabIndex = 11;
            this.NGButton.Text = "New Game";
            this.NGButton.UseVisualStyleBackColor = true;
            this.NGButton.Click += new System.EventHandler(this.NGButton_Click);
            // 
            // EButton
            // 
            this.EButton.Location = new System.Drawing.Point(546, 478);
            this.EButton.Name = "EButton";
            this.EButton.Size = new System.Drawing.Size(131, 60);
            this.EButton.TabIndex = 12;
            this.EButton.Text = "Exit";
            this.EButton.UseVisualStyleBackColor = true;
            this.EButton.Click += new System.EventHandler(this.EButton_Click);
            // 
            // ALabel
            // 
            this.ALabel.Location = new System.Drawing.Point(187, 373);
            this.ALabel.Name = "ALabel";
            this.ALabel.Size = new System.Drawing.Size(300, 75);
            this.ALabel.TabIndex = 13;
            this.ALabel.Visible = false;
            // 
            // HLabel
            // 
            this.HLabel.Location = new System.Drawing.Point(187, 508);
            this.HLabel.Name = "HLabel";
            this.HLabel.Size = new System.Drawing.Size(300, 75);
            this.HLabel.TabIndex = 14;
            this.HLabel.Visible = false;
            // 
            // SLabel
            // 
            this.SLabel.Location = new System.Drawing.Point(187, 463);
            this.SLabel.Name = "SLabel";
            this.SLabel.Size = new System.Drawing.Size(300, 75);
            this.SLabel.TabIndex = 15;
            this.SLabel.Visible = false;
            // 
            // BLabel
            // 
            this.BLabel.Location = new System.Drawing.Point(187, 418);
            this.BLabel.Name = "BLabel";
            this.BLabel.Size = new System.Drawing.Size(300, 75);
            this.BLabel.TabIndex = 16;
            this.BLabel.Visible = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(769, 741);
            this.Controls.Add(this.BLabel);
            this.Controls.Add(this.SLabel);
            this.Controls.Add(this.HLabel);
            this.Controls.Add(this.ALabel);
            this.Controls.Add(this.EButton);
            this.Controls.Add(this.NGButton);
            this.Controls.Add(this.HButton);
            this.Controls.Add(this.SButton);
            this.Controls.Add(this.BButton);
            this.Controls.Add(this.AButton);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.ESTStat);
            this.Controls.Add(this.EHPStat);
            this.Controls.Add(this.STStat);
            this.Controls.Add(this.HPStat);
            this.Controls.Add(this.Callout);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label Callout;
        private System.Windows.Forms.Label HPStat;
        private System.Windows.Forms.Label STStat;
        private System.Windows.Forms.Label EHPStat;
        private System.Windows.Forms.Label ESTStat;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button AButton;
        private System.Windows.Forms.Button BButton;
        private System.Windows.Forms.Button SButton;
        private System.Windows.Forms.Button HButton;
        private System.Windows.Forms.Button NGButton;
        private System.Windows.Forms.Button EButton;
        private System.Windows.Forms.Label ALabel;
        private System.Windows.Forms.Label HLabel;
        private System.Windows.Forms.Label SLabel;
        private System.Windows.Forms.Label BLabel;
    }
}

