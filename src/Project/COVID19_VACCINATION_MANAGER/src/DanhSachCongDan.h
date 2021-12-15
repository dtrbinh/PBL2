#ifndef DSCD_H
#define DSCD_H

#include "CongDan.h"
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

bool ascending(int left, int right);

// kiểm tra giảm dần
bool descending(int left, int right);

// Hàm hoán vị
void swap(CongDan &x, CongDan &y);

// Hàm xác định giới tính nam
bool nam();

// hàm xác định giới tính nữ
bool nu();

class DSCD
{
private:
    int n;
    CongDan *data;

public:
    DSCD();
    DSCD(int n);
    DSCD(const DSCD &obj_clone);
    ~DSCD();

    // Hàm đọc file
    void nhapFile(string f1, string f2, string f3);
    string get(string type, int i);
    void set(string type, int i, string value);

    // Hàm nhập dữ liệu bằng tay
    void nhapTay(int n);

    void xuatDuLieu();

    // Thêm 1 công dân vào danh sách tại vị trí bất kì
    bool Them(CongDan, int);

    // Chèn công dân vào vị trí bất kì mà vẫn giữ nguyên thứ tự của mã công dân
    bool Insert_ma_CD(CongDan, bool (*func_ptr)(int, int) = ascending);

    // Hàm tìm kiếm công dân
    CongDan Search_MaCD(string tieuchi);

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

    int getRows()
    {
        return DSCD::n;
    }

    // Hmaf toán tử gán
    const DSCD &operator=(const DSCD &);

    // Hàm thống kê những người đã tiêm vắc xin mũi 1
    void thongke_M1(DSCD &out);

    // Hàm thống kê những người đã tiêm đủ 2 mũi
    void thongKe_2Mui(DSCD &out);

    // Hàm thống kê những người chưa tiêm mũi nào
    void thongKeChuaTiem(DSCD &out);

    // Hàm thống kê những người đã tiêm mũi 1 nhưng chưa tiêm mũi 2
    void thongKe_M1_Not_M2(DSCD &out);

    // Hàm thống kê những công dân đã tiêm mũi 1 trong ngày bất kì
    void thongKeTheoNgayTiemM1(DSCD &out, string);

    // Hàm thống kê những công dân đã tiêm mũi 2 trong ngày bất kì
    void thongKeTheoNgayTiemM2(DSCD &out, string);

    // Hàm thống kê công dân theo giới tính ( mặc định là nam), nếu muốn tke theo nữ thì dùng con trỏ hàm nu
    void thongKeTheoGioiTinh(DSCD &out, bool (*func_ptr)() = nam);

    // Hàm thống kê công dân theo ngày đăng kí bất kì
    void thongKeTheoNgayDangKi(DSCD &out, string ngayDK);

    friend class Form1;

    void luuFile(string path1, string path2, string path3);
};

#endif
