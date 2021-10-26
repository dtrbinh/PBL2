
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
            this.tabPage1 = new System.Windows.Forms.TabPage();
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
            this.SuspendLayout();
            // 
            // Manager
            // 
            this.Manager.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Manager.Controls.Add(this.loginTab);
            this.Manager.Controls.Add(this.accountManagerTab);
            this.Manager.Controls.Add(this.tabPage1);
            this.Manager.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Manager.Location = new System.Drawing.Point(12, 12);
            this.Manager.Name = "Manager";
            this.Manager.SelectedIndex = 0;
            this.Manager.Size = new System.Drawing.Size(659, 426);
            this.Manager.TabIndex = 0;
            // 
            // loginTab
            // 
            this.loginTab.Controls.Add(this.bt_quit);
            this.loginTab.Controls.Add(this.loginBox);
            this.loginTab.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loginTab.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.loginTab.Location = new System.Drawing.Point(4, 27);
            this.loginTab.Name = "loginTab";
            this.loginTab.Padding = new System.Windows.Forms.Padding(3);
            this.loginTab.Size = new System.Drawing.Size(651, 395);
            this.loginTab.TabIndex = 0;
            this.loginTab.Text = "Đăng nhập";
            this.loginTab.UseVisualStyleBackColor = true;
            // 
            // bt_quit
            // 
            this.bt_quit.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.bt_quit.Location = new System.Drawing.Point(570, 361);
            this.bt_quit.Name = "bt_quit";
            this.bt_quit.Size = new System.Drawing.Size(75, 28);
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
            this.loginBox.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.loginBox.Location = new System.Drawing.Point(134, 105);
            this.loginBox.Name = "loginBox";
            this.loginBox.Size = new System.Drawing.Size(390, 187);
            this.loginBox.TabIndex = 0;
            this.loginBox.TabStop = false;
            this.loginBox.Text = "Thông tin đăng nhập";
            // 
            // text3
            // 
            this.text3.AutoSize = true;
            this.text3.Location = new System.Drawing.Point(72, 149);
            this.text3.Name = "text3";
            this.text3.Size = new System.Drawing.Size(73, 18);
            this.text3.TabIndex = 7;
            this.text3.Text = "Trạng thái";
            // 
            // loginBox_status
            // 
            this.loginBox_status.AutoSize = true;
            this.loginBox_status.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loginBox_status.ForeColor = System.Drawing.Color.Red;
            this.loginBox_status.Location = new System.Drawing.Point(168, 149);
            this.loginBox_status.Name = "loginBox_status";
            this.loginBox_status.Size = new System.Drawing.Size(115, 18);
            this.loginBox_status.TabIndex = 6;
            this.loginBox_status.Text = "Chưa đăng nhập";
            this.loginBox_status.Click += new System.EventHandler(this.loginBox_status_Click);
            // 
            // bt_showPassword
            // 
            this.bt_showPassword.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.bt_showPassword.Image = ((System.Drawing.Image)(resources.GetObject("bt_showPassword.Image")));
            this.bt_showPassword.Location = new System.Drawing.Point(330, 78);
            this.bt_showPassword.Name = "bt_showPassword";
            this.bt_showPassword.Size = new System.Drawing.Size(31, 24);
            this.bt_showPassword.TabIndex = 5;
            this.bt_showPassword.UseVisualStyleBackColor = true;
            this.bt_showPassword.Click += new System.EventHandler(this.bt_showPassword_Click);
            this.bt_showPassword.MouseDown += new System.Windows.Forms.MouseEventHandler(this.bt_showPassword_MouseDown);
            this.bt_showPassword.MouseUp += new System.Windows.Forms.MouseEventHandler(this.bt_showPassword_MouseUp);
            // 
            // bt_login
            // 
            this.bt_login.Location = new System.Drawing.Point(193, 108);
            this.bt_login.Name = "bt_login";
            this.bt_login.Size = new System.Drawing.Size(104, 30);
            this.bt_login.TabIndex = 4;
            this.bt_login.Text = "Đăng nhập";
            this.bt_login.UseVisualStyleBackColor = true;
            this.bt_login.Click += new System.EventHandler(this.bt_login_Click);
            // 
            // loginBox_password
            // 
            this.loginBox_password.Location = new System.Drawing.Point(171, 78);
            this.loginBox_password.Name = "loginBox_password";
            this.loginBox_password.PasswordChar = '*';
            this.loginBox_password.Size = new System.Drawing.Size(152, 24);
            this.loginBox_password.TabIndex = 3;
            // 
            // loginBox_username
            // 
            this.loginBox_username.Location = new System.Drawing.Point(171, 47);
            this.loginBox_username.Name = "loginBox_username";
            this.loginBox_username.Size = new System.Drawing.Size(152, 24);
            this.loginBox_username.TabIndex = 2;
            this.loginBox_username.TextChanged += new System.EventHandler(this.loginBox_username_TextChanged);
            // 
            // text2
            // 
            this.text2.AutoSize = true;
            this.text2.Location = new System.Drawing.Point(76, 81);
            this.text2.Name = "text2";
            this.text2.Size = new System.Drawing.Size(69, 18);
            this.text2.TabIndex = 1;
            this.text2.Text = "Mật khẩu";
            this.text2.Click += new System.EventHandler(this.label2_Click);
            // 
            // text1
            // 
            this.text1.AutoSize = true;
            this.text1.Location = new System.Drawing.Point(40, 50);
            this.text1.Name = "text1";
            this.text1.Size = new System.Drawing.Size(105, 18);
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
            this.accountManagerTab.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.accountManagerTab.Location = new System.Drawing.Point(4, 27);
            this.accountManagerTab.Name = "accountManagerTab";
            this.accountManagerTab.Padding = new System.Windows.Forms.Padding(3);
            this.accountManagerTab.Size = new System.Drawing.Size(651, 395);
            this.accountManagerTab.TabIndex = 1;
            this.accountManagerTab.Text = "Quản lý tài khoản";
            this.accountManagerTab.UseVisualStyleBackColor = true;
            // 
            // bt_logout
            // 
            this.bt_logout.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.bt_logout.Location = new System.Drawing.Point(469, 359);
            this.bt_logout.Name = "bt_logout";
            this.bt_logout.Size = new System.Drawing.Size(95, 30);
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
            this.accountManager_loginAlert.Location = new System.Drawing.Point(154, 176);
            this.accountManager_loginAlert.Name = "accountManager_loginAlert";
            this.accountManager_loginAlert.Size = new System.Drawing.Size(329, 18);
            this.accountManager_loginAlert.TabIndex = 4;
            this.accountManager_loginAlert.Text = "Bạn chưa đăng nhập. Hãy đăng nhập để thao tác.";
            // 
            // bt_refresh
            // 
            this.bt_refresh.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.bt_refresh.Location = new System.Drawing.Point(570, 359);
            this.bt_refresh.Name = "bt_refresh";
            this.bt_refresh.Size = new System.Drawing.Size(75, 30);
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
            this.accountManager_changer.Location = new System.Drawing.Point(6, 197);
            this.accountManager_changer.Name = "accountManager_changer";
            this.accountManager_changer.Size = new System.Drawing.Size(407, 192);
            this.accountManager_changer.TabIndex = 2;
            this.accountManager_changer.TabStop = false;
            this.accountManager_changer.Text = "Cập nhật thông tin tài khoản";
            this.accountManager_changer.Visible = false;
            // 
            // accountManager_tabChanger
            // 
            this.accountManager_tabChanger.Controls.Add(this.tabPage2);
            this.accountManager_tabChanger.Controls.Add(this.tabPage3);
            this.accountManager_tabChanger.Controls.Add(this.tabPage4);
            this.accountManager_tabChanger.Location = new System.Drawing.Point(6, 23);
            this.accountManager_tabChanger.Name = "accountManager_tabChanger";
            this.accountManager_tabChanger.SelectedIndex = 0;
            this.accountManager_tabChanger.Size = new System.Drawing.Size(395, 163);
            this.accountManager_tabChanger.TabIndex = 1;
            this.accountManager_tabChanger.Visible = false;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.bt_saveUsername);
            this.tabPage2.Controls.Add(this.accountManager_newUsername);
            this.tabPage2.Controls.Add(this.label1);
            this.tabPage2.Location = new System.Drawing.Point(4, 27);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(387, 132);
            this.tabPage2.TabIndex = 0;
            this.tabPage2.Text = "Tên tài khoản";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // bt_saveUsername
            // 
            this.bt_saveUsername.Location = new System.Drawing.Point(151, 92);
            this.bt_saveUsername.Name = "bt_saveUsername";
            this.bt_saveUsername.Size = new System.Drawing.Size(75, 26);
            this.bt_saveUsername.TabIndex = 2;
            this.bt_saveUsername.Text = "Lưu";
            this.bt_saveUsername.UseVisualStyleBackColor = true;
            this.bt_saveUsername.Click += new System.EventHandler(this.bt_saveUsername_Click);
            // 
            // accountManager_newUsername
            // 
            this.accountManager_newUsername.Location = new System.Drawing.Point(171, 33);
            this.accountManager_newUsername.Name = "accountManager_newUsername";
            this.accountManager_newUsername.Size = new System.Drawing.Size(174, 24);
            this.accountManager_newUsername.TabIndex = 1;
            this.accountManager_newUsername.TextChanged += new System.EventHandler(this.accountManager_newUsername_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(20, 36);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(134, 18);
            this.label1.TabIndex = 0;
            this.label1.Text = "Tên đăng nhập mới";
            this.label1.Click += new System.EventHandler(this.label1_Click_2);
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.accountManager_newPasswordCheck);
            this.tabPage3.Controls.Add(this.label3);
            this.tabPage3.Controls.Add(this.bt_savePassword);
            this.tabPage3.Controls.Add(this.accountManager_newPassword);
            this.tabPage3.Controls.Add(this.label2);
            this.tabPage3.Location = new System.Drawing.Point(4, 27);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage3.Size = new System.Drawing.Size(387, 132);
            this.tabPage3.TabIndex = 1;
            this.tabPage3.Text = "Mật khẩu";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // accountManager_newPasswordCheck
            // 
            this.accountManager_newPasswordCheck.Location = new System.Drawing.Point(174, 54);
            this.accountManager_newPasswordCheck.Name = "accountManager_newPasswordCheck";
            this.accountManager_newPasswordCheck.Size = new System.Drawing.Size(174, 24);
            this.accountManager_newPasswordCheck.TabIndex = 7;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(8, 57);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(135, 18);
            this.label3.TabIndex = 6;
            this.label3.Text = "Xác nhận mật khẩu";
            this.label3.Click += new System.EventHandler(this.label3_Click_1);
            // 
            // bt_savePassword
            // 
            this.bt_savePassword.Location = new System.Drawing.Point(151, 92);
            this.bt_savePassword.Name = "bt_savePassword";
            this.bt_savePassword.Size = new System.Drawing.Size(75, 26);
            this.bt_savePassword.TabIndex = 5;
            this.bt_savePassword.Text = "Lưu";
            this.bt_savePassword.UseVisualStyleBackColor = true;
            this.bt_savePassword.Click += new System.EventHandler(this.bt_savePassword_Click);
            // 
            // accountManager_newPassword
            // 
            this.accountManager_newPassword.Location = new System.Drawing.Point(174, 14);
            this.accountManager_newPassword.Name = "accountManager_newPassword";
            this.accountManager_newPassword.Size = new System.Drawing.Size(174, 24);
            this.accountManager_newPassword.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(8, 17);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(98, 18);
            this.label2.TabIndex = 3;
            this.label2.Text = "Mật khẩu mới";
            this.label2.Click += new System.EventHandler(this.label2_Click_1);
            // 
            // tabPage4
            // 
            this.tabPage4.Controls.Add(this.bt_saveFullname);
            this.tabPage4.Controls.Add(this.accountManager_newFullname);
            this.tabPage4.Controls.Add(this.label4);
            this.tabPage4.Location = new System.Drawing.Point(4, 27);
            this.tabPage4.Name = "tabPage4";
            this.tabPage4.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage4.Size = new System.Drawing.Size(387, 132);
            this.tabPage4.TabIndex = 2;
            this.tabPage4.Text = "Tên chủ tài khoản";
            this.tabPage4.UseVisualStyleBackColor = true;
            // 
            // bt_saveFullname
            // 
            this.bt_saveFullname.Location = new System.Drawing.Point(151, 92);
            this.bt_saveFullname.Name = "bt_saveFullname";
            this.bt_saveFullname.Size = new System.Drawing.Size(75, 26);
            this.bt_saveFullname.TabIndex = 5;
            this.bt_saveFullname.Text = "Lưu";
            this.bt_saveFullname.UseVisualStyleBackColor = true;
            this.bt_saveFullname.Click += new System.EventHandler(this.button1_Click);
            // 
            // accountManager_newFullname
            // 
            this.accountManager_newFullname.Location = new System.Drawing.Point(189, 36);
            this.accountManager_newFullname.Name = "accountManager_newFullname";
            this.accountManager_newFullname.Size = new System.Drawing.Size(174, 24);
            this.accountManager_newFullname.TabIndex = 4;
            this.accountManager_newFullname.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 40);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(154, 18);
            this.label4.TabIndex = 3;
            this.label4.Text = "Tên chủ tài khoản mới";
            this.label4.Click += new System.EventHandler(this.label4_Click);
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
            this.accountManager_Info.Location = new System.Drawing.Point(6, 6);
            this.accountManager_Info.Name = "accountManager_Info";
            this.accountManager_Info.Size = new System.Drawing.Size(407, 158);
            this.accountManager_Info.TabIndex = 0;
            this.accountManager_Info.TabStop = false;
            this.accountManager_Info.Text = "Thông tin tài khoản";
            this.accountManager_Info.Visible = false;
            this.accountManager_Info.Enter += new System.EventHandler(this.accountManager_Info_Enter);
            // 
            // accountManager_permission
            // 
            this.accountManager_permission.AutoSize = true;
            this.accountManager_permission.Location = new System.Drawing.Point(166, 120);
            this.accountManager_permission.Name = "accountManager_permission";
            this.accountManager_permission.Size = new System.Drawing.Size(48, 18);
            this.accountManager_permission.TabIndex = 7;
            this.accountManager_permission.Text = "admin";
            // 
            // accountManager_fullname
            // 
            this.accountManager_fullname.AutoSize = true;
            this.accountManager_fullname.Location = new System.Drawing.Point(166, 90);
            this.accountManager_fullname.Name = "accountManager_fullname";
            this.accountManager_fullname.Size = new System.Drawing.Size(48, 18);
            this.accountManager_fullname.TabIndex = 6;
            this.accountManager_fullname.Text = "admin";
            this.accountManager_fullname.Click += new System.EventHandler(this.label3_Click);
            // 
            // accountManager_password
            // 
            this.accountManager_password.AutoSize = true;
            this.accountManager_password.Location = new System.Drawing.Point(166, 60);
            this.accountManager_password.Name = "accountManager_password";
            this.accountManager_password.Size = new System.Drawing.Size(48, 18);
            this.accountManager_password.TabIndex = 5;
            this.accountManager_password.Text = "admin";
            // 
            // accountManager_username
            // 
            this.accountManager_username.AutoSize = true;
            this.accountManager_username.Location = new System.Drawing.Point(166, 30);
            this.accountManager_username.Name = "accountManager_username";
            this.accountManager_username.Size = new System.Drawing.Size(48, 18);
            this.accountManager_username.TabIndex = 4;
            this.accountManager_username.Text = "admin";
            this.accountManager_username.Click += new System.EventHandler(this.accountManager_username_Click);
            // 
            // accoutManager_text4
            // 
            this.accoutManager_text4.AutoSize = true;
            this.accoutManager_text4.Location = new System.Drawing.Point(20, 120);
            this.accoutManager_text4.Name = "accoutManager_text4";
            this.accoutManager_text4.Size = new System.Drawing.Size(85, 18);
            this.accoutManager_text4.TabIndex = 3;
            this.accoutManager_text4.Text = "Phân quyền";
            // 
            // accountManager_text3
            // 
            this.accountManager_text3.AutoSize = true;
            this.accountManager_text3.Location = new System.Drawing.Point(20, 90);
            this.accountManager_text3.Name = "accountManager_text3";
            this.accountManager_text3.Size = new System.Drawing.Size(125, 18);
            this.accountManager_text3.TabIndex = 2;
            this.accountManager_text3.Text = "Tên chủ tài khoản";
            // 
            // accountManager_text2
            // 
            this.accountManager_text2.AutoSize = true;
            this.accountManager_text2.Location = new System.Drawing.Point(20, 60);
            this.accountManager_text2.Name = "accountManager_text2";
            this.accountManager_text2.Size = new System.Drawing.Size(69, 18);
            this.accountManager_text2.TabIndex = 1;
            this.accountManager_text2.Text = "Mật khẩu";
            this.accountManager_text2.Click += new System.EventHandler(this.label1_Click_1);
            // 
            // accoutManager_text1
            // 
            this.accoutManager_text1.AutoSize = true;
            this.accoutManager_text1.Location = new System.Drawing.Point(20, 30);
            this.accoutManager_text1.Name = "accoutManager_text1";
            this.accoutManager_text1.Size = new System.Drawing.Size(105, 18);
            this.accoutManager_text1.TabIndex = 0;
            this.accoutManager_text1.Text = "Tên đăng nhập";
            this.accoutManager_text1.Click += new System.EventHandler(this.accoutManager_text1_Click);
            // 
            // tabPage1
            // 
            this.tabPage1.Location = new System.Drawing.Point(4, 27);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(651, 395);
            this.tabPage1.TabIndex = 2;
            this.tabPage1.Text = "tabPage1";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // Main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(683, 450);
            this.Controls.Add(this.Manager);
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
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl Manager;
        private System.Windows.Forms.TabPage loginTab;
        private System.Windows.Forms.TabPage accountManagerTab;
        private System.Windows.Forms.TabPage tabPage1;
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
    }
}

