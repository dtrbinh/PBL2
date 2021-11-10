#include"DSCD.cpp"
#include"CongDan.cpp"
#include "CongDan.h"
#include "DanhSachCongDan.h"
#include<string.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    string f1 = "DULIEUCONGDAN.csv", f2="DANGKY.csv", f3="VACCINATION.csv";
    DSCD a;
    a.nhapFile(f1, f2, f3);
    a.xuatDuLieu();

    cout<<endl<<"Sap xep theo ma cong dan: "<<endl;
    a.Sort_ngay_M1();
    
    a.xuatDuLieu();
    //cout << a.get(a, "ma_CD", 3);
    return 0;
}