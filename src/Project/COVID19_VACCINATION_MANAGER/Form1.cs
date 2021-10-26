using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace COVID19_VACCINATION_MANAGER
{   
    public partial class Main : Form
    {
        public Main()
        {
            InitializeComponent();
        }

        private class Status
        {
            public static bool loginStatus = false;
            public static string currentUser_ID = null;
            public static string currentUser_permission = null;
            
                    
        }
        //Kiểm tra trang thái đã đăng nhập hay chưa để cấp phép sử dụng các tính năng
        private void checkStatus()
        {
            if(Status.loginStatus == true)
            {
                loginBox_status.ForeColor = Color.Green;
                loginBox_status.Text = "Đăng nhập thành công!";
                accountManager_Info.Visible = true;
                accountManager_changer.Visible = true;
                accountManager_tabChanger.Visible = true;
                accountManager_loginAlert.Visible = false;
                bt_logout.Visible = true;
                bt_refresh.Visible = true;
            }
            else
            {
                loginBox_status.ForeColor = Color.Red;
                loginBox_status.Text = "Chưa đăng nhập!";
                accountManager_Info.Visible = false;
                accountManager_changer.Visible = false;
                accountManager_tabChanger.Visible = false;
                accountManager_loginAlert.Visible = true;
                bt_logout.Visible = false;
                bt_refresh.Visible = false;
            }
        }
        
        //Kiểm tra người đăng nhập và hiển thị thông tin tài khoản
        private void checkUser()
        {
            if (Status.currentUser_ID == "0")
            {
                accountManager_username.Text = AccountUser.ADMIN0;
                accountManager_password.Text = AccountUser.PASS0;
                Status.currentUser_permission = AccountUser.PER0;
                accountManager_permission.Text = Status.currentUser_permission;
                accountManager_fullname.Text = AccountUser.NAME0;
            }
            else if(Status.currentUser_ID == "1")
            {
                accountManager_username.Text = AccountUser.ADMIN1;
                accountManager_password.Text = AccountUser.PASS1;
                Status.currentUser_permission = AccountUser.PER1;
                accountManager_permission.Text = Status.currentUser_permission;
                accountManager_fullname.Text = AccountUser.NAME1;
            }
            else if(Status.currentUser_ID == "2")
            {
                accountManager_username.Text = AccountUser.ADMIN2;
                accountManager_password.Text = AccountUser.PASS2;
                Status.currentUser_permission = AccountUser.PER2;
                accountManager_permission.Text = Status.currentUser_permission;
                accountManager_fullname.Text = AccountUser.NAME2;
            }
            else
            {
                accountManager_username.Text = "error";
                accountManager_password.Text = "error";
                Status.currentUser_permission = "error";
                accountManager_permission.Text = "Permission denined!";
                accountManager_fullname.Text = "Unknown!";
            }
        }
        private class AccountUser
        {
            public static string ADMIN0 = "admin", PASS0 = "admin", PER0 = "admin", NAME0 = "Administrator";
            public static string ADMIN1 = "dotranbinh", PASS1 = "dotranbinh", PER1 = "full per-user", NAME1 = "Đỗ Trần Bình";
            public static string ADMIN2 = "lephiduy", PASS2 = "lephiduy", PER2 = "full per-user", NAME2 = "Lê Phi Duy";
            
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void loginBox_username_TextChanged(object sender, EventArgs e)
        {

        }

        private void bt_login_Click(object sender, EventArgs e)
        {
            Status.loginStatus = false;
            //Bắt sự kiện nhấn nút đăng nhập, kiểm tra có đúng tên tk, mk hay không. Kiểm tra xem ai đã đăng nhập
            if ((loginBox_username.Text == AccountUser.ADMIN0) && (loginBox_password.Text == AccountUser.PASS0))
            {
                Status.loginStatus = true;
                Status.currentUser_ID = "0";
            }else if((loginBox_username.Text == AccountUser.ADMIN1) && (loginBox_password.Text == AccountUser.PASS1))
            {
                Status.loginStatus = true;
                Status.currentUser_ID = "1";
            }
            else if(((loginBox_username.Text == AccountUser.ADMIN2) && (loginBox_password.Text == AccountUser.PASS2)))
            {
                Status.loginStatus = true;
                Status.currentUser_ID = "2";
            }
            else
            {
                Status.loginStatus = false;
                Status.currentUser_ID = null;
            }

            if(Status.loginStatus == true)
            {
                loginBox_status.ForeColor = Color.Green;
                loginBox_status.Text = "Đăng nhập thành công!";
                accountManager_Info.Visible = true;
                accountManager_changer.Visible = true;
                accountManager_tabChanger.Visible = true;
                accountManager_loginAlert.Visible = false;
                bt_logout.Visible = true;
                bt_refresh.Visible = true;
                checkUser();
            }
            else
            {
                MessageBox.Show("Sai tên tài khoản hoặc mật khẩu.", "THÔNG BÁO");
                loginBox_status.ForeColor = Color.Red;
                loginBox_status.Text = "Đăng nhập thất bại!";
                accountManager_Info.Visible = false;
                accountManager_changer.Visible = false;
                accountManager_tabChanger.Visible = false;
                accountManager_loginAlert.Visible = true;
                bt_logout.Visible = false;
                bt_refresh.Visible = false;
            }


        }

        private void loginBox_status_Click(object sender, EventArgs e)
        {

        }

        private void bt_showPassword_MouseDown(object sender, MouseEventArgs e)
        {
            loginBox_password.PasswordChar = char.MinValue;
        }

        private void bt_showPassword_MouseUp(object sender, MouseEventArgs e)
        {
 
            loginBox_password.PasswordChar = char.MaxValue;
            loginBox_password.PasswordChar = '*';
        }

        private void bt_quit_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Bạn có muốn thoát khỏi chương trình?", "THÔNG BÁO", MessageBoxButtons.YesNo) == DialogResult.Yes)    
                Application.Exit();
            else 
            {

            }
        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void accountManager_Info_Enter(object sender, EventArgs e)
        {

        }

        private void accoutManager_text1_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click_2(object sender, EventArgs e)
        {

        }

        private void label2_Click_1(object sender, EventArgs e)
        {

        }

        private void label3_Click_1(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        //Đổi tên chủ tài khoản
        private void button1_Click(object sender, EventArgs e)
        {
            if (accountManager_newFullname.Text != "")
            {
                switch (Status.currentUser_ID)
                {
                    case "0":
                        AccountUser.NAME0 = accountManager_newFullname.Text;
                        break;
                    case "1":
                        AccountUser.NAME1 = accountManager_newFullname.Text;
                        break;
                    case "2":
                        AccountUser.NAME2 = accountManager_newFullname.Text;
                        break;
                    default:

                        break;
                }
            }
            else MessageBox.Show("Tên chủ tài khoản không thể để trống.\nHãy nhập lại.", "THÔNG BÁO");
            
            checkUser();
        }
        //Đổi tên đăng nhập
        private void bt_saveUsername_Click(object sender, EventArgs e)
        {
            if (accountManager_newUsername.Text != "")
            {
                switch (Status.currentUser_ID)
                {
                    case "0":
                        AccountUser.ADMIN0 = accountManager_newUsername.Text;
                        break;
                    case "1":
                        AccountUser.ADMIN1 = accountManager_newUsername.Text;
                        break;
                    case "2":
                        AccountUser.ADMIN2 = accountManager_newUsername.Text;
                        break;
                    default:

                        break;
                }
            }
            else MessageBox.Show("Tên đăng nhập không thể để trống.\nHãy nhập lại.", "THÔNG BÁO");
            checkUser();
        }

        private void accountManager_newUsername_TextChanged(object sender, EventArgs e)
        {

        }

        private void accountManager_username_Click(object sender, EventArgs e)
        {

        }

        private void bt_showPassword_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            Status.loginStatus = false;
            checkStatus();
        }

        private void bt_refresh_Click(object sender, EventArgs e)
        {
            checkUser();
        }
        //Đổi mật khẩu
        private void bt_savePassword_Click(object sender, EventArgs e)
        {
            string newPassword = accountManager_newPassword.Text, newPasswordCheck = accountManager_newPasswordCheck.Text;
            if (newPassword != "")
            {
                if (newPassword == newPasswordCheck)
                {
                    switch (Status.currentUser_ID)
                    {
                        case "0":
                            AccountUser.PASS0 = accountManager_newPassword.Text;
                            break;
                        case "1":
                            AccountUser.PASS1 = accountManager_newPassword.Text;
                            break;
                        case "2":
                            AccountUser.PASS2 = accountManager_newPassword.Text;
                            break;
                        default:

                            break;
                    }
                }
                else MessageBox.Show("Mật khẩu không trùng khớp.\nHãy nhập lại.", "THÔNG BÁO");
            }
            else MessageBox.Show("Mật khẩu không thể để trống.\nHãy nhập lại.", "THÔNG BÁO");
            checkUser();
        }

        private void Main_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (MessageBox.Show("Bạn có muốn thoát khỏi chương trình?", "THÔNG BÁO", MessageBoxButtons.YesNo) == DialogResult.Yes)
                Application.Exit();
            else
            {
               
            }
        }
    }
}
