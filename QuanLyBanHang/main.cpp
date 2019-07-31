

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
                cout<<"3.Chon SP"<<endl;
                cout<<"4.Ban SP da chon"<<endl;
                cout<<"5.Log Out"<<endl;
                int i;
                cout<<"Your selection:";
                cin>>i;
                if (i==1)
                {
                    while(1)
                    {
                        B.XemSP_Admin();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==2)
                {
                    while(1)
                    {
                        B.NhapSP_Admin();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==3)
                {
                    while (1)
                    {
                        B.ChonSP_Employees();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==4)
                {
                    while (1)
                    {
                        B.ThanhToan_Employees();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==5)
                    break;
            }
        }
        //employees
        else if (Loainhanvien==2)
        {
            while(1)
            {
                cout<<"1.Xem SP"<<endl;
                cout<<"2.Chon SP"<<endl;
                cout<<"3.Ban SP da chon"<<endl;
                cout<<"4.Log Out"<<endl;
                int i;
                cout<<"Your selection:";
                cin>>i;
                if (i==1)
                {
                    while (1)
                    {
                        B.XemSP_Employees();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==2)
                {
                    while (1)
                    {
                        
                        B.ChonSP_Employees();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==3)
                {
                    while (1)
                    {
                        B.ThanhToan_Employees();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==4)
                    break;
            }
        }
        else if (Loainhanvien==3)
        {
            while(1)
            {
                cout<<"1.Xem SP"<<endl;
                cout<<"2.Chon mua SP"<<endl;
                cout<<"3.Mua SP da chon"<<endl;
                cout<<"4.Log Out"<<endl;
                int i;
                cout<<"Your selection:";
                cin>>i;
                if (i==1)
                {
                    while(1)
                    {
                        B.XemSP_Customer();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==2)
                {
                    while(1)
                    {
                        B.ChonSP_Customer();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==3)
                {
                    while (1)
                    {
                        B.MuaHang_Customer();
                        cout<<"Quay lai Y/N:";
                        string select;
                        cin>>select;
                        if (select=="Y"||select=="y")
                            break;
                    }
                }
                else if (i==4)
                    break;
            }
        }
        else if (Loainhanvien==4)
        {
//            system("cls");
            break;
        }
    }
    return 0;
}



