//
//  QuanLy.cpp
//  QuanLyBanHang
//
//  Created by Phuc Tran on 7/26/19.
//  Copyright © 2019 Phuc Tran. All rights reserved.
//

#include "Header.h"
SanPham A[200];

int NLineFile()
{
    int n=0;
    string line;
    ifstream fin("SanPham.txt");
    if(!fin.is_open())
        cout<<"Failed to open!";
    while(getline(fin,line))
        n++;
    return n;
}

int NLineFile(string Path)
{
    int n=0;
    string line;
    ifstream fin(Path);
    if(!fin.is_open())
        cout<<"Failed to open!";
    while(getline(fin,line))
        n++;
    return n;
}
void SanPham:: LoadFile()
{
    int i=0;
    ifstream fin("SanPham.txt");
    if(!fin.is_open())
        cout<<"Failed to open";
    while(!fin.eof())
    {
        fin>>A[i].MaSP;
        fin>>A[i].TenSP;
        fin>>A[i].GiaVon;
        fin>>A[i].GiaLe;
        fin>>A[i].GiaSi;
        fin>>A[i].TonKho;
        fin>>A[i].NhaCC;
        i++;
    }
}
int NhanVien::SignIn()
{
    
    int i;
    cin>>i;
    //admin
    if (i==1)
    {
        cout<<"Password:";
        cin>>Password;
        if(Password=="123456"||Password=="admin")
        {
            cout<<"Correct!"<<endl;
            return 1;
        }
        else
            cout<<"Password is uncorrect!"<<endl;
    }
    //employees
    else if (i==2)
    {
        cout<<"Password:";
        cin>>Password;
        if (Password=="1"||Password=="employees")
        {
            cout<<"correct!"<<endl;
            return 2;
        }
        else
            cout<<"Password is uncorrect!"<<endl;
    }
    //customer
    else if (i==3)
    {
        return 3;
    }
    //exit
    else if (i==4)
        return 4;
//    cout<<endl;
    return 0;
}


void SanPham::NhapSP_Admin()
{
    fstream fout("SanPham.txt",ios::app);
    if (fout.fail())
        std::cout << "Failed to open this file!" << std::endl;
    while (1)
    {
        cout<<"MaSP:";
        cin>>MaSP;
        if (CheckID(MaSP)==1)
        {
            fout<<MaSP<<"    ";
            break;
        }
        else if (CheckID(MaSP)==-1)
            cout<<"Ma SP da co!"<<endl;
        else if (CheckID(MaSP)==-2)
            cout<<"Ma SP phai co 4 ky tu!"<<endl;
    }
    fflush(stdin);
    cout<<"TenSP:";
    cin>>TenSP;
    fout<<TenSP<<" ";
    cout<<"Gia von:";
    cin>>GiaVon;
    fout<<GiaVon<<"   ";
    cout<<"Gia le:";
    cin>>GiaLe;
    fout<<GiaLe<<"   ";
    cout<<"Gia si:";
    cin>>GiaSi;
    fout<<GiaSi<<"   ";
    cout<<"Ton kho:";
    cin>>TonKho;
    fout<<TonKho<<"     ";
    cout<<"Nha cung cap:";
    cin>>NhaCC;
    fout<<NhaCC;
    fout<<endl;
    fout.close();
}

void SanPham::XemSP_Admin()
{
    ifstream f("SanPham.txt");
    if (!f.is_open())
        cout<<"Failed to open this file!"<<endl;
    string line;
    cout<<"MaSo    Ten     Giavon  Giale   Giasi  Soluong  NhaCungCap"<<endl;
    while(getline(f,line))
    {
        cout<<line<<endl;
    }
    f.close();
    /*int n=NLineFile();
    cout<<"MaSo    Ten     Giavon  Giale   Giasi Soluong"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<A[i].MaSP<<" ";
        cout<<A[i].TenSP<<" ";
        cout<<A[i].GiaVon<<" ";
        cout<<A[i].GiaLe<<" ";
        cout<<A[i].GiaSi<<" ";
        cout<<A[i].TonKho<<" ";
        cout<<endl;
    }*/
}

void SanPham::XemSP_Customer()
{
     int n=NLineFile();
//     cout<<"MaSo    Ten     Giavon  Giale   Giasi Soluong"<<endl;
     for (int i=0;i<n-1;i++)
     {
         cout<<A[i].MaSP<<" ";
         cout<<A[i].TenSP<<" ";
//         cout<<A[i].GiaVon<<" ";
         cout<<A[i].GiaLe<<" ";
//         cout<<A[i].GiaSi<<" ";
//         cout<<A[i].TonKho<<" ";
         cout<<endl;
     }
}

void SanPham::XemSP_Employees()
{
    int n=NLineFile();
    for (int i=0;i<n;i++)
    {
        cout<<A[i].MaSP<<" ";
        cout<<A[i].TenSP<<" ";
        cout<<A[i].GiaLe<<" ";
        cout<<A[i].GiaSi<<" ";
        cout<<A[i].TonKho<<" ";
        cout<<endl;
    }
}
int SanPham::CheckID(string ID)
{
    int n=NLineFile();
    for (int i=0;i<n;i++)
    {
        if (ID==A[i].MaSP)
            return -1;
        if (ID.length()!=4)
            return -2;
    }
    return 1;
}

