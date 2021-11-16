#include "CongDan.h"
#include<iostream>
using namespace std;

//Hàm dựng mặc định
CongDan::CongDan(){
    ma_CD = "";

}

CongDan::~CongDan(){
    
}

istream &operator >> (istream &in, CongDan &CD)
{
    cout<<"Nhap vao ma cong dan: ";
    fflush(stdin);
    getline(in, CD.ma_CD);
    cout<<"Nhap vao ho ten: ";
    fflush(stdin);
    getline(in, CD.fullName);
    cout<<"Nhap vao gioi tinh: ";
    in>>CD.sex;
    cout<<"Nhap vao so dien thoai: ";
    fflush(stdin);
    getline(in, CD.phone);
    cout<<"Nhap vao so BHXH: ";
    fflush(stdin);
    getline(in, CD.so_BHXH);
    cout<<"Nhap vao so CMND: ";
    fflush(stdin);
    getline(in, CD.so_CMND);
    cout<<"Nhap vao dia chi: ";
    fflush(stdin);
    getline(in, CD.address);
    cout<<"Nhap vao ngay dang ki: ";
    fflush(stdin);
    getline(in, CD.ngay_DK);
    cout<<"Nhap vao ma dang ki: ";
    fflush(stdin);
    getline(in, CD.ma_DK);
    cout<<"Nhap vao noi dang ki: ";
    fflush(stdin);
    getline(in, CD.noi_DK);
    cout<<"Da tiem mui 1 chua: ";
    in>>CD.mui1;
    if(CD.mui1)
    {
        cout<<"Nhap ngay tiem mui 1: ";
        fflush(stdin);
        getline(in, CD.ngay_M1);
        cout<<"Da tiem mui 2 chua: ";
        in>>CD.mui2;
        if(CD.mui2)
        {
            cout<<"Nhap ngay tiem mui 2: ";
            fflush(stdin);
            getline(in, CD.ngay_M2);
        }
    }
    return in;
}
// Hàm toán tửu gán
const CongDan& CongDan :: operator = (const CongDan &CD) 
{
    if (this != &CD) {
        this->ma_CD = CD.ma_CD;
        this->fullName = CD.fullName;
        this->birth = CD.birth;
        this->sex = CD.sex;
        this->phone = CD.phone;
        this->so_BHXH = CD.so_BHXH;
        this->so_CMND = CD.so_CMND;
        this->address = CD.address;
        this->ngay_DK = CD.ngay_DK;
        this->ma_DK = CD.ma_DK;
        this->noi_DK = CD.noi_DK;
        this->mui1 = CD.mui1;
        this->mui2 = CD.mui2;
        this->ngay_M1 = CD.ngay_M1;
        this->ngay_M2 = CD.ngay_M2;
    }
    return *this;
}

//Hàm chuyển chuỗi(ngày) sang số nguyên
int CongDan::dayToInt(string s)
{
    if(s == "NULL")
    {
        return 0;
    }
    else 
    {
        string s1 = s.substr(0,2);
        string s2 = s.substr(3,2);
        string s3 = s.substr(6,4);
        string kq = s3 + s2 + s1;
        int x = stoi(kq);
        return x;
    }
}

// Hàm chuyển mã công dân từ chuỗi sang số nguyên
int CongDan::maCDToInt(string s)
{
    return stoi(ma_CD);
}

// Hàm lấy về mã CD
string CongDan::get_MaCD()
{
    return this->ma_CD;
}

string CongDan::get(string key){

    if (key == "ma_CD") return CongDan::ma_CD ;
    else if(key == "fullName")return CongDan::fullName ;
    else if(key == "birth") return CongDan::birth ;
    else if(key == "phone") return CongDan::phone ;
    else if(key == "so_BHXH") return CongDan::so_BHXH;
    else if(key == "so_CMND") return CongDan::so_CMND ;
    else if(key == "address") return CongDan::address ;
    else if(key == "ngay_DK") return CongDan::ngay_DK ;
    else if(key == "ma_DK") return CongDan::ma_DK ;
    else if(key == "noi_DK") return CongDan::noi_DK ;
    else if(key == "ngay_M1") return CongDan::ngay_M1 ;
    else if(key == "ngay_M2") return CongDan::ngay_M2 ;
    else if (key == "sex") {
        if (CongDan::sex == true) return "Nam";
            else return "Nu";
    }

    else if(key == "mui1") {
        if (CongDan::mui1 == true) return "Co";
            else return "Khong";
    }
    else if(key == "mui2") {
        if (CongDan::mui2 == true) return "Co";
            else return "Khong";
    }
    else return "null";
}

void CongDan::set(string key, string value){
    if (key == "ma_CD") CongDan::ma_CD = value;
    else if(key == "fullName") CongDan::fullName = value;
    else if(key == "birth") CongDan::birth = value;
    else if(key == "phone") CongDan::phone =value;
    else if(key == "so_BHXH") CongDan::so_BHXH = value;
    else if(key == "so_CMND") CongDan::so_CMND = value;
    else if(key == "address") CongDan::address = value;
    else if(key == "ngay_DK") CongDan::ngay_DK = value;
    else if(key == "ma_DK") CongDan::ma_DK = value;
    else if(key == "noi_DK") CongDan::noi_DK = value;
    else if(key == "ngay_M1")CongDan::ngay_M1 = value;
    else if(key == "ngay_M2") CongDan::ngay_M2 =value;
}

void CongDan::set(string key, bool value){
    if (key == "sex") CongDan::sex = value;
    else if(key == "mui1") CongDan::mui1 = value;
    else if(key == "mui2") CongDan::mui2 = value;
}