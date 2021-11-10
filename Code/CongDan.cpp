#include "CongDan.h"
#include <string.h>
#include <iostream>
using namespace std;

CongDan::CongDan(){

}

CongDan::~CongDan()
{
    
}

istream &operator >> (istream &in, CongDan &CD)
{
    cout<<"Nhap vao ma cong dan: ";
    in>>CD.ma_CD;
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
    if (CD.mui1)
    {
        cout<<"Da tiem mui 2 chua: ";
        in>>CD.mui2;
    }
    if(CD.mui1)
    {
        cout<<"Nhap ngay tiem mui 1: ";
        fflush(stdin);
        getline(in, CD.ngay_M1);
    }

    if(CD.mui2)
    {
        cout<<"Nhap ngay tiem mui 1: ";
        fflush(stdin);
        getline(in, CD.ngay_M2);
    }
    return in;
}

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