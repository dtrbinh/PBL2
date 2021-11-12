#pragma once
#include<string.h>
#include"src/CongDan.h"
#include"src/DanhSachCongDan.h"
//#include"src/CongDan.cpp"
//#include"src/DanhSachCongDan.cpp"

namespace CppCLRWinformsProjekt {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    /// <summary>
    /// Zusammenfassung für Form1
    /// </summary>
    static DSCD DN;
    public ref class Form1 : public System::Windows::Forms::Form
    {

    private:

        static bool loginStatus = false;
        static int currentUser_ID = NULL;
        static String^ currentUser_permission = "";
        static String^ ADMIN0 = "admin", ^ PASS0 = "admin", ^ PER0 = "admin", ^ NAME0 = "Administrator";
        static String^ ADMIN1 = "dotranbinh", ^ PASS1 = "dotranbinh", ^ PER1 = "full per-user", ^ NAME1 = L"Đỗ Trần Bình";
        static String^ ADMIN2 = "lephiduy", ^ PASS2 = "lephiduy", ^ PER2 = "full per-user", ^ NAME2 = L"Lê Phi Duy";
    private: System::Windows::Forms::GroupBox^ boxDataManager;

    private: System::Windows::Forms::GroupBox^ box_deleteData;
    private: System::Windows::Forms::GroupBox^ box_sortData;
    private: System::Windows::Forms::GroupBox^ box_inputHand;
    private: System::Windows::Forms::GroupBox^ box_inputFile;
    private: System::Windows::Forms::Button^ bt_inputFile;
    private: System::Windows::Forms::TextBox^ fileName3;
    private: System::Windows::Forms::TextBox^ fileName2;


    private: System::Windows::Forms::Label^ label_fileName3;
    private: System::Windows::Forms::Label^ label_fileName1;

    private: System::Windows::Forms::Label^ label_fileName2;


    private: System::Windows::Forms::TextBox^ fileName1;
    private: System::Windows::Forms::MenuStrip^ dataManager_menu;

    private: System::Windows::Forms::ToolStripMenuItem^ dataManager_input;

    private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
    private: System::Windows::Forms::ToolStripMenuItem^ inputFile;
    private: System::Windows::Forms::ToolStripMenuItem^ inputHand;


    private: System::Windows::Forms::ToolStripMenuItem^ sortData;
    private: System::Windows::Forms::ToolStripMenuItem^ deleteData;




    private: System::Windows::Forms::ToolStripMenuItem^ dataManager_output;

    private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
    private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
    private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
    private: System::Windows::Forms::GroupBox^ box_searchData;
    private: System::Windows::Forms::ToolStripMenuItem^ searchData;
    private: System::Windows::Forms::Button^ bt_selectFile3;
    private: System::Windows::Forms::Button^ bt_selectFile2;
    private: System::Windows::Forms::Button^ bt_selectFile1;
    private: System::Windows::Forms::GroupBox^ exportData_people;
    private: System::Windows::Forms::DataGridView^ view_exportData_people;
    private: System::Windows::Forms::Button^ bt_modData_people;

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ bt_loadData_people;
    private: System::Windows::Forms::Button^ bt_saveData_people;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ma_CD;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullName;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ sex;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ birth;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ so_BHXH;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ so_CMND;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ address;
    private: System::Windows::Forms::ToolStripMenuItem^ xuấtToànBộDữLiệuToolStripMenuItem;
    private: System::Windows::Forms::GroupBox^ exportData_registry;
    private: System::Windows::Forms::Button^ bt_saveData_registry;




    private: System::Windows::Forms::Button^ bt_loadData_registry;
    private: System::Windows::Forms::Button^ bt_modData_registry;


    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::DataGridView^ view_exportData_registry;

    private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullName2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ma_DK;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ngay_DK;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ noi_DK;
    private: System::Windows::Forms::GroupBox^ exportData_vaccination;
    private: System::Windows::Forms::Button^ bt_saveData_vaccination;
    private: System::Windows::Forms::Button^ bt_loadData_vaccination;
    private: System::Windows::Forms::Button^ bt_modData_vaccination;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::DataGridView^ view_exportData_vaccination;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullName3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ mui1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ngay_M1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ mui2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ngay_M2;
    private: System::Windows::Forms::ComboBox^ box_sortType;

    private: System::Windows::Forms::ComboBox^ box_sortSelect;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ bt_view_sortData;

private: System::Windows::Forms::Button^ bt_sortData;
private: System::Windows::Forms::GroupBox^ export_allData_people;

private: System::Windows::Forms::Button^ bt_saveAllData;

private: System::Windows::Forms::Button^ bt_loadAllData;
private: System::Windows::Forms::Button^ bt_modAllData;


private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::DataGridView^ view_exportAllData_people;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ maCD;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullName_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ sex_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ birth_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ so_BHXH_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ so_CMND_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ address_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ma_DK_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ngay_DK_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ noi_DK_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ mui1_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ngayM1_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ mui2_allData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ngay_M2_allData;








    private: System::Windows::Forms::Label^ dataManager_loginAlert;

    public:
        void checkStatus() {
            if (loginStatus == true)
            {
                this->loginBox_status->ForeColor = Color::Green;
                this->loginBox_status->Text = L"Đăng nhập thành công!";
                this->accountManager_Info->Visible = true;
                this->accountManager_changer->Visible = true;
                this->accountManager_tabChanger->Visible = true;
                this->accountManager_loginAlert->Visible = false;
                this->dataManager_loginAlert->Visible = false;
                this->bt_logout->Visible = true;
                this->bt_refresh->Visible = true;
                this->boxDataManager->Visible = true;

            }
            else {
                this->loginBox_status->ForeColor = Color::Red;
                this->loginBox_status->Text = L"Chưa đăng nhập";
                this->accountManager_Info->Visible = false;
                this->accountManager_changer->Visible = false;
                this->accountManager_tabChanger->Visible = false;
                this->accountManager_loginAlert->Visible = true;
                this->dataManager_loginAlert->Visible = true;
                this->bt_logout->Visible = false;
                this->bt_refresh->Visible = false;
                this->boxDataManager->Visible = false;

            }
        }
        void checkUser() {
            switch (currentUser_ID)
            {
            case 0:
                this->accountManager_username->Text = ADMIN0;
                this->accountManager_password->Text = PASS0;
                this->currentUser_permission = PER0;
                this->accountManager_permission->Text = currentUser_permission;
                this->accountManager_fullname->Text = NAME0;
                break;
            case 1:
                this->accountManager_username->Text = ADMIN1;
                this->accountManager_password->Text = PASS1;
                this->currentUser_permission = PER1;
                this->accountManager_permission->Text = currentUser_permission;
                this->accountManager_fullname->Text = NAME1;
                break;
            case 2:
                this->accountManager_username->Text = ADMIN2;
                this->accountManager_password->Text = PASS2;
                this->currentUser_permission = PER2;
                this->accountManager_permission->Text = currentUser_permission;
                this->accountManager_fullname->Text = NAME2;
                break;
            default:
                this->accountManager_username->Text = L"error";
                this->accountManager_password->Text = L"error";
                this->currentUser_permission = L"Permission Denied!";
                this->accountManager_permission->Text = L"Permission Denied!";
                this->accountManager_fullname->Text = L"error";
                break;
            }
        }

        void checkLoginStatus() {
            if (loginStatus == true)
            {
                this->loginBox_status->ForeColor = Color::Green;
                this->loginBox_status->Text = L"Đăng nhập thành công!";
                checkStatus();
                checkUser();
            }
            else
            {
                MessageBox::Show(L"Sai tên tài khoản hoặc mật khẩu.", L"THÔNG BÁO");
                this->loginBox_status->ForeColor = Color::Red;
                this->loginBox_status->Text = L"Đăng nhập thất bại!";
                checkStatus();
                checkUser();

            }
        }

        void convertString(String^ s, string& os) {
            using namespace Runtime::InteropServices;
            const char* chars =
                (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
            os = chars;
            Marshal::FreeHGlobal(IntPtr((void*)chars));
        }

    public:
        Form1(void)
        {
            InitializeComponent();
            //
            //TODO: Konstruktorcode hier hinzufügen.
            //
        }

    protected:
        /// <summary>
        /// Verwendete Ressourcen bereinigen.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ accountManager_permission;
    protected:
    private: System::Windows::Forms::Button^ bt_saveFullname;
    private: System::Windows::Forms::Label^ accountManager_fullname;
    private: System::Windows::Forms::Label^ accountManager_password;
    private: System::Windows::Forms::Label^ accountManager_username;
    private: System::Windows::Forms::Label^ accoutManager_text4;
    private: System::Windows::Forms::Label^ accountManager_text3;
    private: System::Windows::Forms::Label^ accountManager_text2;
    private: System::Windows::Forms::Label^ accoutManager_text1;
    private: System::Windows::Forms::TabPage^ dataManagerTab;
    private: System::Windows::Forms::TextBox^ accountManager_newFullname;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TabControl^ Manager;
    private: System::Windows::Forms::TabPage^ loginTab;
    private: System::Windows::Forms::Button^ bt_quit;
    private: System::Windows::Forms::GroupBox^ loginBox;
    private: System::Windows::Forms::Label^ text3;
    private: System::Windows::Forms::Label^ loginBox_status;
    private: System::Windows::Forms::Button^ bt_showPassword;
    private: System::Windows::Forms::Button^ bt_login;
    private: System::Windows::Forms::TextBox^ loginBox_password;
    private: System::Windows::Forms::TextBox^ loginBox_username;
    private: System::Windows::Forms::Label^ text2;
    private: System::Windows::Forms::Label^ text1;
    private: System::Windows::Forms::TabPage^ accountManagerTab;
    private: System::Windows::Forms::Button^ bt_logout;
    private: System::Windows::Forms::Label^ accountManager_loginAlert;
    private: System::Windows::Forms::Button^ bt_refresh;
    private: System::Windows::Forms::GroupBox^ accountManager_changer;
    private: System::Windows::Forms::TabControl^ accountManager_tabChanger;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::Button^ bt_saveUsername;
    private: System::Windows::Forms::TextBox^ accountManager_newUsername;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TextBox^ accountManager_newPasswordCheck;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ bt_savePassword;
    private: System::Windows::Forms::TextBox^ accountManager_newPassword;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::GroupBox^ accountManager_Info;

    protected:


    private:
        /// <summary>
        /// Erforderliche Designervariable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Erforderliche Methode für die Designerunterstützung.
        /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
        /// </summary>
        void InitializeComponent(void)
        {
            this->accountManager_permission = (gcnew System::Windows::Forms::Label());
            this->bt_saveFullname = (gcnew System::Windows::Forms::Button());
            this->accountManager_fullname = (gcnew System::Windows::Forms::Label());
            this->accountManager_password = (gcnew System::Windows::Forms::Label());
            this->accountManager_username = (gcnew System::Windows::Forms::Label());
            this->accoutManager_text4 = (gcnew System::Windows::Forms::Label());
            this->accountManager_text3 = (gcnew System::Windows::Forms::Label());
            this->accountManager_text2 = (gcnew System::Windows::Forms::Label());
            this->accoutManager_text1 = (gcnew System::Windows::Forms::Label());
            this->dataManagerTab = (gcnew System::Windows::Forms::TabPage());
            this->boxDataManager = (gcnew System::Windows::Forms::GroupBox());
            this->export_allData_people = (gcnew System::Windows::Forms::GroupBox());
            this->bt_saveAllData = (gcnew System::Windows::Forms::Button());
            this->bt_loadAllData = (gcnew System::Windows::Forms::Button());
            this->bt_modAllData = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->view_exportAllData_people = (gcnew System::Windows::Forms::DataGridView());
            this->maCD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->fullName_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->sex_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->birth_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->phone_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->so_BHXH_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->so_CMND_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->address_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ma_DK_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ngay_DK_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->noi_DK_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->mui1_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ngayM1_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->mui2_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ngay_M2_allData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->exportData_vaccination = (gcnew System::Windows::Forms::GroupBox());
            this->bt_saveData_vaccination = (gcnew System::Windows::Forms::Button());
            this->bt_loadData_vaccination = (gcnew System::Windows::Forms::Button());
            this->bt_modData_vaccination = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->view_exportData_vaccination = (gcnew System::Windows::Forms::DataGridView());
            this->fullName3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->mui1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ngay_M1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->mui2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ngay_M2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->exportData_registry = (gcnew System::Windows::Forms::GroupBox());
            this->bt_saveData_registry = (gcnew System::Windows::Forms::Button());
            this->bt_loadData_registry = (gcnew System::Windows::Forms::Button());
            this->bt_modData_registry = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->view_exportData_registry = (gcnew System::Windows::Forms::DataGridView());
            this->fullName2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ma_DK = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ngay_DK = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->noi_DK = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->exportData_people = (gcnew System::Windows::Forms::GroupBox());
            this->bt_saveData_people = (gcnew System::Windows::Forms::Button());
            this->bt_loadData_people = (gcnew System::Windows::Forms::Button());
            this->bt_modData_people = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->view_exportData_people = (gcnew System::Windows::Forms::DataGridView());
            this->ma_CD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->fullName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->sex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->birth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->so_BHXH = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->so_CMND = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->box_searchData = (gcnew System::Windows::Forms::GroupBox());
            this->dataManager_menu = (gcnew System::Windows::Forms::MenuStrip());
            this->dataManager_input = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->inputFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->inputHand = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->sortData = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->deleteData = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->searchData = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->dataManager_output = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->xuấtToànBộDữLiệuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->box_deleteData = (gcnew System::Windows::Forms::GroupBox());
            this->box_sortData = (gcnew System::Windows::Forms::GroupBox());
            this->bt_view_sortData = (gcnew System::Windows::Forms::Button());
            this->bt_sortData = (gcnew System::Windows::Forms::Button());
            this->box_sortType = (gcnew System::Windows::Forms::ComboBox());
            this->box_sortSelect = (gcnew System::Windows::Forms::ComboBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->box_inputHand = (gcnew System::Windows::Forms::GroupBox());
            this->box_inputFile = (gcnew System::Windows::Forms::GroupBox());
            this->bt_selectFile3 = (gcnew System::Windows::Forms::Button());
            this->bt_selectFile2 = (gcnew System::Windows::Forms::Button());
            this->bt_selectFile1 = (gcnew System::Windows::Forms::Button());
            this->bt_inputFile = (gcnew System::Windows::Forms::Button());
            this->fileName3 = (gcnew System::Windows::Forms::TextBox());
            this->fileName2 = (gcnew System::Windows::Forms::TextBox());
            this->label_fileName3 = (gcnew System::Windows::Forms::Label());
            this->label_fileName1 = (gcnew System::Windows::Forms::Label());
            this->label_fileName2 = (gcnew System::Windows::Forms::Label());
            this->fileName1 = (gcnew System::Windows::Forms::TextBox());
            this->accountManager_newFullname = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->Manager = (gcnew System::Windows::Forms::TabControl());
            this->loginTab = (gcnew System::Windows::Forms::TabPage());
            this->bt_quit = (gcnew System::Windows::Forms::Button());
            this->loginBox = (gcnew System::Windows::Forms::GroupBox());
            this->text3 = (gcnew System::Windows::Forms::Label());
            this->loginBox_status = (gcnew System::Windows::Forms::Label());
            this->bt_showPassword = (gcnew System::Windows::Forms::Button());
            this->bt_login = (gcnew System::Windows::Forms::Button());
            this->loginBox_password = (gcnew System::Windows::Forms::TextBox());
            this->loginBox_username = (gcnew System::Windows::Forms::TextBox());
            this->text2 = (gcnew System::Windows::Forms::Label());
            this->text1 = (gcnew System::Windows::Forms::Label());
            this->accountManagerTab = (gcnew System::Windows::Forms::TabPage());
            this->bt_logout = (gcnew System::Windows::Forms::Button());
            this->accountManager_loginAlert = (gcnew System::Windows::Forms::Label());
            this->bt_refresh = (gcnew System::Windows::Forms::Button());
            this->accountManager_changer = (gcnew System::Windows::Forms::GroupBox());
            this->accountManager_tabChanger = (gcnew System::Windows::Forms::TabControl());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->bt_saveUsername = (gcnew System::Windows::Forms::Button());
            this->accountManager_newUsername = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->accountManager_newPasswordCheck = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->bt_savePassword = (gcnew System::Windows::Forms::Button());
            this->accountManager_newPassword = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->accountManager_Info = (gcnew System::Windows::Forms::GroupBox());
            this->dataManager_loginAlert = (gcnew System::Windows::Forms::Label());
            this->dataManagerTab->SuspendLayout();
            this->boxDataManager->SuspendLayout();
            this->export_allData_people->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportAllData_people))->BeginInit();
            this->exportData_vaccination->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_vaccination))->BeginInit();
            this->exportData_registry->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_registry))->BeginInit();
            this->exportData_people->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_people))->BeginInit();
            this->dataManager_menu->SuspendLayout();
            this->box_sortData->SuspendLayout();
            this->box_inputFile->SuspendLayout();
            this->Manager->SuspendLayout();
            this->loginTab->SuspendLayout();
            this->loginBox->SuspendLayout();
            this->accountManagerTab->SuspendLayout();
            this->accountManager_changer->SuspendLayout();
            this->accountManager_tabChanger->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->accountManager_Info->SuspendLayout();
            this->SuspendLayout();
            // 
            // accountManager_permission
            // 
            this->accountManager_permission->AutoSize = true;
            this->accountManager_permission->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_permission->Location = System::Drawing::Point(188, 121);
            this->accountManager_permission->Name = L"accountManager_permission";
            this->accountManager_permission->Size = System::Drawing::Size(54, 19);
            this->accountManager_permission->TabIndex = 7;
            this->accountManager_permission->Text = L"admin";
            // 
            // bt_saveFullname
            // 
            this->bt_saveFullname->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_saveFullname->Location = System::Drawing::Point(181, 89);
            this->bt_saveFullname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveFullname->Name = L"bt_saveFullname";
            this->bt_saveFullname->Size = System::Drawing::Size(75, 31);
            this->bt_saveFullname->TabIndex = 5;
            this->bt_saveFullname->Text = L"Lưu";
            this->bt_saveFullname->UseVisualStyleBackColor = true;
            this->bt_saveFullname->Click += gcnew System::EventHandler(this, &Form1::bt_saveFullname_Click);
            // 
            // accountManager_fullname
            // 
            this->accountManager_fullname->AutoSize = true;
            this->accountManager_fullname->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_fullname->Location = System::Drawing::Point(188, 90);
            this->accountManager_fullname->Name = L"accountManager_fullname";
            this->accountManager_fullname->Size = System::Drawing::Size(54, 19);
            this->accountManager_fullname->TabIndex = 6;
            this->accountManager_fullname->Text = L"admin";
            // 
            // accountManager_password
            // 
            this->accountManager_password->AutoSize = true;
            this->accountManager_password->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_password->Location = System::Drawing::Point(188, 60);
            this->accountManager_password->Name = L"accountManager_password";
            this->accountManager_password->Size = System::Drawing::Size(54, 19);
            this->accountManager_password->TabIndex = 5;
            this->accountManager_password->Text = L"admin";
            // 
            // accountManager_username
            // 
            this->accountManager_username->AutoSize = true;
            this->accountManager_username->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_username->Location = System::Drawing::Point(188, 30);
            this->accountManager_username->Name = L"accountManager_username";
            this->accountManager_username->Size = System::Drawing::Size(54, 19);
            this->accountManager_username->TabIndex = 4;
            this->accountManager_username->Text = L"admin";
            // 
            // accoutManager_text4
            // 
            this->accoutManager_text4->AutoSize = true;
            this->accoutManager_text4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accoutManager_text4->Location = System::Drawing::Point(20, 121);
            this->accoutManager_text4->Name = L"accoutManager_text4";
            this->accoutManager_text4->Size = System::Drawing::Size(95, 19);
            this->accoutManager_text4->TabIndex = 3;
            this->accoutManager_text4->Text = L"Phân quyền";
            // 
            // accountManager_text3
            // 
            this->accountManager_text3->AutoSize = true;
            this->accountManager_text3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_text3->Location = System::Drawing::Point(20, 90);
            this->accountManager_text3->Name = L"accountManager_text3";
            this->accountManager_text3->Size = System::Drawing::Size(141, 19);
            this->accountManager_text3->TabIndex = 2;
            this->accountManager_text3->Text = L"Tên chủ tài khoản";
            // 
            // accountManager_text2
            // 
            this->accountManager_text2->AutoSize = true;
            this->accountManager_text2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_text2->Location = System::Drawing::Point(20, 60);
            this->accountManager_text2->Name = L"accountManager_text2";
            this->accountManager_text2->Size = System::Drawing::Size(78, 19);
            this->accountManager_text2->TabIndex = 1;
            this->accountManager_text2->Text = L"Mật khẩu";
            // 
            // accoutManager_text1
            // 
            this->accoutManager_text1->AutoSize = true;
            this->accoutManager_text1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accoutManager_text1->Location = System::Drawing::Point(20, 30);
            this->accoutManager_text1->Name = L"accoutManager_text1";
            this->accoutManager_text1->Size = System::Drawing::Size(118, 19);
            this->accoutManager_text1->TabIndex = 0;
            this->accoutManager_text1->Text = L"Tên đăng nhập";
            // 
            // dataManagerTab
            // 
            this->dataManagerTab->Controls->Add(this->boxDataManager);
            this->dataManagerTab->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->dataManagerTab->Location = System::Drawing::Point(4, 28);
            this->dataManagerTab->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataManagerTab->Name = L"dataManagerTab";
            this->dataManagerTab->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataManagerTab->Size = System::Drawing::Size(650, 468);
            this->dataManagerTab->TabIndex = 2;
            this->dataManagerTab->Text = L"Quản lý dữ liệu";
            this->dataManagerTab->UseVisualStyleBackColor = true;
            this->dataManagerTab->Click += gcnew System::EventHandler(this, &Form1::dataManagerTab_Click);
            // 
            // boxDataManager
            // 
            this->boxDataManager->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->boxDataManager->Controls->Add(this->export_allData_people);
            this->boxDataManager->Controls->Add(this->exportData_vaccination);
            this->boxDataManager->Controls->Add(this->exportData_registry);
            this->boxDataManager->Controls->Add(this->exportData_people);
            this->boxDataManager->Controls->Add(this->box_searchData);
            this->boxDataManager->Controls->Add(this->dataManager_menu);
            this->boxDataManager->Controls->Add(this->box_deleteData);
            this->boxDataManager->Controls->Add(this->box_sortData);
            this->boxDataManager->Controls->Add(this->box_inputHand);
            this->boxDataManager->Controls->Add(this->box_inputFile);
            this->boxDataManager->Location = System::Drawing::Point(-4, 0);
            this->boxDataManager->Name = L"boxDataManager";
            this->boxDataManager->Size = System::Drawing::Size(654, 468);
            this->boxDataManager->TabIndex = 3;
            this->boxDataManager->TabStop = false;
            // 
            // export_allData_people
            // 
            this->export_allData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->export_allData_people->Controls->Add(this->bt_saveAllData);
            this->export_allData_people->Controls->Add(this->bt_loadAllData);
            this->export_allData_people->Controls->Add(this->bt_modAllData);
            this->export_allData_people->Controls->Add(this->button7);
            this->export_allData_people->Controls->Add(this->view_exportAllData_people);
            this->export_allData_people->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->export_allData_people->Location = System::Drawing::Point(0, 51);
            this->export_allData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->export_allData_people->Name = L"export_allData_people";
            this->export_allData_people->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->export_allData_people->Size = System::Drawing::Size(658, 417);
            this->export_allData_people->TabIndex = 9;
            this->export_allData_people->TabStop = false;
            this->export_allData_people->Text = L"Toàn bộ dữ liệu";
            this->export_allData_people->Visible = false;
            // 
            // bt_saveAllData
            // 
            this->bt_saveAllData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_saveAllData->Location = System::Drawing::Point(555, 377);
            this->bt_saveAllData->Name = L"bt_saveAllData";
            this->bt_saveAllData->Size = System::Drawing::Size(91, 30);
            this->bt_saveAllData->TabIndex = 4;
            this->bt_saveAllData->Text = L"Lưu";
            this->bt_saveAllData->UseVisualStyleBackColor = true;
            // 
            // bt_loadAllData
            // 
            this->bt_loadAllData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_loadAllData->Location = System::Drawing::Point(283, 377);
            this->bt_loadAllData->Name = L"bt_loadAllData";
            this->bt_loadAllData->Size = System::Drawing::Size(130, 30);
            this->bt_loadAllData->TabIndex = 3;
            this->bt_loadAllData->Text = L"Tải dữ liệu";
            this->bt_loadAllData->UseVisualStyleBackColor = true;
            this->bt_loadAllData->Click += gcnew System::EventHandler(this, &Form1::bt_loadAllData_Click);
            // 
            // bt_modAllData
            // 
            this->bt_modAllData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_modAllData->Location = System::Drawing::Point(419, 377);
            this->bt_modAllData->Name = L"bt_modAllData";
            this->bt_modAllData->Size = System::Drawing::Size(130, 30);
            this->bt_modAllData->TabIndex = 2;
            this->bt_modAllData->Text = L"Chỉnh sửa";
            this->bt_modAllData->UseVisualStyleBackColor = true;
            // 
            // button7
            // 
            this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button7->Location = System::Drawing::Point(555, 388);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(0, 0);
            this->button7->TabIndex = 1;
            this->button7->Text = L"button7";
            this->button7->UseVisualStyleBackColor = true;
            // 
            // view_exportAllData_people
            // 
            this->view_exportAllData_people->AllowUserToAddRows = false;
            this->view_exportAllData_people->AllowUserToDeleteRows = false;
            this->view_exportAllData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_exportAllData_people->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_exportAllData_people->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
                this->maCD,
                    this->fullName_allData, this->sex_allData, this->birth_allData, this->phone_allData, this->so_BHXH_allData, this->so_CMND_allData,
                    this->address_allData, this->ma_DK_allData, this->ngay_DK_allData, this->noi_DK_allData, this->mui1_allData, this->ngayM1_allData,
                    this->mui2_allData, this->ngay_M2_allData
            });
            this->view_exportAllData_people->Location = System::Drawing::Point(10, 24);
            this->view_exportAllData_people->Name = L"view_exportAllData_people";
            this->view_exportAllData_people->ReadOnly = true;
            this->view_exportAllData_people->RowHeadersWidth = 51;
            this->view_exportAllData_people->RowTemplate->Height = 24;
            this->view_exportAllData_people->Size = System::Drawing::Size(648, 342);
            this->view_exportAllData_people->TabIndex = 0;
            // 
            // maCD
            // 
            this->maCD->HeaderText = L"Mã công dân";
            this->maCD->MinimumWidth = 6;
            this->maCD->Name = L"maCD";
            this->maCD->ReadOnly = true;
            this->maCD->Width = 125;
            // 
            // fullName_allData
            // 
            this->fullName_allData->HeaderText = L"Họ và tên";
            this->fullName_allData->MinimumWidth = 6;
            this->fullName_allData->Name = L"fullName_allData";
            this->fullName_allData->ReadOnly = true;
            this->fullName_allData->Width = 125;
            // 
            // sex_allData
            // 
            this->sex_allData->HeaderText = L"Giới tính";
            this->sex_allData->MinimumWidth = 6;
            this->sex_allData->Name = L"sex_allData";
            this->sex_allData->ReadOnly = true;
            this->sex_allData->Width = 125;
            // 
            // birth_allData
            // 
            this->birth_allData->HeaderText = L"Ngày sinh";
            this->birth_allData->MinimumWidth = 6;
            this->birth_allData->Name = L"birth_allData";
            this->birth_allData->ReadOnly = true;
            this->birth_allData->Width = 125;
            // 
            // phone_allData
            // 
            this->phone_allData->HeaderText = L"SĐT";
            this->phone_allData->MinimumWidth = 6;
            this->phone_allData->Name = L"phone_allData";
            this->phone_allData->ReadOnly = true;
            this->phone_allData->Width = 125;
            // 
            // so_BHXH_allData
            // 
            this->so_BHXH_allData->HeaderText = L"Số BHXH";
            this->so_BHXH_allData->MinimumWidth = 6;
            this->so_BHXH_allData->Name = L"so_BHXH_allData";
            this->so_BHXH_allData->ReadOnly = true;
            this->so_BHXH_allData->Width = 125;
            // 
            // so_CMND_allData
            // 
            this->so_CMND_allData->HeaderText = L"Số CMND/CCCD";
            this->so_CMND_allData->MinimumWidth = 6;
            this->so_CMND_allData->Name = L"so_CMND_allData";
            this->so_CMND_allData->ReadOnly = true;
            this->so_CMND_allData->Width = 125;
            // 
            // address_allData
            // 
            this->address_allData->HeaderText = L"Địa chỉ";
            this->address_allData->MinimumWidth = 6;
            this->address_allData->Name = L"address_allData";
            this->address_allData->ReadOnly = true;
            this->address_allData->Width = 125;
            // 
            // ma_DK_allData
            // 
            this->ma_DK_allData->HeaderText = L"Mã đăng ký";
            this->ma_DK_allData->MinimumWidth = 6;
            this->ma_DK_allData->Name = L"ma_DK_allData";
            this->ma_DK_allData->ReadOnly = true;
            this->ma_DK_allData->Width = 125;
            // 
            // ngay_DK_allData
            // 
            this->ngay_DK_allData->HeaderText = L"Ngày đăng ký";
            this->ngay_DK_allData->MinimumWidth = 6;
            this->ngay_DK_allData->Name = L"ngay_DK_allData";
            this->ngay_DK_allData->ReadOnly = true;
            this->ngay_DK_allData->Width = 125;
            // 
            // noi_DK_allData
            // 
            this->noi_DK_allData->HeaderText = L"Nơi đăng ký";
            this->noi_DK_allData->MinimumWidth = 6;
            this->noi_DK_allData->Name = L"noi_DK_allData";
            this->noi_DK_allData->ReadOnly = true;
            this->noi_DK_allData->Width = 125;
            // 
            // mui1_allData
            // 
            this->mui1_allData->HeaderText = L"Tiêm mũi 1";
            this->mui1_allData->MinimumWidth = 6;
            this->mui1_allData->Name = L"mui1_allData";
            this->mui1_allData->ReadOnly = true;
            this->mui1_allData->Width = 125;
            // 
            // ngayM1_allData
            // 
            this->ngayM1_allData->HeaderText = L"Ngày tiêm mũi 1";
            this->ngayM1_allData->MinimumWidth = 6;
            this->ngayM1_allData->Name = L"ngayM1_allData";
            this->ngayM1_allData->ReadOnly = true;
            this->ngayM1_allData->Width = 125;
            // 
            // mui2_allData
            // 
            this->mui2_allData->HeaderText = L"Tiêm mũi 2";
            this->mui2_allData->MinimumWidth = 6;
            this->mui2_allData->Name = L"mui2_allData";
            this->mui2_allData->ReadOnly = true;
            this->mui2_allData->Width = 125;
            // 
            // ngay_M2_allData
            // 
            this->ngay_M2_allData->HeaderText = L"Ngày tiêm mũi 2";
            this->ngay_M2_allData->MinimumWidth = 6;
            this->ngay_M2_allData->Name = L"ngay_M2_allData";
            this->ngay_M2_allData->ReadOnly = true;
            this->ngay_M2_allData->Width = 125;
            // 
            // exportData_vaccination
            // 
            this->exportData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->exportData_vaccination->Controls->Add(this->bt_saveData_vaccination);
            this->exportData_vaccination->Controls->Add(this->bt_loadData_vaccination);
            this->exportData_vaccination->Controls->Add(this->bt_modData_vaccination);
            this->exportData_vaccination->Controls->Add(this->button6);
            this->exportData_vaccination->Controls->Add(this->view_exportData_vaccination);
            this->exportData_vaccination->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->exportData_vaccination->Location = System::Drawing::Point(0, 51);
            this->exportData_vaccination->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_vaccination->Name = L"exportData_vaccination";
            this->exportData_vaccination->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_vaccination->Size = System::Drawing::Size(654, 417);
            this->exportData_vaccination->TabIndex = 8;
            this->exportData_vaccination->TabStop = false;
            this->exportData_vaccination->Text = L"Dữ liệu tiêm chủng";
            this->exportData_vaccination->Visible = false;
            // 
            // bt_saveData_vaccination
            // 
            this->bt_saveData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_saveData_vaccination->Location = System::Drawing::Point(551, 377);
            this->bt_saveData_vaccination->Name = L"bt_saveData_vaccination";
            this->bt_saveData_vaccination->Size = System::Drawing::Size(91, 30);
            this->bt_saveData_vaccination->TabIndex = 4;
            this->bt_saveData_vaccination->Text = L"Lưu";
            this->bt_saveData_vaccination->UseVisualStyleBackColor = true;
            // 
            // bt_loadData_vaccination
            // 
            this->bt_loadData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_loadData_vaccination->Location = System::Drawing::Point(279, 377);
            this->bt_loadData_vaccination->Name = L"bt_loadData_vaccination";
            this->bt_loadData_vaccination->Size = System::Drawing::Size(130, 30);
            this->bt_loadData_vaccination->TabIndex = 3;
            this->bt_loadData_vaccination->Text = L"Tải dữ liệu";
            this->bt_loadData_vaccination->UseVisualStyleBackColor = true;
            this->bt_loadData_vaccination->Click += gcnew System::EventHandler(this, &Form1::bt_loadData_vaccination_Click);
            // 
            // bt_modData_vaccination
            // 
            this->bt_modData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_modData_vaccination->Location = System::Drawing::Point(415, 377);
            this->bt_modData_vaccination->Name = L"bt_modData_vaccination";
            this->bt_modData_vaccination->Size = System::Drawing::Size(130, 30);
            this->bt_modData_vaccination->TabIndex = 2;
            this->bt_modData_vaccination->Text = L"Chỉnh sửa";
            this->bt_modData_vaccination->UseVisualStyleBackColor = true;
            // 
            // button6
            // 
            this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button6->Location = System::Drawing::Point(551, 388);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(0, 0);
            this->button6->TabIndex = 1;
            this->button6->Text = L"button6";
            this->button6->UseVisualStyleBackColor = true;
            // 
            // view_exportData_vaccination
            // 
            this->view_exportData_vaccination->AllowUserToAddRows = false;
            this->view_exportData_vaccination->AllowUserToDeleteRows = false;
            this->view_exportData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_exportData_vaccination->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_exportData_vaccination->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->fullName3,
                    this->mui1, this->ngay_M1, this->mui2, this->ngay_M2
            });
            this->view_exportData_vaccination->Location = System::Drawing::Point(10, 24);
            this->view_exportData_vaccination->Name = L"view_exportData_vaccination";
            this->view_exportData_vaccination->ReadOnly = true;
            this->view_exportData_vaccination->RowHeadersWidth = 51;
            this->view_exportData_vaccination->RowTemplate->Height = 24;
            this->view_exportData_vaccination->Size = System::Drawing::Size(644, 342);
            this->view_exportData_vaccination->TabIndex = 0;
            // 
            // fullName3
            // 
            this->fullName3->HeaderText = L"Họ và tên";
            this->fullName3->MinimumWidth = 6;
            this->fullName3->Name = L"fullName3";
            this->fullName3->ReadOnly = true;
            this->fullName3->Width = 125;
            // 
            // mui1
            // 
            this->mui1->HeaderText = L"Mũi số 1";
            this->mui1->MinimumWidth = 6;
            this->mui1->Name = L"mui1";
            this->mui1->ReadOnly = true;
            this->mui1->Width = 125;
            // 
            // ngay_M1
            // 
            this->ngay_M1->HeaderText = L"Ngày tiêm mũi 1";
            this->ngay_M1->MinimumWidth = 6;
            this->ngay_M1->Name = L"ngay_M1";
            this->ngay_M1->ReadOnly = true;
            this->ngay_M1->Width = 125;
            // 
            // mui2
            // 
            this->mui2->HeaderText = L"Mũi số 2";
            this->mui2->MinimumWidth = 6;
            this->mui2->Name = L"mui2";
            this->mui2->ReadOnly = true;
            this->mui2->Width = 125;
            // 
            // ngay_M2
            // 
            this->ngay_M2->HeaderText = L"Ngày tiêm mũi 2";
            this->ngay_M2->MinimumWidth = 6;
            this->ngay_M2->Name = L"ngay_M2";
            this->ngay_M2->ReadOnly = true;
            this->ngay_M2->Width = 125;
            // 
            // exportData_registry
            // 
            this->exportData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->exportData_registry->Controls->Add(this->bt_saveData_registry);
            this->exportData_registry->Controls->Add(this->bt_loadData_registry);
            this->exportData_registry->Controls->Add(this->bt_modData_registry);
            this->exportData_registry->Controls->Add(this->button5);
            this->exportData_registry->Controls->Add(this->view_exportData_registry);
            this->exportData_registry->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->exportData_registry->Location = System::Drawing::Point(0, 51);
            this->exportData_registry->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_registry->Name = L"exportData_registry";
            this->exportData_registry->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_registry->Size = System::Drawing::Size(654, 417);
            this->exportData_registry->TabIndex = 7;
            this->exportData_registry->TabStop = false;
            this->exportData_registry->Text = L"Dữ liệu đăng ký";
            this->exportData_registry->Visible = false;
            // 
            // bt_saveData_registry
            // 
            this->bt_saveData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_saveData_registry->Location = System::Drawing::Point(551, 377);
            this->bt_saveData_registry->Name = L"bt_saveData_registry";
            this->bt_saveData_registry->Size = System::Drawing::Size(91, 30);
            this->bt_saveData_registry->TabIndex = 4;
            this->bt_saveData_registry->Text = L"Lưu";
            this->bt_saveData_registry->UseVisualStyleBackColor = true;
            // 
            // bt_loadData_registry
            // 
            this->bt_loadData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_loadData_registry->Location = System::Drawing::Point(279, 377);
            this->bt_loadData_registry->Name = L"bt_loadData_registry";
            this->bt_loadData_registry->Size = System::Drawing::Size(130, 30);
            this->bt_loadData_registry->TabIndex = 3;
            this->bt_loadData_registry->Text = L"Tải dữ liệu";
            this->bt_loadData_registry->UseVisualStyleBackColor = true;
            this->bt_loadData_registry->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
            // 
            // bt_modData_registry
            // 
            this->bt_modData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_modData_registry->Location = System::Drawing::Point(415, 377);
            this->bt_modData_registry->Name = L"bt_modData_registry";
            this->bt_modData_registry->Size = System::Drawing::Size(130, 30);
            this->bt_modData_registry->TabIndex = 2;
            this->bt_modData_registry->Text = L"Chỉnh sửa";
            this->bt_modData_registry->UseVisualStyleBackColor = true;
            // 
            // button5
            // 
            this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button5->Location = System::Drawing::Point(551, 388);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(0, 0);
            this->button5->TabIndex = 1;
            this->button5->Text = L"button5";
            this->button5->UseVisualStyleBackColor = true;
            // 
            // view_exportData_registry
            // 
            this->view_exportData_registry->AllowUserToAddRows = false;
            this->view_exportData_registry->AllowUserToDeleteRows = false;
            this->view_exportData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_exportData_registry->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_exportData_registry->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->fullName2,
                    this->ma_DK, this->ngay_DK, this->noi_DK
            });
            this->view_exportData_registry->Location = System::Drawing::Point(10, 24);
            this->view_exportData_registry->Name = L"view_exportData_registry";
            this->view_exportData_registry->ReadOnly = true;
            this->view_exportData_registry->RowHeadersWidth = 51;
            this->view_exportData_registry->RowTemplate->Height = 24;
            this->view_exportData_registry->Size = System::Drawing::Size(644, 342);
            this->view_exportData_registry->TabIndex = 0;
            // 
            // fullName2
            // 
            this->fullName2->HeaderText = L"Họ và tên";
            this->fullName2->MinimumWidth = 6;
            this->fullName2->Name = L"fullName2";
            this->fullName2->ReadOnly = true;
            this->fullName2->Width = 125;
            // 
            // ma_DK
            // 
            this->ma_DK->HeaderText = L"Mã đăng ký";
            this->ma_DK->MinimumWidth = 6;
            this->ma_DK->Name = L"ma_DK";
            this->ma_DK->ReadOnly = true;
            this->ma_DK->Width = 125;
            // 
            // ngay_DK
            // 
            this->ngay_DK->HeaderText = L"Ngày đăng ký";
            this->ngay_DK->MinimumWidth = 6;
            this->ngay_DK->Name = L"ngay_DK";
            this->ngay_DK->ReadOnly = true;
            this->ngay_DK->Width = 125;
            // 
            // noi_DK
            // 
            this->noi_DK->HeaderText = L"Nơi đăng ký";
            this->noi_DK->MinimumWidth = 6;
            this->noi_DK->Name = L"noi_DK";
            this->noi_DK->ReadOnly = true;
            this->noi_DK->Width = 125;
            // 
            // exportData_people
            // 
            this->exportData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->exportData_people->Controls->Add(this->bt_saveData_people);
            this->exportData_people->Controls->Add(this->bt_loadData_people);
            this->exportData_people->Controls->Add(this->bt_modData_people);
            this->exportData_people->Controls->Add(this->button1);
            this->exportData_people->Controls->Add(this->view_exportData_people);
            this->exportData_people->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->exportData_people->Location = System::Drawing::Point(0, 51);
            this->exportData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_people->Name = L"exportData_people";
            this->exportData_people->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_people->Size = System::Drawing::Size(654, 417);
            this->exportData_people->TabIndex = 6;
            this->exportData_people->TabStop = false;
            this->exportData_people->Text = L"Dữ liệu công dân";
            this->exportData_people->Visible = false;
            // 
            // bt_saveData_people
            // 
            this->bt_saveData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_saveData_people->Location = System::Drawing::Point(551, 377);
            this->bt_saveData_people->Name = L"bt_saveData_people";
            this->bt_saveData_people->Size = System::Drawing::Size(91, 30);
            this->bt_saveData_people->TabIndex = 4;
            this->bt_saveData_people->Text = L"Lưu";
            this->bt_saveData_people->UseVisualStyleBackColor = true;
            // 
            // bt_loadData_people
            // 
            this->bt_loadData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_loadData_people->Location = System::Drawing::Point(279, 377);
            this->bt_loadData_people->Name = L"bt_loadData_people";
            this->bt_loadData_people->Size = System::Drawing::Size(130, 30);
            this->bt_loadData_people->TabIndex = 3;
            this->bt_loadData_people->Text = L"Tải dữ liệu";
            this->bt_loadData_people->UseVisualStyleBackColor = true;
            this->bt_loadData_people->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // bt_modData_people
            // 
            this->bt_modData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_modData_people->Location = System::Drawing::Point(415, 377);
            this->bt_modData_people->Name = L"bt_modData_people";
            this->bt_modData_people->Size = System::Drawing::Size(130, 30);
            this->bt_modData_people->TabIndex = 2;
            this->bt_modData_people->Text = L"Chỉnh sửa";
            this->bt_modData_people->UseVisualStyleBackColor = true;
            this->bt_modData_people->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button1->Location = System::Drawing::Point(551, 388);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(0, 0);
            this->button1->TabIndex = 1;
            this->button1->Text = L"button1";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // view_exportData_people
            // 
            this->view_exportData_people->AllowUserToAddRows = false;
            this->view_exportData_people->AllowUserToDeleteRows = false;
            this->view_exportData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_exportData_people->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_exportData_people->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
                this->ma_CD,
                    this->fullName, this->sex, this->birth, this->phone, this->so_BHXH, this->so_CMND, this->address
            });
            this->view_exportData_people->Location = System::Drawing::Point(10, 24);
            this->view_exportData_people->Name = L"view_exportData_people";
            this->view_exportData_people->ReadOnly = true;
            this->view_exportData_people->RowHeadersWidth = 51;
            this->view_exportData_people->RowTemplate->Height = 24;
            this->view_exportData_people->Size = System::Drawing::Size(644, 342);
            this->view_exportData_people->TabIndex = 0;
            // 
            // ma_CD
            // 
            this->ma_CD->HeaderText = L"Mã CD";
            this->ma_CD->MinimumWidth = 6;
            this->ma_CD->Name = L"ma_CD";
            this->ma_CD->ReadOnly = true;
            this->ma_CD->Width = 125;
            // 
            // fullName
            // 
            this->fullName->HeaderText = L"Họ và tên";
            this->fullName->MinimumWidth = 6;
            this->fullName->Name = L"fullName";
            this->fullName->ReadOnly = true;
            this->fullName->Width = 125;
            // 
            // sex
            // 
            this->sex->HeaderText = L"Giới tính";
            this->sex->MinimumWidth = 6;
            this->sex->Name = L"sex";
            this->sex->ReadOnly = true;
            this->sex->Width = 125;
            // 
            // birth
            // 
            this->birth->HeaderText = L"Ngày sinh";
            this->birth->MinimumWidth = 6;
            this->birth->Name = L"birth";
            this->birth->ReadOnly = true;
            this->birth->Width = 125;
            // 
            // phone
            // 
            this->phone->HeaderText = L"SĐT";
            this->phone->MinimumWidth = 6;
            this->phone->Name = L"phone";
            this->phone->ReadOnly = true;
            this->phone->Width = 125;
            // 
            // so_BHXH
            // 
            this->so_BHXH->HeaderText = L"BHXH";
            this->so_BHXH->MinimumWidth = 6;
            this->so_BHXH->Name = L"so_BHXH";
            this->so_BHXH->ReadOnly = true;
            this->so_BHXH->Width = 125;
            // 
            // so_CMND
            // 
            this->so_CMND->HeaderText = L"CMND/CCCD";
            this->so_CMND->MinimumWidth = 6;
            this->so_CMND->Name = L"so_CMND";
            this->so_CMND->ReadOnly = true;
            this->so_CMND->Width = 125;
            // 
            // address
            // 
            this->address->HeaderText = L"Địa chỉ";
            this->address->MinimumWidth = 6;
            this->address->Name = L"address";
            this->address->ReadOnly = true;
            this->address->Width = 125;
            // 
            // box_searchData
            // 
            this->box_searchData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_searchData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_searchData->Location = System::Drawing::Point(0, 51);
            this->box_searchData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_searchData->Name = L"box_searchData";
            this->box_searchData->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_searchData->Size = System::Drawing::Size(654, 417);
            this->box_searchData->TabIndex = 5;
            this->box_searchData->TabStop = false;
            this->box_searchData->Text = L"Tìm kiếm";
            this->box_searchData->Visible = false;
            // 
            // dataManager_menu
            // 
            this->dataManager_menu->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->dataManager_menu->ImageScalingSize = System::Drawing::Size(20, 20);
            this->dataManager_menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->dataManager_input,
                    this->dataManager_output
            });
            this->dataManager_menu->Location = System::Drawing::Point(3, 22);
            this->dataManager_menu->Name = L"dataManager_menu";
            this->dataManager_menu->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
            this->dataManager_menu->Size = System::Drawing::Size(648, 28);
            this->dataManager_menu->TabIndex = 7;
            this->dataManager_menu->Text = L"menuStrip1";
            // 
            // dataManager_input
            // 
            this->dataManager_input->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->toolStripMenuItem2,
                    this->sortData, this->deleteData, this->searchData
            });
            this->dataManager_input->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dataManager_input->Name = L"dataManager_input";
            this->dataManager_input->Size = System::Drawing::Size(149, 24);
            this->dataManager_input->Text = L"Chỉnh sửa dữ liệu";
            // 
            // toolStripMenuItem2
            // 
            this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->inputFile,
                    this->inputHand
            });
            this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
            this->toolStripMenuItem2->Size = System::Drawing::Size(205, 26);
            this->toolStripMenuItem2->Text = L"Nhập dữ liệu";
            // 
            // inputFile
            // 
            this->inputFile->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputFile->Name = L"inputFile";
            this->inputFile->Size = System::Drawing::Size(216, 26);
            this->inputFile->Text = L"Từ tập tin dữ liệu";
            this->inputFile->Click += gcnew System::EventHandler(this, &Form1::inputFile_Click);
            // 
            // inputHand
            // 
            this->inputHand->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputHand->Name = L"inputHand";
            this->inputHand->Size = System::Drawing::Size(216, 26);
            this->inputHand->Text = L"Thủ công";
            this->inputHand->Click += gcnew System::EventHandler(this, &Form1::inputHand_Click);
            // 
            // sortData
            // 
            this->sortData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->sortData->Name = L"sortData";
            this->sortData->Size = System::Drawing::Size(205, 26);
            this->sortData->Text = L"Sắp xếp dữ liệu";
            this->sortData->Click += gcnew System::EventHandler(this, &Form1::sortData_Click_1);
            // 
            // deleteData
            // 
            this->deleteData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->deleteData->Name = L"deleteData";
            this->deleteData->Size = System::Drawing::Size(205, 26);
            this->deleteData->Text = L"Xoá dữ liệu";
            this->deleteData->Click += gcnew System::EventHandler(this, &Form1::deleteData_Click_1);
            // 
            // searchData
            // 
            this->searchData->Name = L"searchData";
            this->searchData->Size = System::Drawing::Size(205, 26);
            this->searchData->Text = L"Tìm kiếm";
            this->searchData->Click += gcnew System::EventHandler(this, &Form1::searchData_Click);
            // 
            // dataManager_output
            // 
            this->dataManager_output->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->toolStripMenuItem8,
                    this->toolStripMenuItem9, this->toolStripMenuItem10, this->xuấtToànBộDữLiệuToolStripMenuItem
            });
            this->dataManager_output->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dataManager_output->Name = L"dataManager_output";
            this->dataManager_output->Size = System::Drawing::Size(174, 24);
            this->dataManager_output->Text = L"Xem dữ liệu đã nhập";
            // 
            // toolStripMenuItem8
            // 
            this->toolStripMenuItem8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
            this->toolStripMenuItem8->Size = System::Drawing::Size(229, 26);
            this->toolStripMenuItem8->Text = L"Dữ liệu công dân";
            this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem8_Click);
            // 
            // toolStripMenuItem9
            // 
            this->toolStripMenuItem9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
            this->toolStripMenuItem9->Size = System::Drawing::Size(229, 26);
            this->toolStripMenuItem9->Text = L"Dữ liệu đăng ký";
            this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem9_Click);
            // 
            // toolStripMenuItem10
            // 
            this->toolStripMenuItem10->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
            this->toolStripMenuItem10->Size = System::Drawing::Size(229, 26);
            this->toolStripMenuItem10->Text = L"Dữ liệu tiêm chủng";
            this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem10_Click);
            // 
            // xuấtToànBộDữLiệuToolStripMenuItem
            // 
            this->xuấtToànBộDữLiệuToolStripMenuItem->Name = L"xuấtToànBộDữLiệuToolStripMenuItem";
            this->xuấtToànBộDữLiệuToolStripMenuItem->Size = System::Drawing::Size(229, 26);
            this->xuấtToànBộDữLiệuToolStripMenuItem->Text = L"Toàn bộ dữ liệu";
            this->xuấtToànBộDữLiệuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::xuấtToànBộDữLiệuToolStripMenuItem_Click);
            // 
            // box_deleteData
            // 
            this->box_deleteData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_deleteData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_deleteData->Location = System::Drawing::Point(0, 51);
            this->box_deleteData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_deleteData->Name = L"box_deleteData";
            this->box_deleteData->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_deleteData->Size = System::Drawing::Size(654, 417);
            this->box_deleteData->TabIndex = 4;
            this->box_deleteData->TabStop = false;
            this->box_deleteData->Text = L"Xoá dữ liệu";
            this->box_deleteData->Visible = false;
            // 
            // box_sortData
            // 
            this->box_sortData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_sortData->Controls->Add(this->bt_view_sortData);
            this->box_sortData->Controls->Add(this->bt_sortData);
            this->box_sortData->Controls->Add(this->box_sortType);
            this->box_sortData->Controls->Add(this->box_sortSelect);
            this->box_sortData->Controls->Add(this->label6);
            this->box_sortData->Controls->Add(this->label5);
            this->box_sortData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_sortData->Location = System::Drawing::Point(0, 51);
            this->box_sortData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_sortData->Name = L"box_sortData";
            this->box_sortData->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_sortData->Size = System::Drawing::Size(654, 417);
            this->box_sortData->TabIndex = 3;
            this->box_sortData->TabStop = false;
            this->box_sortData->Text = L"Sắp xếp dữ liệu";
            this->box_sortData->Visible = false;
            // 
            // bt_view_sortData
            // 
            this->bt_view_sortData->Location = System::Drawing::Point(407, 208);
            this->bt_view_sortData->Name = L"bt_view_sortData";
            this->bt_view_sortData->Size = System::Drawing::Size(75, 30);
            this->bt_view_sortData->TabIndex = 5;
            this->bt_view_sortData->Text = L"Xem";
            this->bt_view_sortData->UseVisualStyleBackColor = true;
            this->bt_view_sortData->Click += gcnew System::EventHandler(this, &Form1::button3_Click_2);
            // 
            // bt_sortData
            // 
            this->bt_sortData->Location = System::Drawing::Point(279, 208);
            this->bt_sortData->Name = L"bt_sortData";
            this->bt_sortData->Size = System::Drawing::Size(90, 30);
            this->bt_sortData->TabIndex = 4;
            this->bt_sortData->Text = L"Sắp xếp";
            this->bt_sortData->UseVisualStyleBackColor = true;
            this->bt_sortData->Click += gcnew System::EventHandler(this, &Form1::bt_sortData_Click);
            // 
            // box_sortType
            // 
            this->box_sortType->FormattingEnabled = true;
            this->box_sortType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Tăng dần", L"Giảm dần" });
            this->box_sortType->Location = System::Drawing::Point(279, 150);
            this->box_sortType->Name = L"box_sortType";
            this->box_sortType->Size = System::Drawing::Size(203, 27);
            this->box_sortType->TabIndex = 3;
            // 
            // box_sortSelect
            // 
            this->box_sortSelect->FormattingEnabled = true;
            this->box_sortSelect->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Mã công dân", L"Mã đăng ký", L"Ngày đăng ký",
                    L"Ngày tiêm mũi 1", L"Ngày tiêm mũi 2"
            });
            this->box_sortSelect->Location = System::Drawing::Point(279, 105);
            this->box_sortSelect->Name = L"box_sortSelect";
            this->box_sortSelect->Size = System::Drawing::Size(203, 27);
            this->box_sortSelect->TabIndex = 2;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(129, 153);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(121, 19);
            this->label6->TabIndex = 1;
            this->label6->Text = L"Thứ tự sắp xếp";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(142, 108);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(108, 19);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Sắp xếp theo";
            // 
            // box_inputHand
            // 
            this->box_inputHand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_inputHand->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_inputHand->Location = System::Drawing::Point(0, 51);
            this->box_inputHand->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_inputHand->Name = L"box_inputHand";
            this->box_inputHand->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_inputHand->Size = System::Drawing::Size(654, 417);
            this->box_inputHand->TabIndex = 6;
            this->box_inputHand->TabStop = false;
            this->box_inputHand->Text = L"Nhập dữ liệu thủ công";
            this->box_inputHand->Visible = false;
            // 
            // box_inputFile
            // 
            this->box_inputFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_inputFile->Controls->Add(this->bt_selectFile3);
            this->box_inputFile->Controls->Add(this->bt_selectFile2);
            this->box_inputFile->Controls->Add(this->bt_selectFile1);
            this->box_inputFile->Controls->Add(this->bt_inputFile);
            this->box_inputFile->Controls->Add(this->fileName3);
            this->box_inputFile->Controls->Add(this->fileName2);
            this->box_inputFile->Controls->Add(this->label_fileName3);
            this->box_inputFile->Controls->Add(this->label_fileName1);
            this->box_inputFile->Controls->Add(this->label_fileName2);
            this->box_inputFile->Controls->Add(this->fileName1);
            this->box_inputFile->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_inputFile->Location = System::Drawing::Point(0, 51);
            this->box_inputFile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_inputFile->Name = L"box_inputFile";
            this->box_inputFile->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_inputFile->Size = System::Drawing::Size(654, 417);
            this->box_inputFile->TabIndex = 5;
            this->box_inputFile->TabStop = false;
            this->box_inputFile->Text = L"Nhập dữ liệu từ tập tin";
            this->box_inputFile->Visible = false;
            // 
            // bt_selectFile3
            // 
            this->bt_selectFile3->Location = System::Drawing::Point(512, 117);
            this->bt_selectFile3->Name = L"bt_selectFile3";
            this->bt_selectFile3->Size = System::Drawing::Size(40, 26);
            this->bt_selectFile3->TabIndex = 9;
            this->bt_selectFile3->Text = L"...";
            this->bt_selectFile3->UseVisualStyleBackColor = true;
            this->bt_selectFile3->Click += gcnew System::EventHandler(this, &Form1::bt_selectFile3_Click);
            // 
            // bt_selectFile2
            // 
            this->bt_selectFile2->Location = System::Drawing::Point(512, 80);
            this->bt_selectFile2->Name = L"bt_selectFile2";
            this->bt_selectFile2->Size = System::Drawing::Size(40, 26);
            this->bt_selectFile2->TabIndex = 8;
            this->bt_selectFile2->Text = L"...";
            this->bt_selectFile2->UseVisualStyleBackColor = true;
            this->bt_selectFile2->Click += gcnew System::EventHandler(this, &Form1::bt_selectFile2_Click);
            // 
            // bt_selectFile1
            // 
            this->bt_selectFile1->Location = System::Drawing::Point(512, 43);
            this->bt_selectFile1->Name = L"bt_selectFile1";
            this->bt_selectFile1->Size = System::Drawing::Size(40, 26);
            this->bt_selectFile1->TabIndex = 7;
            this->bt_selectFile1->Text = L"...";
            this->bt_selectFile1->UseVisualStyleBackColor = true;
            this->bt_selectFile1->Click += gcnew System::EventHandler(this, &Form1::bt_selectFile1_Click);
            // 
            // bt_inputFile
            // 
            this->bt_inputFile->Location = System::Drawing::Point(363, 162);
            this->bt_inputFile->Margin = System::Windows::Forms::Padding(4);
            this->bt_inputFile->Name = L"bt_inputFile";
            this->bt_inputFile->Size = System::Drawing::Size(100, 28);
            this->bt_inputFile->TabIndex = 6;
            this->bt_inputFile->Text = L"Nhập";
            this->bt_inputFile->UseVisualStyleBackColor = true;
            this->bt_inputFile->Click += gcnew System::EventHandler(this, &Form1::bt_inputFile_Click);
            // 
            // fileName3
            // 
            this->fileName3->Location = System::Drawing::Point(320, 117);
            this->fileName3->Margin = System::Windows::Forms::Padding(4);
            this->fileName3->Name = L"fileName3";
            this->fileName3->ReadOnly = true;
            this->fileName3->Size = System::Drawing::Size(185, 26);
            this->fileName3->TabIndex = 5;
            // 
            // fileName2
            // 
            this->fileName2->Location = System::Drawing::Point(320, 80);
            this->fileName2->Margin = System::Windows::Forms::Padding(4);
            this->fileName2->Name = L"fileName2";
            this->fileName2->ReadOnly = true;
            this->fileName2->Size = System::Drawing::Size(185, 26);
            this->fileName2->TabIndex = 4;
            // 
            // label_fileName3
            // 
            this->label_fileName3->AutoSize = true;
            this->label_fileName3->Location = System::Drawing::Point(40, 117);
            this->label_fileName3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label_fileName3->Name = L"label_fileName3";
            this->label_fileName3->Size = System::Drawing::Size(236, 19);
            this->label_fileName3->TabIndex = 3;
            this->label_fileName3->Text = L"Nhập file dữ liệu tiêm chủng(*)";
            // 
            // label_fileName1
            // 
            this->label_fileName1->AutoSize = true;
            this->label_fileName1->Location = System::Drawing::Point(40, 43);
            this->label_fileName1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label_fileName1->Name = L"label_fileName1";
            this->label_fileName1->Size = System::Drawing::Size(222, 19);
            this->label_fileName1->TabIndex = 2;
            this->label_fileName1->Text = L"Nhập file dữ liệu công dân(*)";
            // 
            // label_fileName2
            // 
            this->label_fileName2->AutoSize = true;
            this->label_fileName2->Location = System::Drawing::Point(40, 80);
            this->label_fileName2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label_fileName2->Name = L"label_fileName2";
            this->label_fileName2->Size = System::Drawing::Size(165, 19);
            this->label_fileName2->TabIndex = 1;
            this->label_fileName2->Text = L"Nhập file đăng ký (*)";
            // 
            // fileName1
            // 
            this->fileName1->Location = System::Drawing::Point(320, 43);
            this->fileName1->Margin = System::Windows::Forms::Padding(4);
            this->fileName1->Name = L"fileName1";
            this->fileName1->ReadOnly = true;
            this->fileName1->Size = System::Drawing::Size(185, 26);
            this->fileName1->TabIndex = 0;
            // 
            // accountManager_newFullname
            // 
            this->accountManager_newFullname->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_newFullname->Location = System::Drawing::Point(213, 36);
            this->accountManager_newFullname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_newFullname->Name = L"accountManager_newFullname";
            this->accountManager_newFullname->Size = System::Drawing::Size(175, 26);
            this->accountManager_newFullname->TabIndex = 4;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(12, 39);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(174, 19);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Tên chủ tài khoản mới";
            // 
            // Manager
            // 
            this->Manager->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Manager->Controls->Add(this->loginTab);
            this->Manager->Controls->Add(this->accountManagerTab);
            this->Manager->Controls->Add(this->dataManagerTab);
            this->Manager->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Manager->Location = System::Drawing::Point(12, 12);
            this->Manager->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Manager->Name = L"Manager";
            this->Manager->SelectedIndex = 0;
            this->Manager->Size = System::Drawing::Size(658, 500);
            this->Manager->TabIndex = 1;
            // 
            // loginTab
            // 
            this->loginTab->Controls->Add(this->bt_quit);
            this->loginTab->Controls->Add(this->loginBox);
            this->loginTab->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->loginTab->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->loginTab->Location = System::Drawing::Point(4, 28);
            this->loginTab->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginTab->Name = L"loginTab";
            this->loginTab->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginTab->Size = System::Drawing::Size(650, 468);
            this->loginTab->TabIndex = 0;
            this->loginTab->Text = L"Đăng nhập";
            this->loginTab->UseVisualStyleBackColor = true;
            // 
            // bt_quit
            // 
            this->bt_quit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_quit->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_quit->Location = System::Drawing::Point(570, 433);
            this->bt_quit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_quit->Name = L"bt_quit";
            this->bt_quit->Size = System::Drawing::Size(75, 28);
            this->bt_quit->TabIndex = 1;
            this->bt_quit->Text = L"Thoát";
            this->bt_quit->UseVisualStyleBackColor = true;
            // 
            // loginBox
            // 
            this->loginBox->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->loginBox->AutoSize = true;
            this->loginBox->BackColor = System::Drawing::Color::LightGray;
            this->loginBox->Controls->Add(this->text3);
            this->loginBox->Controls->Add(this->loginBox_status);
            this->loginBox->Controls->Add(this->bt_showPassword);
            this->loginBox->Controls->Add(this->bt_login);
            this->loginBox->Controls->Add(this->loginBox_password);
            this->loginBox->Controls->Add(this->loginBox_username);
            this->loginBox->Controls->Add(this->text2);
            this->loginBox->Controls->Add(this->text1);
            this->loginBox->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->loginBox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->loginBox->Location = System::Drawing::Point(133, 142);
            this->loginBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginBox->Name = L"loginBox";
            this->loginBox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginBox->Size = System::Drawing::Size(389, 198);
            this->loginBox->TabIndex = 0;
            this->loginBox->TabStop = false;
            this->loginBox->Text = L"Thông tin đăng nhập";
            // 
            // text3
            // 
            this->text3->AutoSize = true;
            this->text3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text3->Location = System::Drawing::Point(72, 149);
            this->text3->Name = L"text3";
            this->text3->Size = System::Drawing::Size(83, 19);
            this->text3->TabIndex = 7;
            this->text3->Text = L"Trạng thái";
            // 
            // loginBox_status
            // 
            this->loginBox_status->AutoSize = true;
            this->loginBox_status->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->loginBox_status->ForeColor = System::Drawing::Color::Red;
            this->loginBox_status->Location = System::Drawing::Point(168, 149);
            this->loginBox_status->Name = L"loginBox_status";
            this->loginBox_status->Size = System::Drawing::Size(130, 19);
            this->loginBox_status->TabIndex = 6;
            this->loginBox_status->Text = L"Chưa đăng nhập";
            // 
            // bt_showPassword
            // 
            this->bt_showPassword->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_showPassword->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->bt_showPassword->Location = System::Drawing::Point(331, 78);
            this->bt_showPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_showPassword->Name = L"bt_showPassword";
            this->bt_showPassword->Size = System::Drawing::Size(31, 25);
            this->bt_showPassword->TabIndex = 5;
            this->bt_showPassword->UseVisualStyleBackColor = true;
            this->bt_showPassword->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::bt_showPassword_MouseDown);
            this->bt_showPassword->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::bt_showPassword_MouseUp);
            // 
            // bt_login
            // 
            this->bt_login->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_login->Location = System::Drawing::Point(184, 113);
            this->bt_login->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_login->Name = L"bt_login";
            this->bt_login->Size = System::Drawing::Size(125, 30);
            this->bt_login->TabIndex = 4;
            this->bt_login->Text = L"Đăng nhập";
            this->bt_login->UseVisualStyleBackColor = true;
            this->bt_login->Click += gcnew System::EventHandler(this, &Form1::bt_login_Click);
            // 
            // loginBox_password
            // 
            this->loginBox_password->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->loginBox_password->Location = System::Drawing::Point(171, 78);
            this->loginBox_password->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginBox_password->Name = L"loginBox_password";
            this->loginBox_password->PasswordChar = '*';
            this->loginBox_password->Size = System::Drawing::Size(152, 26);
            this->loginBox_password->TabIndex = 3;
            // 
            // loginBox_username
            // 
            this->loginBox_username->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->loginBox_username->Location = System::Drawing::Point(171, 47);
            this->loginBox_username->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginBox_username->Name = L"loginBox_username";
            this->loginBox_username->Size = System::Drawing::Size(152, 26);
            this->loginBox_username->TabIndex = 2;
            // 
            // text2
            // 
            this->text2->AutoSize = true;
            this->text2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text2->Location = System::Drawing::Point(76, 81);
            this->text2->Name = L"text2";
            this->text2->Size = System::Drawing::Size(78, 19);
            this->text2->TabIndex = 1;
            this->text2->Text = L"Mật khẩu";
            // 
            // text1
            // 
            this->text1->AutoSize = true;
            this->text1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text1->Location = System::Drawing::Point(33, 50);
            this->text1->Name = L"text1";
            this->text1->Size = System::Drawing::Size(118, 19);
            this->text1->TabIndex = 0;
            this->text1->Text = L"Tên đăng nhập";
            // 
            // accountManagerTab
            // 
            this->accountManagerTab->Controls->Add(this->bt_logout);
            this->accountManagerTab->Controls->Add(this->accountManager_loginAlert);
            this->accountManagerTab->Controls->Add(this->bt_refresh);
            this->accountManagerTab->Controls->Add(this->accountManager_changer);
            this->accountManagerTab->Controls->Add(this->accountManager_Info);
            this->accountManagerTab->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManagerTab->Location = System::Drawing::Point(4, 28);
            this->accountManagerTab->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManagerTab->Name = L"accountManagerTab";
            this->accountManagerTab->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManagerTab->Size = System::Drawing::Size(650, 468);
            this->accountManagerTab->TabIndex = 1;
            this->accountManagerTab->Text = L"Quản lý tài khoản";
            this->accountManagerTab->UseVisualStyleBackColor = true;
            // 
            // bt_logout
            // 
            this->bt_logout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_logout->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_logout->Location = System::Drawing::Point(501, 363);
            this->bt_logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_logout->Name = L"bt_logout";
            this->bt_logout->Size = System::Drawing::Size(127, 30);
            this->bt_logout->TabIndex = 5;
            this->bt_logout->Text = L"Đăng xuất";
            this->bt_logout->UseVisualStyleBackColor = true;
            this->bt_logout->Visible = false;
            this->bt_logout->Click += gcnew System::EventHandler(this, &Form1::bt_logout_Click);
            // 
            // accountManager_loginAlert
            // 
            this->accountManager_loginAlert->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->accountManager_loginAlert->AutoSize = true;
            this->accountManager_loginAlert->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_loginAlert->Location = System::Drawing::Point(134, 212);
            this->accountManager_loginAlert->Name = L"accountManager_loginAlert";
            this->accountManager_loginAlert->Size = System::Drawing::Size(376, 19);
            this->accountManager_loginAlert->TabIndex = 4;
            this->accountManager_loginAlert->Text = L"Bạn chưa đăng nhập. Hãy đăng nhập để thao tác.";
            // 
            // bt_refresh
            // 
            this->bt_refresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_refresh->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_refresh->Location = System::Drawing::Point(501, 398);
            this->bt_refresh->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_refresh->Name = L"bt_refresh";
            this->bt_refresh->Size = System::Drawing::Size(127, 30);
            this->bt_refresh->TabIndex = 3;
            this->bt_refresh->Text = L"Tải lại";
            this->bt_refresh->UseVisualStyleBackColor = true;
            this->bt_refresh->Visible = false;
            this->bt_refresh->Click += gcnew System::EventHandler(this, &Form1::bt_refresh_Click);
            // 
            // accountManager_changer
            // 
            this->accountManager_changer->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->accountManager_changer->Controls->Add(this->accountManager_tabChanger);
            this->accountManager_changer->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_changer->Location = System::Drawing::Point(23, 234);
            this->accountManager_changer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_changer->Name = L"accountManager_changer";
            this->accountManager_changer->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_changer->Size = System::Drawing::Size(459, 192);
            this->accountManager_changer->TabIndex = 2;
            this->accountManager_changer->TabStop = false;
            this->accountManager_changer->Text = L"Cập nhật thông tin tài khoản";
            this->accountManager_changer->Visible = false;
            // 
            // accountManager_tabChanger
            // 
            this->accountManager_tabChanger->Controls->Add(this->tabPage2);
            this->accountManager_tabChanger->Controls->Add(this->tabPage3);
            this->accountManager_tabChanger->Controls->Add(this->tabPage4);
            this->accountManager_tabChanger->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_tabChanger->Location = System::Drawing::Point(5, 23);
            this->accountManager_tabChanger->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_tabChanger->Name = L"accountManager_tabChanger";
            this->accountManager_tabChanger->SelectedIndex = 0;
            this->accountManager_tabChanger->Size = System::Drawing::Size(448, 162);
            this->accountManager_tabChanger->TabIndex = 1;
            this->accountManager_tabChanger->Visible = false;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->bt_saveUsername);
            this->tabPage2->Controls->Add(this->accountManager_newUsername);
            this->tabPage2->Controls->Add(this->label1);
            this->tabPage2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage2->Location = System::Drawing::Point(4, 28);
            this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage2->Size = System::Drawing::Size(440, 130);
            this->tabPage2->TabIndex = 0;
            this->tabPage2->Text = L"Tên tài khoản";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // bt_saveUsername
            // 
            this->bt_saveUsername->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_saveUsername->Location = System::Drawing::Point(181, 89);
            this->bt_saveUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveUsername->Name = L"bt_saveUsername";
            this->bt_saveUsername->Size = System::Drawing::Size(75, 31);
            this->bt_saveUsername->TabIndex = 2;
            this->bt_saveUsername->Text = L"Lưu";
            this->bt_saveUsername->UseVisualStyleBackColor = true;
            this->bt_saveUsername->Click += gcnew System::EventHandler(this, &Form1::bt_saveUsername_Click);
            // 
            // accountManager_newUsername
            // 
            this->accountManager_newUsername->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_newUsername->Location = System::Drawing::Point(200, 33);
            this->accountManager_newUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_newUsername->Name = L"accountManager_newUsername";
            this->accountManager_newUsername->Size = System::Drawing::Size(175, 26);
            this->accountManager_newUsername->TabIndex = 1;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(20, 36);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(151, 19);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Tên đăng nhập mới";
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->accountManager_newPasswordCheck);
            this->tabPage3->Controls->Add(this->label3);
            this->tabPage3->Controls->Add(this->bt_savePassword);
            this->tabPage3->Controls->Add(this->accountManager_newPassword);
            this->tabPage3->Controls->Add(this->label2);
            this->tabPage3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage3->Location = System::Drawing::Point(4, 28);
            this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage3->Size = System::Drawing::Size(440, 130);
            this->tabPage3->TabIndex = 1;
            this->tabPage3->Text = L"Mật khẩu";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // accountManager_newPasswordCheck
            // 
            this->accountManager_newPasswordCheck->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_newPasswordCheck->Location = System::Drawing::Point(200, 54);
            this->accountManager_newPasswordCheck->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_newPasswordCheck->Name = L"accountManager_newPasswordCheck";
            this->accountManager_newPasswordCheck->Size = System::Drawing::Size(175, 26);
            this->accountManager_newPasswordCheck->TabIndex = 7;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(8, 57);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(153, 19);
            this->label3->TabIndex = 6;
            this->label3->Text = L"Xác nhận mật khẩu";
            // 
            // bt_savePassword
            // 
            this->bt_savePassword->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_savePassword->Location = System::Drawing::Point(181, 89);
            this->bt_savePassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_savePassword->Name = L"bt_savePassword";
            this->bt_savePassword->Size = System::Drawing::Size(75, 31);
            this->bt_savePassword->TabIndex = 5;
            this->bt_savePassword->Text = L"Lưu";
            this->bt_savePassword->UseVisualStyleBackColor = true;
            this->bt_savePassword->Click += gcnew System::EventHandler(this, &Form1::bt_savePassword_Click);
            // 
            // accountManager_newPassword
            // 
            this->accountManager_newPassword->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_newPassword->Location = System::Drawing::Point(200, 14);
            this->accountManager_newPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_newPassword->Name = L"accountManager_newPassword";
            this->accountManager_newPassword->Size = System::Drawing::Size(175, 26);
            this->accountManager_newPassword->TabIndex = 4;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(8, 17);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(111, 19);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Mật khẩu mới";
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->bt_saveFullname);
            this->tabPage4->Controls->Add(this->accountManager_newFullname);
            this->tabPage4->Controls->Add(this->label4);
            this->tabPage4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage4->Location = System::Drawing::Point(4, 28);
            this->tabPage4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage4->Size = System::Drawing::Size(440, 130);
            this->tabPage4->TabIndex = 2;
            this->tabPage4->Text = L"Tên chủ tài khoản";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // accountManager_Info
            // 
            this->accountManager_Info->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->accountManager_Info->Controls->Add(this->accountManager_permission);
            this->accountManager_Info->Controls->Add(this->accountManager_fullname);
            this->accountManager_Info->Controls->Add(this->accountManager_password);
            this->accountManager_Info->Controls->Add(this->accountManager_username);
            this->accountManager_Info->Controls->Add(this->accoutManager_text4);
            this->accountManager_Info->Controls->Add(this->accountManager_text3);
            this->accountManager_Info->Controls->Add(this->accountManager_text2);
            this->accountManager_Info->Controls->Add(this->accoutManager_text1);
            this->accountManager_Info->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_Info->Location = System::Drawing::Point(23, 43);
            this->accountManager_Info->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_Info->Name = L"accountManager_Info";
            this->accountManager_Info->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->accountManager_Info->Size = System::Drawing::Size(407, 158);
            this->accountManager_Info->TabIndex = 0;
            this->accountManager_Info->TabStop = false;
            this->accountManager_Info->Text = L"Thông tin tài khoản";
            this->accountManager_Info->Visible = false;
            // 
            // dataManager_loginAlert
            // 
            this->dataManager_loginAlert->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->dataManager_loginAlert->AutoSize = true;
            this->dataManager_loginAlert->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dataManager_loginAlert->Location = System::Drawing::Point(137, 173);
            this->dataManager_loginAlert->Name = L"dataManager_loginAlert";
            this->dataManager_loginAlert->Size = System::Drawing::Size(376, 19);
            this->dataManager_loginAlert->TabIndex = 5;
            this->dataManager_loginAlert->Text = L"Bạn chưa đăng nhập. Hãy đăng nhập để thao tác.";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(682, 524);
            this->Controls->Add(this->Manager);
            this->Name = L"Form1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"COVID19_VACCINATION_MANAGER";
            this->dataManagerTab->ResumeLayout(false);
            this->boxDataManager->ResumeLayout(false);
            this->boxDataManager->PerformLayout();
            this->export_allData_people->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportAllData_people))->EndInit();
            this->exportData_vaccination->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_vaccination))->EndInit();
            this->exportData_registry->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_registry))->EndInit();
            this->exportData_people->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_people))->EndInit();
            this->dataManager_menu->ResumeLayout(false);
            this->dataManager_menu->PerformLayout();
            this->box_sortData->ResumeLayout(false);
            this->box_sortData->PerformLayout();
            this->box_inputFile->ResumeLayout(false);
            this->box_inputFile->PerformLayout();
            this->Manager->ResumeLayout(false);
            this->loginTab->ResumeLayout(false);
            this->loginTab->PerformLayout();
            this->loginBox->ResumeLayout(false);
            this->loginBox->PerformLayout();
            this->accountManagerTab->ResumeLayout(false);
            this->accountManagerTab->PerformLayout();
            this->accountManager_changer->ResumeLayout(false);
            this->accountManager_tabChanger->ResumeLayout(false);
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            this->accountManager_Info->ResumeLayout(false);
            this->accountManager_Info->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void bt_showPassword_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void bt_login_Click(System::Object^ sender, System::EventArgs^ e) {
        loginStatus = false;
        if ((loginBox_username->Text == ADMIN0) && (loginBox_password->Text == PASS0))
        {
            this->loginStatus = true;
            this->currentUser_ID = 0;
        }
        else if ((loginBox_username->Text == ADMIN1) && (loginBox_password->Text == PASS1))
        {
            this->loginStatus = true;
            this->currentUser_ID = 1;
        }
        else if ((loginBox_username->Text == ADMIN2) && (loginBox_password->Text == PASS2))
        {
            this->loginStatus = true;
            this->currentUser_ID = 2;
        }
        else
        {
            this->loginStatus = false;
            this->currentUser_ID = NULL;
        }
        checkLoginStatus();
    }

    private: System::Void bt_showPassword_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        this->loginBox_password->PasswordChar = char::MinValue;
    }
    private: System::Void bt_showPassword_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        this->loginBox_password->PasswordChar = char::MaxValue;
        this->loginBox_password->PasswordChar = '*';
    }
    private: System::Void bt_saveUsername_Click(System::Object^ sender, System::EventArgs^ e) {
        if (accountManager_newUsername->Text != "")
        {
            switch (currentUser_ID)
            {
            case 0:
                ADMIN0 = accountManager_newUsername->Text;
                break;
            case 1:
                ADMIN1 = accountManager_newUsername->Text;
                break;
            case 2:
                ADMIN2 = accountManager_newUsername->Text;
                break;
            default:

                break;
            }
        }
        else MessageBox::Show(L"Tên đăng nhập không thể để trống.\nHãy nhập lại.", L"THÔNG BÁO");
        checkUser();
    }
    private: System::Void bt_savePassword_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ newPassword = accountManager_newPassword->Text, ^ newPasswordCheck = accountManager_newPasswordCheck->Text;
        if (newPassword != "")
        {
            if (newPassword == newPasswordCheck)
            {
                switch (currentUser_ID)
                {
                case 0:
                    PASS0 = accountManager_newPassword->Text;
                    break;
                case 1:
                    PASS1 = accountManager_newPassword->Text;
                    break;
                case 2:
                    PASS2 = accountManager_newPassword->Text;
                    break;
                default:

                    break;
                }
            }
            else MessageBox::Show(L"Mật khẩu không trùng khớp.\nHãy nhập lại.", L"THÔNG BÁO");
        }
        else MessageBox::Show(L"Mật khẩu không thể để trống.\nHãy nhập lại.", L"THÔNG BÁO");
        checkUser();
    }
    private: System::Void bt_saveFullname_Click(System::Object^ sender, System::EventArgs^ e) {
        if (accountManager_newFullname->Text != "")
        {
            switch (currentUser_ID)
            {
            case 0:
                NAME0 = accountManager_newFullname->Text;
                break;
            case 1:
                NAME1 = accountManager_newFullname->Text;
                break;
            case 2:
                NAME2 = accountManager_newFullname->Text;
                break;
            default:

                break;
            }
        }
        else MessageBox::Show(L"Tên chủ tài khoản không thể để trống.\nHãy nhập lại.", L"THÔNG BÁO");

        checkUser();
    }
    private: System::Void bt_logout_Click(System::Object^ sender, System::EventArgs^ e) {
        loginStatus = false;
        checkStatus();
    }
    private: System::Void bt_refresh_Click(System::Object^ sender, System::EventArgs^ e) {
        checkUser();
    }
    private: System::Void dataManager_menu_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
    }
    private: System::Void dataManagerTab_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void sortData_Click_1(System::Object^ sender, System::EventArgs^ e) {
        if (loginStatus == true)
        {
            this->box_inputHand->Visible = false;
            this->box_inputFile->Visible = false;
            this->box_sortData->Visible = true;
            this->box_deleteData->Visible = false;
            this->box_searchData->Visible = false;
            this->exportData_people->Visible = false;
            this->exportData_registry->Visible = false;
            this->exportData_vaccination->Visible = false;
            this->export_allData_people->Visible = false;
        }
    }
    private: System::Void deleteData_Click_1(System::Object^ sender, System::EventArgs^ e) {
        if (loginStatus == true)
        {
            this->box_inputHand->Visible = false;
            this->box_inputFile->Visible = false;
            this->box_sortData->Visible = false;
            this->box_deleteData->Visible = true;
            this->box_searchData->Visible = false;
            this->exportData_people->Visible = false;
            this->exportData_registry->Visible = false;
            this->exportData_vaccination->Visible = false;
            this->export_allData_people->Visible = false;
        }
    }
    private: System::Void searchData_Click(System::Object^ sender, System::EventArgs^ e) {
        this->box_searchData->Visible = true;
        this->box_inputHand->Visible = false;
        this->box_inputFile->Visible = false;
        this->box_sortData->Visible = false;
        this->box_deleteData->Visible = false;
        this->exportData_people->Visible = false;
        this->exportData_registry->Visible = false;
        this->exportData_vaccination->Visible = false;
        this->export_allData_people->Visible = false;
    }
    private: System::Void inputHand_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loginStatus == true)
        {
            this->box_inputHand->Visible = true;
            this->box_inputFile->Visible = false;
            this->box_sortData->Visible = false;
            this->box_deleteData->Visible = false;
            this->box_searchData->Visible = false;
            this->exportData_people->Visible = false;
            this->exportData_registry->Visible = false;
            this->exportData_vaccination->Visible = false;
            this->export_allData_people->Visible = false;
        }
    }
    private: System::Void inputFile_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loginStatus == true)
        {
            this->box_inputHand->Visible = false;
            this->box_inputFile->Visible = true;
            this->box_sortData->Visible = false;
            this->box_deleteData->Visible = false;
            this->box_searchData->Visible = false;
            this->exportData_people->Visible = false;
            this->exportData_registry->Visible = false;
            this->exportData_vaccination->Visible = false;
            this->export_allData_people->Visible = false;
        }
    }

    private: System::Void bt_selectFile1_Click(System::Object^ sender, System::EventArgs^ e) {

        OpenFileDialog^ f1 = gcnew OpenFileDialog;
        f1->InitialDirectory = "c:\\";
        f1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
        f1->FilterIndex = 2;
        f1->RestoreDirectory = true;

        if (f1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            this->fileName1->Text = f1->FileName;
        }

    }
    private: System::Void bt_selectFile2_Click(System::Object^ sender, System::EventArgs^ e) {
        OpenFileDialog^ f2 = gcnew OpenFileDialog;
        f2->InitialDirectory = "c:\\";
        f2->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
        f2->FilterIndex = 2;
        f2->RestoreDirectory = true;

        if (f2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            this->fileName2->Text = f2->FileName;
        }
    }
    private: System::Void bt_selectFile3_Click(System::Object^ sender, System::EventArgs^ e) {
        OpenFileDialog^ f3 = gcnew OpenFileDialog;
        f3->InitialDirectory = "c:\\";
        f3->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
        f3->FilterIndex = 2;
        f3->RestoreDirectory = true;

        if (f3->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            this->fileName3->Text = f3->FileName;
        }
    }
    private: System::Void bt_inputFile_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ f1 = fileName1->Text;
        String^ f2 = fileName2->Text;
        String^ f3 = fileName3->Text;
        string path1, path2, path3;
        if ((f1 != "") && (f2 != "") && (f3 != "")) {
            //gọi hàm đọc file
            convertString(f1, path1);
            convertString(f2, path2);
            convertString(f3, path3);
            DN.nhapFile(path1, path2, path3);
            MessageBox::Show(L"Đã nhập dữ liệu", L"THÔNG BÁO");
        }
        else {
            MessageBox::Show(L"Thiếu file.\nBạn phải nhập đủ 3 file dữ liệu đầu vào.", L"THÔNG BÁO");
        }

    }
    private: System::Void table_exportData_full_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        int n = DN.getRows();
        this->view_exportData_people->RowCount = n;
        
        for (int i = 0 ; i < n; i++) {
            //phải convert từ dạng standard string về system string
            this->view_exportData_people->Rows[i]->Cells[0]->Value = gcnew String(DN.get("ma_CD", i).c_str());
            this->view_exportData_people->Rows[i]->Cells[1]->Value = gcnew String(DN.get("fullName", i).c_str());
            this->view_exportData_people->Rows[i]->Cells[2]->Value = gcnew String(DN.get("sex", i).c_str());
            this->view_exportData_people->Rows[i]->Cells[3]->Value = gcnew String(DN.get("birth", i).c_str());
            this->view_exportData_people->Rows[i]->Cells[4]->Value = gcnew String(DN.get("phone", i).c_str());
            this->view_exportData_people->Rows[i]->Cells[5]->Value = gcnew String(DN.get("so_BHXH", i).c_str());
            this->view_exportData_people->Rows[i]->Cells[6]->Value = gcnew String(DN.get("so_CMND", i).c_str());
            this->view_exportData_people->Rows[i]->Cells[7]->Value = gcnew String(DN.get("address", i).c_str());
        };
    }
    private: System::Void toolStripMenuItem8_Click(System::Object^ sender, System::EventArgs^ e) {
        if (loginStatus == true)
        {
            this->exportData_people->Visible = true;
            this->box_inputHand->Visible = false;
            this->box_inputFile->Visible = false;
            this->box_sortData->Visible = false;
            this->box_deleteData->Visible = false;
            this->box_searchData->Visible = false;
            this->exportData_registry->Visible = false;
            this->exportData_vaccination->Visible = false;
            this->export_allData_people->Visible = false;
        }

    }

    private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
        int n = DN.getRows();
        this->view_exportData_registry->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_exportData_registry->Rows[i]->Cells[0]->Value = gcnew String(DN.get("fullName", i).c_str());
            this->view_exportData_registry->Rows[i]->Cells[1]->Value = gcnew String(DN.get("ma_DK", i).c_str());
            this->view_exportData_registry->Rows[i]->Cells[2]->Value = gcnew String(DN.get("ngay_DK", i).c_str());
            this->view_exportData_registry->Rows[i]->Cells[3]->Value = gcnew String(DN.get("noi_DK", i).c_str());
        }
    }
