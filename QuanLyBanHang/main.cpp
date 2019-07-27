//
//  main.cpp
//  QuanLyBanHang
//
//  Created by Phuc Tran on 7/26/19.
//  Copyright © 2019 Phuc Tran. All rights reserved.
//

#include "Header.h"

int main()
{
    NhanVien A;
    SanPham B;
    B.LoadFile();
    while(1)
    {
        cout<<"1.Admin"<<endl;
        cout<<"2.Employees"<<endl;
        cout<<"3.Customer"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Your selection:";
        int Loainhanvien=A.SignIn();
        //admin
        if (Loainhanvien==1)
        {
            while(1)
            {
                cout<<"1.Xem SP"<<endl;
                cout<<"2.Nhap SP"<<endl;
                cout<<"3.Exit"<<endl;
                int i;
                cout<<"Your selection:";
                cin>>i;
                if (i==1)
                {
                    B.XemSP_Admin();
                    cout<<"Quay lai Y/N:";
                    string select;
                    cin>>select;
                    if (select=="N"||select=="n")
                        break;
                }
                else if (i==2)
                {
                    B.NhapSP_Admin();
                    cout<<"Quay lai Y/N:";
                    string select;
                    cin>>select;
                    if (select=="N"||select=="n")
                        break;
                }
                else if (i==3)
                    break;
            }
        }
        //employ
        else if (Loainhanvien==2)
        {
            while(1)
            {
                cout<<"1.Xem SP"<<endl;
                int i;
                cout<<"Your selection:";
                cin>>i;
                if (i==1)
                    B.XemSP_Employees();
                cout<<"Quay lai Y/N:";
                string select;
                cin>>select;
                if (select=="N"||select=="n")
                    break;
            }
        }
        else if (Loainhanvien==3)
        {
            while(1)
            {
                cout<<"1.Xem SP"<<endl;
                cout<<"2.Chon mua SP"<<endl;
                int i;
                cout<<"Your selection:";
                cin>>i;
                if (i==1)
                    B.XemSP_Customer();
                cout<<"Quay lai Y/N:";
                string select;
                cin>>select;
                if (select=="N"||select=="n")
                    break;
            }
        }
        else if (Loainhanvien==4)
            break;
        }
    return 0;
}


