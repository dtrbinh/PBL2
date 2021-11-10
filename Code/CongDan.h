#ifndef CONGDAN_H
#define CONGDAN_H
#include <iostream>
#include <string.h>
using namespace std;
#include "DanhSachCongDan.h"
class CongDan
{
    string ma_CD;
    string fullName;
    string birth;
    bool sex;
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
        friend istream &operator >> (istream&, CongDan&);
        friend ostream &operator << (ostream&, const CongDan&);

        CongDan();
        ~CongDan();
        friend class DSCD;
        const CongDan& operator = (const CongDan&);
};
#endif
