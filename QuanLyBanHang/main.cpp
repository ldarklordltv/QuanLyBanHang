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
    int Loainhanvien=A.SignIn();
    Menu();
    while(1)
    {
        if (Loainhanvien==1)
        {
            cout<<"1.Xem SP"<<endl;
            cout<<"2.Nhap SP"<<endl;
            cout<<"3.Exit"<<endl;
            int i;
            cout<<"Your selection:";
            cin>>i;
            if (i==1)
                B.XemSP_Admin();
            else if (i==2)
                B.NhapSP_Admin();
            else if (i==3)
                exit(0);
        }
        else if (Loainhanvien==2)
        {
            cout<<"1. Xem SP"<<endl;
            int i;
            cout<<"Your selection:";
            cin>>i;
            if (i==1)
                B.XemSP_Customer();
        }
    }
    return 0;
}


