#include"DanhSachCongDan.h"
#include<string>
#include<string.h>
#include<fstream>
#include<iostream>
using namespace std;

int count(string file){
    ifstream f1;
    int k = 0;
    f1.open(file.c_str(), ios::in);
    if (f1){
        string count;
        while(!f1.eof()){
            getline(f1, count, '\n');
            k++;
        }
    }else{

    }
    f1.close();
    return k;
}

void DSCD::nhapFile(string f1, string f2, string f3){  
    //cout << "Hello World";
    ifstream file1;
    ifstream file2;
    ifstream file3;
    //Đếm số CD để cấp bộ nhớ
    int k = 0;
    this->n = count(f1);

    file1.open(f1.c_str(), ios::in);
    file2.open(f2.c_str(), ios::in);
    file3.open(f3.c_str(), ios::in);
    if(file1 && file2 && file3)
    {
        //file1
        string ma_CD;
        string fullName;
        string sex;
        string birth;
        string phone;
        string so_BHXH;
        string so_CMND;
        string address;

        //file2
        string ma_DK;
        string ngay_DK;
        string noi_DK;
        string ID2;

        //file3
        string ID3;
        string mui1;
        string ngay_M1;
        string mui2;
        string ngay_M2;

        while(!file1.eof() && !file2.eof() && !file3.eof())
        { 
            getline (file1, ma_CD, ';');    this->data[k].ma_CD = ma_CD;
            getline (file1, fullName, ';'); this->data[k].fullName = fullName;
            getline (file1, sex, ';');      if(sex == "1")this->data[k].sex = true; else if(sex == "0") this->data[k].sex = false; //bool to string
            getline (file1, birth, ';');    this->data[k].birth = birth;
            getline (file1, phone, ';');    this->data[k].phone = phone;
            getline (file1, so_BHXH, ';');  this->data[k].so_BHXH = so_BHXH;
            getline (file1, so_CMND, ';');  this->data[k].so_CMND = so_CMND;
            getline (file1, address,'\n');  this->data[k].address = address;

            getline (file2, ma_DK, ';');    this->data[k].ma_DK = ma_DK;
            getline (file2, ID2, ';');      
            getline (file2, ngay_DK, ';');  this->data[k].ngay_DK = ngay_DK;
            getline (file2, noi_DK, '\n');  this->data[k].noi_DK = noi_DK;

            getline (file3, ID3, ';');
            getline (file3, mui1, ';');
                if(mui1 == "1")this->data[k].mui1 = true; 
                    else if(mui1 == "0") this->data[k].mui1 = false; // bool to string
            getline (file3, ngay_M1, ';');  this->data[k].ngay_M1 = ngay_M1;
            getline (file3, mui2, ';');   
                if(mui2 == "1")this->data[k].mui2 = true; 
                    else if(mui2 == "0")this->data[k].mui2 = false; // bool to string
            getline (file3, ngay_M2, '\n'); this->data[k].ngay_M2 = ngay_M2;

            k++;
        }
        //cout << "Đã nhập file xong" << endl;
    }else{
        //cout << "Không tìm thấy file" << endl;
    }
    file1.close();
    file2.close();
    file3.close();
}

DSCD::DSCD(){

}

DSCD::~DSCD(){
    delete []data;
}

DSCD::DSCD(const DSCD &obj_clone){
    this->n = obj_clone.n;
    this->data = obj_clone.data;
}

void DSCD::xuatDuLieu(){
    for(int i = 0; i < DSCD::n; i++){
            cout << DSCD::data[i].fullName << endl;
    }
}

string DSCD::get(string type, int i){
    if (type == "ma_CD"){
        return DSCD::data[i].ma_CD;
    }
    else if (type == "fullName"){
        return DSCD::data[i].fullName;
    }
    else if (type == "sex"){
        if (DSCD::data[i].sex == true) return "Nam";
            else return "Nu";
    }
    else if (type == "birth"){
        return DSCD::data[i].birth;
    }
    else if (type == "phone"){
        return DSCD::data[i].phone;
    }
    else if (type == "so_BHXH"){
        return DSCD::data[i].so_BHXH;
    }
    else if (type == "so_CMND"){
        return DSCD::data[i].so_CMND;
    }
    else if (type == "address"){
        return DSCD::data[i].address;
    }
    else if (type == "ma_DK"){
        return DSCD::data[i].ma_DK;
    }
    else if (type == "ngay_DK"){
        return DSCD::data[i].ngay_DK;
    }
    else if (type == "noi_DK"){
        return DSCD::data[i].noi_DK;
    }
    else if (type == "mui1"){
        if (DSCD::data[i].mui1 == true) return "Co";
            else return "Khong";
    }
    else if (type == "mui2" == true){
        if (DSCD::data[i].mui2) return "Co";
            else return "Khong";
    }
    else if (type == "ngay_M1"){
        return DSCD::data[i].ngay_M1;
    }
    else if (type == "ngay_M2"){
        return DSCD::data[i].ngay_M2;
    }
    else return "null";
 
}


