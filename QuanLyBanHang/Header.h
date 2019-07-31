

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
    //employees
    void XemSP_Employees();
    void ChonSP_Employees();
    //customer
    void XemSP_Customer();
    void ChonSP_Customer();
    void MuaHang_Customer();
    
    //support
    int CheckID(string ID);
    void LoadFile();
    void ThanhToan();
    void logOut();
    
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
	int SignOut();
};


void Menu();




#endif /* Header_h */

