#ifndef DSCD_H
#define DSCD_H

#include"CongDan.h"
#include<string>
#include<string.h>
#include<iostream>
using namespace std;

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
        void nhapTay(int n, CongDan CD[]);

        void xuatDuLieu(DSCD a);

        // Thêm 1 công dân vào danh sách tại vị trí bất kì
        void Them(CongDan CD[], CongDan cd, int index);
        
        // kiểm tra tăng dần
        template <typename T>
        bool ascending(T left, T right)
        {
            return left > right;
        }

        // kiểm tra giảm dần
        template <typename T>
        bool descending(T left, T right)
        {
            return left < right;
        }
        // template <typename T>
        // // Chèn công dân vào vị trí bất kì mà vẫn giữ nguyên thứ tự
        // void Insert(CongDan CD[], CongDan cd, T tieuchi,  bool (*func_ptr)(T, T) = ascending);

        // Hàm tìm kiếm công dân
        template <typename T>
        CongDan Search(CongDan CD[], T tieuchi);
        
        // Sắp xếp
        // template <typename T>
        // void Sort(CongDan CD[], int n, T tieuchi, bool (*func_ptr)(T, T) = ascending);
        // 
        void Delete();

        int getRows(){
            return DSCD::n;
        }

};
template <typename T>
void swap(int &num1, int &num2);



#endif
