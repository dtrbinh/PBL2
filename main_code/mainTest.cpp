#include"DanhSachCongDan.cpp"
#include"CongDan.cpp"

#include<string.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    string f1 = "data/DULIEUCONGDAN.csv", f2="data/DANGKY.csv", f3="data/VACCINATION.csv";
    DSCD a;
    a.nhapFile(f1, f2, f3);
    a.xuatDuLieu();
    // DSCD b (a.thongKe_M1());
    // b.xuatDuLieu();
    cout << a.getRows();

    cout <<"\n";
    DSCD X;
    a.thongke_M1(X);
    X.xuatDuLieu();
    cout << X.getRows();

    return 0;
}