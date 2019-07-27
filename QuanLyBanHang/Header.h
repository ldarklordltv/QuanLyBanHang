//
//  Header.h
//  QuanLyBanHang
//
//  Created by Phuc Tran on 7/26/19.
//  Copyright © 2019 Phuc Tran. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <iostream>
#include <fstream>
#include <fstream>
#include <string>

using namespace std;
int NLineFile();
class SanPham
{
private:
    string MaSP;
    string TenSP;
    int GiaVon;
    int GiaLe;
    int GiaSi;
    int TonKho;
    string NhaCC;
public:
    //admin
    void NhapSP_Admin();
    void XemSP_Admin();
    //customer
    void XemSP_Customer();
    
    //employees
    void XemSP_Employees();
    
    //support
    bool CheckID(string ID);
    void LoadFile();
    void ThanhToan();
    
};

class KhachHang
{
private:
    int MaKH;
    string TenKH;
    string DiaChi;
    string SDT;
public:
    
};

class NhanVien
{
private:
    string User;
    string Password;
public:
    int SignIn();
};


void Menu();




#endif /* Header_h */

