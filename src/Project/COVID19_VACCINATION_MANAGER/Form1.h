#pragma once
#include<string.h>
#include<string>
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
    static CongDan CD;
    public ref class Form1 : public System::Windows::Forms::Form
    {

    private:

        static bool loginStatus = false, hasSort = false, sortType = false;
        static int currentUser_ID = NULL;
        static String^ currentUser_permission = "";
        static String^ ADMIN0 = "admin", ^ PASS0 = "admin", ^ PER0 = "admin", ^ NAME0 = "Administrator";
        static String^ ADMIN1 = "dotranbinh", ^ PASS1 = "dotranbinh", ^ PER1 = "full per-user", ^ NAME1 = L"Đỗ Trần Bình";
        static String^ ADMIN2 = "lephiduy", ^ PASS2 = "lephiduy", ^ PER2 = "full per-user", ^ NAME2 = L"Lê Phi Duy";
        static String ^f1, ^f2, ^f3;

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
private: System::Windows::Forms::Button^ bt_deleteData;
private: System::Windows::Forms::TextBox^ textbox_deleteData;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::DateTimePicker^ input_ngay_DK;

private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::ComboBox^ input_sex;
private: System::Windows::Forms::TextBox^ input_soCMND;


private: System::Windows::Forms::TextBox^ input_soBHXH;

private: System::Windows::Forms::TextBox^ input_phone;

private: System::Windows::Forms::TextBox^ input_fullName;


private: System::Windows::Forms::TextBox^ input_ma_CD;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ input_address;
private: System::Windows::Forms::DateTimePicker^ input_ngayM2;


private: System::Windows::Forms::DateTimePicker^ input_ngayM1;





private: System::Windows::Forms::TextBox^ input_noi_DK;

private: System::Windows::Forms::DateTimePicker^ input_birth;

private: System::Windows::Forms::Button^ button2;



private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ insertTypeA;

private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ bt_saveInputCD;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ input_ma_DK;
private: System::Windows::Forms::CheckBox^ input_mui_2;
private: System::Windows::Forms::CheckBox^ input_mui_1;
private: System::Windows::Forms::Panel^ panel_insertType;
private: System::Windows::Forms::ToolStripMenuItem^ thốngKêToolStripMenuItem;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ intro_label1;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;


private: System::Windows::Forms::Button^ bt_search;
private: System::Windows::Forms::TextBox^ box_search;


private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::DataGridView^ view_searchData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
private: System::Windows::Forms::GroupBox^ box_fillData;
private: System::Windows::Forms::ComboBox^ box_selectTypeFilter;
private: System::Windows::Forms::Button^ bt_typeFilter;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ bt_exportFile;

private: System::Windows::Forms::DataGridView^ view_filterData;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn26;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn27;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn28;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn29;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn30;
private: System::Windows::Forms::Button^ bt_submitFilter;

private: System::Windows::Forms::TextBox^ box_infoType;
private: System::Windows::Forms::Label^ label28;



private: System::Windows::Forms::ComboBox^ box_typeOfSex;
private: System::Windows::Forms::DataGridView^ view_sortData_people;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn31;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn33;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn34;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn35;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn36;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn37;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn38;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn39;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn40;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn41;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn42;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn43;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn44;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn45;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;













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
            this->dataManager_menu = (gcnew System::Windows::Forms::MenuStrip());
            this->dataManager_input = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->inputFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->inputHand = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->sortData = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->deleteData = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->searchData = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->thốngKêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->dataManager_output = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->xuấtToànBộDữLiệuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->box_inputHand = (gcnew System::Windows::Forms::GroupBox());
            this->panel_insertType = (gcnew System::Windows::Forms::Panel());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->insertTypeA = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->input_mui_2 = (gcnew System::Windows::Forms::CheckBox());
            this->input_mui_1 = (gcnew System::Windows::Forms::CheckBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->input_ma_DK = (gcnew System::Windows::Forms::TextBox());
            this->bt_saveInputCD = (gcnew System::Windows::Forms::Button());
            this->input_address = (gcnew System::Windows::Forms::TextBox());
            this->input_ngayM2 = (gcnew System::Windows::Forms::DateTimePicker());
            this->input_ngayM1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->input_noi_DK = (gcnew System::Windows::Forms::TextBox());
            this->input_birth = (gcnew System::Windows::Forms::DateTimePicker());
            this->input_ngay_DK = (gcnew System::Windows::Forms::DateTimePicker());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->input_sex = (gcnew System::Windows::Forms::ComboBox());
            this->input_soCMND = (gcnew System::Windows::Forms::TextBox());
            this->input_soBHXH = (gcnew System::Windows::Forms::TextBox());
            this->input_phone = (gcnew System::Windows::Forms::TextBox());
            this->input_fullName = (gcnew System::Windows::Forms::TextBox());
            this->input_ma_CD = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
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
            this->view_searchData = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->bt_search = (gcnew System::Windows::Forms::Button());
            this->box_search = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->box_fillData = (gcnew System::Windows::Forms::GroupBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->box_typeOfSex = (gcnew System::Windows::Forms::ComboBox());
            this->bt_submitFilter = (gcnew System::Windows::Forms::Button());
            this->box_infoType = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->view_filterData = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->bt_exportFile = (gcnew System::Windows::Forms::Button());
            this->box_selectTypeFilter = (gcnew System::Windows::Forms::ComboBox());
            this->bt_typeFilter = (gcnew System::Windows::Forms::Button());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->box_deleteData = (gcnew System::Windows::Forms::GroupBox());
            this->bt_deleteData = (gcnew System::Windows::Forms::Button());
            this->textbox_deleteData = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->box_sortData = (gcnew System::Windows::Forms::GroupBox());
            this->view_sortData_people = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->bt_view_sortData = (gcnew System::Windows::Forms::Button());
            this->bt_sortData = (gcnew System::Windows::Forms::Button());
            this->box_sortType = (gcnew System::Windows::Forms::ComboBox());
            this->box_sortSelect = (gcnew System::Windows::Forms::ComboBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
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
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->intro_label1 = (gcnew System::Windows::Forms::Label());
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
            this->dataManager_menu->SuspendLayout();
            this->box_inputHand->SuspendLayout();
            this->panel_insertType->SuspendLayout();
            this->export_allData_people->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportAllData_people))->BeginInit();
            this->exportData_vaccination->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_vaccination))->BeginInit();
            this->exportData_registry->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_registry))->BeginInit();
            this->exportData_people->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_people))->BeginInit();
            this->box_searchData->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_searchData))->BeginInit();
            this->box_fillData->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_filterData))->BeginInit();
            this->box_deleteData->SuspendLayout();
            this->box_sortData->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_sortData_people))->BeginInit();
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
            this->bt_saveFullname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_saveFullname->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_saveFullname->Location = System::Drawing::Point(181, 89);
            this->bt_saveFullname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveFullname->Name = L"bt_saveFullname";
            this->bt_saveFullname->Size = System::Drawing::Size(75, 35);
            this->bt_saveFullname->TabIndex = 5;
            this->bt_saveFullname->Text = L"Lưu";
            this->bt_saveFullname->UseVisualStyleBackColor = false;
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
            this->dataManagerTab->Size = System::Drawing::Size(651, 468);
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
            this->boxDataManager->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->boxDataManager->Controls->Add(this->dataManager_menu);
            this->boxDataManager->Controls->Add(this->box_inputHand);
            this->boxDataManager->Controls->Add(this->export_allData_people);
            this->boxDataManager->Controls->Add(this->exportData_vaccination);
            this->boxDataManager->Controls->Add(this->exportData_registry);
            this->boxDataManager->Controls->Add(this->exportData_people);
            this->boxDataManager->Controls->Add(this->box_searchData);
            this->boxDataManager->Controls->Add(this->box_fillData);
            this->boxDataManager->Controls->Add(this->box_deleteData);
            this->boxDataManager->Controls->Add(this->box_sortData);
            this->boxDataManager->Controls->Add(this->box_inputFile);
            this->boxDataManager->Location = System::Drawing::Point(-4, 0);
            this->boxDataManager->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->boxDataManager->Name = L"boxDataManager";
            this->boxDataManager->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->boxDataManager->Size = System::Drawing::Size(653, 468);
            this->boxDataManager->TabIndex = 3;
            this->boxDataManager->TabStop = false;
            this->boxDataManager->Visible = false;
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
            this->dataManager_menu->Location = System::Drawing::Point(3, 21);
            this->dataManager_menu->Name = L"dataManager_menu";
            this->dataManager_menu->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
            this->dataManager_menu->Size = System::Drawing::Size(647, 27);
            this->dataManager_menu->TabIndex = 7;
            this->dataManager_menu->Text = L"menuStrip1";
            // 
            // dataManager_input
            // 
            this->dataManager_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->dataManager_input->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->toolStripMenuItem2,
                    this->sortData, this->deleteData, this->searchData, this->thốngKêToolStripMenuItem
            });
            this->dataManager_input->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dataManager_input->Name = L"dataManager_input";
            this->dataManager_input->Size = System::Drawing::Size(149, 23);
            this->dataManager_input->Text = L"Chỉnh sửa dữ liệu";
            // 
            // toolStripMenuItem2
            // 
            this->toolStripMenuItem2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
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
            this->inputFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->inputFile->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputFile->Name = L"inputFile";
            this->inputFile->Size = System::Drawing::Size(216, 26);
            this->inputFile->Text = L"Từ tập tin dữ liệu";
            this->inputFile->Click += gcnew System::EventHandler(this, &Form1::inputFile_Click);
            // 
            // inputHand
            // 
            this->inputHand->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->inputHand->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->inputHand->Name = L"inputHand";
            this->inputHand->Size = System::Drawing::Size(216, 26);
            this->inputHand->Text = L"Thủ công";
            this->inputHand->Click += gcnew System::EventHandler(this, &Form1::inputHand_Click);
            // 
            // sortData
            // 
            this->sortData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->sortData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->sortData->Name = L"sortData";
            this->sortData->Size = System::Drawing::Size(205, 26);
            this->sortData->Text = L"Sắp xếp dữ liệu";
            this->sortData->Click += gcnew System::EventHandler(this, &Form1::sortData_Click_1);
            // 
            // deleteData
            // 
            this->deleteData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->deleteData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->deleteData->Name = L"deleteData";
            this->deleteData->Size = System::Drawing::Size(205, 26);
            this->deleteData->Text = L"Xoá dữ liệu";
            this->deleteData->Click += gcnew System::EventHandler(this, &Form1::deleteData_Click_1);
            // 
            // searchData
            // 
            this->searchData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->searchData->Name = L"searchData";
            this->searchData->Size = System::Drawing::Size(205, 26);
            this->searchData->Text = L"Tìm kiếm";
            this->searchData->Click += gcnew System::EventHandler(this, &Form1::searchData_Click);
            // 
            // thốngKêToolStripMenuItem
            // 
            this->thốngKêToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->thốngKêToolStripMenuItem->Name = L"thốngKêToolStripMenuItem";
            this->thốngKêToolStripMenuItem->Size = System::Drawing::Size(205, 26);
            this->thốngKêToolStripMenuItem->Text = L"Thống kê";
            this->thốngKêToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::thốngKêToolStripMenuItem_Click);
            // 
            // dataManager_output
            // 
            this->dataManager_output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->dataManager_output->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->toolStripMenuItem8,
                    this->toolStripMenuItem9, this->toolStripMenuItem10, this->xuấtToànBộDữLiệuToolStripMenuItem
            });
            this->dataManager_output->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dataManager_output->Name = L"dataManager_output";
            this->dataManager_output->Size = System::Drawing::Size(174, 23);
            this->dataManager_output->Text = L"Xem dữ liệu đã nhập";
            // 
            // toolStripMenuItem8
            // 
            this->toolStripMenuItem8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->toolStripMenuItem8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
            this->toolStripMenuItem8->Size = System::Drawing::Size(229, 26);
            this->toolStripMenuItem8->Text = L"Dữ liệu công dân";
            this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem8_Click);
            // 
            // toolStripMenuItem9
            // 
            this->toolStripMenuItem9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->toolStripMenuItem9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
            this->toolStripMenuItem9->Size = System::Drawing::Size(229, 26);
            this->toolStripMenuItem9->Text = L"Dữ liệu đăng ký";
            this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem9_Click);
            // 
            // toolStripMenuItem10
            // 
            this->toolStripMenuItem10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->toolStripMenuItem10->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
            this->toolStripMenuItem10->Size = System::Drawing::Size(229, 26);
            this->toolStripMenuItem10->Text = L"Dữ liệu tiêm chủng";
            this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem10_Click);
            // 
            // xuấtToànBộDữLiệuToolStripMenuItem
            // 
            this->xuấtToànBộDữLiệuToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->xuấtToànBộDữLiệuToolStripMenuItem->Name = L"xuấtToànBộDữLiệuToolStripMenuItem";
            this->xuấtToànBộDữLiệuToolStripMenuItem->Size = System::Drawing::Size(229, 26);
            this->xuấtToànBộDữLiệuToolStripMenuItem->Text = L"Toàn bộ dữ liệu";
            this->xuấtToànBộDữLiệuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::xuấtToànBộDữLiệuToolStripMenuItem_Click);
            // 
            // box_inputHand
            // 
            this->box_inputHand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_inputHand->Controls->Add(this->panel_insertType);
            this->box_inputHand->Controls->Add(this->input_mui_2);
            this->box_inputHand->Controls->Add(this->input_mui_1);
            this->box_inputHand->Controls->Add(this->label21);
            this->box_inputHand->Controls->Add(this->input_ma_DK);
            this->box_inputHand->Controls->Add(this->bt_saveInputCD);
            this->box_inputHand->Controls->Add(this->input_address);
            this->box_inputHand->Controls->Add(this->input_ngayM2);
            this->box_inputHand->Controls->Add(this->input_ngayM1);
            this->box_inputHand->Controls->Add(this->input_noi_DK);
            this->box_inputHand->Controls->Add(this->input_birth);
            this->box_inputHand->Controls->Add(this->input_ngay_DK);
            this->box_inputHand->Controls->Add(this->label17);
            this->box_inputHand->Controls->Add(this->label16);
            this->box_inputHand->Controls->Add(this->label15);
            this->box_inputHand->Controls->Add(this->input_sex);
            this->box_inputHand->Controls->Add(this->input_soCMND);
            this->box_inputHand->Controls->Add(this->input_soBHXH);
            this->box_inputHand->Controls->Add(this->input_phone);
            this->box_inputHand->Controls->Add(this->input_fullName);
            this->box_inputHand->Controls->Add(this->input_ma_CD);
            this->box_inputHand->Controls->Add(this->label14);
            this->box_inputHand->Controls->Add(this->label13);
            this->box_inputHand->Controls->Add(this->label12);
            this->box_inputHand->Controls->Add(this->label11);
            this->box_inputHand->Controls->Add(this->label10);
            this->box_inputHand->Controls->Add(this->label9);
            this->box_inputHand->Controls->Add(this->label8);
            this->box_inputHand->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_inputHand->Location = System::Drawing::Point(0, 50);
            this->box_inputHand->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_inputHand->Name = L"box_inputHand";
            this->box_inputHand->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_inputHand->Size = System::Drawing::Size(653, 417);
            this->box_inputHand->TabIndex = 6;
            this->box_inputHand->TabStop = false;
            this->box_inputHand->Text = L"Nhập dữ liệu thủ công";
            this->box_inputHand->Visible = false;
            // 
            // panel_insertType
            // 
            this->panel_insertType->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel_insertType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->panel_insertType->Controls->Add(this->label18);
            this->panel_insertType->Controls->Add(this->insertTypeA);
            this->panel_insertType->Controls->Add(this->label19);
            this->panel_insertType->Controls->Add(this->button2);
            this->panel_insertType->Controls->Add(this->button3);
            this->panel_insertType->Location = System::Drawing::Point(11, 292);
            this->panel_insertType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel_insertType->Name = L"panel_insertType";
            this->panel_insertType->Size = System::Drawing::Size(637, 100);
            this->panel_insertType->TabIndex = 39;
            this->panel_insertType->Visible = false;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(20, 20);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(121, 19);
            this->label18->TabIndex = 27;
            this->label18->Text = L"Thêm vào vị trí";
            // 
            // insertTypeA
            // 
            this->insertTypeA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->insertTypeA->Location = System::Drawing::Point(155, 17);
            this->insertTypeA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->insertTypeA->Name = L"insertTypeA";
            this->insertTypeA->Size = System::Drawing::Size(137, 26);
            this->insertTypeA->TabIndex = 28;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(20, 65);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(460, 19);
            this->label19->TabIndex = 29;
            this->label19->Text = L"Chèn vào danh sách mà không làm thay đổi vị trí đã sắp xếp";
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->button2->Location = System::Drawing::Point(297, 13);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 35);
            this->button2->TabIndex = 32;
            this->button2->Text = L"Lưu";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->button3->Location = System::Drawing::Point(547, 58);
            this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(75, 35);
            this->button3->TabIndex = 33;
            this->button3->Text = L"Lưu";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_3);
            // 
            // input_mui_2
            // 
            this->input_mui_2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_mui_2->AutoSize = true;
            this->input_mui_2->Location = System::Drawing::Point(360, 220);
            this->input_mui_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_mui_2->Name = L"input_mui_2";
            this->input_mui_2->Size = System::Drawing::Size(71, 23);
            this->input_mui_2->TabIndex = 38;
            this->input_mui_2->Text = L"Mũi 2";
            this->input_mui_2->UseVisualStyleBackColor = true;
            // 
            // input_mui_1
            // 
            this->input_mui_1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_mui_1->AutoSize = true;
            this->input_mui_1->Location = System::Drawing::Point(360, 185);
            this->input_mui_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_mui_1->Name = L"input_mui_1";
            this->input_mui_1->Size = System::Drawing::Size(71, 23);
            this->input_mui_1->TabIndex = 37;
            this->input_mui_1->Text = L"Mũi 1";
            this->input_mui_1->UseVisualStyleBackColor = true;
            // 
            // label21
            // 
            this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(356, 110);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(129, 19);
            this->label21->TabIndex = 36;
            this->label21->Text = L"Mã đăng ký(**)";
            // 
            // input_ma_DK
            // 
            this->input_ma_DK->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_ma_DK->Location = System::Drawing::Point(501, 110);
            this->input_ma_DK->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_ma_DK->Name = L"input_ma_DK";
            this->input_ma_DK->Size = System::Drawing::Size(121, 26);
            this->input_ma_DK->TabIndex = 35;
            // 
            // bt_saveInputCD
            // 
            this->bt_saveInputCD->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->bt_saveInputCD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_saveInputCD->Location = System::Drawing::Point(399, 247);
            this->bt_saveInputCD->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveInputCD->Name = L"bt_saveInputCD";
            this->bt_saveInputCD->Size = System::Drawing::Size(201, 35);
            this->bt_saveInputCD->TabIndex = 34;
            this->bt_saveInputCD->Text = L"Xác nhận thông tin";
            this->bt_saveInputCD->UseVisualStyleBackColor = false;
            this->bt_saveInputCD->Click += gcnew System::EventHandler(this, &Form1::bt_saveInputCD_Click);
            // 
            // input_address
            // 
            this->input_address->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_address->Location = System::Drawing::Point(501, 39);
            this->input_address->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_address->Name = L"input_address";
            this->input_address->Size = System::Drawing::Size(121, 26);
            this->input_address->TabIndex = 25;
            // 
            // input_ngayM2
            // 
            this->input_ngayM2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_ngayM2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->input_ngayM2->Location = System::Drawing::Point(501, 215);
            this->input_ngayM2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_ngayM2->Name = L"input_ngayM2";
            this->input_ngayM2->Size = System::Drawing::Size(121, 26);
            this->input_ngayM2->TabIndex = 24;
            this->input_ngayM2->Value = System::DateTime(2021, 11, 4, 0, 0, 0, 0);
            // 
            // input_ngayM1
            // 
            this->input_ngayM1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_ngayM1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->input_ngayM1->Location = System::Drawing::Point(501, 180);
            this->input_ngayM1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_ngayM1->Name = L"input_ngayM1";
            this->input_ngayM1->Size = System::Drawing::Size(121, 26);
            this->input_ngayM1->TabIndex = 23;
            this->input_ngayM1->Value = System::DateTime(2021, 11, 3, 0, 0, 0, 0);
            this->input_ngayM1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker3_ValueChanged);
            // 
            // input_noi_DK
            // 
            this->input_noi_DK->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_noi_DK->Location = System::Drawing::Point(501, 145);
            this->input_noi_DK->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_noi_DK->Name = L"input_noi_DK";
            this->input_noi_DK->Size = System::Drawing::Size(121, 26);
            this->input_noi_DK->TabIndex = 20;
            // 
            // input_birth
            // 
            this->input_birth->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_birth->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->input_birth->Location = System::Drawing::Point(204, 145);
            this->input_birth->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_birth->Name = L"input_birth";
            this->input_birth->Size = System::Drawing::Size(121, 26);
            this->input_birth->TabIndex = 19;
            this->input_birth->Value = System::DateTime(2021, 11, 1, 0, 0, 0, 0);
            // 
            // input_ngay_DK
            // 
            this->input_ngay_DK->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_ngay_DK->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->input_ngay_DK->Location = System::Drawing::Point(501, 73);
            this->input_ngay_DK->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_ngay_DK->Name = L"input_ngay_DK";
            this->input_ngay_DK->Size = System::Drawing::Size(121, 26);
            this->input_ngay_DK->TabIndex = 18;
            this->input_ngay_DK->Value = System::DateTime(2021, 11, 2, 0, 0, 0, 0);
            this->input_ngay_DK->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
            // 
            // label17
            // 
            this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(356, 145);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(97, 19);
            this->label17->TabIndex = 17;
            this->label17->Text = L"Nơi đăng ký";
            // 
            // label16
            // 
            this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(356, 75);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(135, 19);
            this->label16->TabIndex = 16;
            this->label16->Text = L"Ngày đăng ký(*)";
            // 
            // label15
            // 
            this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label15->AutoSize = true;
            this->label15->Location = System::Drawing::Point(356, 39);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(81, 19);
            this->label15->TabIndex = 15;
            this->label15->Text = L"Địa chỉ(*)";
            // 
            // input_sex
            // 
            this->input_sex->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_sex->FormattingEnabled = true;
            this->input_sex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nam", L"Nữ" });
            this->input_sex->Location = System::Drawing::Point(204, 110);
            this->input_sex->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_sex->Name = L"input_sex";
            this->input_sex->Size = System::Drawing::Size(121, 27);
            this->input_sex->TabIndex = 14;
            // 
            // input_soCMND
            // 
            this->input_soCMND->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_soCMND->Location = System::Drawing::Point(203, 247);
            this->input_soCMND->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_soCMND->Name = L"input_soCMND";
            this->input_soCMND->Size = System::Drawing::Size(121, 26);
            this->input_soCMND->TabIndex = 13;
            // 
            // input_soBHXH
            // 
            this->input_soBHXH->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_soBHXH->Location = System::Drawing::Point(203, 212);
            this->input_soBHXH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_soBHXH->Name = L"input_soBHXH";
            this->input_soBHXH->Size = System::Drawing::Size(121, 26);
            this->input_soBHXH->TabIndex = 12;
            // 
            // input_phone
            // 
            this->input_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_phone->Location = System::Drawing::Point(203, 177);
            this->input_phone->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_phone->Name = L"input_phone";
            this->input_phone->Size = System::Drawing::Size(121, 26);
            this->input_phone->TabIndex = 11;
            // 
            // input_fullName
            // 
            this->input_fullName->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_fullName->Location = System::Drawing::Point(203, 71);
            this->input_fullName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_fullName->Name = L"input_fullName";
            this->input_fullName->Size = System::Drawing::Size(121, 26);
            this->input_fullName->TabIndex = 8;
            // 
            // input_ma_CD
            // 
            this->input_ma_CD->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->input_ma_CD->Location = System::Drawing::Point(203, 37);
            this->input_ma_CD->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->input_ma_CD->Name = L"input_ma_CD";
            this->input_ma_CD->Size = System::Drawing::Size(121, 26);
            this->input_ma_CD->TabIndex = 7;
            // 
            // label14
            // 
            this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(29, 250);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(165, 19);
            this->label14->TabIndex = 6;
            this->label14->Text = L"Số CMND/CCCD(**)";
            // 
            // label13
            // 
            this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(29, 215);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(110, 19);
            this->label13->TabIndex = 5;
            this->label13->Text = L"Số BHXH(**)";
            // 
            // label12
            // 
            this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(29, 180);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(106, 19);
            this->label12->TabIndex = 4;
            this->label12->Text = L"Số điện thoại";
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(29, 145);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(81, 19);
            this->label11->TabIndex = 3;
            this->label11->Text = L"Ngày sinh";
            // 
            // label10
            // 
            this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(29, 110);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(93, 19);
            this->label10->TabIndex = 2;
            this->label10->Text = L"Giới tính(*)";
            // 
            // label9
            // 
            this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(29, 39);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(138, 19);
            this->label9->TabIndex = 1;
            this->label9->Text = L"Mã công dân(**)";
            // 
            // label8
            // 
            this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(29, 75);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(106, 19);
            this->label8->TabIndex = 0;
            this->label8->Text = L"Họ và tên(*)";
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
            this->export_allData_people->Location = System::Drawing::Point(0, 50);
            this->export_allData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->export_allData_people->Name = L"export_allData_people";
            this->export_allData_people->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->export_allData_people->Size = System::Drawing::Size(659, 417);
            this->export_allData_people->TabIndex = 9;
            this->export_allData_people->TabStop = false;
            this->export_allData_people->Text = L"Toàn bộ dữ liệu";
            this->export_allData_people->Visible = false;
            // 
            // bt_saveAllData
            // 
            this->bt_saveAllData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_saveAllData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_saveAllData->Location = System::Drawing::Point(555, 377);
            this->bt_saveAllData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveAllData->Name = L"bt_saveAllData";
            this->bt_saveAllData->Size = System::Drawing::Size(91, 35);
            this->bt_saveAllData->TabIndex = 4;
            this->bt_saveAllData->Text = L"Lưu";
            this->bt_saveAllData->UseVisualStyleBackColor = false;
            this->bt_saveAllData->Click += gcnew System::EventHandler(this, &Form1::bt_saveAllData_Click);
            // 
            // bt_loadAllData
            // 
            this->bt_loadAllData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_loadAllData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_loadAllData->Location = System::Drawing::Point(283, 377);
            this->bt_loadAllData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_loadAllData->Name = L"bt_loadAllData";
            this->bt_loadAllData->Size = System::Drawing::Size(131, 35);
            this->bt_loadAllData->TabIndex = 3;
            this->bt_loadAllData->Text = L"Tải dữ liệu";
            this->bt_loadAllData->UseVisualStyleBackColor = false;
            this->bt_loadAllData->Click += gcnew System::EventHandler(this, &Form1::bt_loadAllData_Click);
            // 
            // bt_modAllData
            // 
            this->bt_modAllData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_modAllData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_modAllData->Location = System::Drawing::Point(419, 377);
            this->bt_modAllData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_modAllData->Name = L"bt_modAllData";
            this->bt_modAllData->Size = System::Drawing::Size(131, 35);
            this->bt_modAllData->TabIndex = 2;
            this->bt_modAllData->Text = L"Chỉnh sửa";
            this->bt_modAllData->UseVisualStyleBackColor = false;
            this->bt_modAllData->Click += gcnew System::EventHandler(this, &Form1::bt_modAllData_Click);
            // 
            // button7
            // 
            this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->button7->Location = System::Drawing::Point(555, 388);
            this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(0, 0);
            this->button7->TabIndex = 1;
            this->button7->Text = L"button7";
            this->button7->UseVisualStyleBackColor = false;
            // 
            // view_exportAllData_people
            // 
            this->view_exportAllData_people->AllowUserToAddRows = false;
            this->view_exportAllData_people->AllowUserToDeleteRows = false;
            this->view_exportAllData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_exportAllData_people->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_exportAllData_people->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_exportAllData_people->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
                this->maCD,
                    this->fullName_allData, this->sex_allData, this->birth_allData, this->phone_allData, this->so_BHXH_allData, this->so_CMND_allData,
                    this->address_allData, this->ma_DK_allData, this->ngay_DK_allData, this->noi_DK_allData, this->mui1_allData, this->ngayM1_allData,
                    this->mui2_allData, this->ngay_M2_allData
            });
            this->view_exportAllData_people->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_exportAllData_people->Location = System::Drawing::Point(11, 25);
            this->view_exportAllData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->view_exportAllData_people->Name = L"view_exportAllData_people";
            this->view_exportAllData_people->ReadOnly = true;
            this->view_exportAllData_people->RowHeadersWidth = 51;
            this->view_exportAllData_people->RowTemplate->Height = 24;
            this->view_exportAllData_people->Size = System::Drawing::Size(648, 345);
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
            this->exportData_vaccination->Location = System::Drawing::Point(0, 50);
            this->exportData_vaccination->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_vaccination->Name = L"exportData_vaccination";
            this->exportData_vaccination->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_vaccination->Size = System::Drawing::Size(653, 417);
            this->exportData_vaccination->TabIndex = 8;
            this->exportData_vaccination->TabStop = false;
            this->exportData_vaccination->Text = L"Dữ liệu tiêm chủng";
            this->exportData_vaccination->Visible = false;
            // 
            // bt_saveData_vaccination
            // 
            this->bt_saveData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_saveData_vaccination->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_saveData_vaccination->Location = System::Drawing::Point(551, 377);
            this->bt_saveData_vaccination->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveData_vaccination->Name = L"bt_saveData_vaccination";
            this->bt_saveData_vaccination->Size = System::Drawing::Size(91, 35);
            this->bt_saveData_vaccination->TabIndex = 4;
            this->bt_saveData_vaccination->Text = L"Lưu";
            this->bt_saveData_vaccination->UseVisualStyleBackColor = false;
            this->bt_saveData_vaccination->Click += gcnew System::EventHandler(this, &Form1::bt_saveData_vaccination_Click);
            // 
            // bt_loadData_vaccination
            // 
            this->bt_loadData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_loadData_vaccination->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_loadData_vaccination->Location = System::Drawing::Point(279, 377);
            this->bt_loadData_vaccination->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_loadData_vaccination->Name = L"bt_loadData_vaccination";
            this->bt_loadData_vaccination->Size = System::Drawing::Size(131, 35);
            this->bt_loadData_vaccination->TabIndex = 3;
            this->bt_loadData_vaccination->Text = L"Tải dữ liệu";
            this->bt_loadData_vaccination->UseVisualStyleBackColor = false;
            this->bt_loadData_vaccination->Click += gcnew System::EventHandler(this, &Form1::bt_loadData_vaccination_Click);
            // 
            // bt_modData_vaccination
            // 
            this->bt_modData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_modData_vaccination->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_modData_vaccination->Location = System::Drawing::Point(415, 377);
            this->bt_modData_vaccination->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_modData_vaccination->Name = L"bt_modData_vaccination";
            this->bt_modData_vaccination->Size = System::Drawing::Size(131, 35);
            this->bt_modData_vaccination->TabIndex = 2;
            this->bt_modData_vaccination->Text = L"Chỉnh sửa";
            this->bt_modData_vaccination->UseVisualStyleBackColor = false;
            this->bt_modData_vaccination->Click += gcnew System::EventHandler(this, &Form1::bt_modData_vaccination_Click);
            // 
            // button6
            // 
            this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->button6->Location = System::Drawing::Point(551, 388);
            this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(0, 0);
            this->button6->TabIndex = 1;
            this->button6->Text = L"button6";
            this->button6->UseVisualStyleBackColor = false;
            // 
            // view_exportData_vaccination
            // 
            this->view_exportData_vaccination->AllowUserToAddRows = false;
            this->view_exportData_vaccination->AllowUserToDeleteRows = false;
            this->view_exportData_vaccination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_exportData_vaccination->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_exportData_vaccination->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_exportData_vaccination->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->fullName3,
                    this->mui1, this->ngay_M1, this->mui2, this->ngay_M2
            });
            this->view_exportData_vaccination->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_exportData_vaccination->Location = System::Drawing::Point(11, 25);
            this->view_exportData_vaccination->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
            this->exportData_registry->Location = System::Drawing::Point(0, 50);
            this->exportData_registry->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_registry->Name = L"exportData_registry";
            this->exportData_registry->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_registry->Size = System::Drawing::Size(653, 417);
            this->exportData_registry->TabIndex = 7;
            this->exportData_registry->TabStop = false;
            this->exportData_registry->Text = L"Dữ liệu đăng ký";
            this->exportData_registry->Visible = false;
            // 
            // bt_saveData_registry
            // 
            this->bt_saveData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_saveData_registry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_saveData_registry->Location = System::Drawing::Point(551, 377);
            this->bt_saveData_registry->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveData_registry->Name = L"bt_saveData_registry";
            this->bt_saveData_registry->Size = System::Drawing::Size(91, 35);
            this->bt_saveData_registry->TabIndex = 4;
            this->bt_saveData_registry->Text = L"Lưu";
            this->bt_saveData_registry->UseVisualStyleBackColor = false;
            this->bt_saveData_registry->Click += gcnew System::EventHandler(this, &Form1::bt_saveData_registry_Click);
            // 
            // bt_loadData_registry
            // 
            this->bt_loadData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_loadData_registry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_loadData_registry->Location = System::Drawing::Point(279, 377);
            this->bt_loadData_registry->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_loadData_registry->Name = L"bt_loadData_registry";
            this->bt_loadData_registry->Size = System::Drawing::Size(131, 35);
            this->bt_loadData_registry->TabIndex = 3;
            this->bt_loadData_registry->Text = L"Tải dữ liệu";
            this->bt_loadData_registry->UseVisualStyleBackColor = false;
            this->bt_loadData_registry->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
            // 
            // bt_modData_registry
            // 
            this->bt_modData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_modData_registry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_modData_registry->Location = System::Drawing::Point(415, 377);
            this->bt_modData_registry->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_modData_registry->Name = L"bt_modData_registry";
            this->bt_modData_registry->Size = System::Drawing::Size(131, 35);
            this->bt_modData_registry->TabIndex = 2;
            this->bt_modData_registry->Text = L"Chỉnh sửa";
            this->bt_modData_registry->UseVisualStyleBackColor = false;
            this->bt_modData_registry->Click += gcnew System::EventHandler(this, &Form1::bt_modData_registry_Click);
            // 
            // button5
            // 
            this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->button5->Location = System::Drawing::Point(551, 388);
            this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(0, 0);
            this->button5->TabIndex = 1;
            this->button5->Text = L"button5";
            this->button5->UseVisualStyleBackColor = false;
            // 
            // view_exportData_registry
            // 
            this->view_exportData_registry->AllowUserToAddRows = false;
            this->view_exportData_registry->AllowUserToDeleteRows = false;
            this->view_exportData_registry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_exportData_registry->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_exportData_registry->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_exportData_registry->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->fullName2,
                    this->ma_DK, this->ngay_DK, this->noi_DK
            });
            this->view_exportData_registry->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_exportData_registry->Location = System::Drawing::Point(11, 25);
            this->view_exportData_registry->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
            this->exportData_people->Location = System::Drawing::Point(0, 50);
            this->exportData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_people->Name = L"exportData_people";
            this->exportData_people->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exportData_people->Size = System::Drawing::Size(653, 417);
            this->exportData_people->TabIndex = 6;
            this->exportData_people->TabStop = false;
            this->exportData_people->Text = L"Dữ liệu công dân";
            this->exportData_people->Visible = false;
            // 
            // bt_saveData_people
            // 
            this->bt_saveData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_saveData_people->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_saveData_people->Location = System::Drawing::Point(551, 377);
            this->bt_saveData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveData_people->Name = L"bt_saveData_people";
            this->bt_saveData_people->Size = System::Drawing::Size(91, 35);
            this->bt_saveData_people->TabIndex = 4;
            this->bt_saveData_people->Text = L"Lưu";
            this->bt_saveData_people->UseVisualStyleBackColor = false;
            this->bt_saveData_people->Click += gcnew System::EventHandler(this, &Form1::bt_saveData_people_Click);
            // 
            // bt_loadData_people
            // 
            this->bt_loadData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_loadData_people->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_loadData_people->Location = System::Drawing::Point(279, 377);
            this->bt_loadData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_loadData_people->Name = L"bt_loadData_people";
            this->bt_loadData_people->Size = System::Drawing::Size(131, 35);
            this->bt_loadData_people->TabIndex = 3;
            this->bt_loadData_people->Text = L"Tải dữ liệu";
            this->bt_loadData_people->UseVisualStyleBackColor = false;
            this->bt_loadData_people->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // bt_modData_people
            // 
            this->bt_modData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_modData_people->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
                static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_modData_people->Location = System::Drawing::Point(415, 377);
            this->bt_modData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_modData_people->Name = L"bt_modData_people";
            this->bt_modData_people->Size = System::Drawing::Size(131, 35);
            this->bt_modData_people->TabIndex = 2;
            this->bt_modData_people->Text = L"Chỉnh sửa";
            this->bt_modData_people->UseVisualStyleBackColor = false;
            this->bt_modData_people->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button1->Location = System::Drawing::Point(551, 388);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
            this->view_exportData_people->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_exportData_people->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_exportData_people->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
                this->ma_CD,
                    this->fullName, this->sex, this->birth, this->phone, this->so_BHXH, this->so_CMND, this->address
            });
            this->view_exportData_people->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_exportData_people->Location = System::Drawing::Point(11, 25);
            this->view_exportData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
            this->box_searchData->Controls->Add(this->view_searchData);
            this->box_searchData->Controls->Add(this->bt_search);
            this->box_searchData->Controls->Add(this->box_search);
            this->box_searchData->Controls->Add(this->label26);
            this->box_searchData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_searchData->Location = System::Drawing::Point(0, 50);
            this->box_searchData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_searchData->Name = L"box_searchData";
            this->box_searchData->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_searchData->Size = System::Drawing::Size(653, 417);
            this->box_searchData->TabIndex = 5;
            this->box_searchData->TabStop = false;
            this->box_searchData->Text = L"Tìm kiếm";
            this->box_searchData->Visible = false;
            // 
            // view_searchData
            // 
            this->view_searchData->AllowUserToAddRows = false;
            this->view_searchData->AllowUserToDeleteRows = false;
            this->view_searchData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_searchData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_searchData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_searchData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
                this->dataGridViewTextBoxColumn1,
                    this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
                    this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
                    this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13,
                    this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15
            });
            this->view_searchData->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_searchData->Location = System::Drawing::Point(14, 108);
            this->view_searchData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->view_searchData->Name = L"view_searchData";
            this->view_searchData->ReadOnly = true;
            this->view_searchData->RowHeadersWidth = 51;
            this->view_searchData->RowTemplate->Height = 24;
            this->view_searchData->Size = System::Drawing::Size(628, 273);
            this->view_searchData->TabIndex = 4;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this->dataGridViewTextBoxColumn1->HeaderText = L"Mã công dân";
            this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
            this->dataGridViewTextBoxColumn1->ReadOnly = true;
            this->dataGridViewTextBoxColumn1->Width = 125;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this->dataGridViewTextBoxColumn2->HeaderText = L"Họ và tên";
            this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
            this->dataGridViewTextBoxColumn2->ReadOnly = true;
            this->dataGridViewTextBoxColumn2->Width = 125;
            // 
            // dataGridViewTextBoxColumn3
            // 
            this->dataGridViewTextBoxColumn3->HeaderText = L"Giới tính";
            this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
            this->dataGridViewTextBoxColumn3->ReadOnly = true;
            this->dataGridViewTextBoxColumn3->Width = 125;
            // 
            // dataGridViewTextBoxColumn4
            // 
            this->dataGridViewTextBoxColumn4->HeaderText = L"Ngày sinh";
            this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
            this->dataGridViewTextBoxColumn4->ReadOnly = true;
            this->dataGridViewTextBoxColumn4->Width = 125;
            // 
            // dataGridViewTextBoxColumn5
            // 
            this->dataGridViewTextBoxColumn5->HeaderText = L"SĐT";
            this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
            this->dataGridViewTextBoxColumn5->ReadOnly = true;
            this->dataGridViewTextBoxColumn5->Width = 125;
            // 
            // dataGridViewTextBoxColumn6
            // 
            this->dataGridViewTextBoxColumn6->HeaderText = L"Số BHXH";
            this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
            this->dataGridViewTextBoxColumn6->ReadOnly = true;
            this->dataGridViewTextBoxColumn6->Width = 125;
            // 
            // dataGridViewTextBoxColumn7
            // 
            this->dataGridViewTextBoxColumn7->HeaderText = L"Số CMND/CCCD";
            this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
            this->dataGridViewTextBoxColumn7->ReadOnly = true;
            this->dataGridViewTextBoxColumn7->Width = 125;
            // 
            // dataGridViewTextBoxColumn8
            // 
            this->dataGridViewTextBoxColumn8->HeaderText = L"Địa chỉ";
            this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
            this->dataGridViewTextBoxColumn8->ReadOnly = true;
            this->dataGridViewTextBoxColumn8->Width = 125;
            // 
            // dataGridViewTextBoxColumn9
            // 
            this->dataGridViewTextBoxColumn9->HeaderText = L"Mã đăng ký";
            this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
            this->dataGridViewTextBoxColumn9->ReadOnly = true;
            this->dataGridViewTextBoxColumn9->Width = 125;
            // 
            // dataGridViewTextBoxColumn10
            // 
            this->dataGridViewTextBoxColumn10->HeaderText = L"Ngày đăng ký";
            this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
            this->dataGridViewTextBoxColumn10->ReadOnly = true;
            this->dataGridViewTextBoxColumn10->Width = 125;
            // 
            // dataGridViewTextBoxColumn11
            // 
            this->dataGridViewTextBoxColumn11->HeaderText = L"Nơi đăng ký";
            this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
            this->dataGridViewTextBoxColumn11->ReadOnly = true;
            this->dataGridViewTextBoxColumn11->Width = 125;
            // 
            // dataGridViewTextBoxColumn12
            // 
            this->dataGridViewTextBoxColumn12->HeaderText = L"Tiêm mũi 1";
            this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
            this->dataGridViewTextBoxColumn12->ReadOnly = true;
            this->dataGridViewTextBoxColumn12->Width = 125;
            // 
            // dataGridViewTextBoxColumn13
            // 
            this->dataGridViewTextBoxColumn13->HeaderText = L"Ngày tiêm mũi 1";
            this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
            this->dataGridViewTextBoxColumn13->ReadOnly = true;
            this->dataGridViewTextBoxColumn13->Width = 125;
            // 
            // dataGridViewTextBoxColumn14
            // 
            this->dataGridViewTextBoxColumn14->HeaderText = L"Tiêm mũi 2";
            this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
            this->dataGridViewTextBoxColumn14->ReadOnly = true;
            this->dataGridViewTextBoxColumn14->Width = 125;
            // 
            // dataGridViewTextBoxColumn15
            // 
            this->dataGridViewTextBoxColumn15->HeaderText = L"Ngày tiêm mũi 2";
            this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
            this->dataGridViewTextBoxColumn15->ReadOnly = true;
            this->dataGridViewTextBoxColumn15->Width = 125;
            // 
            // bt_search
            // 
            this->bt_search->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_search->Location = System::Drawing::Point(427, 52);
            this->bt_search->Name = L"bt_search";
            this->bt_search->Size = System::Drawing::Size(128, 35);
            this->bt_search->TabIndex = 3;
            this->bt_search->Text = L"Tìm kiếm";
            this->bt_search->UseVisualStyleBackColor = false;
            this->bt_search->Click += gcnew System::EventHandler(this, &Form1::bt_search_Click);
            // 
            // box_search
            // 
            this->box_search->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->box_search->Location = System::Drawing::Point(281, 56);
            this->box_search->Name = L"box_search";
            this->box_search->Size = System::Drawing::Size(129, 26);
            this->box_search->TabIndex = 2;
            // 
            // label26
            // 
            this->label26->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label26->AutoSize = true;
            this->label26->Location = System::Drawing::Point(100, 61);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(149, 19);
            this->label26->TabIndex = 0;
            this->label26->Text = L"Nhập mã công dân";
            // 
            // box_fillData
            // 
            this->box_fillData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_fillData->Controls->Add(this->label30);
            this->box_fillData->Controls->Add(this->box_typeOfSex);
            this->box_fillData->Controls->Add(this->bt_submitFilter);
            this->box_fillData->Controls->Add(this->box_infoType);
            this->box_fillData->Controls->Add(this->label28);
            this->box_fillData->Controls->Add(this->view_filterData);
            this->box_fillData->Controls->Add(this->bt_exportFile);
            this->box_fillData->Controls->Add(this->box_selectTypeFilter);
            this->box_fillData->Controls->Add(this->bt_typeFilter);
            this->box_fillData->Controls->Add(this->label27);
            this->box_fillData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_fillData->Location = System::Drawing::Point(0, 50);
            this->box_fillData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_fillData->Name = L"box_fillData";
            this->box_fillData->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_fillData->Size = System::Drawing::Size(655, 418);
            this->box_fillData->TabIndex = 5;
            this->box_fillData->TabStop = false;
            this->box_fillData->Text = L"Thống kê dữ liệu";
            this->box_fillData->Visible = false;
            // 
            // label30
            // 
            this->label30->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label30->AutoSize = true;
            this->label30->Location = System::Drawing::Point(49, 78);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(110, 19);
            this->label30->TabIndex = 11;
            this->label30->Text = L"Chọn giới tính";
            this->label30->Visible = false;
            // 
            // box_typeOfSex
            // 
            this->box_typeOfSex->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->box_typeOfSex->FormattingEnabled = true;
            this->box_typeOfSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nam", L"Nữ" });
            this->box_typeOfSex->Location = System::Drawing::Point(181, 73);
            this->box_typeOfSex->Name = L"box_typeOfSex";
            this->box_typeOfSex->Size = System::Drawing::Size(296, 27);
            this->box_typeOfSex->TabIndex = 10;
            this->box_typeOfSex->Visible = false;
            // 
            // bt_submitFilter
            // 
            this->bt_submitFilter->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_submitFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_submitFilter->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_submitFilter->Location = System::Drawing::Point(497, 70);
            this->bt_submitFilter->Name = L"bt_submitFilter";
            this->bt_submitFilter->Size = System::Drawing::Size(125, 35);
            this->bt_submitFilter->TabIndex = 9;
            this->bt_submitFilter->Text = L"Thống kê";
            this->bt_submitFilter->UseVisualStyleBackColor = false;
            this->bt_submitFilter->Visible = false;
            this->bt_submitFilter->Click += gcnew System::EventHandler(this, &Form1::bt_submitFilter_Click);
            // 
            // box_infoType
            // 
            this->box_infoType->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->box_infoType->Location = System::Drawing::Point(180, 73);
            this->box_infoType->Name = L"box_infoType";
            this->box_infoType->Size = System::Drawing::Size(297, 26);
            this->box_infoType->TabIndex = 8;
            this->box_infoType->Visible = false;
            // 
            // label28
            // 
            this->label28->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label28->AutoSize = true;
            this->label28->Location = System::Drawing::Point(71, 76);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(88, 19);
            this->label28->TabIndex = 7;
            this->label28->Text = L"Nhập ngày";
            this->label28->Visible = false;
            // 
            // view_filterData
            // 
            this->view_filterData->AllowUserToAddRows = false;
            this->view_filterData->AllowUserToDeleteRows = false;
            this->view_filterData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_filterData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_filterData->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->view_filterData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_filterData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
                this->dataGridViewTextBoxColumn16,
                    this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20,
                    this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24,
                    this->dataGridViewTextBoxColumn25, this->dataGridViewTextBoxColumn26, this->dataGridViewTextBoxColumn27, this->dataGridViewTextBoxColumn28,
                    this->dataGridViewTextBoxColumn29, this->dataGridViewTextBoxColumn30
            });
            this->view_filterData->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_filterData->Location = System::Drawing::Point(14, 117);
            this->view_filterData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->view_filterData->Name = L"view_filterData";
            this->view_filterData->ReadOnly = true;
            this->view_filterData->RowHeadersWidth = 51;
            this->view_filterData->RowTemplate->Height = 24;
            this->view_filterData->Size = System::Drawing::Size(628, 259);
            this->view_filterData->TabIndex = 6;
            // 
            // dataGridViewTextBoxColumn16
            // 
            this->dataGridViewTextBoxColumn16->HeaderText = L"Mã công dân";
            this->dataGridViewTextBoxColumn16->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
            this->dataGridViewTextBoxColumn16->ReadOnly = true;
            this->dataGridViewTextBoxColumn16->Width = 125;
            // 
            // dataGridViewTextBoxColumn17
            // 
            this->dataGridViewTextBoxColumn17->HeaderText = L"Họ và tên";
            this->dataGridViewTextBoxColumn17->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
            this->dataGridViewTextBoxColumn17->ReadOnly = true;
            this->dataGridViewTextBoxColumn17->Width = 125;
            // 
            // dataGridViewTextBoxColumn18
            // 
            this->dataGridViewTextBoxColumn18->HeaderText = L"Giới tính";
            this->dataGridViewTextBoxColumn18->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
            this->dataGridViewTextBoxColumn18->ReadOnly = true;
            this->dataGridViewTextBoxColumn18->Width = 125;
            // 
            // dataGridViewTextBoxColumn19
            // 
            this->dataGridViewTextBoxColumn19->HeaderText = L"Ngày sinh";
            this->dataGridViewTextBoxColumn19->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
            this->dataGridViewTextBoxColumn19->ReadOnly = true;
            this->dataGridViewTextBoxColumn19->Width = 125;
            // 
            // dataGridViewTextBoxColumn20
            // 
            this->dataGridViewTextBoxColumn20->HeaderText = L"SĐT";
            this->dataGridViewTextBoxColumn20->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
            this->dataGridViewTextBoxColumn20->ReadOnly = true;
            this->dataGridViewTextBoxColumn20->Width = 125;
            // 
            // dataGridViewTextBoxColumn21
            // 
            this->dataGridViewTextBoxColumn21->HeaderText = L"Số BHXH";
            this->dataGridViewTextBoxColumn21->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
            this->dataGridViewTextBoxColumn21->ReadOnly = true;
            this->dataGridViewTextBoxColumn21->Width = 125;
            // 
            // dataGridViewTextBoxColumn22
            // 
            this->dataGridViewTextBoxColumn22->HeaderText = L"Số CMND/CCCD";
            this->dataGridViewTextBoxColumn22->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
            this->dataGridViewTextBoxColumn22->ReadOnly = true;
            this->dataGridViewTextBoxColumn22->Width = 125;
            // 
            // dataGridViewTextBoxColumn23
            // 
            this->dataGridViewTextBoxColumn23->HeaderText = L"Địa chỉ";
            this->dataGridViewTextBoxColumn23->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
            this->dataGridViewTextBoxColumn23->ReadOnly = true;
            this->dataGridViewTextBoxColumn23->Width = 125;
            // 
            // dataGridViewTextBoxColumn24
            // 
            this->dataGridViewTextBoxColumn24->HeaderText = L"Mã đăng ký";
            this->dataGridViewTextBoxColumn24->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
            this->dataGridViewTextBoxColumn24->ReadOnly = true;
            this->dataGridViewTextBoxColumn24->Width = 125;
            // 
            // dataGridViewTextBoxColumn25
            // 
            this->dataGridViewTextBoxColumn25->HeaderText = L"Ngày đăng ký";
            this->dataGridViewTextBoxColumn25->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
            this->dataGridViewTextBoxColumn25->ReadOnly = true;
            this->dataGridViewTextBoxColumn25->Width = 125;
            // 
            // dataGridViewTextBoxColumn26
            // 
            this->dataGridViewTextBoxColumn26->HeaderText = L"Nơi đăng ký";
            this->dataGridViewTextBoxColumn26->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
            this->dataGridViewTextBoxColumn26->ReadOnly = true;
            this->dataGridViewTextBoxColumn26->Width = 125;
            // 
            // dataGridViewTextBoxColumn27
            // 
            this->dataGridViewTextBoxColumn27->HeaderText = L"Tiêm mũi 1";
            this->dataGridViewTextBoxColumn27->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
            this->dataGridViewTextBoxColumn27->ReadOnly = true;
            this->dataGridViewTextBoxColumn27->Width = 125;
            // 
            // dataGridViewTextBoxColumn28
            // 
            this->dataGridViewTextBoxColumn28->HeaderText = L"Ngày tiêm mũi 1";
            this->dataGridViewTextBoxColumn28->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
            this->dataGridViewTextBoxColumn28->ReadOnly = true;
            this->dataGridViewTextBoxColumn28->Width = 125;
            // 
            // dataGridViewTextBoxColumn29
            // 
            this->dataGridViewTextBoxColumn29->HeaderText = L"Tiêm mũi 2";
            this->dataGridViewTextBoxColumn29->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
            this->dataGridViewTextBoxColumn29->ReadOnly = true;
            this->dataGridViewTextBoxColumn29->Width = 125;
            // 
            // dataGridViewTextBoxColumn30
            // 
            this->dataGridViewTextBoxColumn30->HeaderText = L"Ngày tiêm mũi 2";
            this->dataGridViewTextBoxColumn30->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn30->Name = L"dataGridViewTextBoxColumn30";
            this->dataGridViewTextBoxColumn30->ReadOnly = true;
            this->dataGridViewTextBoxColumn30->Width = 125;
            // 
            // bt_exportFile
            // 
            this->bt_exportFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_exportFile->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_exportFile->Location = System::Drawing::Point(497, 380);
            this->bt_exportFile->Name = L"bt_exportFile";
            this->bt_exportFile->Size = System::Drawing::Size(125, 35);
            this->bt_exportFile->TabIndex = 5;
            this->bt_exportFile->Text = L"Xuất file";
            this->bt_exportFile->UseVisualStyleBackColor = false;
            // 
            // box_selectTypeFilter
            // 
            this->box_selectTypeFilter->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->box_selectTypeFilter->FormattingEnabled = true;
            this->box_selectTypeFilter->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
                L"Đã tiêm mũi 1", L"Tiêm đủ 2 mũi",
                    L"Chưa tiêm mũi nào", L"Tiêm mũi 1 chưa tiêm mũi 2", L"Người đã tiêm mũi 1 trong ngày", L"Người đã tiêm mũi 2 trong ngày", L"Giới tính",
                    L"Người đã đăng ký trong 1 ngày"
            });
            this->box_selectTypeFilter->Location = System::Drawing::Point(180, 31);
            this->box_selectTypeFilter->Name = L"box_selectTypeFilter";
            this->box_selectTypeFilter->Size = System::Drawing::Size(297, 27);
            this->box_selectTypeFilter->TabIndex = 3;
            // 
            // bt_typeFilter
            // 
            this->bt_typeFilter->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_typeFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_typeFilter->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_typeFilter->Location = System::Drawing::Point(497, 27);
            this->bt_typeFilter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_typeFilter->Name = L"bt_typeFilter";
            this->bt_typeFilter->Size = System::Drawing::Size(125, 35);
            this->bt_typeFilter->TabIndex = 2;
            this->bt_typeFilter->Text = L"Chọn";
            this->bt_typeFilter->UseVisualStyleBackColor = false;
            this->bt_typeFilter->Click += gcnew System::EventHandler(this, &Form1::bt_typeFilter_Click);
            // 
            // label27
            // 
            this->label27->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label27->AutoSize = true;
            this->label27->Location = System::Drawing::Point(49, 37);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(110, 19);
            this->label27->TabIndex = 0;
            this->label27->Text = L"Loại thống kê";
            // 
            // box_deleteData
            // 
            this->box_deleteData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_deleteData->Controls->Add(this->bt_deleteData);
            this->box_deleteData->Controls->Add(this->textbox_deleteData);
            this->box_deleteData->Controls->Add(this->label7);
            this->box_deleteData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_deleteData->Location = System::Drawing::Point(0, 50);
            this->box_deleteData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_deleteData->Name = L"box_deleteData";
            this->box_deleteData->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_deleteData->Size = System::Drawing::Size(653, 417);
            this->box_deleteData->TabIndex = 4;
            this->box_deleteData->TabStop = false;
            this->box_deleteData->Text = L"Xoá dữ liệu";
            this->box_deleteData->Visible = false;
            // 
            // bt_deleteData
            // 
            this->bt_deleteData->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_deleteData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_deleteData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_deleteData->Location = System::Drawing::Point(283, 153);
            this->bt_deleteData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_deleteData->Name = L"bt_deleteData";
            this->bt_deleteData->Size = System::Drawing::Size(86, 35);
            this->bt_deleteData->TabIndex = 2;
            this->bt_deleteData->Text = L"Xoá";
            this->bt_deleteData->UseVisualStyleBackColor = false;
            this->bt_deleteData->Click += gcnew System::EventHandler(this, &Form1::bt_deleteData_Click);
            // 
            // textbox_deleteData
            // 
            this->textbox_deleteData->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->textbox_deleteData->Location = System::Drawing::Point(418, 110);
            this->textbox_deleteData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textbox_deleteData->Name = L"textbox_deleteData";
            this->textbox_deleteData->Size = System::Drawing::Size(146, 26);
            this->textbox_deleteData->TabIndex = 1;
            // 
            // label7
            // 
            this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(49, 113);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(320, 19);
            this->label7->TabIndex = 0;
            this->label7->Text = L"Nhập mã công dân của đối tượng cần xoá";
            // 
            // box_sortData
            // 
            this->box_sortData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->box_sortData->Controls->Add(this->view_sortData_people);
            this->box_sortData->Controls->Add(this->bt_view_sortData);
            this->box_sortData->Controls->Add(this->bt_sortData);
            this->box_sortData->Controls->Add(this->box_sortType);
            this->box_sortData->Controls->Add(this->box_sortSelect);
            this->box_sortData->Controls->Add(this->label6);
            this->box_sortData->Controls->Add(this->label5);
            this->box_sortData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->box_sortData->Location = System::Drawing::Point(0, 50);
            this->box_sortData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_sortData->Name = L"box_sortData";
            this->box_sortData->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_sortData->Size = System::Drawing::Size(653, 417);
            this->box_sortData->TabIndex = 3;
            this->box_sortData->TabStop = false;
            this->box_sortData->Text = L"Sắp xếp dữ liệu";
            this->box_sortData->Visible = false;
            // 
            // view_sortData_people
            // 
            this->view_sortData_people->AllowUserToAddRows = false;
            this->view_sortData_people->AllowUserToDeleteRows = false;
            this->view_sortData_people->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->view_sortData_people->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_sortData_people->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->view_sortData_people->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
                this->dataGridViewTextBoxColumn31,
                    this->dataGridViewTextBoxColumn32, this->dataGridViewTextBoxColumn33, this->dataGridViewTextBoxColumn34, this->dataGridViewTextBoxColumn35,
                    this->dataGridViewTextBoxColumn36, this->dataGridViewTextBoxColumn37, this->dataGridViewTextBoxColumn38, this->dataGridViewTextBoxColumn39,
                    this->dataGridViewTextBoxColumn40, this->dataGridViewTextBoxColumn41, this->dataGridViewTextBoxColumn42, this->dataGridViewTextBoxColumn43,
                    this->dataGridViewTextBoxColumn44, this->dataGridViewTextBoxColumn45
            });
            this->view_sortData_people->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->view_sortData_people->Location = System::Drawing::Point(4, 117);
            this->view_sortData_people->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->view_sortData_people->Name = L"view_sortData_people";
            this->view_sortData_people->ReadOnly = true;
            this->view_sortData_people->RowHeadersWidth = 51;
            this->view_sortData_people->RowTemplate->Height = 24;
            this->view_sortData_people->Size = System::Drawing::Size(651, 301);
            this->view_sortData_people->TabIndex = 6;
            // 
            // dataGridViewTextBoxColumn31
            // 
            this->dataGridViewTextBoxColumn31->HeaderText = L"Mã công dân";
            this->dataGridViewTextBoxColumn31->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn31->Name = L"dataGridViewTextBoxColumn31";
            this->dataGridViewTextBoxColumn31->ReadOnly = true;
            this->dataGridViewTextBoxColumn31->Width = 125;
            // 
            // dataGridViewTextBoxColumn32
            // 
            this->dataGridViewTextBoxColumn32->HeaderText = L"Họ và tên";
            this->dataGridViewTextBoxColumn32->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn32->Name = L"dataGridViewTextBoxColumn32";
            this->dataGridViewTextBoxColumn32->ReadOnly = true;
            this->dataGridViewTextBoxColumn32->Width = 125;
            // 
            // dataGridViewTextBoxColumn33
            // 
            this->dataGridViewTextBoxColumn33->HeaderText = L"Giới tính";
            this->dataGridViewTextBoxColumn33->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn33->Name = L"dataGridViewTextBoxColumn33";
            this->dataGridViewTextBoxColumn33->ReadOnly = true;
            this->dataGridViewTextBoxColumn33->Width = 125;
            // 
            // dataGridViewTextBoxColumn34
            // 
            this->dataGridViewTextBoxColumn34->HeaderText = L"Ngày sinh";
            this->dataGridViewTextBoxColumn34->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn34->Name = L"dataGridViewTextBoxColumn34";
            this->dataGridViewTextBoxColumn34->ReadOnly = true;
            this->dataGridViewTextBoxColumn34->Width = 125;
            // 
            // dataGridViewTextBoxColumn35
            // 
            this->dataGridViewTextBoxColumn35->HeaderText = L"SĐT";
            this->dataGridViewTextBoxColumn35->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn35->Name = L"dataGridViewTextBoxColumn35";
            this->dataGridViewTextBoxColumn35->ReadOnly = true;
            this->dataGridViewTextBoxColumn35->Width = 125;
            // 
            // dataGridViewTextBoxColumn36
            // 
            this->dataGridViewTextBoxColumn36->HeaderText = L"Số BHXH";
            this->dataGridViewTextBoxColumn36->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn36->Name = L"dataGridViewTextBoxColumn36";
            this->dataGridViewTextBoxColumn36->ReadOnly = true;
            this->dataGridViewTextBoxColumn36->Width = 125;
            // 
            // dataGridViewTextBoxColumn37
            // 
            this->dataGridViewTextBoxColumn37->HeaderText = L"Số CMND/CCCD";
            this->dataGridViewTextBoxColumn37->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn37->Name = L"dataGridViewTextBoxColumn37";
            this->dataGridViewTextBoxColumn37->ReadOnly = true;
            this->dataGridViewTextBoxColumn37->Width = 125;
            // 
            // dataGridViewTextBoxColumn38
            // 
            this->dataGridViewTextBoxColumn38->HeaderText = L"Địa chỉ";
            this->dataGridViewTextBoxColumn38->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn38->Name = L"dataGridViewTextBoxColumn38";
            this->dataGridViewTextBoxColumn38->ReadOnly = true;
            this->dataGridViewTextBoxColumn38->Width = 125;
            // 
            // dataGridViewTextBoxColumn39
            // 
            this->dataGridViewTextBoxColumn39->HeaderText = L"Mã đăng ký";
            this->dataGridViewTextBoxColumn39->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn39->Name = L"dataGridViewTextBoxColumn39";
            this->dataGridViewTextBoxColumn39->ReadOnly = true;
            this->dataGridViewTextBoxColumn39->Width = 125;
            // 
            // dataGridViewTextBoxColumn40
            // 
            this->dataGridViewTextBoxColumn40->HeaderText = L"Ngày đăng ký";
            this->dataGridViewTextBoxColumn40->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn40->Name = L"dataGridViewTextBoxColumn40";
            this->dataGridViewTextBoxColumn40->ReadOnly = true;
            this->dataGridViewTextBoxColumn40->Width = 125;
            // 
            // dataGridViewTextBoxColumn41
            // 
            this->dataGridViewTextBoxColumn41->HeaderText = L"Nơi đăng ký";
            this->dataGridViewTextBoxColumn41->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn41->Name = L"dataGridViewTextBoxColumn41";
            this->dataGridViewTextBoxColumn41->ReadOnly = true;
            this->dataGridViewTextBoxColumn41->Width = 125;
            // 
            // dataGridViewTextBoxColumn42
            // 
            this->dataGridViewTextBoxColumn42->HeaderText = L"Tiêm mũi 1";
            this->dataGridViewTextBoxColumn42->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn42->Name = L"dataGridViewTextBoxColumn42";
            this->dataGridViewTextBoxColumn42->ReadOnly = true;
            this->dataGridViewTextBoxColumn42->Width = 125;
            // 
            // dataGridViewTextBoxColumn43
            // 
            this->dataGridViewTextBoxColumn43->HeaderText = L"Ngày tiêm mũi 1";
            this->dataGridViewTextBoxColumn43->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn43->Name = L"dataGridViewTextBoxColumn43";
            this->dataGridViewTextBoxColumn43->ReadOnly = true;
            this->dataGridViewTextBoxColumn43->Width = 125;
            // 
            // dataGridViewTextBoxColumn44
            // 
            this->dataGridViewTextBoxColumn44->HeaderText = L"Tiêm mũi 2";
            this->dataGridViewTextBoxColumn44->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn44->Name = L"dataGridViewTextBoxColumn44";
            this->dataGridViewTextBoxColumn44->ReadOnly = true;
            this->dataGridViewTextBoxColumn44->Width = 125;
            // 
            // dataGridViewTextBoxColumn45
            // 
            this->dataGridViewTextBoxColumn45->HeaderText = L"Ngày tiêm mũi 2";
            this->dataGridViewTextBoxColumn45->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn45->Name = L"dataGridViewTextBoxColumn45";
            this->dataGridViewTextBoxColumn45->ReadOnly = true;
            this->dataGridViewTextBoxColumn45->Width = 125;
            // 
            // bt_view_sortData
            // 
            this->bt_view_sortData->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_view_sortData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_view_sortData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_view_sortData->Location = System::Drawing::Point(483, 68);
            this->bt_view_sortData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_view_sortData->Name = L"bt_view_sortData";
            this->bt_view_sortData->Size = System::Drawing::Size(105, 35);
            this->bt_view_sortData->TabIndex = 5;
            this->bt_view_sortData->Text = L"Xem";
            this->bt_view_sortData->UseVisualStyleBackColor = false;
            this->bt_view_sortData->Visible = false;
            this->bt_view_sortData->Click += gcnew System::EventHandler(this, &Form1::button3_Click_2);
            // 
            // bt_sortData
            // 
            this->bt_sortData->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_sortData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_sortData->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_sortData->Location = System::Drawing::Point(483, 21);
            this->bt_sortData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_sortData->Name = L"bt_sortData";
            this->bt_sortData->Size = System::Drawing::Size(105, 35);
            this->bt_sortData->TabIndex = 4;
            this->bt_sortData->Text = L"Sắp xếp";
            this->bt_sortData->UseVisualStyleBackColor = false;
            this->bt_sortData->Click += gcnew System::EventHandler(this, &Form1::bt_sortData_Click);
            // 
            // box_sortType
            // 
            this->box_sortType->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->box_sortType->FormattingEnabled = true;
            this->box_sortType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Tăng dần", L"Giảm dần" });
            this->box_sortType->Location = System::Drawing::Point(250, 71);
            this->box_sortType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_sortType->Name = L"box_sortType";
            this->box_sortType->Size = System::Drawing::Size(203, 27);
            this->box_sortType->TabIndex = 3;
            // 
            // box_sortSelect
            // 
            this->box_sortSelect->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->box_sortSelect->FormattingEnabled = true;
            this->box_sortSelect->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"Mã công dân", L"Ngày đăng ký", L"Ngày tiêm mũi 1",
                    L"Ngày tiêm mũi 2"
            });
            this->box_sortSelect->Location = System::Drawing::Point(250, 26);
            this->box_sortSelect->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_sortSelect->Name = L"box_sortSelect";
            this->box_sortSelect->Size = System::Drawing::Size(203, 27);
            this->box_sortSelect->TabIndex = 2;
            // 
            // label6
            // 
            this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(100, 74);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(121, 19);
            this->label6->TabIndex = 1;
            this->label6->Text = L"Thứ tự sắp xếp";
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(112, 29);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(108, 19);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Sắp xếp theo";
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
            this->box_inputFile->Location = System::Drawing::Point(0, 50);
            this->box_inputFile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_inputFile->Name = L"box_inputFile";
            this->box_inputFile->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->box_inputFile->Size = System::Drawing::Size(653, 417);
            this->box_inputFile->TabIndex = 5;
            this->box_inputFile->TabStop = false;
            this->box_inputFile->Text = L"Nhập dữ liệu từ tập tin";
            this->box_inputFile->Visible = false;
            // 
            // bt_selectFile3
            // 
            this->bt_selectFile3->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_selectFile3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_selectFile3->Location = System::Drawing::Point(515, 140);
            this->bt_selectFile3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_selectFile3->Name = L"bt_selectFile3";
            this->bt_selectFile3->Size = System::Drawing::Size(40, 35);
            this->bt_selectFile3->TabIndex = 9;
            this->bt_selectFile3->Text = L"...";
            this->bt_selectFile3->UseVisualStyleBackColor = false;
            this->bt_selectFile3->Click += gcnew System::EventHandler(this, &Form1::bt_selectFile3_Click);
            // 
            // bt_selectFile2
            // 
            this->bt_selectFile2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_selectFile2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_selectFile2->Location = System::Drawing::Point(515, 90);
            this->bt_selectFile2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_selectFile2->Name = L"bt_selectFile2";
            this->bt_selectFile2->Size = System::Drawing::Size(40, 35);
            this->bt_selectFile2->TabIndex = 8;
            this->bt_selectFile2->Text = L"...";
            this->bt_selectFile2->UseVisualStyleBackColor = false;
            this->bt_selectFile2->Click += gcnew System::EventHandler(this, &Form1::bt_selectFile2_Click);
            // 
            // bt_selectFile1
            // 
            this->bt_selectFile1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_selectFile1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_selectFile1->Location = System::Drawing::Point(515, 40);
            this->bt_selectFile1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_selectFile1->Name = L"bt_selectFile1";
            this->bt_selectFile1->Size = System::Drawing::Size(40, 35);
            this->bt_selectFile1->TabIndex = 7;
            this->bt_selectFile1->Text = L"...";
            this->bt_selectFile1->UseVisualStyleBackColor = false;
            this->bt_selectFile1->Click += gcnew System::EventHandler(this, &Form1::bt_selectFile1_Click);
            // 
            // bt_inputFile
            // 
            this->bt_inputFile->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bt_inputFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_inputFile->Location = System::Drawing::Point(363, 191);
            this->bt_inputFile->Margin = System::Windows::Forms::Padding(4);
            this->bt_inputFile->Name = L"bt_inputFile";
            this->bt_inputFile->Size = System::Drawing::Size(100, 35);
            this->bt_inputFile->TabIndex = 6;
            this->bt_inputFile->Text = L"Nhập";
            this->bt_inputFile->UseVisualStyleBackColor = false;
            this->bt_inputFile->Click += gcnew System::EventHandler(this, &Form1::bt_inputFile_Click);
            // 
            // fileName3
            // 
            this->fileName3->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->fileName3->Location = System::Drawing::Point(320, 145);
            this->fileName3->Margin = System::Windows::Forms::Padding(4);
            this->fileName3->Name = L"fileName3";
            this->fileName3->ReadOnly = true;
            this->fileName3->Size = System::Drawing::Size(185, 26);
            this->fileName3->TabIndex = 5;
            // 
            // fileName2
            // 
            this->fileName2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->fileName2->Location = System::Drawing::Point(320, 95);
            this->fileName2->Margin = System::Windows::Forms::Padding(4);
            this->fileName2->Name = L"fileName2";
            this->fileName2->ReadOnly = true;
            this->fileName2->Size = System::Drawing::Size(185, 26);
            this->fileName2->TabIndex = 4;
            // 
            // label_fileName3
            // 
            this->label_fileName3->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label_fileName3->AutoSize = true;
            this->label_fileName3->Location = System::Drawing::Point(40, 150);
            this->label_fileName3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label_fileName3->Name = L"label_fileName3";
            this->label_fileName3->Size = System::Drawing::Size(236, 19);
            this->label_fileName3->TabIndex = 3;
            this->label_fileName3->Text = L"Nhập file dữ liệu tiêm chủng(*)";
            // 
            // label_fileName1
            // 
            this->label_fileName1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label_fileName1->AutoSize = true;
            this->label_fileName1->Location = System::Drawing::Point(40, 50);
            this->label_fileName1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label_fileName1->Name = L"label_fileName1";
            this->label_fileName1->Size = System::Drawing::Size(222, 19);
            this->label_fileName1->TabIndex = 2;
            this->label_fileName1->Text = L"Nhập file dữ liệu công dân(*)";
            // 
            // label_fileName2
            // 
            this->label_fileName2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label_fileName2->AutoSize = true;
            this->label_fileName2->Location = System::Drawing::Point(40, 100);
            this->label_fileName2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label_fileName2->Name = L"label_fileName2";
            this->label_fileName2->Size = System::Drawing::Size(165, 19);
            this->label_fileName2->TabIndex = 1;
            this->label_fileName2->Text = L"Nhập file đăng ký (*)";
            // 
            // fileName1
            // 
            this->fileName1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->fileName1->Location = System::Drawing::Point(320, 45);
            this->fileName1->Margin = System::Windows::Forms::Padding(4);
            this->fileName1->Name = L"fileName1";
            this->fileName1->ReadOnly = true;
            this->fileName1->Size = System::Drawing::Size(185, 26);
            this->fileName1->TabIndex = 0;
            // 
            // accountManager_newFullname
            // 
            this->accountManager_newFullname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
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
            this->Manager->Size = System::Drawing::Size(659, 500);
            this->Manager->TabIndex = 1;
            // 
            // loginTab
            // 
            this->loginTab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->loginTab->Controls->Add(this->label29);
            this->loginTab->Controls->Add(this->label25);
            this->loginTab->Controls->Add(this->label24);
            this->loginTab->Controls->Add(this->label23);
            this->loginTab->Controls->Add(this->label22);
            this->loginTab->Controls->Add(this->label20);
            this->loginTab->Controls->Add(this->intro_label1);
            this->loginTab->Controls->Add(this->bt_quit);
            this->loginTab->Controls->Add(this->loginBox);
            this->loginTab->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->loginTab->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->loginTab->Location = System::Drawing::Point(4, 28);
            this->loginTab->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginTab->Name = L"loginTab";
            this->loginTab->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginTab->Size = System::Drawing::Size(651, 468);
            this->loginTab->TabIndex = 0;
            this->loginTab->Text = L"Đăng nhập";
            // 
            // label29
            // 
            this->label29->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->label29->Location = System::Drawing::Point(100, 22);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(403, 19);
            this->label29->TabIndex = 8;
            this->label29->Text = L"ĐỒ ÁN PBL2 HỌC KỲ 1, NĂM HỌC 2021 - 2022";
            // 
            // label25
            // 
            this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label25->AutoSize = true;
            this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->label25->Location = System::Drawing::Point(327, 86);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(176, 19);
            this->label25->TabIndex = 7;
            this->label25->Text = L"ThS. Đỗ Thị Tuyết Hoa";
            // 
            // label24
            // 
            this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label24->AutoSize = true;
            this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->label24->Location = System::Drawing::Point(327, 111);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(160, 19);
            this->label24->TabIndex = 6;
            this->label24->Text = L"Đỗ Trần Bình - 20T1";
            // 
            // label23
            // 
            this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label23->AutoSize = true;
            this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->label23->Location = System::Drawing::Point(327, 135);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(142, 19);
            this->label23->TabIndex = 5;
            this->label23->Text = L"Lê Phi Duy - 20T1";
            // 
            // label22
            // 
            this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label22->AutoSize = true;
            this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->label22->Location = System::Drawing::Point(181, 111);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(130, 19);
            this->label22->TabIndex = 4;
            this->label22->Text = L"Nhóm sinh viên:";
            // 
            // label20
            // 
            this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label20->AutoSize = true;
            this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->label20->Location = System::Drawing::Point(136, 86);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(169, 19);
            this->label20->TabIndex = 3;
            this->label20->Text = L"Giáo viên hướng dẫn:";
            // 
            // intro_label1
            // 
            this->intro_label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->intro_label1->AutoSize = true;
            this->intro_label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->intro_label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->intro_label1->Location = System::Drawing::Point(53, 53);
            this->intro_label1->Name = L"intro_label1";
            this->intro_label1->Size = System::Drawing::Size(510, 19);
            this->intro_label1->TabIndex = 2;
            this->intro_label1->Text = L"QUẢN LÝ CÔNG DÂN ĐĂNG KÝ TIÊM CHỦNG NGỪA COVID19";
            // 
            // bt_quit
            // 
            this->bt_quit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->bt_quit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_quit->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_quit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->bt_quit->Location = System::Drawing::Point(560, 429);
            this->bt_quit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_quit->Name = L"bt_quit";
            this->bt_quit->Size = System::Drawing::Size(85, 35);
            this->bt_quit->TabIndex = 1;
            this->bt_quit->Text = L"Thoát";
            this->bt_quit->UseVisualStyleBackColor = false;
            this->bt_quit->Click += gcnew System::EventHandler(this, &Form1::bt_quit_Click);
            // 
            // loginBox
            // 
            this->loginBox->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->loginBox->AutoSize = true;
            this->loginBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
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
            this->loginBox->Location = System::Drawing::Point(133, 172);
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
            this->text3->Location = System::Drawing::Point(72, 152);
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
            this->loginBox_status->Location = System::Drawing::Point(168, 152);
            this->loginBox_status->Name = L"loginBox_status";
            this->loginBox_status->Size = System::Drawing::Size(130, 19);
            this->loginBox_status->TabIndex = 6;
            this->loginBox_status->Text = L"Chưa đăng nhập";
            // 
            // bt_showPassword
            // 
            this->bt_showPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_showPassword->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_showPassword->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->bt_showPassword->Location = System::Drawing::Point(331, 78);
            this->bt_showPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_showPassword->Name = L"bt_showPassword";
            this->bt_showPassword->Size = System::Drawing::Size(39, 25);
            this->bt_showPassword->TabIndex = 5;
            this->bt_showPassword->UseVisualStyleBackColor = false;
            this->bt_showPassword->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::bt_showPassword_MouseDown);
            this->bt_showPassword->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::bt_showPassword_MouseUp);
            // 
            // bt_login
            // 
            this->bt_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_login->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_login->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->bt_login->Location = System::Drawing::Point(172, 112);
            this->bt_login->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_login->Name = L"bt_login";
            this->bt_login->Size = System::Drawing::Size(151, 35);
            this->bt_login->TabIndex = 4;
            this->bt_login->Text = L"Đăng nhập";
            this->bt_login->UseVisualStyleBackColor = false;
            this->bt_login->Click += gcnew System::EventHandler(this, &Form1::bt_login_Click);
            // 
            // loginBox_password
            // 
            this->loginBox_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->loginBox_password->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->loginBox_password->Location = System::Drawing::Point(171, 77);
            this->loginBox_password->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->loginBox_password->Name = L"loginBox_password";
            this->loginBox_password->PasswordChar = '*';
            this->loginBox_password->Size = System::Drawing::Size(152, 26);
            this->loginBox_password->TabIndex = 3;
            // 
            // loginBox_username
            // 
            this->loginBox_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->loginBox_username->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->loginBox_username->Location = System::Drawing::Point(171, 43);
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
            this->text2->Location = System::Drawing::Point(76, 80);
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
            this->text1->Location = System::Drawing::Point(33, 46);
            this->text1->Name = L"text1";
            this->text1->Size = System::Drawing::Size(118, 19);
            this->text1->TabIndex = 0;
            this->text1->Text = L"Tên đăng nhập";
            // 
            // accountManagerTab
            // 
            this->accountManagerTab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
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
            this->accountManagerTab->Size = System::Drawing::Size(651, 468);
            this->accountManagerTab->TabIndex = 1;
            this->accountManagerTab->Text = L"Quản lý tài khoản";
            this->accountManagerTab->Click += gcnew System::EventHandler(this, &Form1::accountManagerTab_Click);
            // 
            // bt_logout
            // 
            this->bt_logout->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->bt_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_logout->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_logout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->bt_logout->Location = System::Drawing::Point(501, 352);
            this->bt_logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_logout->Name = L"bt_logout";
            this->bt_logout->Size = System::Drawing::Size(127, 35);
            this->bt_logout->TabIndex = 5;
            this->bt_logout->Text = L"Đăng xuất";
            this->bt_logout->UseVisualStyleBackColor = false;
            this->bt_logout->Visible = false;
            this->bt_logout->Click += gcnew System::EventHandler(this, &Form1::bt_logout_Click);
            // 
            // accountManager_loginAlert
            // 
            this->accountManager_loginAlert->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->accountManager_loginAlert->AutoSize = true;
            this->accountManager_loginAlert->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->accountManager_loginAlert->Location = System::Drawing::Point(123, 212);
            this->accountManager_loginAlert->Name = L"accountManager_loginAlert";
            this->accountManager_loginAlert->Size = System::Drawing::Size(376, 19);
            this->accountManager_loginAlert->TabIndex = 4;
            this->accountManager_loginAlert->Text = L"Bạn chưa đăng nhập. Hãy đăng nhập để thao tác.";
            // 
            // bt_refresh
            // 
            this->bt_refresh->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->bt_refresh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_refresh->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_refresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)));
            this->bt_refresh->Location = System::Drawing::Point(501, 391);
            this->bt_refresh->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_refresh->Name = L"bt_refresh";
            this->bt_refresh->Size = System::Drawing::Size(127, 35);
            this->bt_refresh->TabIndex = 3;
            this->bt_refresh->Text = L"Tải lại";
            this->bt_refresh->UseVisualStyleBackColor = false;
            this->bt_refresh->Visible = false;
            this->bt_refresh->Click += gcnew System::EventHandler(this, &Form1::bt_refresh_Click);
            // 
            // accountManager_changer
            // 
            this->accountManager_changer->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->accountManager_changer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
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
            this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
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
            // 
            // bt_saveUsername
            // 
            this->bt_saveUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_saveUsername->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_saveUsername->Location = System::Drawing::Point(181, 89);
            this->bt_saveUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_saveUsername->Name = L"bt_saveUsername";
            this->bt_saveUsername->Size = System::Drawing::Size(75, 35);
            this->bt_saveUsername->TabIndex = 2;
            this->bt_saveUsername->Text = L"Lưu";
            this->bt_saveUsername->UseVisualStyleBackColor = false;
            this->bt_saveUsername->Click += gcnew System::EventHandler(this, &Form1::bt_saveUsername_Click);
            // 
            // accountManager_newUsername
            // 
            this->accountManager_newUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
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
            this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
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
            // 
            // accountManager_newPasswordCheck
            // 
            this->accountManager_newPasswordCheck->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
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
            this->bt_savePassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->bt_savePassword->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_savePassword->Location = System::Drawing::Point(181, 89);
            this->bt_savePassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->bt_savePassword->Name = L"bt_savePassword";
            this->bt_savePassword->Size = System::Drawing::Size(75, 35);
            this->bt_savePassword->TabIndex = 5;
            this->bt_savePassword->Text = L"Lưu";
            this->bt_savePassword->UseVisualStyleBackColor = false;
            this->bt_savePassword->Click += gcnew System::EventHandler(this, &Form1::bt_savePassword_Click);
            // 
            // accountManager_newPassword
            // 
            this->accountManager_newPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
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
            this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
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
            // 
            // accountManager_Info
            // 
            this->accountManager_Info->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->accountManager_Info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
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
            this->ClientSize = System::Drawing::Size(683, 524);
            this->Controls->Add(this->Manager);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"Form1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"COVID19_VACCINATION_MANAGER";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->dataManagerTab->ResumeLayout(false);
            this->boxDataManager->ResumeLayout(false);
            this->boxDataManager->PerformLayout();
            this->dataManager_menu->ResumeLayout(false);
            this->dataManager_menu->PerformLayout();
            this->box_inputHand->ResumeLayout(false);
            this->box_inputHand->PerformLayout();
            this->panel_insertType->ResumeLayout(false);
            this->panel_insertType->PerformLayout();
            this->export_allData_people->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportAllData_people))->EndInit();
            this->exportData_vaccination->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_vaccination))->EndInit();
            this->exportData_registry->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_registry))->EndInit();
            this->exportData_people->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_exportData_people))->EndInit();
            this->box_searchData->ResumeLayout(false);
            this->box_searchData->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_searchData))->EndInit();
            this->box_fillData->ResumeLayout(false);
            this->box_fillData->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_filterData))->EndInit();
            this->box_deleteData->ResumeLayout(false);
            this->box_deleteData->PerformLayout();
            this->box_sortData->ResumeLayout(false);
            this->box_sortData->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_sortData_people))->EndInit();
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
        //this->loginBox_password->PasswordChar = char::MinValue;
        this->loginBox_password->PasswordChar = '\0';

    }
    private: System::Void bt_showPassword_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        //this->loginBox_password->PasswordChar = char::MaxValue;
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
            this->box_fillData->Visible = false;
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
            this->box_fillData->Visible = false;
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
        this->box_fillData->Visible = false;
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
            this->panel_insertType->Visible = false;
            this->box_fillData->Visible = false;
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
            this->box_fillData->Visible = false;
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
        f1 = fileName1->Text;
        f2 = fileName2->Text;
        f3 = fileName3->Text;
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
        this->view_exportData_people->ReadOnly = false;
        this->bt_modData_people->BackColor = Color::Black;
        this->bt_modData_people->ForeColor = Color::White;
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
            this->box_fillData->Visible = false;
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
        this->box_fillData->Visible = false;

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
        this->box_fillData->Visible = false;
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
    //MessageBox::Show(L"Trả về thành công", L"THÔNG BÁO");
    int n = DN.getRows();
    this->view_sortData_people->RowCount = n;
    for (int i = 0; i < n; i++) {
        this->view_sortData_people->Rows[i]->Cells[0]->Value = gcnew String(DN.get("ma_CD", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[1]->Value = gcnew String(DN.get("fullName", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[2]->Value = gcnew String(DN.get("sex", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[3]->Value = gcnew String(DN.get("birth", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[4]->Value = gcnew String(DN.get("phone", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[5]->Value = gcnew String(DN.get("so_BHXH", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[6]->Value = gcnew String(DN.get("so_CMND", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[7]->Value = gcnew String(DN.get("address", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[8]->Value = gcnew String(DN.get("ma_DK", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[9]->Value = gcnew String(DN.get("ngay_DK", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[10]->Value = gcnew String(DN.get("noi_DK", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[11]->Value = gcnew String(DN.get("mui1", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[12]->Value = gcnew String(DN.get("ngay_M1", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[13]->Value = gcnew String(DN.get("mui2", i).c_str());
        this->view_sortData_people->Rows[i]->Cells[14]->Value = gcnew String(DN.get("ngay_M2", i).c_str());
    }
}
private: System::Void bt_sortData_Click(System::Object^ sender, System::EventArgs^ e) {
    
    String ^s1 = this->box_sortSelect->Text;
    String ^s2 = this->box_sortType->Text;

    if (s2 == L"Tăng dần") {
        sortType = true;
        hasSort = true;
        if (s1 == L"Mã công dân") {
            DN.Sort_ma_CD(ascending);
            MessageBox::Show(L"Đã sắp xếp.\nNhấn 'Xem' để xem dữ liệu. ", L"THÔNG BÁO");
            this->bt_view_sortData->Visible = true;
        }
        else if (s1 == L"Mã đăng ký") {
          
        }
        else if (s1 == L"Ngày đăng ký") {
            DN.Sort_ngay_DK(ascending);
            MessageBox::Show(L"Đã sắp xếp.\nNhấn 'Xem' để xem dữ liệu. ", L"THÔNG BÁO");
            this->bt_view_sortData->Visible = true;
        }
        else if (s1 == L"Ngày tiêm mũi 1") {
            DN.Sort_ngay_M1(ascending);
            MessageBox::Show(L"Đã sắp xếp.\nNhấn 'Xem' để xem dữ liệu. ", L"THÔNG BÁO");
            this->bt_view_sortData->Visible = true;
        }
        else if (s1 == L"Ngày tiêm mũi 2") {
            DN.Sort_ngay_M2(ascending);
            MessageBox::Show(L"Đã sắp xếp.\nNhấn 'Xem' để xem dữ liệu. ", L"THÔNG BÁO");
            this->bt_view_sortData->Visible = true;
        }
        else {
            MessageBox::Show(L"Lỗi nhập dữ liệu", L"THÔNG BÁO");
            this->bt_view_sortData->Visible = false;
        }
    }
    else if (s2 == L"Giảm dần") {
        sortType = false;
        hasSort = true;
        if (s1 == L"Mã công dân") {
            DN.Sort_ma_CD(descending);
            MessageBox::Show(L"Đã sắp xếp.\nNhấn 'Xem' để xem dữ liệu. ", L"THÔNG BÁO");
            this->bt_view_sortData->Visible = true;
        }
        else if (s1 == L"Mã đăng ký") {

        }
        else if (s1 == L"Ngày đăng ký") {
            DN.Sort_ngay_DK(descending);
            MessageBox::Show(L"Đã sắp xếp.\nNhấn 'Xem' để xem dữ liệu. ", L"THÔNG BÁO");
            this->bt_view_sortData->Visible = true;
        }
        else if (s1 == L"Ngày tiêm mũi 1") {
            DN.Sort_ngay_M1(descending);
            MessageBox::Show(L"Đã sắp xếp.\nNhấn 'Xem' để xem dữ liệu. ", L"THÔNG BÁO");
            this->bt_view_sortData->Visible = true;
        }
        else if (s1 == L"Ngày tiêm mũi 2") {
            DN.Sort_ngay_M2(descending);
            MessageBox::Show(L"Đã sắp xếp.\nNhấn 'Xem' để xem dữ liệu. ", L"THÔNG BÁO");
                this->bt_view_sortData->Visible = true;
        }
        else { 
            hasSort = false;
            MessageBox::Show(L"Lỗi nhập dữ liệu", L"THÔNG BÁO"); 
            this->bt_view_sortData->Visible = false;
        }
    }
    else {
        hasSort = false;
        MessageBox::Show(L"Lỗi nhập dữ liệu", L"THÔNG BÁO");
        this->bt_view_sortData->Visible = false;
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
    this->box_fillData->Visible = false;
}
private: System::Void bt_deleteData_Click(System::Object^ sender, System::EventArgs^ e) {
    String ^obj = this->textbox_deleteData->Text;
    string s;
    convertString(obj, s);
    if (MessageBox::Show(L"Bạn có chắc chắn muốn xoá không?", L"THÔNG BÁO", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        String^ msg = gcnew String(DN.Delete(s).c_str());
        MessageBox::Show(msg, L"THÔNG BÁO");
    }
    else {

    }
}


private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    String ^s = insertTypeA->Text;
    string pos; convertString(s, pos);
    int x = stoi(pos);
    bool status = DN.Them(CD, x);
    if (status) MessageBox::Show(L"Đã thêm đối tượng.", L"THÔNG BÁO");
    else MessageBox::Show(L"Vị trí thêm không chính xác, hãy nhập lại.", "THÔNG BÁO");

}
private: System::Void bt_saveInputCD_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ s1 = this->input_ma_CD->Text;
    String^ s2 = this->input_fullName->Text;
    String^ s3 = this->input_birth->Text;
    String^ s4 = this->input_phone->Text;
    String^ s5 = this->input_soBHXH->Text;
    String^ s6 = this->input_soCMND->Text;
    String^ s7 = this->input_address->Text;
    String^ s8 = this->input_ngay_DK->Text;
    String^ s9 = this->input_noi_DK->Text;
    String^ s10 = this->input_ma_DK->Text;
    String^ s11 = this->input_ngayM1->Text;
    String^ s12 = this->input_ngayM2->Text;

    string ma_CD; convertString(s1, ma_CD);
    string fullName; convertString(s2, fullName);
    string birth; convertString(s3, birth);
    string phone; convertString(s4, phone);
    string address; convertString(s7, address);
    string so_BHXH; convertString(s5, so_BHXH);
    string so_CMND; convertString(s6, so_CMND);
    string ngay_DK; convertString(s8, ngay_DK);
    string ma_DK; convertString(s10, ma_DK);
    string noi_DK; convertString(s9, noi_DK);
    string ngay_M1; convertString(s11, ngay_M1);
    string ngay_M2; convertString(s12, ngay_M2);
    bool sex, mui1, mui2;
    if (input_sex->Text == "Nam") sex = true;
    else sex = false;
    mui1 = input_mui_1->Checked;
    mui2 = input_mui_2->Checked;
    if((ma_CD != "") && (fullName != "") && (so_BHXH != "") && (so_CMND != "") && (address != "") && (ngay_DK != "") && (ma_DK != "")) {
        //Kiểm tra dữ liệu có bị trùng lặp
        string ck;
        int i = 0;
        for (int i = 0; i < DN.getRows(); i++) {
            if (DN.get("ma_CD", i) == ma_CD) {
                ck = "ma_CD";
                break;
            }
            else if (DN.get("so_BHXH", i) == so_BHXH) {
                ck = "so_BHXH";
                break;
            }
            else if (DN.get("so_CMND", i) == so_CMND) {
                ck = "so_CMND";
                break;
            }
            else if (DN.get("ma_DK", i) == ma_DK) {
                ck = "ma_DK";
                break;
            }
            else {
                ck = "safe";
            }
        }

        if (ck == "ma_CD") {
            MessageBox::Show(L"Mã công dân đã tồn tại.\nHãy kiểm tra lại.", L"THÔNG BÁO");
            this->panel_insertType->Visible = false;
        }
        else if (ck == "so_BHXH") {
            MessageBox::Show(L"Số BHXH trùng khớp.\nHãy kiểm tra lại.", L"THÔNG BÁO");
            this->panel_insertType->Visible = false;
        }
        else if (ck == "so_CMND") {
            MessageBox::Show(L"Số CMND/CCCD trùng khớp.\nHãy kiểm tra lại.", L"THÔNG BÁO");
            this->panel_insertType->Visible = false;
        }
        else if (ck == "ma_DK") {
            MessageBox::Show(L"Mã đăng ký đã tồn tại.\nHãy kiểm tra lại.", L"THÔNG BÁO");
            this->panel_insertType->Visible = false;
        }
        else if (ck == "safe") {
            //Lưu vào biến
            CD.set("ma_CD", ma_CD);
            CD.set("fullName", fullName);
            CD.set("birth", birth);
            CD.set("phone", phone);
            CD.set("so_BHXH", so_BHXH);
            CD.set("so_CMND", so_CMND);
            CD.set("address", address);
            CD.set("ngay_DK", ngay_DK);
            CD.set("ma_DK", ma_DK);
            CD.set("noi_DK", noi_DK);
            CD.set("ngay_M1", ngay_M1);
            CD.set("ngay_M2", ngay_M2);

            CD.set("sex", sex);
            CD.set("mui1", mui1);
            CD.set("mui2", mui2);
            MessageBox::Show(L"Đã xác nhận thông tin.\nChọn 1 trong 2 lựa chọn phía dưới để thêm", L"THÔNG BÁO");
            this->panel_insertType->Visible = true;
        }
        else {
            MessageBox::Show(L"Lỗi không xác định. Không thể xác thực thông tin.", L"THÔNG BÁO.");
        }
    }
    else {
        MessageBox::Show(L"Hãy nhập đủ thông tin cần thiết.\n(*)Thông tin phải nhập.\n(**)Thông tin không được trùng khớp.", L"THÔNG BÁO");
    }
}
private: System::Void button3_Click_3(System::Object^ sender, System::EventArgs^ e) {
    if (!hasSort) { MessageBox::Show(L"Danh sách chưa sắp xếp.\nKhông thể dùng chức năng này.", L"THÔNG BÁO"); }
    else if (hasSort){
        if (sortType == true)
        {
            bool status = DN.Insert_ma_CD(CD,ascending);
            if (status) MessageBox::Show(L"Đã thêm đối tượng.", L"THÔNG BÁO");
            else MessageBox::Show(L"Vị trí thêm không chính xác, hãy nhập lại.", "THÔNG BÁO");
        }else{
            bool status = DN.Insert_ma_CD(CD, descending);
            if (status) MessageBox::Show(L"Đã thêm đối tượng.", L"THÔNG BÁO");
            else MessageBox::Show(L"Vị trí thêm không chính xác, hãy nhập lại.", "THÔNG BÁO");
        }
        
    }
    else{}
    
}



private: System::Void bt_quit_Click(System::Object^ sender, System::EventArgs^ e) {
    //if (MessageBox::Show(L"Bạn có chắc chắn muốn thoát không?", L"THÔNG BÁO", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == DialogResult::yes) {

    //}
    this->Close();
}

private: System::Void bt_search_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ s1 = this->box_search->Text;
    string ma_CD; convertString(s1, ma_CD);
    CongDan A;
    if (ma_CD != "") {
        A = DN.Search_MaCD(ma_CD);
        string s2 = A.get_MaCD();
        if (s2 != "") {
            this->view_searchData->RowCount = 2;
            this->view_searchData->Rows[0]->Cells[0]->Value = gcnew String(A.get("ma_CD").c_str());
            this->view_searchData->Rows[0]->Cells[1]->Value = gcnew String(A.get("fullName").c_str());
            this->view_searchData->Rows[0]->Cells[2]->Value = gcnew String(A.get("sex").c_str());
            this->view_searchData->Rows[0]->Cells[3]->Value = gcnew String(A.get("birth").c_str());
            this->view_searchData->Rows[0]->Cells[4]->Value = gcnew String(A.get("phone").c_str());
            this->view_searchData->Rows[0]->Cells[5]->Value = gcnew String(A.get("so_BHXH").c_str());
            this->view_searchData->Rows[0]->Cells[6]->Value = gcnew String(A.get("so_CMND").c_str());
            this->view_searchData->Rows[0]->Cells[7]->Value = gcnew String(A.get("address").c_str());
            this->view_searchData->Rows[0]->Cells[8]->Value = gcnew String(A.get("ma_DK").c_str());
            this->view_searchData->Rows[0]->Cells[9]->Value = gcnew String(A.get("ngay_DK").c_str());
            this->view_searchData->Rows[0]->Cells[10]->Value = gcnew String(A.get("noi_DK").c_str());
            this->view_searchData->Rows[0]->Cells[11]->Value = gcnew String(A.get("mui1").c_str());
            this->view_searchData->Rows[0]->Cells[12]->Value = gcnew String(A.get("ngay_M1").c_str());
            this->view_searchData->Rows[0]->Cells[13]->Value = gcnew String(A.get("mui2").c_str());
            this->view_searchData->Rows[0]->Cells[14]->Value = gcnew String(A.get("ngay_M2").c_str());
        }
        else {
            MessageBox::Show(L"Không tìm thấy người này.", L"THÔNG BÁO");
        }
    }
    else {
        MessageBox::Show(L"Không thể để trống.", L"THÔNG BÁO");
    }
}
private: System::Void thốngKêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    if (loginStatus == true) {
        this->box_fillData->Visible = true;
        this->export_allData_people->Visible = false;
        this->exportData_vaccination->Visible = false;
        this->exportData_registry->Visible = false;
        this->exportData_people->Visible = false;
        this->box_inputHand->Visible = false;
        this->box_inputFile->Visible = false;
        this->box_sortData->Visible = false;
        this->box_deleteData->Visible = false;
        this->box_searchData->Visible = false;

    }
}
private: System::Void bt_typeFilter_Click(System::Object^ sender, System::EventArgs^ e) {
    this->label28->Visible = false;
    this->label30->Visible = false;
    this->box_infoType->Visible = false;
    this->bt_submitFilter->Visible = false;
    this->box_typeOfSex->Visible = false;
    String ^q = this->box_selectTypeFilter->Text;
    if (q == L"Đã tiêm mũi 1") {
        //Hàm trả về DSCD đã lọc
        DSCD A;
        DN.thongke_M1(A);
        //MessageBox::Show(L"Trả về thành công", L"THÔNG BÁO");
        int n = A.getRows();
        this->view_filterData->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_filterData->Rows[i]->Cells[0]->Value = gcnew String(A.get("ma_CD", i).c_str());
            this->view_filterData->Rows[i]->Cells[1]->Value = gcnew String(A.get("fullName", i).c_str());
            this->view_filterData->Rows[i]->Cells[2]->Value = gcnew String(A.get("sex", i).c_str());
            this->view_filterData->Rows[i]->Cells[3]->Value = gcnew String(A.get("birth", i).c_str());
            this->view_filterData->Rows[i]->Cells[4]->Value = gcnew String(A.get("phone", i).c_str());
            this->view_filterData->Rows[i]->Cells[5]->Value = gcnew String(A.get("so_BHXH", i).c_str());
            this->view_filterData->Rows[i]->Cells[6]->Value = gcnew String(A.get("so_CMND", i).c_str());
            this->view_filterData->Rows[i]->Cells[7]->Value = gcnew String(A.get("address", i).c_str());
            this->view_filterData->Rows[i]->Cells[8]->Value = gcnew String(A.get("ma_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[9]->Value = gcnew String(A.get("ngay_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[10]->Value = gcnew String(A.get("noi_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[11]->Value = gcnew String(A.get("mui1", i).c_str());
            this->view_filterData->Rows[i]->Cells[12]->Value = gcnew String(A.get("ngay_M1", i).c_str());
            this->view_filterData->Rows[i]->Cells[13]->Value = gcnew String(A.get("mui2", i).c_str());
            this->view_filterData->Rows[i]->Cells[14]->Value = gcnew String(A.get("ngay_M2", i).c_str());
        }
    }
    else if (q == L"Tiêm đủ 2 mũi") {
        DSCD A;
        DN.thongKe_2Mui(A);
        //MessageBox::Show(L"Trả về thành công", L"THÔNG BÁO");
        int n = A.getRows();
        this->view_filterData->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_filterData->Rows[i]->Cells[0]->Value = gcnew String(A.get("ma_CD", i).c_str());
            this->view_filterData->Rows[i]->Cells[1]->Value = gcnew String(A.get("fullName", i).c_str());
            this->view_filterData->Rows[i]->Cells[2]->Value = gcnew String(A.get("sex", i).c_str());
            this->view_filterData->Rows[i]->Cells[3]->Value = gcnew String(A.get("birth", i).c_str());
            this->view_filterData->Rows[i]->Cells[4]->Value = gcnew String(A.get("phone", i).c_str());
            this->view_filterData->Rows[i]->Cells[5]->Value = gcnew String(A.get("so_BHXH", i).c_str());
            this->view_filterData->Rows[i]->Cells[6]->Value = gcnew String(A.get("so_CMND", i).c_str());
            this->view_filterData->Rows[i]->Cells[7]->Value = gcnew String(A.get("address", i).c_str());
            this->view_filterData->Rows[i]->Cells[8]->Value = gcnew String(A.get("ma_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[9]->Value = gcnew String(A.get("ngay_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[10]->Value = gcnew String(A.get("noi_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[11]->Value = gcnew String(A.get("mui1", i).c_str());
            this->view_filterData->Rows[i]->Cells[12]->Value = gcnew String(A.get("ngay_M1", i).c_str());
            this->view_filterData->Rows[i]->Cells[13]->Value = gcnew String(A.get("mui2", i).c_str());
            this->view_filterData->Rows[i]->Cells[14]->Value = gcnew String(A.get("ngay_M2", i).c_str());
        }
    }
    else if (q == L"Chưa tiêm mũi nào") {
        DSCD A;
        DN.thongKeChuaTiem(A);
        //MessageBox::Show(L"Trả về thành công", L"THÔNG BÁO");
        int n = A.getRows();
        this->view_filterData->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_filterData->Rows[i]->Cells[0]->Value = gcnew String(A.get("ma_CD", i).c_str());
            this->view_filterData->Rows[i]->Cells[1]->Value = gcnew String(A.get("fullName", i).c_str());
            this->view_filterData->Rows[i]->Cells[2]->Value = gcnew String(A.get("sex", i).c_str());
            this->view_filterData->Rows[i]->Cells[3]->Value = gcnew String(A.get("birth", i).c_str());
            this->view_filterData->Rows[i]->Cells[4]->Value = gcnew String(A.get("phone", i).c_str());
            this->view_filterData->Rows[i]->Cells[5]->Value = gcnew String(A.get("so_BHXH", i).c_str());
            this->view_filterData->Rows[i]->Cells[6]->Value = gcnew String(A.get("so_CMND", i).c_str());
            this->view_filterData->Rows[i]->Cells[7]->Value = gcnew String(A.get("address", i).c_str());
            this->view_filterData->Rows[i]->Cells[8]->Value = gcnew String(A.get("ma_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[9]->Value = gcnew String(A.get("ngay_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[10]->Value = gcnew String(A.get("noi_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[11]->Value = gcnew String(A.get("mui1", i).c_str());
            this->view_filterData->Rows[i]->Cells[12]->Value = gcnew String(A.get("ngay_M1", i).c_str());
            this->view_filterData->Rows[i]->Cells[13]->Value = gcnew String(A.get("mui2", i).c_str());
            this->view_filterData->Rows[i]->Cells[14]->Value = gcnew String(A.get("ngay_M2", i).c_str());
        }
    }
    else if (q == L"Tiêm mũi 1 chưa tiêm mũi 2") {
        DSCD A;
        DN.thongKe_M1_Not_M2(A);
        //MessageBox::Show(L"Trả về thành công", L"THÔNG BÁO");
        int n = A.getRows();
        this->view_filterData->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_filterData->Rows[i]->Cells[0]->Value = gcnew String(A.get("ma_CD", i).c_str());
            this->view_filterData->Rows[i]->Cells[1]->Value = gcnew String(A.get("fullName", i).c_str());
            this->view_filterData->Rows[i]->Cells[2]->Value = gcnew String(A.get("sex", i).c_str());
            this->view_filterData->Rows[i]->Cells[3]->Value = gcnew String(A.get("birth", i).c_str());
            this->view_filterData->Rows[i]->Cells[4]->Value = gcnew String(A.get("phone", i).c_str());
            this->view_filterData->Rows[i]->Cells[5]->Value = gcnew String(A.get("so_BHXH", i).c_str());
            this->view_filterData->Rows[i]->Cells[6]->Value = gcnew String(A.get("so_CMND", i).c_str());
            this->view_filterData->Rows[i]->Cells[7]->Value = gcnew String(A.get("address", i).c_str());
            this->view_filterData->Rows[i]->Cells[8]->Value = gcnew String(A.get("ma_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[9]->Value = gcnew String(A.get("ngay_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[10]->Value = gcnew String(A.get("noi_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[11]->Value = gcnew String(A.get("mui1", i).c_str());
            this->view_filterData->Rows[i]->Cells[12]->Value = gcnew String(A.get("ngay_M1", i).c_str());
            this->view_filterData->Rows[i]->Cells[13]->Value = gcnew String(A.get("mui2", i).c_str());
            this->view_filterData->Rows[i]->Cells[14]->Value = gcnew String(A.get("ngay_M2", i).c_str());
        }
    }
    else if (q == L"Người đã tiêm mũi 1 trong ngày") {
        //Hiện thi thanh điền thông tin bộ lọc
        this->label28->Visible = true;
        this->label30->Visible = false;
        this->box_typeOfSex->Visible = false;
        this->box_infoType->Visible = true;
        this->bt_submitFilter->Visible = true;
    }
    else if (q == L"Người đã tiêm mũi 2 trong ngày") {
        this->label28->Visible = true;
        this->label30->Visible = false;
        this->box_typeOfSex->Visible = false;
        this->box_infoType->Visible = true;
        this->bt_submitFilter->Visible = true;
    }
    else if (q == L"Giới tính") {
        this->label28->Visible = false;
        this->label30->Visible = true;
        this->box_infoType->Visible = false;
        this->box_typeOfSex->Visible = true;
        this->bt_submitFilter->Visible = true;
    }
    else if (q == L"Người đã đăng ký trong 1 ngày") {
        this->label28->Visible = true;
        this->label30->Visible = false;
        this->box_typeOfSex->Visible = false;
        this->box_infoType->Visible = true;
        this->bt_submitFilter->Visible = true;
    }
    else {
        MessageBox::Show(L"Không có loại thống kê này.", L"THÔNG BÁO");
        this->label28->Visible = false;
        this->label30->Visible = false;
        this->box_infoType->Visible = false;
        this->box_typeOfSex->Visible = false;
        this->bt_submitFilter->Visible = false;
    }
}

private: System::Void bt_submitFilter_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ q = this->box_selectTypeFilter->Text;
    if (q == L"Người đã tiêm mũi 1 trong ngày") {
        string ngayM1;
        String^ s1;
        s1 = this->box_infoType->Text;
        convertString(s1, ngayM1);

        DSCD A;
        DN.thongKeTheoNgayTiemM1(A, ngayM1);
        //MessageBox::Show(L"Trả về thành công", L"THÔNG BÁO");
        int n = A.getRows();
        this->view_filterData->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_filterData->Rows[i]->Cells[0]->Value = gcnew String(A.get("ma_CD", i).c_str());
            this->view_filterData->Rows[i]->Cells[1]->Value = gcnew String(A.get("fullName", i).c_str());
            this->view_filterData->Rows[i]->Cells[2]->Value = gcnew String(A.get("sex", i).c_str());
            this->view_filterData->Rows[i]->Cells[3]->Value = gcnew String(A.get("birth", i).c_str());
            this->view_filterData->Rows[i]->Cells[4]->Value = gcnew String(A.get("phone", i).c_str());
            this->view_filterData->Rows[i]->Cells[5]->Value = gcnew String(A.get("so_BHXH", i).c_str());
            this->view_filterData->Rows[i]->Cells[6]->Value = gcnew String(A.get("so_CMND", i).c_str());
            this->view_filterData->Rows[i]->Cells[7]->Value = gcnew String(A.get("address", i).c_str());
            this->view_filterData->Rows[i]->Cells[8]->Value = gcnew String(A.get("ma_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[9]->Value = gcnew String(A.get("ngay_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[10]->Value = gcnew String(A.get("noi_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[11]->Value = gcnew String(A.get("mui1", i).c_str());
            this->view_filterData->Rows[i]->Cells[12]->Value = gcnew String(A.get("ngay_M1", i).c_str());
            this->view_filterData->Rows[i]->Cells[13]->Value = gcnew String(A.get("mui2", i).c_str());
            this->view_filterData->Rows[i]->Cells[14]->Value = gcnew String(A.get("ngay_M2", i).c_str());
        }
    }
    else if (q == L"Người đã tiêm mũi 2 trong ngày") {
        string ngayM2;
        String^ s2;
        s2 = this->box_infoType->Text;
        convertString(s2, ngayM2);

        DSCD A;
        DN.thongKeTheoNgayTiemM2(A, ngayM2);
        int n = A.getRows();
        this->view_filterData->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_filterData->Rows[i]->Cells[0]->Value = gcnew String(A.get("ma_CD", i).c_str());
            this->view_filterData->Rows[i]->Cells[1]->Value = gcnew String(A.get("fullName", i).c_str());
            this->view_filterData->Rows[i]->Cells[2]->Value = gcnew String(A.get("sex", i).c_str());
            this->view_filterData->Rows[i]->Cells[3]->Value = gcnew String(A.get("birth", i).c_str());
            this->view_filterData->Rows[i]->Cells[4]->Value = gcnew String(A.get("phone", i).c_str());
            this->view_filterData->Rows[i]->Cells[5]->Value = gcnew String(A.get("so_BHXH", i).c_str());
            this->view_filterData->Rows[i]->Cells[6]->Value = gcnew String(A.get("so_CMND", i).c_str());
            this->view_filterData->Rows[i]->Cells[7]->Value = gcnew String(A.get("address", i).c_str());
            this->view_filterData->Rows[i]->Cells[8]->Value = gcnew String(A.get("ma_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[9]->Value = gcnew String(A.get("ngay_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[10]->Value = gcnew String(A.get("noi_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[11]->Value = gcnew String(A.get("mui1", i).c_str());
            this->view_filterData->Rows[i]->Cells[12]->Value = gcnew String(A.get("ngay_M1", i).c_str());
            this->view_filterData->Rows[i]->Cells[13]->Value = gcnew String(A.get("mui2", i).c_str());
            this->view_filterData->Rows[i]->Cells[14]->Value = gcnew String(A.get("ngay_M2", i).c_str());
        }
    }
    else if (q == L"Giới tính") {
        string sex;
        String^ s3;
        s3 = this->box_typeOfSex->Text;
        convertString(s3, sex);

        DSCD A;
        if (sex == "Nam") {
            DN.thongKeTheoGioiTinh(A, nam);
        }
        else{
            DN.thongKeTheoGioiTinh(A, nu);
        }
        //MessageBox::Show(L"Trả về thành công", L"THÔNG BÁO");
        int n = A.getRows();
        this->view_filterData->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_filterData->Rows[i]->Cells[0]->Value = gcnew String(A.get("ma_CD", i).c_str());
            this->view_filterData->Rows[i]->Cells[1]->Value = gcnew String(A.get("fullName", i).c_str());
            this->view_filterData->Rows[i]->Cells[2]->Value = gcnew String(A.get("sex", i).c_str());
            this->view_filterData->Rows[i]->Cells[3]->Value = gcnew String(A.get("birth", i).c_str());
            this->view_filterData->Rows[i]->Cells[4]->Value = gcnew String(A.get("phone", i).c_str());
            this->view_filterData->Rows[i]->Cells[5]->Value = gcnew String(A.get("so_BHXH", i).c_str());
            this->view_filterData->Rows[i]->Cells[6]->Value = gcnew String(A.get("so_CMND", i).c_str());
            this->view_filterData->Rows[i]->Cells[7]->Value = gcnew String(A.get("address", i).c_str());
            this->view_filterData->Rows[i]->Cells[8]->Value = gcnew String(A.get("ma_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[9]->Value = gcnew String(A.get("ngay_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[10]->Value = gcnew String(A.get("noi_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[11]->Value = gcnew String(A.get("mui1", i).c_str());
            this->view_filterData->Rows[i]->Cells[12]->Value = gcnew String(A.get("ngay_M1", i).c_str());
            this->view_filterData->Rows[i]->Cells[13]->Value = gcnew String(A.get("mui2", i).c_str());
            this->view_filterData->Rows[i]->Cells[14]->Value = gcnew String(A.get("ngay_M2", i).c_str());
        }
    }
    else if (q == L"Người đã đăng ký trong 1 ngày") {
        string ngayDK;
        String^ s4;
        s4 = this->box_infoType->Text;
        convertString(s4, ngayDK);

        DSCD A;
        DN.thongKeTheoNgayDangKi(A, ngayDK);
        //MessageBox::Show(L"Trả về thành công", L"THÔNG BÁO");
        int n = A.getRows();
        this->view_filterData->RowCount = n;
        for (int i = 0; i < n; i++) {
            this->view_filterData->Rows[i]->Cells[0]->Value = gcnew String(A.get("ma_CD", i).c_str());
            this->view_filterData->Rows[i]->Cells[1]->Value = gcnew String(A.get("fullName", i).c_str());
            this->view_filterData->Rows[i]->Cells[2]->Value = gcnew String(A.get("sex", i).c_str());
            this->view_filterData->Rows[i]->Cells[3]->Value = gcnew String(A.get("birth", i).c_str());
            this->view_filterData->Rows[i]->Cells[4]->Value = gcnew String(A.get("phone", i).c_str());
            this->view_filterData->Rows[i]->Cells[5]->Value = gcnew String(A.get("so_BHXH", i).c_str());
            this->view_filterData->Rows[i]->Cells[6]->Value = gcnew String(A.get("so_CMND", i).c_str());
            this->view_filterData->Rows[i]->Cells[7]->Value = gcnew String(A.get("address", i).c_str());
            this->view_filterData->Rows[i]->Cells[8]->Value = gcnew String(A.get("ma_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[9]->Value = gcnew String(A.get("ngay_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[10]->Value = gcnew String(A.get("noi_DK", i).c_str());
            this->view_filterData->Rows[i]->Cells[11]->Value = gcnew String(A.get("mui1", i).c_str());
            this->view_filterData->Rows[i]->Cells[12]->Value = gcnew String(A.get("ngay_M1", i).c_str());
            this->view_filterData->Rows[i]->Cells[13]->Value = gcnew String(A.get("mui2", i).c_str());
            this->view_filterData->Rows[i]->Cells[14]->Value = gcnew String(A.get("ngay_M2", i).c_str());
        }
    }
    else {
    MessageBox::Show(L"Không có loại thống kê này.", L"THÔNG BÁO");
    this->label28->Visible = false;
    this->box_infoType->Visible = false;
    this->bt_submitFilter->Visible = false;
}
}
private: System::Void bt_modAllData_Click(System::Object^ sender, System::EventArgs^ e) {
    this->view_exportAllData_people->ReadOnly = false;
    this->bt_modAllData->BackColor = Color::Black;
    this->bt_modAllData->ForeColor = Color::White;
}
private: System::Void bt_saveAllData_Click(System::Object^ sender, System::EventArgs^ e) {
    this->view_exportAllData_people->ReadOnly = true;
    this->bt_modAllData->BackColor = Color::FromArgb(57, 162, 219);
    this->bt_modAllData->ForeColor = Color::Black;
    //Lưu lại vào biến DN
    String^ s0, ^ s1, ^ s2, ^ s3, ^ s4, ^ s5, ^ s6, ^ s7, ^ s8, ^ s9, ^ s10, ^ s11, ^ s12, ^ s13, ^ s14;
    string ma_CD, fullName, sex, birth, phone, so_BHXH, so_CMND, address, ma_DK, ngay_DK, noi_DK, mui1, mui2, ngay_M1, ngay_M2;
    for (int i = 0; i < view_exportAllData_people->RowCount; i++) {
        s0 = this->view_exportAllData_people->Rows[i]->Cells[0]->Value->ToString(); convertString(s0, ma_CD);
        s1 = this->view_exportAllData_people->Rows[i]->Cells[1]->Value->ToString(); convertString(s1, fullName);
        s2 = this->view_exportAllData_people->Rows[i]->Cells[2]->Value->ToString(); convertString(s2, sex);
        s3 = this->view_exportAllData_people->Rows[i]->Cells[3]->Value->ToString(); convertString(s3, birth);
        s4 = this->view_exportAllData_people->Rows[i]->Cells[4]->Value->ToString(); convertString(s4, phone);
        s5 = this->view_exportAllData_people->Rows[i]->Cells[5]->Value->ToString(); convertString(s5, so_BHXH);
        s6 = this->view_exportAllData_people->Rows[i]->Cells[6]->Value->ToString(); convertString(s6, so_CMND);
        s7 = this->view_exportAllData_people->Rows[i]->Cells[7]->Value->ToString(); convertString(s7, address);
        s8 = this->view_exportAllData_people->Rows[i]->Cells[8]->Value->ToString(); convertString(s8, ma_DK);
        s9 = this->view_exportAllData_people->Rows[i]->Cells[9]->Value->ToString(); convertString(s9, ngay_DK);
        s10 = this->view_exportAllData_people->Rows[i]->Cells[10]->Value->ToString(); convertString(s10, noi_DK);
        s11 = this->view_exportAllData_people->Rows[i]->Cells[11]->Value->ToString(); convertString(s11, mui1);
        s12 = this->view_exportAllData_people->Rows[i]->Cells[12]->Value->ToString(); convertString(s12, ngay_M1);
        s13 = this->view_exportAllData_people->Rows[i]->Cells[13]->Value->ToString(); convertString(s13, mui2);
        s14 = this->view_exportAllData_people->Rows[i]->Cells[14]->Value->ToString(); convertString(s14, ngay_M2);

        DN.set("ma_CD", i, ma_CD);
        DN.set("fullName", i, fullName);
        DN.set("sex", i, sex);
        DN.set("birth", i, birth);
        DN.set("phone", i, phone);
        DN.set("so_BHXH", i, so_BHXH);
        DN.set("so_CMND", i, so_CMND);
        DN.set("address", i, address);
        DN.set("ma_DK", i, ma_DK);
        DN.set("ngay_DK", i, ngay_DK);
        DN.set("noi_DK", i, noi_DK);
        DN.set("mui1", i, mui1);
        DN.set("mui2", i, mui2);
        DN.set("ngay_M1", i, ngay_M1);
        DN.set("ngay_M2", i, ngay_M2);
    }
    string path1, path2, path3;
    convertString(f1, path1);
    convertString(f2, path2);
    convertString(f3, path3);
    DN.luuFile(path1, path2, path3);
    MessageBox::Show(L"Đã lưu", L"THÔNG BÁO");
    //Hàm lưu file
}
private: System::Void bt_modData_vaccination_Click(System::Object^ sender, System::EventArgs^ e) {
    this->view_exportData_vaccination->ReadOnly = false;
    this->bt_modData_vaccination->BackColor = Color::Black;
    this->bt_modData_vaccination->ForeColor = Color::White;

}
private: System::Void bt_saveData_vaccination_Click(System::Object^ sender, System::EventArgs^ e) {
    this->view_exportData_vaccination->ReadOnly = true;
    this->bt_modData_vaccination->BackColor = Color::FromArgb(57, 162, 219);
    this->bt_modData_vaccination->ForeColor = Color::Black;
    //Lưu lại vào biến DN
    String ^ s1, ^ s11, ^ s12, ^ s13, ^ s14;
    string ma_CD, fullName, sex, birth, phone, so_BHXH, so_CMND, address, ma_DK, ngay_DK, noi_DK, mui1, mui2, ngay_M1, ngay_M2;
    for (int i = 0; i < view_exportData_vaccination->RowCount; i++) {
        s1 = this->view_exportData_vaccination->Rows[i]->Cells[0]->Value->ToString(); convertString(s1, fullName);
        s11 = this->view_exportData_vaccination->Rows[i]->Cells[1]->Value->ToString(); convertString(s11, mui1);
        s12 = this->view_exportData_vaccination->Rows[i]->Cells[2]->Value->ToString(); convertString(s12, ngay_M1);
        s13 = this->view_exportData_vaccination->Rows[i]->Cells[3]->Value->ToString(); convertString(s13, mui2);
        s14 = this->view_exportData_vaccination->Rows[i]->Cells[4]->Value->ToString(); convertString(s14, ngay_M2);

        DN.set("fullName", i, fullName);
        DN.set("mui1", i, mui1);
        DN.set("mui2", i, mui2);
        DN.set("ngay_M1", i, ngay_M1);
        DN.set("ngay_M2", i, ngay_M2);
    }
    string path1, path2, path3;
    convertString(f1, path1);
    convertString(f2, path2);
    convertString(f3, path3);
    DN.luuFile(path1, path2, path3);
    MessageBox::Show(L"Đã lưu", L"THÔNG BÁO");
    //Hàm lưu file

}

private: System::Void bt_modData_registry_Click(System::Object^ sender, System::EventArgs^ e) {
    this->view_exportData_registry->ReadOnly = false;
    this->bt_modData_registry->BackColor = Color::Black;
    this->bt_modData_registry->ForeColor = Color::White;
}
private: System::Void bt_saveData_registry_Click(System::Object^ sender, System::EventArgs^ e) {
    this->view_exportData_registry->ReadOnly = true;
    this->bt_modData_registry->BackColor = Color::FromArgb(57, 162, 219);
    this->bt_modData_registry->ForeColor = Color::Black;
    //Lưu lại vào biến DN
    String ^ s1, ^ s8, ^ s9, ^ s10;
    string ma_CD, fullName, sex, birth, phone, so_BHXH, so_CMND, address, ma_DK, ngay_DK, noi_DK, mui1, mui2, ngay_M1, ngay_M2;
    for (int i = 0; i < view_exportData_registry->RowCount; i++) {
        s1 = this->view_exportData_registry->Rows[i]->Cells[0]->Value->ToString(); convertString(s1, fullName);
        s8 = this->view_exportData_registry->Rows[i]->Cells[1]->Value->ToString(); convertString(s8, ma_DK);
        s9 = this->view_exportData_registry->Rows[i]->Cells[2]->Value->ToString(); convertString(s9, ngay_DK);
        s10 = this->view_exportData_registry->Rows[i]->Cells[3]->Value->ToString(); convertString(s10, noi_DK);

        DN.set("fullName", i, fullName);
        DN.set("ma_DK", i, ma_DK);
        DN.set("ngay_DK", i, ngay_DK);
        DN.set("noi_DK", i, noi_DK);
    }
    string path1, path2, path3;
    convertString(f1, path1);
    convertString(f2, path2);
    convertString(f3, path3);
    DN.luuFile(path1, path2, path3);
    MessageBox::Show(L"Đã lưu", L"THÔNG BÁO");
    //Hàm lưu file

}
private: System::Void bt_saveData_people_Click(System::Object^ sender, System::EventArgs^ e) {
    this->view_exportData_people->ReadOnly = true;
    this->bt_modData_people->BackColor = Color::FromArgb(57, 162, 219);
    this->bt_modData_people->ForeColor = Color::Black;
    //Lưu lại vào biến DN
    String^ s0, ^ s1, ^ s2, ^ s3, ^ s4, ^ s5, ^ s6, ^ s7;
    string ma_CD, fullName, sex, birth, phone, so_BHXH, so_CMND, address;
    for (int i = 0; i < view_exportData_people->RowCount; i++) {
        s0 = this->view_exportData_people->Rows[i]->Cells[0]->Value->ToString(); convertString(s0, ma_CD);
        s1 = this->view_exportData_people->Rows[i]->Cells[1]->Value->ToString(); convertString(s1, fullName);
        s2 = this->view_exportData_people->Rows[i]->Cells[2]->Value->ToString(); convertString(s2, sex);
        s3 = this->view_exportData_people->Rows[i]->Cells[3]->Value->ToString(); convertString(s3, birth);
        s4 = this->view_exportData_people->Rows[i]->Cells[4]->Value->ToString(); convertString(s4, phone);
        s5 = this->view_exportData_people->Rows[i]->Cells[5]->Value->ToString(); convertString(s5, so_BHXH);
        s6 = this->view_exportData_people->Rows[i]->Cells[6]->Value->ToString(); convertString(s6, so_CMND);
        s7 = this->view_exportData_people->Rows[i]->Cells[7]->Value->ToString(); convertString(s7, address);

        DN.set("ma_CD", i, ma_CD);
        DN.set("fullName", i, fullName);
        DN.set("sex", i, sex);
        DN.set("birth", i, birth);
        DN.set("phone", i, phone);
        DN.set("so_BHXH", i, so_BHXH);
        DN.set("so_CMND", i, so_CMND);
        DN.set("address", i, address);
    }
    string path1, path2, path3;
    convertString(f1, path1);
    convertString(f2, path2);
    convertString(f3, path3);
    DN.luuFile(path1, path2, path3);
    MessageBox::Show(L"Đã lưu", L"THÔNG BÁO");
    //Hàm lưu file

}
private: System::Void accountManagerTab_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}