// kiểm tra tăng dần
bool ascending(int left, int right)
{
    return left > right;
}

// kiểm tra giảm dần
bool descending(int left, int right)
{
    return left < right;
}

// Hàm xác định giới tính nam
bool nam()
{
    return 1;
}

// Hàm xác định giới tính nữ
bool nu()
{
    return 0;
}

// Hàm hoán vị
void swap(CongDan &x, CongDan &y)
{
    CongDan temp = x;
    x = y;
    y = temp;
}

void DSCD::nhapTay(int n)
{
    data = new CongDan[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao cong dan thu "<<i+1<<": "<<endl;
        cin>>data[i];
        cout<<"--------------------------------------------------"<<endl;
    }
}

// Hàm thêm công dân vào danh sách tại 1 vị trí bất kì ( thứ tự cd từ 1 -> n)
bool DSCD::Them(CongDan cd, int position)
{
    if ( position <= 0 || position > n + 2)
    {
        return false;
    }
    else
    {
        int size = this->n + 1;
        CongDan *a = new CongDan[size];
        for(int i = 0; i < position - 1; i++) {
            a[i] = this->data[i];
        }
        a[position - 1] = cd;
        for(int i = position; i < size; i++) {
            a[i] = this->data[i-1];
        }
        delete [] data;
        this->n = size;
        this->data = new CongDan[n];
        for (int i = 0; i < n; i++)
            this->data[i] = a[i];
        return true;
    }
    
}

// Hàm sắp xếp công dân theo tiêu chí bất kì bằng phương pháp sap xep chon
void DSCD::Sort_ma_CD(bool (*func_ptr)(int, int))
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
            if((*func_ptr)((data[min_idx].maCDToInt(data[min_idx].ma_CD)), data[j].maCDToInt(data[j].ma_CD)))
            {
                min_idx = j;
            }
        }
        swap(data[min_idx], data[i]);
    }
}

// Sắp xếp công dân theo ngay DK
void DSCD::Sort_ngay_DK(bool (*func_ptr)(int, int))
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
            if((*func_ptr)(data[min_idx].dayToInt(data[min_idx].ngay_DK), data[j].dayToInt(data[j].ngay_DK)))
            {
                min_idx = j;
            }
        }
        swap(data[min_idx], data[i]);
    }
}

// Sắp xếp công dân theo ngay tiem mui 1
void DSCD::Sort_ngay_M1(bool (*func_ptr)(int, int))
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
            if((*func_ptr)(data[min_idx].dayToInt(data[min_idx].ngay_M1), data[j].dayToInt(data[j].ngay_M1)))
            {
                min_idx = j;
            }
        }
        swap(data[min_idx], data[i]);
    }
}

// Sắp xếp công dân theo ngay tiem mui 2
void DSCD::Sort_ngay_M2(bool (*func_ptr)(int, int))
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
            if((*func_ptr)(data[min_idx].dayToInt(data[min_idx].ngay_M2), data[j].dayToInt(data[j].ngay_M2)))
            {
                min_idx = j;
            }
        }
        swap(data[min_idx], data[i]);
    }
}

// Chèn công dân vào vị trí bất kì mà vẫn giữ nguyên thứ tự của mã CD
bool DSCD::Insert_ma_CD(CongDan cd, bool (*func_ptr)(int, int))
{
    if (func_ptr(data[0].maCDToInt(data[0].ma_CD), cd.maCDToInt(cd.ma_CD)))
    {
        Them(cd, 1);
        return true;
    }
    else if(!func_ptr(data[n].maCDToInt(data[n].ma_CD), cd.maCDToInt(cd.ma_CD)))
    {
        Them(cd, n + 1);
        return true;
    }
    else
    {
        int index;
        for (int i = 0; i < n ; i++)
        {
            if (func_ptr(data[i].maCDToInt(data[i].ma_CD), cd.maCDToInt(cd.ma_CD)))
            {
                index = i;
                break;
            }
        }
        Them(cd, index + 2);
        return true;
    }
}

