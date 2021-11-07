#include"DanhSachCongDan.h"
#include<string>
#include<iostream>
using namespace std;

int main(){
    string f1 = "DULIEUCONGDAN.csv";
    string f2 = "DANGKY.csv";
    string f3 = "VACCINATION.csv";
    DSCD a ;
    a.nhapFile(f1, f2, f3);
    return 0;
}