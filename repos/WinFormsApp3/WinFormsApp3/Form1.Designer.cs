namespace WinFormsApp3
{
    partial class ClubForm
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.txtBxResult = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.lstBxEvents = new System.Windows.Forms.ListBox();
            this.button1 = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // txtBxResult
            // 
            this.txtBxResult.Location = new System.Drawing.Point(117, 435);
            this.txtBxResult.Margin = new System.Windows.Forms.Padding(2, 3, 2, 3);
            this.txtBxResult.Name = "txtBxResult";
            this.txtBxResult.Size = new System.Drawing.Size(620, 26);
            this.txtBxResult.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(63, 441);
            this.label1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(50, 20);
            this.label1.TabIndex = 1;
            this.label1.Text = "Result:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label2.Location = new System.Drawing.Point(65, 28);
            this.label2.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(104, 20);
            this.label2.TabIndex = 2;
            this.label2.Text = "Select Event (s)";
            // 
            // lstBxEvents
            // 
            this.lstBxEvents.BackColor = System.Drawing.SystemColors.Info;
            this.lstBxEvents.ForeColor = System.Drawing.SystemColors.InactiveCaption;
            this.lstBxEvents.ItemHeight = 20;
            this.lstBxEvents.Location = new System.Drawing.Point(59, 63);
            this.lstBxEvents.Name = "lstBxEvents";
            this.lstBxEvents.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.lstBxEvents.Size = new System.Drawing.Size(120, 84);
            this.lstBxEvents.Sorted = true;
            this.lstBxEvents.TabIndex = 0;
            this.lstBxEvents.SelectedIndexChanged += new System.EventHandler(this.lstBxEvents_SelectedIndexChanged);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(117, 340);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(150, 42);
            this.button1.TabIndex = 3;
            this.button1.Text = "Add New Activity";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(117, 290);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(261, 26);
            this.textBox1.TabIndex = 4;
            // 
            // ClubForm
            // 
            this.AcceptButton = this.button1;
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(914, 600);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.lstBxEvents);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtBxResult);
            this.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Name = "ClubForm";
            this.Text = "Josue\'s Computer Club Outing Sign Up";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.ClubForm_FormClosing);
            this.Load += new System.EventHandler(this.ClubForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private TextBox txtBxResult;
        private Label label1;
        private Label label2;
        private ListBox lstBxEvents;
        private Button button1;
        private TextBox textBox1;
    }
}