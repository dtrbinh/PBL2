#include"DanhSachCongDan.h"
#include<string>
#include<fstream>
#include<iostream>
using namespace std;


void DSCD::nhapFile(string f1, string f2, string f3){  
    
    cout<< "Hello World!";
    // DSCD *DS;
    // ifstream file1;
    // ifstream file2;
    // ifstream file3;
    // //Đếm số CD để cấp bộ nhớ
    // int k = 0;
    // while(file1.good() && file2.good() && file3.good()){
    //     k++;
    // }
    // this->n = k;
    // cout << "Tổng số công dân ĐK" << k;
    // k = 0;

    // file1.open(f1.c_str(), ios::in);
    // file2.open(f2.c_str(), ios::in);
    // file3.open(f3.c_str(), ios::in);
    // if(file1 && file2 && file3)
    // {
    //     //file1
    //     string ma_CD;
    //     string fullName;
    //     string sex;
    //     string birth;
    //     string phone;
    //     string so_BHXH;
    //     string so_CMND;
    //     string address;

    //     //file2
    //     string ma_DK;
    //     string ngay_DK;
    //     string noi_DK;
    //     string ID2;

    //     //file3
    //     string ID3;
    //     string mui1;
    //     string ngay_M1;
    //     string mui2;
    //     string ngay_M2;
    //     do
    //     {
    //         getline (file1, ma_CD, ',');    this->data[k].ma_CD = ma_CD;
    //         getline (file1, fullName, ','); this->data[k].fullName = fullName;
    //         getline (file1, sex, ',');      if(sex == "1")this->data[k].sex = true; else this->data[k].sex = false; //bool to string
    //         getline (file1, birth, ',');    this->data[k].birth = birth;
    //         getline (file1, phone, ',');    this->data[k].phone = phone;
    //         getline (file1, so_BHXH, ',');  this->data[k].so_BHXH = so_BHXH;
    //         getline (file1, so_CMND, ',');  this->data[k].so_CMND = so_CMND;
    //         getline (file1, address,'\n');  this->data[k].address = address;

    //         getline (file2, ma_DK, ',');    this->data[k].ma_DK = ma_DK;
    //         getline (file2, ID2, ',');      
    //         getline (file2, ngay_DK, ',');  this->data[k].ngay_DK = ngay_DK;
    //         getline (file2, noi_DK, '\n');  this->data[k].noi_DK = noi_DK;

    //         getline (file3, ID3, ',');
    //         getline (file3, mui1, ',');     if(mui1 == "True")this->data[k].mui1 = true; else if(mui1 == "False") this->data[k].mui1 = false; // bool to string
    //         getline (file3, ngay_M1, ',');  this->data[k].ngay_M1 = ngay_M1;
    //         getline (file3, mui2, ',');     if(mui2 == "True")this->data[k].mui2 = true; else if(mui2 == "False")this->data[k].mui2 = false; // bool to string
    //         getline (file3, ngay_M2, '\n'); this->data[k].ngay_M2 = ngay_M2;

    //         k++;
            

    //     }while(file1.good() && file2.good() && file3.good());
    //     cout << "Đã nhập file xong" << endl;
    // }else{
    //     //cout << "Không tìm thấy file" << endl;
    // }
    // file1.close();
    // file2.close();
    // file3.close();
}


