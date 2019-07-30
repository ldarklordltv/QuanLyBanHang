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
#include <sstream>

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
    //employees
    void XemSP_Employees();
    void ChonSP_Employees();
    //customer
    void XemSP_Customer();
    void ChonSP_Customer();
    void MuaHang_Customer();
    
    bool CheckSP(string ID); //kiem tra ton tai san pham
    void InfoSP();
    //support
    int CheckID(string ID); //kiem tra ID nhap vao co ton tai ko
    void LoadFile();
    void ThanhToan();
    void logOut();
    void TruKho();//sau khi hoan tat mua san pham
    void UpdateTonKho();
    
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

