﻿namespace Tic_Tac_Toe_Game
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
            this.A00 = new System.Windows.Forms.Button();
            this.A10 = new System.Windows.Forms.Button();
            this.A20 = new System.Windows.Forms.Button();
            this.A21 = new System.Windows.Forms.Button();
            this.A11 = new System.Windows.Forms.Button();
            this.A01 = new System.Windows.Forms.Button();
            this.A22 = new System.Windows.Forms.Button();
            this.A12 = new System.Windows.Forms.Button();
            this.A02 = new System.Windows.Forms.Button();
            this.NGButton = new System.Windows.Forms.Button();
            this.RButton = new System.Windows.Forms.Button();
            this.EButton = new System.Windows.Forms.Button();
            this.XWin = new System.Windows.Forms.Label();
            this.OWin = new System.Windows.Forms.Label();
            this.Draws = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // A00
            // 
            this.A00.Location = new System.Drawing.Point(13, 13);
            this.A00.Name = "A00";
            this.A00.Size = new System.Drawing.Size(120, 120);
            this.A00.TabIndex = 0;
            this.A00.UseVisualStyleBackColor = true;
            this.A00.Click += new System.EventHandler(this.ButtonClick);
            // 
            // A10
            // 
            this.A10.Location = new System.Drawing.Point(12, 139);
            this.A10.Name = "A10";
            this.A10.Size = new System.Drawing.Size(120, 120);
            this.A10.TabIndex = 1;
            this.A10.UseVisualStyleBackColor = true;
            this.A10.Click += new System.EventHandler(this.ButtonClick);
            // 
            // A20
            // 
            this.A20.Location = new System.Drawing.Point(13, 265);
            this.A20.Name = "A20";
            this.A20.Size = new System.Drawing.Size(120, 120);
            this.A20.TabIndex = 2;
            this.A20.UseVisualStyleBackColor = true;
            this.A20.Click += new System.EventHandler(this.ButtonClick);
            // 
            // A21
            // 
            this.A21.Location = new System.Drawing.Point(139, 265);
            this.A21.Name = "A21";
            this.A21.Size = new System.Drawing.Size(120, 120);
            this.A21.TabIndex = 5;
            this.A21.UseVisualStyleBackColor = true;
            this.A21.Click += new System.EventHandler(this.ButtonClick);
            // 
            // A11
            // 
            this.A11.Location = new System.Drawing.Point(138, 139);
            this.A11.Name = "A11";
            this.A11.Size = new System.Drawing.Size(120, 120);
            this.A11.TabIndex = 4;
            this.A11.UseVisualStyleBackColor = true;
            this.A11.Click += new System.EventHandler(this.ButtonClick);
            // 
            // A01
            // 
            this.A01.Location = new System.Drawing.Point(139, 13);
            this.A01.Name = "A01";
            this.A01.Size = new System.Drawing.Size(120, 120);
            this.A01.TabIndex = 3;
            this.A01.UseVisualStyleBackColor = true;
            this.A01.Click += new System.EventHandler(this.ButtonClick);
            // 
            // A22
            // 
            this.A22.Location = new System.Drawing.Point(265, 265);
            this.A22.Name = "A22";
            this.A22.Size = new System.Drawing.Size(120, 120);
            this.A22.TabIndex = 8;
            this.A22.UseVisualStyleBackColor = true;
            this.A22.Click += new System.EventHandler(this.ButtonClick);
            // 
            // A12
            // 
            this.A12.Location = new System.Drawing.Point(264, 139);
            this.A12.Name = "A12";
            this.A12.Size = new System.Drawing.Size(120, 120);
            this.A12.TabIndex = 7;
            this.A12.UseVisualStyleBackColor = true;
            this.A12.Click += new System.EventHandler(this.ButtonClick);
            // 
            // A02
            // 
            this.A02.Location = new System.Drawing.Point(265, 13);
            this.A02.Name = "A02";
            this.A02.Size = new System.Drawing.Size(120, 120);
            this.A02.TabIndex = 6;
            this.A02.UseVisualStyleBackColor = true;
            this.A02.Click += new System.EventHandler(this.ButtonClick);
            // 
            // NGButton
            // 
            this.NGButton.Location = new System.Drawing.Point(13, 422);
            this.NGButton.Name = "NGButton";
            this.NGButton.Size = new System.Drawing.Size(120, 70);
            this.NGButton.TabIndex = 9;
            this.NGButton.Text = "New Game";
            this.NGButton.UseVisualStyleBackColor = true;
            this.NGButton.Click += new System.EventHandler(this.NGButton_Click);
            // 
            // RButton
            // 
            this.RButton.Location = new System.Drawing.Point(139, 422);
            this.RButton.Name = "RButton";
            this.RButton.Size = new System.Drawing.Size(120, 70);
            this.RButton.TabIndex = 10;
            this.RButton.Text = "Reset";
            this.RButton.UseVisualStyleBackColor = true;
            this.RButton.Click += new System.EventHandler(this.RButton_Click);
            // 
            // EButton
            // 
            this.EButton.Location = new System.Drawing.Point(417, 422);
            this.EButton.Name = "EButton";
            this.EButton.Size = new System.Drawing.Size(120, 70);
            this.EButton.TabIndex = 11;
            this.EButton.Text = "Exit";
            this.EButton.UseVisualStyleBackColor = true;
            this.EButton.Click += new System.EventHandler(this.EButton_Click);
            // 
            // XWin
            // 
            this.XWin.Location = new System.Drawing.Point(417, 63);
            this.XWin.Name = "XWin";
            this.XWin.Size = new System.Drawing.Size(120, 48);
            this.XWin.TabIndex = 12;
            this.XWin.Text = "label1";
            // 
            // OWin
            // 
            this.OWin.Location = new System.Drawing.Point(417, 189);
            this.OWin.Name = "OWin";
            this.OWin.Size = new System.Drawing.Size(120, 48);
            this.OWin.TabIndex = 13;
            this.OWin.Text = "label2";
            // 
            // Draws
            // 
            this.Draws.Location = new System.Drawing.Point(417, 315);
            this.Draws.Name = "Draws";
            this.Draws.Size = new System.Drawing.Size(120, 48);
            this.Draws.TabIndex = 14;
            this.Draws.Text = "label3";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(622, 543);
            this.Controls.Add(this.Draws);
            this.Controls.Add(this.OWin);
            this.Controls.Add(this.XWin);
            this.Controls.Add(this.EButton);
            this.Controls.Add(this.RButton);
            this.Controls.Add(this.NGButton);
            this.Controls.Add(this.A22);
            this.Controls.Add(this.A12);
            this.Controls.Add(this.A02);
            this.Controls.Add(this.A21);
            this.Controls.Add(this.A11);
            this.Controls.Add(this.A01);
            this.Controls.Add(this.A20);
            this.Controls.Add(this.A10);
            this.Controls.Add(this.A00);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button A00;
        private System.Windows.Forms.Button A10;
        private System.Windows.Forms.Button A20;
        private System.Windows.Forms.Button A21;
        private System.Windows.Forms.Button A11;
        private System.Windows.Forms.Button A01;
        private System.Windows.Forms.Button A22;
        private System.Windows.Forms.Button A12;
        private System.Windows.Forms.Button A02;
        private System.Windows.Forms.Button NGButton;
        private System.Windows.Forms.Button RButton;
        private System.Windows.Forms.Button EButton;
        private System.Windows.Forms.Label XWin;
        private System.Windows.Forms.Label OWin;
        private System.Windows.Forms.Label Draws;
    }
}