void SanPham::ChonSP_Customer()
{
    
    cout<<"Vui long chon san pham can mua (MaSP Soluong):"<<endl;
    string SPmua;
    cin.ignore();
    getline(std::cin,SPmua);
    remove("DanhSachMua.txt");
    ofstream fout("DanhSachMua.txt");
    if(!fout.is_open())
        cout<<"Failed to open this file!";
    fout<<SPmua;
    fout.close();
}

void SanPham::MuaHang_Customer()
{
    cout<<"Danh sach SP ban da chon:";
    ifstream f("DanhSachMua.txt");
    if (!f.is_open())
        cout<<"Failed to open file DanhSachMua!"<<endl;
    string a[20],b[20];
    int z=0;
    while(!f.eof())
    {
        f>>a[z];
        f>>b[z];
        z++;
    }
    for (int i=0;i<z;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    f.close();
    InfoSP("DanhSachMua.txt");
    UpdateTonKho();
}

bool SanPham::CheckSP(string ID)
{
    for (int i=0;i<NLineFile();i++)
    {
        if (ID==A[i].MaSP)
            return true;
    }
    return false;
}

void SanPham::InfoSP(string Path)
{
    while(1)
    {
        ifstream f(Path);
        if(!f.is_open())
            cout<<"Failed to open this file!"<<endl;
        string a[20],b[20];
        int z=0;
        while(!f.eof())
        {
            f>>a[z];
            f>>b[z];
            z++;
        }
        int tt[z],s=0;
        for (int i=0;i<z;i++)
        {
            if (CheckSP(a[i])==false)
                cout<<"San pham "<<a[i]<<" khong ton tai!"<<endl;
            else
            {
                stringstream geek(b[i]);
                int x=0;
                geek >>x;
                tt[i]=A[i].GiaLe*x;
                s+=tt[i];
                cout<<A[i].MaSP<<" "<<A[i].TenSP<<" "<<A[i].GiaLe<<" "<<b[i]<<" "<<A[i].GiaLe*x <<endl;
            }
        }
        cout<<"Thanh toan (Y/N)?:";
        string select;
        cin>>select;
        if (select=="Y"||select=="y")
        {
            cout<<"Tong so tien can thanh toan la:"<<s<<endl;
            cout<<"Tiep tuc thanh toan (Y/N)?:";
            string select1;
            cin>>select1;
            if (select1=="Y"||select1=="y")
            {
                TruKho(Path);
                cout<<"Giao dich thanh cong!"<<endl;
                break;
            }
            else if (select1=="N"||select1=="n")
                break;
        }
        else if (select=="N"||select=="n")
            break;
    }
}

void SanPham::TruKho(string Path)
{
    ifstream f(Path);
    if (!f.is_open())
        cout<<"Failed to open this file!"<<endl;
    string a[20],b[20];
    int z=0;
    while(!f.eof())
    {
        f>>a[z];
        f>>b[z];
        z++;
    }
    for (int i=0;i<NLineFile()-1;i++)
        for (int j=0;j<z;j++)
        {
            if (A[i].MaSP==a[j])
            {
                stringstream geek(b[j]);
                int x=0;
                geek >>x;
                if (A[i].TonKho>=x)
                    A[i].TonKho=A[i].TonKho-x;
                else if (A[i].TonKho<x)
                {
                    cout<<"San pham "<<A[i].MaSP<<" "<<A[i].TenSP<<" trong kho chi con: "<<A[i].TonKho<<endl;
                }
            }
        }
    f.close();
}

void SanPham::UpdateTonKho()
{
    ofstream fout("SanPham2.txt");
    if (!fout.is_open())
        cout<<"Failed to open this file!"<<endl;
    for (int i=0;i<NLineFile()-1;i++)
    {
        fout<<A[i].MaSP<<" "<<A[i].TenSP<<" "<<A[i].GiaVon<<" "<<A[i].GiaLe<<" "<<A[i].GiaSi<<" "<<A[i].TonKho<<" "<<A[i].NhaCC<<endl;
    }
    fout.close();
}

void SanPham::ChonSP_Employees()
{
    
    cout<<"Chon san pham can ban (MaSP Soluong):"<<endl;
    string SPmua;
    cin.ignore();
    getline(std::cin,SPmua);
    remove("DanhSachBan.txt");
    ofstream fout("DanhSachBan.txt");
    if(!fout.is_open())
        cout<<"Failed to open this file!";
    fout<<SPmua;
    fout.close();
}

void SanPham::ThanhToan_Employees()
{
    cout<<"Danh sach SP ban da chon:";
    ifstream f("DanhSachBan.txt");
    if (!f.is_open())
        cout<<"Failed to open file DanhSachMua!"<<endl;
    string a[20],b[20];
    int z=0;
    while(!f.eof())
    {
        f>>a[z];
        f>>b[z];
        z++;
    }
    for (int i=0;i<z;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    f.close();
    InfoSP("DanhSachBan.txt");
    UpdateTonKho();
}

void Menu()
{
    cout<<"1.Admin"<<endl;
    cout<<"2.Customeres"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Your selection:";
}


