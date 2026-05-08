/*
#include <iostream>//Bai 1
using namespace std;
class PhanSo
{
    private:
    int tu;
    int mau;
    public:
// Input: tu so va mau so
// Output: khong
// Chuc nang: nhap phan so
    void Nhap()
    {
        cout<< "nhap tu so " <<endl;
        cin>>tu;
        cout<<"nhap mau so " <<endl;
        cin>>mau;
    }
// Input: tu so va mau so
// Output: phan so da rut gon
// Chuc nang: rut gon phan so
    void RutGon()
    {
        int a = tu;
        int b = mau;

        while(b != 0)
        {
            int r = a % b;
            a = b;
            b = r;
        }

        tu = tu / a;
        mau = mau / a;
    }

// Input: phan so
// Output: hien thi phan so
// Chuc nang: xuat phan so
    void Xuat()
    {
        cout << "Phan so sau khi rut gon: ";
        cout << tu << "/" << mau << endl;
    }
};
int main ()
{
    PhanSo ps;
    ps.Nhap();
    ps.RutGon();
    ps.Xuat();
    return 0;
}
*/
/*
#include <iostream>//Bai 2
using namespace std;
class PhanSo
{
    private:
    int tu1,mau1,tu2,mau2;
    public:
// Input: tu mau 2 phan so
// Output: khong
// Chuc nang: nhap 2 phan so
    void Nhap()
    {
        cout<< "nhap tu so 1 " <<endl;
        cin>>tu1;
        cout<<"nhap mau so 1 " <<endl;
        cin>>mau1;
        cout<< "nhap tu so 2 " <<endl;
        cin>>tu2;
        cout<<"nhap mau so 2 " <<endl;
        cin>>mau2;
        if(mau1<0)
        {
            tu1 = -tu1;
        }
        if(mau2<0)
        {
            tu2 = -tu2;
        }
    }
// Input: tu mau 2 phan so
// Output: phan so lon hon
// Chuc nang: tim phan so lon hon
    void SoSanh()
    {
        
        int qd1=tu1*mau2;
        int qd2=tu2*mau1;
        if(qd1>qd2)
        {
            cout<< "phan so 1 lon hon: ";
            cout<< tu1 << "/" << mau1 <<endl;
        }
        else if(qd1==qd2)
        {
            cout<< "Hai phan so bang nhau va bang: ";
            cout<< tu1 << "/" << mau1 <<endl;
        }
        else
        {
            cout<< "phan so 2 lon hon: ";
            cout<< tu2 << "/" << mau2 <<endl;
        }
    }
};
int main ()
{
    PhanSo ps;
    ps.Nhap();
    ps.SoSanh();
    return 0;
}
*/
/*
#include <iostream>//Bai 3
using namespace std;
class PhanSo
{
    private:
    int tu1,mau1,tu2,mau2;
    public:
// Input: tu mau 2 phan so
// Output: khong
// Chuc nang: nhap 2 phan so
    void Nhap()
    {
        cout<< "nhap tu so 1 " <<endl;
        cin>>tu1;
        cout<<"nhap mau so 1 " <<endl;
        cin>>mau1;
        cout<< "nhap tu so 2 " <<endl;
        cin>>tu2;
        cout<<"nhap mau so 2 " <<endl;
        cin>>mau2;
        if(mau1<0)
        {
            tu1 = -tu1;
        }
        if(mau2<0)
        {
            tu2 = -tu2;
        }
    }
// Input: tu mau 2 phan so
// Output: tong hai phan so
// Chuc nang: tinh tong
    void Tong()
    {
        if(mau1==mau2)
        {
            cout <<"Tong hai phan so: ";
            cout<< tu1+tu2 << "/" << mau1 <<endl;
        }
        else
        {
            cout <<"Tong hai phan so: ";
            cout<< (tu1*mau2)+(tu2*mau1) << "/" << mau1*mau2 <<endl;
        }
    }
// Input: tu mau 2 phan so
// Output: hieu hai phan so
// Chuc nang: tinh hieu
    void Hieu()
    {
        if(mau1==mau2)
        {
            cout <<"Hieu hai phan so: ";
            cout<< tu1-tu2 << "/" << mau1 <<endl;
        }
        else
        {
            cout <<"Hieu hai phan so: ";
            cout<< (tu1*mau2)-(tu2*mau1) << "/" << mau1*mau2 <<endl;
        }
    }
// Input: tu mau 2 phan so
// Output: tich hai phan so
// Chuc nang: tinh tich
    void Tich()
    {
        cout <<"Tich hai phan so: ";
        cout<< tu1*tu2 <<"/" <<mau1 * mau2 <<endl;
    }
    // Input: tu mau 2 phan so
    // Output: thuong hai phan so
    // Chuc nang: tinh thuong
    void Thuong()
    {
        cout<<" Thuong hai phan so: ";
        cout << tu1*mau2 <<"/"<< tu2 * mau1 <<endl;
    }
};
int main ()
{
    PhanSo ps;
    ps.Nhap();
    ps.Tong();
    ps.Hieu();
    ps.Tich();
    ps.Thuong();
    return 0;
}
*//*
#include <iostream>//Bai 4
using namespace std;
class lich
{
    private:
    int d,m,y;
    public:
// Input: ngay thang nam
// Output: khong
// Chuc nang: nhap ngay thang nam
    void Nhap()
    {
        cout<<"Nhap ngay: ";
        cin>>d;
        cout<<"Nhap thang: ";
        cin>>m;
        cout<<"Nhap nam: ";
        cin>>y;
    }
// Input: ngay thang nam
// Output: ngay thang nam ke tiep
// Chuc nang: tim ngay tiep theo
    void NextDay()
    {
        if((y%4==0&&y%100!=0)||y%400==0)
        {
            if(m==2)
            {
                if(d<=28)
                {
                    d++;
                }
                else
                {
                    d=1;m++;
                }
            }
            else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)//thang 31d: 1 3 5 7 8 10 12
            {
                if(d<=30)
                {
                    d++;
                }
                else
                {
                    m++;
                    d=1;
                    if(m==13)
                    {
                        m=1;
                        y++;
                    }
                }
            }
            else
            {
                if(d<=29)
                {
                    d++;
                }
                else 
                {
                    d=1;
                    m++;
                }
            }
        }
        else
        {
            if(m==2)
            {
                if(d<=27)
                {
                    d++;
                }
                else
                {
                    d=1;m++;
                }
            }
            else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)//thang 31d: 1 3 5 7 8 10 12
            {
                if(d<=30)
                {
                    d++;
                }
                else
                {
                    m++;
                    d=1;
                    if(m==13)
                    {
                        m=1;
                        y++;
                    }
                }
            }
            else
            {
                if(d<=29)
                {
                    d++;
                }
                else 
                {
                    d=1;
                    m++;
                }
            }
        }
    }
// Input: ngay thang nam tiep theo
// Output: ngay thang nam tiep theo
// Chuc nang: xuat ngay tiep theo
    void Xuat()
    {
        cout<< "Ngay tiep theo la: ";
        cout<< d <<"/"<< m <<"/" << y<<endl;
    }
};
int main ()
{
    lich dmy;
    dmy.Nhap();
    dmy.NextDay();
    dmy.Xuat();
    return 0;
}
*/
#include <iostream>//Bai 5
using namespace std;
class DanhSach
{
    private:
        string name;
        float toan,van;
    public:
// Input: nhap ten, diem
// Output: khong co
// Chuc nang: nhap ten va diem
        void Nhap()
        {
            cout<<"Nhap ho ten: ";
            getline(cin,name);
            cout<<"Nhap diem toan: ";
            cin>>toan;
            cout<<"Nhap diem van: ";
            cin>>van;
        }
// Input: diem toan van
// Output: diem trung binh
// Chuc nang: tihh diem trung binh
        void DTB()
        {
            cout<<"Em "<<name;
            cout<<" co diem trung binh: ";
            cout<<(toan+van)/2<<endl;
        }
};
int main()
{
    DanhSach ds;
    ds.Nhap();
    ds.DTB();
    return 0;
}
