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
    cout<<"Password:";
    cin>>Password;
    if (i==1)
    {
        if(Password=="123456")
        {
            cout<<"Correct!"<<endl;
            return 1;
        }
        else
            cout<<"Password is uncorrect!"<<endl;
    }
    else if (i==2)
    {
        if (Password=="1")
        {
            cout<<"correct!"<<endl;
            return 2;
        }
        else
            cout<<"Password is uncorrect!"<<endl;
    }
    else if (i==3)
    {
        return 3;
    }
    else if (i==4)
        return 0;
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
        if (CheckID(MaSP))
        {
            fout<<MaSP<<"    ";
            break;
        }
        else
            cout<<"Ma SP da co!"<<endl;
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
    fout<<TonKho<<" ";
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
     for (int i=0;i<n;i++)
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
bool SanPham::CheckID(string ID)
{
    int n=NLineFile();
    for (int i=0;i<n;i++)
        if (ID==A[i].MaSP)
            return false;
    return true;
}

void Menu()
{
//    system("cls");
    cout<<"1.Admin"<<endl;
    cout<<"2.Customeres"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Your selection:";
}

