#ifndef CONGDAN_H
#define CONGDAN_H

#include<string>
#include<string.h>
#include<iostream>
using namespace std;

class CongDan
{   private:
        string ma_CD;
        string fullName;
        bool sex;
        string birth;
        string phone;
        string so_BHXH;
        string so_CMND;
        string address;
        string ngay_DK;
        string ma_DK;
        string noi_DK;
        bool mui1, mui2;
        string ngay_M1, ngay_M2;
    public:
        void set(string key, string value);
        void set(string key, bool value);
        friend istream &operator >> (istream&, CongDan&);
        friend ostream &operator << (ostream&, const CongDan&);
        CongDan();
        ~CongDan();
        // Hàm toán tử gán
        const CongDan& operator = (const CongDan&);
        //Hàm chuyển chuỗi(ngày) sang số nguyên
        int dayToInt(string);
        // Hàm chuyển mã công dân từ chuỗi sang số nguyên
        int maCDToInt(string);
        // Hàm lấy về mã CD
        string get_MaCD();
        string get(string key);
        friend class DSCD;
};
#endif