private: System::Void toolStripMenuItem9_Click(System::Object^ sender, System::EventArgs^ e) {
    if (loginStatus == true)
    {
        this->exportData_registry->Visible = true;
        this->exportData_people->Visible = false;
        this->box_inputHand->Visible = false;
        this->box_inputFile->Visible = false;
        this->box_sortData->Visible = false;
        this->box_deleteData->Visible = false;
        this->box_searchData->Visible = false;
        this->exportData_vaccination->Visible = false;
        this->export_allData_people->Visible = false;

    }

}
private: System::Void toolStripMenuItem10_Click(System::Object^ sender, System::EventArgs^ e) {
    if (loginStatus == true)
    {
        this->exportData_vaccination->Visible = true;
        this->exportData_registry->Visible = false;
        this->exportData_people->Visible = false;
        this->box_inputHand->Visible = false;
        this->box_inputFile->Visible = false;
        this->box_sortData->Visible = false;
        this->box_deleteData->Visible = false;
        this->box_searchData->Visible = false;
        this->export_allData_people->Visible = false;
    }
}
private: System::Void bt_loadData_vaccination_Click(System::Object^ sender, System::EventArgs^ e) {
    int n = DN.getRows();
    this->view_exportData_vaccination->RowCount = n;
    for (int i = 0; i < n; i++) {
        this->view_exportData_vaccination->Rows[i]->Cells[0]->Value = gcnew String(DN.get("fullName", i).c_str());
        this->view_exportData_vaccination->Rows[i]->Cells[1]->Value = gcnew String(DN.get("mui1", i).c_str());
        this->view_exportData_vaccination->Rows[i]->Cells[2]->Value = gcnew String(DN.get("ngay_M1", i).c_str());
        this->view_exportData_vaccination->Rows[i]->Cells[3]->Value = gcnew String(DN.get("mui2", i).c_str());
        this->view_exportData_vaccination->Rows[i]->Cells[4]->Value = gcnew String(DN.get("ngay_M2", i).c_str());

    }
}
private: System::Void button3_Click_2(System::Object^ sender, System::EventArgs^ e) {
    if (loginStatus == true)
    {
        this->exportData_people->Visible = true;
        this->box_inputHand->Visible = false;
        this->box_inputFile->Visible = false;
        this->box_sortData->Visible = false;
        this->box_deleteData->Visible = false;
        this->box_searchData->Visible = false;
        this->exportData_registry->Visible = false;
        this->exportData_vaccination->Visible = false;
        this->export_allData_people->Visible = false;
    }
}
private: System::Void bt_sortData_Click(System::Object^ sender, System::EventArgs^ e) {

    String ^s1 = this->box_sortSelect->Text;
    String ^s2 = this->box_sortType->Text;
    if (s2 == L"Tăng dần") {
        if (s1 == L"Mã công dân") {

        }
        else if (s1 == L"Mã đăng ký") {

        }
        else if (s1 == L"Ngày đăng ký") {

        }
        else if (s1 == L"Ngày tiêm mũi 1") {

        }
        else if (s1 == L"Ngày tiêm mũi 2") {

        }
        else MessageBox::Show(L"Lỗi nhập dữ liệu", L"THÔNG BÁO");
    }
    else if (s2 == L"Giảm dần") {
        if (s1 == L"Mã công dân") {

        }
        else if (s1 == L"Mã đăng ký") {

        }
        else if (s1 == L"Ngày đăng ký") {

        }
        else if (s1 == L"Ngày tiêm mũi 1") {

        }
        else if (s1 == L"Ngày tiêm mũi 2") {

        }
        else MessageBox::Show(L"Lỗi nhập dữ liệu", L"THÔNG BÁO");

    }
    else {
        MessageBox::Show(L"Lỗi nhập dữ liệu", L"THÔNG BÁO");
    }
    //MessageBox::Show("Đã sắp xếp.\nNhấn 'Xem' để chuyển sang trang xem dữ liệu. ", "THÔNG BÁO");
}

