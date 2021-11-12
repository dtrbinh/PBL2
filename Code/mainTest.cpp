#include"DanhSachCongDan.cpp"
#include"CongDan.cpp"

#include<string.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    string f1 = "DULIEUCONGDAN.csv", f2="DANGKY.csv", f3="VACCINATION.csv";
    DSCD a ;
    a.nhapFile(f1, f2, f3);
    a.xuatDuLieu(a);
    cout << a.get(a, "ma_CD", 3);
    return 0;
}