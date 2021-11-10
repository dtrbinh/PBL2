#ifndef DSCD_H
#define DSCD_H
#include "CongDan.h"
#include<string>
#include<string.h>
#include<iostream>
using namespace std;

// kiểm tra tăng dần
bool ascending(string left, string right);

// kiểm tra giảm dần
bool descending(string left, string right);

// Hàm hoán vị
void swap(string &x, string &y);

class DSCD
{
    int n;
    CongDan *data = new CongDan[100];
    public:
        DSCD();
        ~DSCD();

        // Hàm đọc file
        void nhapFile(string f1, string f2,string f3);
        string get(DSCD x, string type, int i);

        // Hàm nhập dữ liệu bằng tay
        void nhapTay(int n, CongDan data[]);

        void xuatDuLieu();

        // Thêm 1 công dân vào danh sách tại vị trí bất kì
        void Them(CongDan, int);

        // Chèn công dân vào vị trí bất kì mà vẫn giữ nguyên thứ tự của mã công dân
        void Insert_ma_CD(CongDan, bool (*func_ptr)(string, string) = ascending);

        // Hàm tìm kiếm công dân
        CongDan Search(string tieuchi);
        
        // Sắp xếp công dân theo mã CD
        void Sort_ma_CD(bool (*func_ptr)(string, string) = ascending);
        
        // Sắp xếp công dân theo ngay DK
        void Sort_ngay_DK(bool (*func_ptr)(string, string) = ascending);
        
        // Sắp xếp công dân theo ngay tiem mui 1
        void Sort_ngay_M1(bool (*func_ptr)(string, string) = ascending);

        // Sắp xếp công dân theo ngay tiem mui 2
        void Sort_ngay_M2(bool (*func_ptr)(string, string) = ascending);

        void Delete();
        
        int getRows(){
            return DSCD::n;
        }
};

#endif