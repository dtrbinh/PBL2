#ifndef DSCD_H
#define DSCD_H

#include"CongDan.h"
#include<string>
#include<string.h>
#include<iostream>
using namespace std;

bool ascending(int left, int right);

// kiểm tra giảm dần
bool descending(int left, int right);

// Hàm hoán vị
void swap(CongDan &x, CongDan &y);

class DSCD
{   
    private:
        int n;
        CongDan *data = new CongDan[100];
    public:
        DSCD();
        ~DSCD();

        // Hàm đọc file
        void nhapFile(string f1, string f2,string f3);
        string get(string type, int i);
        // Hàm nhập dữ liệu bằng tay
        void nhapTay(int n);

        void xuatDuLieu();

        // Thêm 1 công dân vào danh sách tại vị trí bất kì
        bool Them(CongDan, int);
        
        // Chèn công dân vào vị trí bất kì mà vẫn giữ nguyên thứ tự của mã công dân
        bool Insert_ma_CD(CongDan, bool (*func_ptr)(int, int) = ascending);

        // Hàm tìm kiếm công dân
        CongDan Search(string tieuchi);
        
        // Sắp xếp công dân theo mã CD
        void Sort_ma_CD(bool (*func_ptr)(int, int) = ascending);
        
        // Sắp xếp công dân theo ngay DK
        void Sort_ngay_DK(bool (*func_ptr)(int, int) = ascending);
        
        // Sắp xếp công dân theo ngay tiem mui 1
        void Sort_ngay_M1(bool (*func_ptr)(int, int) = ascending);

        // Sắp xếp công dân theo ngay tiem mui 2
        void Sort_ngay_M2(bool (*func_ptr)(int, int) = ascending);

        // Hàm xóa công dân theo mã CD
        string Delete(string maCD);

        int getRows(){
            return DSCD::n;
        }

};

#endif