private: System::Void bt_loadAllData_Click(System::Object^ sender, System::EventArgs^ e) {
    int n = DN.getRows();
    this->view_exportAllData_people->RowCount = n;
    for (int i = 0; i < n; i++) {
        this->view_exportAllData_people->Rows[i]->Cells[0]->Value = gcnew String(DN.get("ma_CD", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[1]->Value = gcnew String(DN.get("fullName", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[2]->Value = gcnew String(DN.get("sex", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[3]->Value = gcnew String(DN.get("birth", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[4]->Value = gcnew String(DN.get("phone", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[5]->Value = gcnew String(DN.get("so_BHXH", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[6]->Value = gcnew String(DN.get("so_CMND", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[7]->Value = gcnew String(DN.get("address", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[8]->Value = gcnew String(DN.get("ma_DK", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[9]->Value = gcnew String(DN.get("ngay_DK", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[10]->Value = gcnew String(DN.get("noi_DK", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[11]->Value = gcnew String(DN.get("mui1", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[12]->Value = gcnew String(DN.get("ngay_M1", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[13]->Value = gcnew String(DN.get("mui2", i).c_str());
        this->view_exportAllData_people->Rows[i]->Cells[14]->Value = gcnew String(DN.get("ngay_M2", i).c_str());
    }
}
private: System::Void xuấtToànBộDữLiệuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    this->export_allData_people->Visible = true;
    this->exportData_vaccination->Visible = false;
    this->exportData_registry->Visible = false;
    this->exportData_people->Visible = false;
    this->box_inputHand->Visible = false;
    this->box_inputFile->Visible = false;
    this->box_sortData->Visible = false;
    this->box_deleteData->Visible = false;
    this->box_searchData->Visible = false;
}
};
}