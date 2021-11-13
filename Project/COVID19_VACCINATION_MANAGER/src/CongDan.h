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
        const CongDan& operator = (const CongDan&);
        int dayToInt(string);
        int maCDToInt(string);
        friend class DSCD;
};
#endif