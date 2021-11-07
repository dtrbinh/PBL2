#ifndef DSCD_H
#define DSCD_H
#include "CongDan.h"

class DSCD
{
    int n;
    CongDan *data = new CongDan[n];
    static int count;
    public:
        // Kết quả có được dữ liệu 3 file
        void nhapFile(string fileName1, string fileName2, string fileName3);

        // Kết quả có dữ liệu của danh sách
        void nhapTay(int n, CongDan CD);

        // return danh sách mới
        void Them(CongDan CD, int index);
        
        // Chèn vào vt bất kì => danh sách mới giữ nguyên thứ tự tăng/ giảm
        void Insert(CongDan CD);

        // Trả về danh sách (mã CD, tên)
        int Search();

        // Sắp xếp = > danh sách mới
        void Sort();

        // 

};
#endif