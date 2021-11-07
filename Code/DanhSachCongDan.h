#ifndef DSCD_H
#define DSCD_H
#include "CongDan.h"

class DSCD
{
    int n;
    CongDan *data = new CongDan[n];
    public:
        // Hàm đọc file
        void nhapFile(string fileName1, string fileName2, string fileName3);

        // Hàm nhập dữ liệu bằng tay
        void nhapTay(int n, CongDan CD[]);

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

        // Chèn công dân vào vị trí bất kì mà vẫn giữ nguyên thứ tự
        void Insert(CongDan CD[], CongDan cd, T tieuchi,  bool (*func_ptr)(T, T) = ascending);

        // Hàm tìm kiếm công dân
        template <typename T>
        CongDan Search(CongDan CD[], T tieuchi);
        
        // Sắp xếp
        template <typename T>
        void Sort(CongDan CD[], int n, T tieuchi, bool (*func_ptr)(T, T) = ascending);
        // 
        void Delete();

};
#endif
template <typename T>
void swap(int &num1, int &num2);