// Hàm tìm kiếm công dân theo mã công dân
CongDan DSCD::Search_MaCD(string maCD)
{
    CongDan cd;
    for(int i = 0; i < n; i++)
    {
        if (data[i].ma_CD == maCD)
        {
            cd = data[i];
        }
    }
    return cd;
}

string DSCD::Delete(string maCD)
{
    bool flag;
    int index;
    for(int i = 0; i < n; i++)
    {
        if(data[i].ma_CD == maCD)
        {
            index = i;
            flag = true;
            break;
        }
    }
    if(flag)
    {
        for(int i = index; i < n- 1; i++)
        {
            data[i] = data[i + 1];
        }
        n--;
        string msg = "Da xoa xong";
        return msg;
        //cout<<"Da xoa xong"<<endl;
    }
    else 
    {   
        string msg = "Loi: khong ton tai doi tuong can xoa.";
        return msg;
        //cout<<"Khong ton tai cong dan can xoa"<<endl;
    }
}

// Hàm toán tử gán 2 danh sách công dân
// const DSCD& DSCD:: operator = (const DSCD &dscd)
// {
//     if (this != &dscd)
//     {
//         this->n = dscd.n;
//         this->data = dscd.data;
//         // this->data = new CongDan[n];
//         // for (int i = 0; i < n; i++)
//         // {
//         //     this->data[i] = dscd.data[i];
//         // }
//     }
//     return *this;
// }

// Hàm thống kê danh sách công dân đã tiêm mũi 1
DSCD DSCD::thongKe_M1()
{
    DSCD dscd;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if (this->data[i].mui1)
        {
            dscd.data[count] = this->data[i];
            count++;
        }
    }
    dscd.n = count;
    return dscd;
}

// Hàm thống kê dscd đã tiêm đủ 2 mũi
DSCD DSCD::thongKe_2Mui()
{
    DSCD dscd;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if (this->data[i].mui2)
        {
            dscd.data[count] = this->data[i];
            count++;
        }
    }
    dscd.n = count;
    return dscd;
}

// Hàm thống kê những người chưa tiêm mũi nào
DSCD DSCD::thongKeChuaTiem()
{
    DSCD dscd;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if (!this->data[i].mui1)
        {
            dscd.data[count] = this->data[i];
            count++;
        }
    }
    dscd.n = count;
    return dscd;
}

// Hàm thống kê những người đã tiêm mũi 1 nhưng chưa tiêm mũi 2
DSCD DSCD::thongKe_M1_Not_M2()
{
    DSCD dscd;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if (this->data[i].mui1 && !this->data[i].mui2)
        {
            dscd.data[count] = this->data[i];
            count++;
        }
    }
    dscd.n = count;
    return dscd;
}

// Hàm thống kê những công dân đã tiêm mũi 1 trong ngày bất kì
DSCD DSCD::thongKeTheoNgayTiemM1(string ngayM1)
{
    DSCD dscd;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if (this->data[i].ngay_M1 == ngayM1)
        {
            dscd.data[count] = this->data[i];
            count++;
        }
    }
    dscd.n = count;
    return dscd;
}

//Hàm thống kê những công dân đã tiêm mũi 2 trong ngày bất kì
DSCD DSCD::thongKeTheoNgayTiemM2(string ngayM2)
{
    DSCD dscd;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if (this->data[i].ngay_M2 == ngayM2)
        {
            dscd.data[count] = this->data[i];
            count++;
        }
    }
    dscd.n = count;
    return dscd;
}

// Hàm thống kê công dân theo giới tính ( mặc định là nam), nếu muốn tke theo nữ thì dùng con trỏ hàm nu
DSCD DSCD::thongKeTheoGioiTinh(bool (*func_ptr)())
{
    DSCD dscd;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if (this->data[i].sex == func_ptr())
        {
            dscd.data[count] = this->data[i];
            count++;
        }
    }
    dscd.n = count;
    return dscd;
}

// Hàm thống kê theo ngày đăng kí bất kì
DSCD DSCD::thongKeTheoNgayDangKi(string ngayDK)
{
    DSCD dscd;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if (this->data[i].ngay_DK == ngayDK)
        {
            dscd.data[count] = this->data[i];
            count++;
        }
    }
    dscd.n = count;
    return dscd;
}

