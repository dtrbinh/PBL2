
namespace COVID19_VACCINATION_MANAGER
{
    partial class Main
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Main));
            this.Manager = new System.Windows.Forms.TabControl();
            this.loginTab = new System.Windows.Forms.TabPage();
            this.bt_quit = new System.Windows.Forms.Button();
            this.loginBox = new System.Windows.Forms.GroupBox();
            this.text3 = new System.Windows.Forms.Label();
            this.loginBox_status = new System.Windows.Forms.Label();
            this.bt_showPassword = new System.Windows.Forms.Button();
            this.bt_login = new System.Windows.Forms.Button();
            this.loginBox_password = new System.Windows.Forms.TextBox();
            this.loginBox_username = new System.Windows.Forms.TextBox();
            this.text2 = new System.Windows.Forms.Label();
            this.text1 = new System.Windows.Forms.Label();
            this.accountManagerTab = new System.Windows.Forms.TabPage();
            this.bt_logout = new System.Windows.Forms.Button();
            this.accountManager_loginAlert = new System.Windows.Forms.Label();
            this.bt_refresh = new System.Windows.Forms.Button();
            this.accountManager_changer = new System.Windows.Forms.GroupBox();
            this.accountManager_tabChanger = new System.Windows.Forms.TabControl();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.bt_saveUsername = new System.Windows.Forms.Button();
            this.accountManager_newUsername = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.accountManager_newPasswordCheck = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.bt_savePassword = new System.Windows.Forms.Button();
            this.accountManager_newPassword = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.tabPage4 = new System.Windows.Forms.TabPage();
            this.bt_saveFullname = new System.Windows.Forms.Button();
            this.accountManager_newFullname = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.accountManager_Info = new System.Windows.Forms.GroupBox();
            this.accountManager_permission = new System.Windows.Forms.Label();
            this.accountManager_fullname = new System.Windows.Forms.Label();
            this.accountManager_password = new System.Windows.Forms.Label();
            this.accountManager_username = new System.Windows.Forms.Label();
            this.accoutManager_text4 = new System.Windows.Forms.Label();
            this.accountManager_text3 = new System.Windows.Forms.Label();
            this.accountManager_text2 = new System.Windows.Forms.Label();
            this.accoutManager_text1 = new System.Windows.Forms.Label();
            this.dataManagerTab = new System.Windows.Forms.TabPage();
            this.box_deleteData = new System.Windows.Forms.GroupBox();
            this.box_sortData = new System.Windows.Forms.GroupBox();
            this.box_inputHand = new System.Windows.Forms.GroupBox();
            this.box_inputFile = new System.Windows.Forms.GroupBox();
            this.dataManager_menu = new System.Windows.Forms.MenuStrip();
            this.dataManager_input = new System.Windows.Forms.ToolStripMenuItem();
            this.inputData = new System.Windows.Forms.ToolStripMenuItem();
            this.inputFile = new System.Windows.Forms.ToolStripMenuItem();
            this.inputHand = new System.Windows.Forms.ToolStripMenuItem();
            this.sortData = new System.Windows.Forms.ToolStripMenuItem();
            this.deleteData = new System.Windows.Forms.ToolStripMenuItem();
            this.dataManager_output = new System.Windows.Forms.ToolStripMenuItem();
            this.toànBộThôngTinToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.dữLiệuCôngDânToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.dữLiệuTiêmChủngToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.Manager.SuspendLayout();
            this.loginTab.SuspendLayout();
            this.loginBox.SuspendLayout();
            this.accountManagerTab.SuspendLayout();
            this.accountManager_changer.SuspendLayout();
            this.accountManager_tabChanger.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.tabPage3.SuspendLayout();
            this.tabPage4.SuspendLayout();
            this.accountManager_Info.SuspendLayout();
            this.dataManagerTab.SuspendLayout();
            this.dataManager_menu.SuspendLayout();
            this.SuspendLayout();
            // 
            // Manager
            // 
            this.Manager.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Manager.Controls.Add(this.loginTab);
            this.Manager.Controls.Add(this.accountManagerTab);
            this.Manager.Controls.Add(this.dataManagerTab);
            this.Manager.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Manager.Location = new System.Drawing.Point(9, 10);
            this.Manager.Margin = new System.Windows.Forms.Padding(2);
            this.Manager.Name = "Manager";
            this.Manager.SelectedIndex = 0;
            this.Manager.Size = new System.Drawing.Size(494, 346);
            this.Manager.TabIndex = 0;
            this.Manager.SelectedIndexChanged += new System.EventHandler(this.Manager_SelectedIndexChanged);
            // 
            // loginTab
            // 
            this.loginTab.Controls.Add(this.bt_quit);
            this.loginTab.Controls.Add(this.loginBox);
            this.loginTab.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loginTab.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.loginTab.Location = new System.Drawing.Point(4, 25);
            this.loginTab.Margin = new System.Windows.Forms.Padding(2);
            this.loginTab.Name = "loginTab";
            this.loginTab.Padding = new System.Windows.Forms.Padding(2);
            this.loginTab.Size = new System.Drawing.Size(486, 317);
            this.loginTab.TabIndex = 0;
            this.loginTab.Text = "Đăng nhập";
            this.loginTab.UseVisualStyleBackColor = true;
            // 
            // bt_quit
            // 
            this.bt_quit.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.bt_quit.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_quit.Location = new System.Drawing.Point(428, 292);
            this.bt_quit.Margin = new System.Windows.Forms.Padding(2);
            this.bt_quit.Name = "bt_quit";
            this.bt_quit.Size = new System.Drawing.Size(56, 23);
            this.bt_quit.TabIndex = 1;
            this.bt_quit.Text = "Thoát";
            this.bt_quit.UseVisualStyleBackColor = true;
            this.bt_quit.Click += new System.EventHandler(this.bt_quit_Click);
            // 
            // loginBox
            // 
            this.loginBox.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.loginBox.AutoSize = true;
            this.loginBox.BackColor = System.Drawing.Color.LightGray;
            this.loginBox.Controls.Add(this.text3);
            this.loginBox.Controls.Add(this.loginBox_status);
            this.loginBox.Controls.Add(this.bt_showPassword);
            this.loginBox.Controls.Add(this.bt_login);
            this.loginBox.Controls.Add(this.loginBox_password);
            this.loginBox.Controls.Add(this.loginBox_username);
            this.loginBox.Controls.Add(this.text2);
            this.loginBox.Controls.Add(this.text1);
            this.loginBox.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loginBox.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.loginBox.Location = new System.Drawing.Point(100, 85);
            this.loginBox.Margin = new System.Windows.Forms.Padding(2);
            this.loginBox.Name = "loginBox";
            this.loginBox.Padding = new System.Windows.Forms.Padding(2);
            this.loginBox.Size = new System.Drawing.Size(292, 158);
            this.loginBox.TabIndex = 0;
            this.loginBox.TabStop = false;
            this.loginBox.Text = "Thông tin đăng nhập";
            this.loginBox.Enter += new System.EventHandler(this.loginBox_Enter);
            // 
            // text3
            // 
            this.text3.AutoSize = true;
            this.text3.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.text3.Location = new System.Drawing.Point(54, 121);
            this.text3.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.text3.Name = "text3";
            this.text3.Size = new System.Drawing.Size(72, 16);
            this.text3.TabIndex = 7;
            this.text3.Text = "Trạng thái";
            this.text3.Click += new System.EventHandler(this.text3_Click);
            // 
            // loginBox_status
            // 
            this.loginBox_status.AutoSize = true;
            this.loginBox_status.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loginBox_status.ForeColor = System.Drawing.Color.Red;
            this.loginBox_status.Location = new System.Drawing.Point(126, 121);
            this.loginBox_status.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.loginBox_status.Name = "loginBox_status";
            this.loginBox_status.Size = new System.Drawing.Size(113, 16);
            this.loginBox_status.TabIndex = 6;
            this.loginBox_status.Text = "Chưa đăng nhập";
            this.loginBox_status.Click += new System.EventHandler(this.loginBox_status_Click);
            // 
            // bt_showPassword
            // 
            this.bt_showPassword.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_showPassword.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.bt_showPassword.Image = ((System.Drawing.Image)(resources.GetObject("bt_showPassword.Image")));
            this.bt_showPassword.Location = new System.Drawing.Point(248, 63);
            this.bt_showPassword.Margin = new System.Windows.Forms.Padding(2);
            this.bt_showPassword.Name = "bt_showPassword";
            this.bt_showPassword.Size = new System.Drawing.Size(23, 20);
            this.bt_showPassword.TabIndex = 5;
            this.bt_showPassword.UseVisualStyleBackColor = true;
            this.bt_showPassword.MouseDown += new System.Windows.Forms.MouseEventHandler(this.bt_showPassword_MouseDown);
            this.bt_showPassword.MouseUp += new System.Windows.Forms.MouseEventHandler(this.bt_showPassword_MouseUp);
            // 
            // bt_login
            // 
            this.bt_login.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_login.Location = new System.Drawing.Point(138, 92);
            this.bt_login.Margin = new System.Windows.Forms.Padding(2);
            this.bt_login.Name = "bt_login";
            this.bt_login.Size = new System.Drawing.Size(94, 24);
            this.bt_login.TabIndex = 4;
            this.bt_login.Text = "Đăng nhập";
            this.bt_login.UseVisualStyleBackColor = true;
            this.bt_login.Click += new System.EventHandler(this.bt_login_Click);
            // 
            // loginBox_password
            // 
            this.loginBox_password.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loginBox_password.Location = new System.Drawing.Point(128, 63);
            this.loginBox_password.Margin = new System.Windows.Forms.Padding(2);
            this.loginBox_password.Name = "loginBox_password";
            this.loginBox_password.PasswordChar = '*';
            this.loginBox_password.Size = new System.Drawing.Size(115, 22);
            this.loginBox_password.TabIndex = 3;
            this.loginBox_password.TextChanged += new System.EventHandler(this.loginBox_password_TextChanged);
            // 
            // loginBox_username
            // 
            this.loginBox_username.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loginBox_username.Location = new System.Drawing.Point(128, 38);
            this.loginBox_username.Margin = new System.Windows.Forms.Padding(2);
            this.loginBox_username.Name = "loginBox_username";
            this.loginBox_username.Size = new System.Drawing.Size(115, 22);
            this.loginBox_username.TabIndex = 2;
            this.loginBox_username.TextChanged += new System.EventHandler(this.loginBox_username_TextChanged);
            // 
            // text2
            // 
            this.text2.AutoSize = true;
            this.text2.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.text2.Location = new System.Drawing.Point(57, 66);
            this.text2.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.text2.Name = "text2";
            this.text2.Size = new System.Drawing.Size(66, 16);
            this.text2.TabIndex = 1;
            this.text2.Text = "Mật khẩu";
            this.text2.Click += new System.EventHandler(this.label2_Click);
            // 
            // text1
            // 
            this.text1.AutoSize = true;
            this.text1.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.text1.Location = new System.Drawing.Point(25, 41);
            this.text1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.text1.Name = "text1";
            this.text1.Size = new System.Drawing.Size(103, 16);
            this.text1.TabIndex = 0;
            this.text1.Text = "Tên đăng nhập";
            this.text1.Click += new System.EventHandler(this.label1_Click);
            // 
            // accountManagerTab
            // 
            this.accountManagerTab.Controls.Add(this.bt_logout);
            this.accountManagerTab.Controls.Add(this.accountManager_loginAlert);
            this.accountManagerTab.Controls.Add(this.bt_refresh);
            this.accountManagerTab.Controls.Add(this.accountManager_changer);
            this.accountManagerTab.Controls.Add(this.accountManager_Info);
            this.accountManagerTab.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManagerTab.Location = new System.Drawing.Point(4, 25);
            this.accountManagerTab.Margin = new System.Windows.Forms.Padding(2);
            this.accountManagerTab.Name = "accountManagerTab";
            this.accountManagerTab.Padding = new System.Windows.Forms.Padding(2);
            this.accountManagerTab.Size = new System.Drawing.Size(486, 317);
            this.accountManagerTab.TabIndex = 1;
            this.accountManagerTab.Text = "Quản lý tài khoản";
            this.accountManagerTab.UseVisualStyleBackColor = true;
            this.accountManagerTab.Click += new System.EventHandler(this.accountManagerTab_Click);
            // 
            // bt_logout
            // 
            this.bt_logout.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.bt_logout.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_logout.Location = new System.Drawing.Point(368, 235);
            this.bt_logout.Margin = new System.Windows.Forms.Padding(2);
            this.bt_logout.Name = "bt_logout";
            this.bt_logout.Size = new System.Drawing.Size(95, 24);
            this.bt_logout.TabIndex = 5;
            this.bt_logout.Text = "Đăng xuất";
            this.bt_logout.UseVisualStyleBackColor = true;
            this.bt_logout.Visible = false;
            this.bt_logout.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // accountManager_loginAlert
            // 
            this.accountManager_loginAlert.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.accountManager_loginAlert.AutoSize = true;
            this.accountManager_loginAlert.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_loginAlert.Location = new System.Drawing.Point(87, 142);
            this.accountManager_loginAlert.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accountManager_loginAlert.Name = "accountManager_loginAlert";
            this.accountManager_loginAlert.Size = new System.Drawing.Size(322, 16);
            this.accountManager_loginAlert.TabIndex = 4;
            this.accountManager_loginAlert.Text = "Bạn chưa đăng nhập. Hãy đăng nhập để thao tác.";
            // 
            // bt_refresh
            // 
            this.bt_refresh.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.bt_refresh.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_refresh.Location = new System.Drawing.Point(368, 263);
            this.bt_refresh.Margin = new System.Windows.Forms.Padding(2);
            this.bt_refresh.Name = "bt_refresh";
            this.bt_refresh.Size = new System.Drawing.Size(95, 24);
            this.bt_refresh.TabIndex = 3;
            this.bt_refresh.Text = "Tải lại";
            this.bt_refresh.UseVisualStyleBackColor = true;
            this.bt_refresh.Visible = false;
            this.bt_refresh.Click += new System.EventHandler(this.bt_refresh_Click);
            // 
            // accountManager_changer
            // 
            this.accountManager_changer.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.accountManager_changer.Controls.Add(this.accountManager_tabChanger);
            this.accountManager_changer.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_changer.Location = new System.Drawing.Point(4, 160);
            this.accountManager_changer.Margin = new System.Windows.Forms.Padding(2);
            this.accountManager_changer.Name = "accountManager_changer";
            this.accountManager_changer.Padding = new System.Windows.Forms.Padding(2);
            this.accountManager_changer.Size = new System.Drawing.Size(344, 156);
            this.accountManager_changer.TabIndex = 2;
            this.accountManager_changer.TabStop = false;
            this.accountManager_changer.Text = "Cập nhật thông tin tài khoản";
            this.accountManager_changer.Visible = false;
            this.accountManager_changer.Enter += new System.EventHandler(this.accountManager_changer_Enter);
            // 
            // accountManager_tabChanger
            // 
            this.accountManager_tabChanger.Controls.Add(this.tabPage2);
            this.accountManager_tabChanger.Controls.Add(this.tabPage3);
            this.accountManager_tabChanger.Controls.Add(this.tabPage4);
            this.accountManager_tabChanger.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_tabChanger.Location = new System.Drawing.Point(4, 19);
            this.accountManager_tabChanger.Margin = new System.Windows.Forms.Padding(2);
            this.accountManager_tabChanger.Name = "accountManager_tabChanger";
            this.accountManager_tabChanger.SelectedIndex = 0;
            this.accountManager_tabChanger.Size = new System.Drawing.Size(336, 132);
            this.accountManager_tabChanger.TabIndex = 1;
            this.accountManager_tabChanger.Visible = false;
            this.accountManager_tabChanger.SelectedIndexChanged += new System.EventHandler(this.accountManager_tabChanger_SelectedIndexChanged);
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.bt_saveUsername);
            this.tabPage2.Controls.Add(this.accountManager_newUsername);
            this.tabPage2.Controls.Add(this.label1);
            this.tabPage2.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.tabPage2.Location = new System.Drawing.Point(4, 25);
            this.tabPage2.Margin = new System.Windows.Forms.Padding(2);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(2);
            this.tabPage2.Size = new System.Drawing.Size(328, 103);
            this.tabPage2.TabIndex = 0;
            this.tabPage2.Text = "Tên tài khoản";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // bt_saveUsername
            // 
            this.bt_saveUsername.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_saveUsername.Location = new System.Drawing.Point(136, 72);
            this.bt_saveUsername.Margin = new System.Windows.Forms.Padding(2);
            this.bt_saveUsername.Name = "bt_saveUsername";
            this.bt_saveUsername.Size = new System.Drawing.Size(56, 25);
            this.bt_saveUsername.TabIndex = 2;
            this.bt_saveUsername.Text = "Lưu";
            this.bt_saveUsername.UseVisualStyleBackColor = true;
            this.bt_saveUsername.Click += new System.EventHandler(this.bt_saveUsername_Click);
            // 
            // accountManager_newUsername
            // 
            this.accountManager_newUsername.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_newUsername.Location = new System.Drawing.Point(150, 27);
            this.accountManager_newUsername.Margin = new System.Windows.Forms.Padding(2);
            this.accountManager_newUsername.Name = "accountManager_newUsername";
            this.accountManager_newUsername.Size = new System.Drawing.Size(132, 22);
            this.accountManager_newUsername.TabIndex = 1;
            this.accountManager_newUsername.TextChanged += new System.EventHandler(this.accountManager_newUsername_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(15, 29);
            this.label1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(129, 16);
            this.label1.TabIndex = 0;
            this.label1.Text = "Tên đăng nhập mới";
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.accountManager_newPasswordCheck);
            this.tabPage3.Controls.Add(this.label3);
            this.tabPage3.Controls.Add(this.bt_savePassword);
            this.tabPage3.Controls.Add(this.accountManager_newPassword);
            this.tabPage3.Controls.Add(this.label2);
            this.tabPage3.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.tabPage3.Location = new System.Drawing.Point(4, 25);
            this.tabPage3.Margin = new System.Windows.Forms.Padding(2);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Padding = new System.Windows.Forms.Padding(2);
            this.tabPage3.Size = new System.Drawing.Size(328, 103);
            this.tabPage3.TabIndex = 1;
            this.tabPage3.Text = "Mật khẩu";
            this.tabPage3.UseVisualStyleBackColor = true;
            this.tabPage3.Click += new System.EventHandler(this.tabPage3_Click);
            // 
            // accountManager_newPasswordCheck
            // 
            this.accountManager_newPasswordCheck.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_newPasswordCheck.Location = new System.Drawing.Point(150, 44);
            this.accountManager_newPasswordCheck.Margin = new System.Windows.Forms.Padding(2);
            this.accountManager_newPasswordCheck.Name = "accountManager_newPasswordCheck";
            this.accountManager_newPasswordCheck.Size = new System.Drawing.Size(132, 22);
            this.accountManager_newPasswordCheck.TabIndex = 7;
            this.accountManager_newPasswordCheck.TextChanged += new System.EventHandler(this.accountManager_newPasswordCheck_TextChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(6, 46);
            this.label3.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(129, 16);
            this.label3.TabIndex = 6;
            this.label3.Text = "Xác nhận mật khẩu";
            // 
            // bt_savePassword
            // 
            this.bt_savePassword.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_savePassword.Location = new System.Drawing.Point(136, 72);
            this.bt_savePassword.Margin = new System.Windows.Forms.Padding(2);
            this.bt_savePassword.Name = "bt_savePassword";
            this.bt_savePassword.Size = new System.Drawing.Size(56, 25);
            this.bt_savePassword.TabIndex = 5;
            this.bt_savePassword.Text = "Lưu";
            this.bt_savePassword.UseVisualStyleBackColor = true;
            this.bt_savePassword.Click += new System.EventHandler(this.bt_savePassword_Click);
            // 
            // accountManager_newPassword
            // 
            this.accountManager_newPassword.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_newPassword.Location = new System.Drawing.Point(150, 11);
            this.accountManager_newPassword.Margin = new System.Windows.Forms.Padding(2);
            this.accountManager_newPassword.Name = "accountManager_newPassword";
            this.accountManager_newPassword.Size = new System.Drawing.Size(132, 22);
            this.accountManager_newPassword.TabIndex = 4;
            this.accountManager_newPassword.TextChanged += new System.EventHandler(this.accountManager_newPassword_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(6, 14);
            this.label2.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(92, 16);
            this.label2.TabIndex = 3;
            this.label2.Text = "Mật khẩu mới";
            // 
            // tabPage4
            // 
            this.tabPage4.Controls.Add(this.bt_saveFullname);
            this.tabPage4.Controls.Add(this.accountManager_newFullname);
            this.tabPage4.Controls.Add(this.label4);
            this.tabPage4.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.tabPage4.Location = new System.Drawing.Point(4, 25);
            this.tabPage4.Margin = new System.Windows.Forms.Padding(2);
            this.tabPage4.Name = "tabPage4";
            this.tabPage4.Padding = new System.Windows.Forms.Padding(2);
            this.tabPage4.Size = new System.Drawing.Size(328, 103);
            this.tabPage4.TabIndex = 2;
            this.tabPage4.Text = "Tên chủ tài khoản";
            this.tabPage4.UseVisualStyleBackColor = true;
            this.tabPage4.Click += new System.EventHandler(this.tabPage4_Click);
            // 
            // bt_saveFullname
            // 
            this.bt_saveFullname.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_saveFullname.Location = new System.Drawing.Point(136, 72);
            this.bt_saveFullname.Margin = new System.Windows.Forms.Padding(2);
            this.bt_saveFullname.Name = "bt_saveFullname";
            this.bt_saveFullname.Size = new System.Drawing.Size(56, 25);
            this.bt_saveFullname.TabIndex = 5;
            this.bt_saveFullname.Text = "Lưu";
            this.bt_saveFullname.UseVisualStyleBackColor = true;
            this.bt_saveFullname.Click += new System.EventHandler(this.button1_Click);
            // 
            // accountManager_newFullname
            // 
            this.accountManager_newFullname.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_newFullname.Location = new System.Drawing.Point(160, 29);
            this.accountManager_newFullname.Margin = new System.Windows.Forms.Padding(2);
            this.accountManager_newFullname.Name = "accountManager_newFullname";
            this.accountManager_newFullname.Size = new System.Drawing.Size(132, 22);
            this.accountManager_newFullname.TabIndex = 4;
            this.accountManager_newFullname.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(9, 32);
            this.label4.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(146, 16);
            this.label4.TabIndex = 3;
            this.label4.Text = "Tên chủ tài khoản mới";
            // 
            // accountManager_Info
            // 
            this.accountManager_Info.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.accountManager_Info.Controls.Add(this.accountManager_permission);
            this.accountManager_Info.Controls.Add(this.accountManager_fullname);
            this.accountManager_Info.Controls.Add(this.accountManager_password);
            this.accountManager_Info.Controls.Add(this.accountManager_username);
            this.accountManager_Info.Controls.Add(this.accoutManager_text4);
            this.accountManager_Info.Controls.Add(this.accountManager_text3);
            this.accountManager_Info.Controls.Add(this.accountManager_text2);
            this.accountManager_Info.Controls.Add(this.accoutManager_text1);
            this.accountManager_Info.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_Info.Location = new System.Drawing.Point(4, 5);
            this.accountManager_Info.Margin = new System.Windows.Forms.Padding(2);
            this.accountManager_Info.Name = "accountManager_Info";
            this.accountManager_Info.Padding = new System.Windows.Forms.Padding(2);
            this.accountManager_Info.Size = new System.Drawing.Size(305, 128);
            this.accountManager_Info.TabIndex = 0;
            this.accountManager_Info.TabStop = false;
            this.accountManager_Info.Text = "Thông tin tài khoản";
            this.accountManager_Info.Visible = false;
            this.accountManager_Info.Enter += new System.EventHandler(this.accountManager_Info_Enter);
            // 
            // accountManager_permission
            // 
            this.accountManager_permission.AutoSize = true;
            this.accountManager_permission.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_permission.Location = new System.Drawing.Point(141, 98);
            this.accountManager_permission.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accountManager_permission.Name = "accountManager_permission";
            this.accountManager_permission.Size = new System.Drawing.Size(46, 16);
            this.accountManager_permission.TabIndex = 7;
            this.accountManager_permission.Text = "admin";
            // 
            // accountManager_fullname
            // 
            this.accountManager_fullname.AutoSize = true;
            this.accountManager_fullname.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_fullname.Location = new System.Drawing.Point(141, 73);
            this.accountManager_fullname.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accountManager_fullname.Name = "accountManager_fullname";
            this.accountManager_fullname.Size = new System.Drawing.Size(46, 16);
            this.accountManager_fullname.TabIndex = 6;
            this.accountManager_fullname.Text = "admin";
            // 
            // accountManager_password
            // 
            this.accountManager_password.AutoSize = true;
            this.accountManager_password.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_password.Location = new System.Drawing.Point(141, 49);
            this.accountManager_password.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accountManager_password.Name = "accountManager_password";
            this.accountManager_password.Size = new System.Drawing.Size(46, 16);
            this.accountManager_password.TabIndex = 5;
            this.accountManager_password.Text = "admin";
            // 
            // accountManager_username
            // 
            this.accountManager_username.AutoSize = true;
            this.accountManager_username.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_username.Location = new System.Drawing.Point(141, 24);
            this.accountManager_username.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accountManager_username.Name = "accountManager_username";
            this.accountManager_username.Size = new System.Drawing.Size(46, 16);
            this.accountManager_username.TabIndex = 4;
            this.accountManager_username.Text = "admin";
            // 
            // accoutManager_text4
            // 
            this.accoutManager_text4.AutoSize = true;
            this.accoutManager_text4.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accoutManager_text4.Location = new System.Drawing.Point(15, 98);
            this.accoutManager_text4.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accoutManager_text4.Name = "accoutManager_text4";
            this.accoutManager_text4.Size = new System.Drawing.Size(83, 16);
            this.accoutManager_text4.TabIndex = 3;
            this.accoutManager_text4.Text = "Phân quyền";
            // 
            // accountManager_text3
            // 
            this.accountManager_text3.AutoSize = true;
            this.accountManager_text3.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_text3.Location = new System.Drawing.Point(15, 73);
            this.accountManager_text3.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accountManager_text3.Name = "accountManager_text3";
            this.accountManager_text3.Size = new System.Drawing.Size(120, 16);
            this.accountManager_text3.TabIndex = 2;
            this.accountManager_text3.Text = "Tên chủ tài khoản";
            // 
            // accountManager_text2
            // 
            this.accountManager_text2.AutoSize = true;
            this.accountManager_text2.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManager_text2.Location = new System.Drawing.Point(15, 49);
            this.accountManager_text2.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accountManager_text2.Name = "accountManager_text2";
            this.accountManager_text2.Size = new System.Drawing.Size(66, 16);
            this.accountManager_text2.TabIndex = 1;
            this.accountManager_text2.Text = "Mật khẩu";
            // 
            // accoutManager_text1
            // 
            this.accoutManager_text1.AutoSize = true;
            this.accoutManager_text1.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accoutManager_text1.Location = new System.Drawing.Point(15, 24);
            this.accoutManager_text1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.accoutManager_text1.Name = "accoutManager_text1";
            this.accoutManager_text1.Size = new System.Drawing.Size(103, 16);
            this.accoutManager_text1.TabIndex = 0;
            this.accoutManager_text1.Text = "Tên đăng nhập";
            // 
            // dataManagerTab
            // 
            this.dataManagerTab.Controls.Add(this.box_deleteData);
            this.dataManagerTab.Controls.Add(this.box_sortData);
            this.dataManagerTab.Controls.Add(this.box_inputHand);
            this.dataManagerTab.Controls.Add(this.box_inputFile);
            this.dataManagerTab.Controls.Add(this.dataManager_menu);
            this.dataManagerTab.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dataManagerTab.Location = new System.Drawing.Point(4, 25);
            this.dataManagerTab.Margin = new System.Windows.Forms.Padding(2);
            this.dataManagerTab.Name = "dataManagerTab";
            this.dataManagerTab.Padding = new System.Windows.Forms.Padding(2);
            this.dataManagerTab.Size = new System.Drawing.Size(486, 317);
            this.dataManagerTab.TabIndex = 2;
            this.dataManagerTab.Text = "Quản lý dữ liệu";
            this.dataManagerTab.UseVisualStyleBackColor = true;
            this.dataManagerTab.Click += new System.EventHandler(this.dataManagerTab_Click);
            // 
            // box_deleteData
            // 
            this.box_deleteData.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.box_deleteData.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.box_deleteData.Location = new System.Drawing.Point(0, 27);
            this.box_deleteData.Margin = new System.Windows.Forms.Padding(2);
            this.box_deleteData.Name = "box_deleteData";
            this.box_deleteData.Padding = new System.Windows.Forms.Padding(2);
            this.box_deleteData.Size = new System.Drawing.Size(488, 293);
            this.box_deleteData.TabIndex = 1;
            this.box_deleteData.TabStop = false;
            this.box_deleteData.Text = "Xoá dữ liệu";
            this.box_deleteData.Visible = false;
            this.box_deleteData.Enter += new System.EventHandler(this.box_deleteData_Enter);
            // 
            // box_sortData
            // 
            this.box_sortData.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.box_sortData.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.box_sortData.Location = new System.Drawing.Point(0, 27);
            this.box_sortData.Margin = new System.Windows.Forms.Padding(2);
            this.box_sortData.Name = "box_sortData";
            this.box_sortData.Padding = new System.Windows.Forms.Padding(2);
            this.box_sortData.Size = new System.Drawing.Size(488, 293);
            this.box_sortData.TabIndex = 0;
            this.box_sortData.TabStop = false;
            this.box_sortData.Text = "Sắp xếp dữ liệu";
            this.box_sortData.Visible = false;
            this.box_sortData.Enter += new System.EventHandler(this.box_sortData_Enter);
            // 
            // box_inputHand
            // 
            this.box_inputHand.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.box_inputHand.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.box_inputHand.Location = new System.Drawing.Point(0, 27);
            this.box_inputHand.Margin = new System.Windows.Forms.Padding(2);
            this.box_inputHand.Name = "box_inputHand";
            this.box_inputHand.Padding = new System.Windows.Forms.Padding(2);
            this.box_inputHand.Size = new System.Drawing.Size(488, 289);
            this.box_inputHand.TabIndex = 2;
            this.box_inputHand.TabStop = false;
            this.box_inputHand.Text = "Nhập dữ liệu thủ công";
            this.box_inputHand.Visible = false;
            this.box_inputHand.Enter += new System.EventHandler(this.box_inputHand_Enter);
            // 
            // box_inputFile
            // 
            this.box_inputFile.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.box_inputFile.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.box_inputFile.Location = new System.Drawing.Point(0, 27);
            this.box_inputFile.Margin = new System.Windows.Forms.Padding(2);
            this.box_inputFile.Name = "box_inputFile";
            this.box_inputFile.Padding = new System.Windows.Forms.Padding(2);
            this.box_inputFile.Size = new System.Drawing.Size(488, 289);
            this.box_inputFile.TabIndex = 1;
            this.box_inputFile.TabStop = false;
            this.box_inputFile.Text = "Nhập dữ liệu từ tập tin";
            this.box_inputFile.Visible = false;
            this.box_inputFile.Enter += new System.EventHandler(this.groupBox1_Enter);
            // 
            // dataManager_menu
            // 
            this.dataManager_menu.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dataManager_menu.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.dataManager_menu.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.dataManager_input,
            this.dataManager_output});
            this.dataManager_menu.Location = new System.Drawing.Point(2, 2);
            this.dataManager_menu.Name = "dataManager_menu";
            this.dataManager_menu.Padding = new System.Windows.Forms.Padding(4, 2, 0, 2);
            this.dataManager_menu.Size = new System.Drawing.Size(482, 24);
            this.dataManager_menu.TabIndex = 0;
            this.dataManager_menu.Text = "menuStrip1";
            this.dataManager_menu.ItemClicked += new System.Windows.Forms.ToolStripItemClickedEventHandler(this.dataManager_menu_ItemClicked);
            // 
            // dataManager_input
            // 
            this.dataManager_input.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.inputData,
            this.sortData,
            this.deleteData});
            this.dataManager_input.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dataManager_input.Name = "dataManager_input";
            this.dataManager_input.Size = new System.Drawing.Size(129, 20);
            this.dataManager_input.Text = "Chỉnh sửa dữ liệu";
            // 
            // inputData
            // 
            this.inputData.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.inputFile,
            this.inputHand});
            this.inputData.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputData.Name = "inputData";
            this.inputData.Size = new System.Drawing.Size(180, 22);
            this.inputData.Text = "Nhập dữ liệu";
            this.inputData.Click += new System.EventHandler(this.từFileToolStripMenuItem_Click);
            // 
            // inputFile
            // 
            this.inputFile.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputFile.Name = "inputFile";
            this.inputFile.Size = new System.Drawing.Size(182, 22);
            this.inputFile.Text = "Từ tập tin dữ liệu";
            this.inputFile.Click += new System.EventHandler(this.inputFile_Click);
            // 
            // inputHand
            // 
            this.inputHand.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputHand.Name = "inputHand";
            this.inputHand.Size = new System.Drawing.Size(182, 22);
            this.inputHand.Text = "Thủ công";
            this.inputHand.Click += new System.EventHandler(this.inputHand_Click);
            // 
            // sortData
            // 
            this.sortData.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.sortData.Name = "sortData";
            this.sortData.Size = new System.Drawing.Size(180, 22);
            this.sortData.Text = "Sắp xếp dữ liệu";
            this.sortData.Click += new System.EventHandler(this.sortData_Click);
            // 
            // deleteData
            // 
            this.deleteData.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.deleteData.Name = "deleteData";
            this.deleteData.Size = new System.Drawing.Size(180, 22);
            this.deleteData.Text = "Xoá dữ liệu";
            this.deleteData.Click += new System.EventHandler(this.deleteData_Click);
            // 
            // dataManager_output
            // 
            this.dataManager_output.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toànBộThôngTinToolStripMenuItem,
            this.dữLiệuCôngDânToolStripMenuItem,
            this.dữLiệuTiêmChủngToolStripMenuItem});
            this.dataManager_output.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dataManager_output.Name = "dataManager_output";
            this.dataManager_output.Size = new System.Drawing.Size(95, 20);
            this.dataManager_output.Text = "Xuất dữ liệu";
            // 
            // toànBộThôngTinToolStripMenuItem
            // 
            this.toànBộThôngTinToolStripMenuItem.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.toànBộThôngTinToolStripMenuItem.Name = "toànBộThôngTinToolStripMenuItem";
            this.toànBộThôngTinToolStripMenuItem.Size = new System.Drawing.Size(192, 22);
            this.toànBộThôngTinToolStripMenuItem.Text = "Toàn bộ dữ liệu";
            this.toànBộThôngTinToolStripMenuItem.Click += new System.EventHandler(this.toànBộThôngTinToolStripMenuItem_Click);
            // 
            // dữLiệuCôngDânToolStripMenuItem
            // 
            this.dữLiệuCôngDânToolStripMenuItem.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dữLiệuCôngDânToolStripMenuItem.Name = "dữLiệuCôngDânToolStripMenuItem";
            this.dữLiệuCôngDânToolStripMenuItem.Size = new System.Drawing.Size(192, 22);
            this.dữLiệuCôngDânToolStripMenuItem.Text = "Dữ liệu công dân";
            this.dữLiệuCôngDânToolStripMenuItem.Click += new System.EventHandler(this.dữLiệuCôngDânToolStripMenuItem_Click);
            // 
            // dữLiệuTiêmChủngToolStripMenuItem
            // 
            this.dữLiệuTiêmChủngToolStripMenuItem.Font = new System.Drawing.Font("MS Reference Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dữLiệuTiêmChủngToolStripMenuItem.Name = "dữLiệuTiêmChủngToolStripMenuItem";
            this.dữLiệuTiêmChủngToolStripMenuItem.Size = new System.Drawing.Size(192, 22);
            this.dữLiệuTiêmChủngToolStripMenuItem.Text = "Dữ liệu tiêm chủng";
            this.dữLiệuTiêmChủngToolStripMenuItem.Click += new System.EventHandler(this.dữLiệuTiêmChủngToolStripMenuItem_Click);
            // 
            // Main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(512, 366);
            this.Controls.Add(this.Manager);
            this.MainMenuStrip = this.dataManager_menu;
            this.Margin = new System.Windows.Forms.Padding(2);
            this.Name = "Main";
            this.Text = "COVID19_VACCINATION_MANAGER";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Main_FormClosing);
            this.Manager.ResumeLayout(false);
            this.loginTab.ResumeLayout(false);
            this.loginTab.PerformLayout();
            this.loginBox.ResumeLayout(false);
            this.loginBox.PerformLayout();
            this.accountManagerTab.ResumeLayout(false);
            this.accountManagerTab.PerformLayout();
            this.accountManager_changer.ResumeLayout(false);
            this.accountManager_tabChanger.ResumeLayout(false);
            this.tabPage2.ResumeLayout(false);
            this.tabPage2.PerformLayout();
            this.tabPage3.ResumeLayout(false);
            this.tabPage3.PerformLayout();
            this.tabPage4.ResumeLayout(false);
            this.tabPage4.PerformLayout();
            this.accountManager_Info.ResumeLayout(false);
            this.accountManager_Info.PerformLayout();
            this.dataManagerTab.ResumeLayout(false);
            this.dataManagerTab.PerformLayout();
            this.dataManager_menu.ResumeLayout(false);
            this.dataManager_menu.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl Manager;
        private System.Windows.Forms.TabPage loginTab;
        private System.Windows.Forms.TabPage accountManagerTab;
        private System.Windows.Forms.TabPage dataManagerTab;
        private System.Windows.Forms.GroupBox loginBox;
        private System.Windows.Forms.Label text2;
        private System.Windows.Forms.Label text1;
        private System.Windows.Forms.Button bt_showPassword;
        private System.Windows.Forms.Button bt_login;
        private System.Windows.Forms.TextBox loginBox_password;
        private System.Windows.Forms.TextBox loginBox_username;
        private System.Windows.Forms.Label loginBox_status;
        private System.Windows.Forms.Label text3;
        private System.Windows.Forms.Button bt_quit;
        private System.Windows.Forms.GroupBox accountManager_Info;
        private System.Windows.Forms.Label accoutManager_text1;
        private System.Windows.Forms.Label accountManager_text2;
        private System.Windows.Forms.Label accoutManager_text4;
        private System.Windows.Forms.Label accountManager_text3;
        private System.Windows.Forms.Label accountManager_permission;
        private System.Windows.Forms.Label accountManager_fullname;
        private System.Windows.Forms.Label accountManager_password;
        private System.Windows.Forms.Label accountManager_username;
        private System.Windows.Forms.GroupBox accountManager_changer;
        private System.Windows.Forms.TabControl accountManager_tabChanger;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.TabPage tabPage4;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button bt_saveUsername;
        private System.Windows.Forms.TextBox accountManager_newUsername;
        private System.Windows.Forms.Button bt_savePassword;
        private System.Windows.Forms.TextBox accountManager_newPassword;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox accountManager_newPasswordCheck;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button bt_saveFullname;
        private System.Windows.Forms.TextBox accountManager_newFullname;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Button bt_refresh;
        private System.Windows.Forms.Label accountManager_loginAlert;
        private System.Windows.Forms.Button bt_logout;
        private System.Windows.Forms.MenuStrip dataManager_menu;
        private System.Windows.Forms.ToolStripMenuItem dataManager_input;
        private System.Windows.Forms.ToolStripMenuItem inputData;
        private System.Windows.Forms.ToolStripMenuItem dataManager_output;
        private System.Windows.Forms.ToolStripMenuItem toànBộThôngTinToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem dữLiệuCôngDânToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem dữLiệuTiêmChủngToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem inputFile;
        private System.Windows.Forms.ToolStripMenuItem inputHand;
        private System.Windows.Forms.ToolStripMenuItem sortData;
        private System.Windows.Forms.ToolStripMenuItem deleteData;
        private System.Windows.Forms.GroupBox box_inputFile;
        private System.Windows.Forms.GroupBox box_inputHand;
        private System.Windows.Forms.GroupBox box_sortData;
        private System.Windows.Forms.GroupBox box_deleteData;
    }
}

