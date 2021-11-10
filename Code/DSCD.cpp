#include"DanhSachCongDan.h"
#include<string>
#include<string.h>
#include<fstream>
#include<iostream>
using namespace std;

int count(string file){
    ifstream f1;
    int k;
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
    this->n = count(f1) - 1;

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
            getline (file1, ma_CD, ',');    this->data[k].ma_CD = ma_CD;
            getline (file1, fullName, ','); this->data[k].fullName = fullName;
            getline (file1, sex, ',');      if(sex == "1")this->data[k].sex = true; else if(sex == "0") this->data[k].sex = false; //bool to string
            getline (file1, birth, ',');    this->data[k].birth = birth;
            getline (file1, phone, ',');    this->data[k].phone = phone;
            getline (file1, so_BHXH, ',');  this->data[k].so_BHXH = so_BHXH;
            getline (file1, so_CMND, ',');  this->data[k].so_CMND = so_CMND;
            getline (file1, address,'\n');  this->data[k].address = address;

            getline (file2, ma_DK, ',');    this->data[k].ma_DK = ma_DK;
            getline (file2, ID2, ',');      
            getline (file2, ngay_DK, ',');  this->data[k].ngay_DK = ngay_DK;
            getline (file2, noi_DK, '\n');  this->data[k].noi_DK = noi_DK;

            getline (file3, ID3, ',');
            getline (file3, mui1, ',');
                for(int i = 0; i<mui1.length();i++)mui1[i] = toupper(mui1[i]);
                if(mui1 == "TRUE")this->data[k].mui1 = true; 
                    else if(mui1 == "FALSE") this->data[k].mui1 = false; // bool to string
            getline (file3, ngay_M1, ',');  this->data[k].ngay_M1 = ngay_M1;
            getline (file3, mui2, ',');   
                for(int i = 0; i<mui2.length();i++)mui2[i] = toupper(mui2[i]);
                if(mui2 == "TRUE")this->data[k].mui2 = true; 
                    else if(mui2 == "FALSE")this->data[k].mui2 = false; // bool to string
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

void DSCD::xuatDuLieu(){
    for(int i = 0; i < n; i++){
            cout << data[i].fullName << endl;
    }
}

string DSCD::get(DSCD x, string type, int i){
    if (type == "ma_CD"){
        return x.data[i].ma_CD;
    }
    else if (type == "fullName"){
        return x.data[i].fullName;
    }
    else if (type == "sex"){
        if (x.data[i].sex == true) return "1";
            else return "0";
    }
    else if (type == "birth"){
        return x.data[i].birth;
    }
    else if (type == "phone"){
        return x.data[i].phone;
    }
    else if (type == "so_BHXH"){
        return x.data[i].so_BHXH;
    }
    else if (type == "so_CMND"){
        return x.data[i].so_CMND;
    }
    else if (type == "address"){
        return x.data[i].address;
    }
    else if (type == "ma_DK"){
        return x.data[i].ma_DK;
    }
    else if (type == "ngay_DK"){
        return x.data[i].ngay_DK;
    }
    else if (type == "noi_DK"){
        return x.data[i].noi_DK;
    }
    else if (type == "mui1"){
        if (x.data[i].mui1) return "TRUE";
            else return "FALSE";
    }
    else if (type == "mui2"){
        if (x.data[i].mui2) return "TRUE";
            else return "FALSE";
    }
    else if (type == "ngay_M1"){
        return x.data[i].ngay_M1;
    }
    else if (type == "ngay_M2"){
        return x.data[i].ngay_M2;
    }
    else return "null";
 
}

// kiểm tra tăng dần
bool ascending(string left, string right)
{
    return left > right;
}

// kiểm tra giảm dần
bool descending(string left, string right)
{
    return left < right;
}

// Hàm hoán vị
void swap(string &x, string &y)
{
    string temp = x;
    x = y;
    y = temp;
}

void DSCD::nhapTay(int n, CongDan data[])
{
    cout<<"Nhap vao so luong cong dan: ";
    cin>>n;
    data = new CongDan[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao cong dan thu "<<i+1<<": ";
        cin>>data[i];
        cout<<"--------------------------------------------------"<<endl;
    }
}

void DSCD::Them(CongDan cd, int position)
{
    if (position < 0 || position > this->n + 1)
    {
        cout<<"Vi tri them khong hop le"<<endl;
        return;
    }
    this->n++;
    for (int i = n - 2; i >= position - 1; i--)
    {
        data[i + 1] = data[i];
    }
    data[position - 1] = cd;
}

// Hàm sắp xếp công dân theo tiêu chí bất kì bằng phương pháp nổi bọt
void DSCD::Sort_ma_CD(bool (*func_ptr)(string, string))
{
    int i, j;
    for (i = 0; i < n-1; i++){         
       for (j = 0; j < n-i-1; j++){
           if ((*func_ptr)(data[j].ma_CD, data[j + 1].ma_CD))
              swap(data[j].ma_CD, data[j + 1].ma_CD);
       }
    }
}

// Sắp xếp công dân theo ngay DK
void DSCD::Sort_ngay_DK(bool (*func_ptr)(string, string))
{
    int i, j;
    for (i = 0; i < n-1; i++){         
       for (j = 0; j < n-i-1; j++){
           if ((*func_ptr)(data[j].ngay_DK, data[j + 1].ngay_DK))
              swap(data[j].ngay_DK, data[j + 1].ngay_DK);
       }
    }
}

// Sắp xếp công dân theo ngay tiem mui 1
void DSCD::Sort_ngay_M1(bool (*func_ptr)(string, string))
{
    int i, j;
    for (i = 0; i < n-1; i++){         
       for (j = 0; j < n-i-1; j++){
           if ((*func_ptr)(data[j].ngay_M1, data[j + 1].ngay_M1))
              swap(data[j].ngay_M1, data[j + 1].ngay_M1);
       }
    }
}

// Sắp xếp công dân theo ngay tiem mui 2
void DSCD::Sort_ngay_M2(bool (*func_ptr)(string, string))
{
    int i, j;
    for (i = 0; i < n-1; i++){         
       for (j = 0; j < n-i-1; j++){
           if ((*func_ptr)(data[j].ngay_M2, data[j + 1].ngay_M2))
              swap(data[j].ngay_M2, data[j + 1].ngay_M2);
       }
    }
}

// Chèn công dân vào vị trí bất kì mà vẫn giữ nguyên thứ tự
void DSCD::Insert_ma_CD(CongDan cd, bool (*func_ptr)(string, string))
{
    if (func_ptr(data[0].ma_CD, cd.ma_CD))
    {
        Them(cd, 1);
    }
    else if(!func_ptr(data[n].ma_CD, cd.ma_CD))
    {
        Them(cd, n + 1);
    }
    else
    {
        int index;
        for (int i = 0; i < n ; i++)
        {
            if (func_ptr(data[i].ma_CD, cd.ma_CD))
            {
                index = i;
                break;
            }
        }
        Them(cd, index + 2);
    }
}



