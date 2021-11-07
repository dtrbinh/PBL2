#ifndef CONGDAN_H
#define CONGDAN_H

#include <string>

#include <iostream>
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
        friend istream operator << (istream&, CongDan&);
        friend ostream operator >> (ostream&, const CongDan&);
        friend class DSCD;
};
#endif